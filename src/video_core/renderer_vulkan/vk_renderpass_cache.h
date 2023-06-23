// Copyright 2023 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <mutex>
#include <tsl/robin_map.h>

#include "common/hash.h"
#include "video_core/renderer_vulkan/vk_common.h"

namespace VideoCore {
enum class PixelFormat : u32;
}

namespace Vulkan {

class Instance;
class Scheduler;
class Surface;

struct FramebufferInfo {
    vk::ImageView color;
    vk::ImageView depth;
    u32 width = 1;
    u32 height = 1;

    bool operator==(const FramebufferInfo& other) const noexcept {
        return std::tie(color, depth, width, height) ==
               std::tie(other.color, other.depth, other.width, other.height);
    }

    struct Hash {
        const u64 operator()(const FramebufferInfo& info) const {
            return Common::ComputeHash64(&info, sizeof(FramebufferInfo));
        }
    };
};
static_assert(std::has_unique_object_representations_v<FramebufferInfo>,
              "FramebufferInfo is not hashable");

class Framebuffer;

class RenderpassCache {
    static constexpr size_t MAX_COLOR_FORMATS = 5;
    static constexpr size_t MAX_DEPTH_FORMATS = 4;

public:
    explicit RenderpassCache(const Instance& instance, Scheduler& scheduler);
    ~RenderpassCache();

    /// Destroys cached framebuffers
    void ClearFramebuffers();

    /// Begins a new renderpass only when no other renderpass is currently active
    void BeginRendering(const Framebuffer& framebuffer, bool do_clear = false,
                        vk::ClearValue clear = {});

    /// Exits from any currently active renderpass instance
    void EndRendering();

    /// Returns the renderpass associated with the color-depth format pair
    vk::RenderPass GetRenderpass(VideoCore::PixelFormat color, VideoCore::PixelFormat depth,
                                 bool is_clear);

private:
    /// Creates a renderpass configured appropriately and stores it in cached_renderpasses
    vk::UniqueRenderPass CreateRenderPass(vk::Format color, vk::Format depth,
                                          vk::AttachmentLoadOp load_op) const;

    /// Creates a new Vulkan framebuffer object
    vk::UniqueFramebuffer CreateFramebuffer(const FramebufferInfo& info, vk::RenderPass renderpass);

private:
    const Instance& instance;
    Scheduler& scheduler;
    vk::UniqueRenderPass cached_renderpasses[MAX_COLOR_FORMATS + 1][MAX_DEPTH_FORMATS + 1][2];
    tsl::robin_map<FramebufferInfo, vk::UniqueFramebuffer, FramebufferInfo::Hash> framebuffers;
    std::mutex cache_mutex;

    struct State {
        std::array<vk::ImageView, 2> views;
        vk::Rect2D render_area;
        vk::ClearValue clear;
        bool do_clear;
        bool rendering;
    };

    State state{};
};

} // namespace Vulkan
