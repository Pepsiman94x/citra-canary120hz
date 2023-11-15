// Copyright 2023 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

package org.citra.citra_emu.features.settings.model.view

import org.citra.citra_emu.features.settings.model.AbstractIntSetting

class SingleChoiceSetting(
    setting: AbstractIntSetting?,
    titleId: Int,
    descriptionId: Int,
    val choicesId: Int,
    val valuesId: Int,
    val key: String? = null,
    val defaultValue: Int? = null
) : SettingsItem(setting, titleId, descriptionId) {
    override val type = TYPE_SINGLE_CHOICE

    val selectedValue: Int
        get() = if (setting != null) {
            val setting = setting as AbstractIntSetting
            setting.int
        } else {
            defaultValue!!
        }

    /**
     * Write a value to the backing int. If that int was previously null,
     * initializes a new one and returns it, so it can be added to the Hashmap.
     *
     * @param selection New value of the int.
     * @return the existing setting with the new value applied.
     */
    fun setSelectedValue(selection: Int): AbstractIntSetting {
        val intSetting = setting as AbstractIntSetting
        intSetting.int = selection
        return intSetting
    }
}
