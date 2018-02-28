/*
 * Rufus: The Reliable USB Formatting Utility
 * UI element lists
 * Copyright © 2018 Pete Batard <pete@akeo.ie>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <windows.h>
#include "resource.h"

#pragma once

static int image_option_move_ids[] = {
	IDS_PARTITION_TYPE_TXT,
	IDC_PARTITION_TYPE,
	IDS_TARGET_SYSTEM_TXT,
	IDC_TARGET_SYSTEM,
	IDS_CSM_HELP_TXT,
	IDC_ADVANCED_DEVICE_TOOLBAR,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDC_DISK_ID,
	IDS_FORMAT_OPTIONS_TXT,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDS_FILESYSTEM_TXT,
	IDC_FILESYSTEM,
	IDS_CLUSTERSIZE_TXT,
	IDC_CLUSTERSIZE,
	IDC_ADVANCED_FORMAT_TOOLBAR,
	IDC_QUICKFORMAT,
	IDC_BADBLOCKS,
	IDC_NBPASSES,
	IDC_EXTENDED_LABEL,
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int image_option_toggle_ids[] = {
	IDS_IMAGE_OPTION_TXT,
	IDC_IMAGE_OPTION,
};

static int advanced_device_move_ids[] = {
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDS_FORMAT_OPTIONS_TXT,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDS_FILESYSTEM_TXT,
	IDC_FILESYSTEM,
	IDS_CLUSTERSIZE_TXT,
	IDC_CLUSTERSIZE,
	IDC_ADVANCED_FORMAT_TOOLBAR,
	IDC_QUICKFORMAT,
	IDC_BADBLOCKS,
	IDC_NBPASSES,
	IDC_EXTENDED_LABEL,
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int advanced_device_toggle_ids[] = {
	IDC_SAVE,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_RUFUS_MBR,
	IDC_DISK_ID,
};

static int advanced_format_move_ids[] = {
	IDS_STATUS_TXT,
	IDC_PROGRESS,
	IDC_ABOUT,
	IDC_LOG,
	IDC_MULTI_TOOLBAR,
	IDC_TEST,
	IDC_START,
	IDCANCEL,
	IDC_STATUS,
	IDC_STATUS_TOOLBAR,
};

static int advanced_format_toggle_ids[] = {
	IDC_QUICKFORMAT,
	IDC_BADBLOCKS,
	IDC_NBPASSES,
	IDC_EXTENDED_LABEL,
};

static int dd_image_toggle_ids[] = {
	IDC_QUICKFORMAT,
	IDC_PARTITION_TYPE,
	IDC_TARGET_SYSTEM,
	IDC_IMAGE_OPTION,
	IDC_FILESYSTEM,
	IDC_CLUSTERSIZE,
	IDC_LABEL,
	IDC_QUICKFORMAT,
	IDC_EXTENDED_LABEL,
};

static int main_button_ids[] = {
	IDC_SELECT,
	IDC_START,
	IDCANCEL,
};

static int full_width_controls[] = {
	IDS_DEVICE_TXT,
	IDS_BOOT_TYPE_TXT,
	IDS_IMAGE_OPTION_TXT,
	IDC_IMAGE_OPTION,
	IDS_LABEL_TXT,
	IDC_LABEL,
	IDC_ADVANCED_DRIVE_PROPERTIES,
	IDC_LIST_USB_HDD,
	IDC_OLD_BIOS_FIXES,
	IDC_ADVANCED_FORMAT_OPTIONS,
	IDC_QUICKFORMAT,
	IDC_EXTENDED_LABEL,
	IDC_PROGRESS,
};

static int half_width_ids[] = {
	IDC_BADBLOCKS,
	IDC_RUFUS_MBR,
	IDS_PARTITION_TYPE_TXT,
	IDC_PARTITION_TYPE,
	IDC_FILESYSTEM,
	IDS_TARGET_SYSTEM_TXT,
	IDC_TARGET_SYSTEM,
	IDC_DISK_ID,
	IDS_CLUSTERSIZE_TXT,
	IDC_CLUSTERSIZE,
	IDC_NBPASSES,
};
