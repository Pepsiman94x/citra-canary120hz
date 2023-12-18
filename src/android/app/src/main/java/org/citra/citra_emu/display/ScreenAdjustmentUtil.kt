// Copyright 2023 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

package org.citra.citra_emu.display

import android.view.WindowManager
import org.citra.citra_emu.NativeLibrary
import org.citra.citra_emu.utils.EmulationMenuSettings

class ScreenAdjustmentUtil(private val windowManager: WindowManager) {

    fun swapScreen() {
        val isEnabled = !EmulationMenuSettings.swapScreens
        EmulationMenuSettings.swapScreens = isEnabled
        NativeLibrary.swapScreens(
                isEnabled,
                windowManager.defaultDisplay.rotation
        )
    }

    fun cycleLayouts() {
        val nextLayout = (EmulationMenuSettings.landscapeScreenLayout +1) % ScreenLayout.entries.size
        changeScreenOrientation(ScreenLayout.from(nextLayout))
    }

    fun changeScreenOrientation(layoutOption: ScreenLayout) {
        EmulationMenuSettings.landscapeScreenLayout = layoutOption.int
        NativeLibrary.notifyOrientationChange(
                EmulationMenuSettings.landscapeScreenLayout,
                windowManager.defaultDisplay.rotation
        )
    }
}
