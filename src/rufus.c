// Microsoft Visual C++ generated resource script.
//
#include "resource.h"

#define APSTUDIO_READONLY_SYMBOLS
/////////////////////////////////////////////////////////////////////////////
//
// Generated from the TEXTINCLUDE 2 resource.
//
#ifndef _USING_V110_SDK71_
#define _USING_V110_SDK71_
#endif
#include <windows.h>
#ifndef IDC_STATIC
#define IDC_STATIC -1
#endif

/////////////////////////////////////////////////////////////////////////////
#undef APSTUDIO_READONLY_SYMBOLS

/////////////////////////////////////////////////////////////////////////////
// Neutral resources

#if !defined(AFX_RESOURCE_DLL) || defined(AFX_TARG_NEU)
LANGUAGE LANG_NEUTRAL, SUBLANG_NEUTRAL
#pragma code_page(1252)

/////////////////////////////////////////////////////////////////////////////
//
// Dialog
//

IDD_DIALOG DIALOGEX 12, 12, 232, 326
STYLE DS_SETFONT | DS_MODALFRAME | DS_CENTER | WS_MINIMIZEBOX | WS_POPUP | WS_CAPTION | WS_SYSMENU
EXSTYLE WS_EX_ACCEPTFILES
CAPTION "Rufus 3.22.2009"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "Drive Properties",IDS_DRIVE_PROPERTIES_TXT,8,6,53,12,NOT WS_GROUP
    LTEXT           "Device",IDS_DEVICE_TXT,8,21,216,8
    COMBOBOX        IDC_DEVICE,8,30,196,10,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    PUSHBUTTON      "...",IDC_SAVE,210,30,14,12,BS_FLAT | NOT WS_VISIBLE
    LTEXT           "Boot selection",IDS_BOOT_SELECTION_TXT,8,43,216,8
    COMBOBOX        IDC_BOOT_SELECTION,8,52,148,10,CBS_DROPDOWNLIST | CBS_AUTOHSCROLL | WS_VSCROLL | WS_HSCROLL | WS_TABSTOP
    PUSHBUTTON      "#",IDC_HASH,162,52,10,12,BS_FLAT | NOT WS_VISIBLE
    CONTROL         "SELECT",IDC_SELECT,"Button", WS_TABSTOP,180,52,45,10
    LTEXT           "Image option",IDS_IMAGE_OPTION_TXT,8,65,216,8
    COMBOBOX        IDC_IMAGE_OPTION,8,74,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    CONTROL         "",IDC_PERSISTENCE_SLIDER,"msctls_trackbar32",TBS_BOTH | TBS_NOTICKS | WS_TABSTOP,125,76,34,8
    EDITTEXT        IDC_PERSISTENCE_SIZE,160,74,36,12,ES_AUTOHSCROLL | ES_NUMBER
    COMBOBOX        IDC_PERSISTENCE_UNITS,200,74,24,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Partition scheme",IDS_PARTITION_TYPE_TXT,8,87,96,8
    COMBOBOX        IDC_PARTITION_TYPE,8,96,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Target system",IDS_TARGET_SYSTEM_TXT,128,87,96,8
    COMBOBOX        IDC_TARGET_SYSTEM,128,96,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "?",IDS_CSM_HELP_TXT,226,97,8,15,SS_NOTIFY | NOT WS_VISIBLE
    CONTROL         "Show advanced drive properties",IDC_ADVANCED_DRIVE_PROPERTIES,
                    "Button",BS_AUTOCHECKBOX | NOT WS_VISIBLE | WS_TABSTOP,8,109,216,10
    CONTROL         "List USB Hard Drives",IDC_LIST_USB_HDD,"Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,119,216,10
    CONTROL         "Add fixes for old BIOSes (extra partition, align, etc.)",IDC_OLD_BIOS_FIXES,
                    "Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,129,216,10
    CONTROL         "Use Rufus MBR with BIOS ID",IDC_RUFUS_MBR,"Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,139,110,10
    COMBOBOX        IDC_DISK_ID,128,139,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Format Options",IDS_FORMAT_OPTIONS_TXT,8,152,57,12,NOT WS_GROUP
    LTEXT           "Volume label",IDS_LABEL_TXT,8,167,216,8
    EDITTEXT        IDC_LABEL,8,176,216,12,ES_AUTOHSCROLL
    LTEXT           "File system",IDS_FILE_SYSTEM_TXT,8,189,96,8
    COMBOBOX        IDC_FILE_SYSTEM,8,198,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Cluster size",IDS_CLUSTER_SIZE_TXT,128,189,96,8
    COMBOBOX        IDC_CLUSTER_SIZE,128,198,96,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    CONTROL         "Show advanced format options",IDC_ADVANCED_FORMAT_OPTIONS,
                    "Button",BS_AUTOCHECKBOX | NOT WS_VISIBLE | WS_TABSTOP,8,211,216,10
    CONTROL         "Quick format",IDC_QUICK_FORMAT,"Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,221,216,10
    CONTROL         "Create extended label and icon files",IDC_EXTENDED_LABEL,
                    "Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,231,216,10
    CONTROL         "Check device for bad blocks",IDC_BAD_BLOCKS,"Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,241,112,10
    COMBOBOX        IDC_NB_PASSES,128,241,96,10,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Status",IDS_STATUS_TXT,8,254,23,9,NOT WS_GROUP
    CONTROL         "",IDC_PROGRESS,"msctls_progress32",PBS_SMOOTH | WS_BORDER,8,273,216,9
    PUSHBUTTON      "Multi Toolbar",IDC_ABOUT,8,294,74,10,NOT WS_VISIBLE
    PUSHBUTTON      "T",IDC_TEST,90,294,12,10,NOT WS_VISIBLE
    DEFPUSHBUTTON   "START",IDC_START,124,294,45,10
    PUSHBUTTON      "CLOSE",IDCANCEL,178,294,45,10
    LTEXT           "Rufus version",IDS_VERSION_TXT,8,307,216,8
    LTEXT           "© 2014 - 2016 Pete Batard",IDS_COPYRIGHT_TXT,8,316,216,8
    LTEXT           "https://rufus.akeo.ie",IDS_URL_TXT,8,325,216,8
END

IDD_ABOUTBOX DIALOGEX 0, 0, 319, 237
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "About Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    ICON            IDI_ICON,IDC_ABOUT_ICON,11,8,20,20
    CONTROL         "",IDC_ABOUT_BLURB,"RichEdit20W",0x884,45,7,268,107
    CONTROL         "",IDC_ABOUT_COPYRIGHTS,"RichEdit20W",WS_VSCROLL | WS_TABSTOP | 0x804,46,115,267,91,WS_EX_STATICEDGE
    PUSHBUTTON      "License",IDC_ABOUT_LICENSE,46,216,50,12,WS_GROUP
    DEFPUSHBUTTON   "OK",IDOK,253,216,50,12,WS_GROUP
END

IDD_CHECKSUM DIALOGEX 0, 0, 301, 110
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Checksums"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "MD5:",IDC_STATIC,9,10,18,8
    EDITTEXT        IDC_MD5,40,9,197,12,ES_AUTOHSCROLL | ES_READONLY
    LTEXT           "SHA1:",IDC_STATIC,9,26,20,8
    EDITTEXT        IDC_SHA1,40,25,197,12,ES_AUTOHSCROLL | ES_READONLY
    LTEXT           "SHA256:",IDC_STATIC,9,42,27,8
    EDITTEXT        IDC_SHA256,40,41,197,22,ES_MULTILINE | ES_READONLY
    DEFPUSHBUTTON   "OK",IDOK,243,86,50,12,WS_GROUP
    LTEXT           "SHA512:",IDC_STATIC,9,69,27,8
    EDITTEXT        IDC_SHA512,40,67,197,35,ES_MULTILINE | ES_READONLY    
END

IDD_LICENSE DIALOGEX 0, 0, 335, 213
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Rufus License"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    DEFPUSHBUTTON   "Close",IDCANCEL,278,192,50,12
    EDITTEXT        IDC_LICENSE_TEXT,7,7,321,176,ES_MULTILINE | ES_READONLY | WS_VSCROLL
END

IDD_LOG DIALOGEX 0, 0, 366, 326
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Log"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    EDITTEXT        IDC_LOG_EDIT,0,0,366,296,ES_MULTILINE | ES_READONLY | NOT WS_BORDER | WS_VSCROLL,WS_EX_CLIENTEDGE
    PUSHBUTTON      "Clear",IDC_LOG_CLEAR,192,305,50,12
    PUSHBUTTON      "Save",IDC_LOG_SAVE,249,305,50,12
    DEFPUSHBUTTON   "Close",IDCANCEL,306,305,50,12
END

IDD_NOTIFICATION DIALOGEX 0, 0, 263, 73
STYLE DS_SETFONT | DS_NOFAILCREATE | DS_CENTER | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_THICKFRAME
CAPTION "Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "",IDC_NOTIFICATION_LINE,0,0,263,35
    LTEXT           "",IDC_STATIC,0,0,263,34
    ICON            OCR_UP,IDC_NOTIFICATION_ICON,6,6,20,20
    LTEXT           "Message",IDC_NOTIFICATION_TEXT,35,6,219,20
    DEFPUSHBUTTON   "No",IDNO,205,53,50,14
    PUSHBUTTON      "More information",IDC_MORE_INFO,8,53,76,14,NOT WS_VISIBLE
    PUSHBUTTON      "Yes",IDYES,148,53,50,14,NOT WS_VISIBLE
    CONTROL         "Do not show this message again",IDC_DONT_DISPLAY_AGAIN,
                    "Button",BS_AUTOCHECKBOX | WS_TABSTOP,8,39,248,10,WS_EX_TRANSPARENT
END

IDD_SELECTION DIALOGEX 0, 0, 312, 71
STYLE DS_SETFONT | DS_FIXEDSYS | DS_NOFAILCREATE | DS_CENTER | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_THICKFRAME
CAPTION "Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "",IDC_SELECTION_LINE,0,0,312,47
    LTEXT           "",IDC_STATIC,0,0,312,46
    ICON            IDI_ICON,IDC_SELECTION_ICON,6,6,20,20,0,WS_EX_TRANSPARENT
    LTEXT           "Message",IDC_SELECTION_TEXT,35,5,269,8
    DEFPUSHBUTTON   "OK",IDOK,196,53,50,12
    PUSHBUTTON      "Cancel",IDCANCEL,254,53,50,12
    CONTROL         "Choice 1",IDC_SELECTION_CHOICE1,"Button",BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP,35,18,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 2",IDC_SELECTION_CHOICE2,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,31,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 3",IDC_SELECTION_CHOICE3,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,44,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 4",IDC_SELECTION_CHOICE4,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,57,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 5",IDC_SELECTION_CHOICE5,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,70,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 6",IDC_SELECTION_CHOICE6,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,83,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 7",IDC_SELECTION_CHOICE7,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,96,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 8",IDC_SELECTION_CHOICE8,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,109,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 9",IDC_SELECTION_CHOICE9,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,122,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 10",IDC_SELECTION_CHOICE10,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,135,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 11",IDC_SELECTION_CHOICE11,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,148,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 12",IDC_SELECTION_CHOICE12,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,161,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 13",IDC_SELECTION_CHOICE13,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,174,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 14",IDC_SELECTION_CHOICE14,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,187,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 15",IDC_SELECTION_CHOICE15,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,200,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 16",IDC_SELECTION_CHOICEMAX,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,213,269,10,WS_EX_TRANSPARENT
    EDITTEXT        IDC_SELECTION_USERNAME,197,57,0,9,ES_AUTOHSCROLL | NOT WS_VISIBLE | WS_TABSTOP | WS_BORDER
END

//add a lot of new functions to the dialog
IDD_SELECTION DIALOGEX 0, 0, 312, 71
STYLE DS_SETFONT | DS_FIXEDSYS | DS_NOFAILCREATE | DS_CENTER | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_THICKFRAME
CAPTION "Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "",IDC_SELECTION_LINE,0,0,312,47
    LTEXT           "",IDC_STATIC,0,0,312,46
    ICON            IDI_ICON,IDC_SELECTION_ICON,6,6,20,20,0,WS_EX_TRANSPARENT
    LTEXT           "Message",IDC_SELECTION_TEXT,35,5,269,8
    DEFPUSHBUTTON   "OK",IDOK,196,53,50,12
    PUSHBUTTON      "Cancel",IDCANCEL,254,53,50,12
    CONTROL         "Choice 1",IDC_SELECTION_CHOICE1,"Button",BS_AUTORADIOBUTTON | WS_GROUP | WS_TABSTOP,35,18,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 2",IDC_SELECTION_CHOICE2,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,31,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 3",IDC_SELECTION_CHOICE3,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,44,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 4",IDC_SELECTION_CHOICE4,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,57,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 5",IDC_SELECTION_CHOICE5,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,70,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 6",IDC_SELECTION_CHOICE6,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,83,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 7",IDC_SELECTION_CHOICE7,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,96,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 8",IDC_SELECTION_CHOICE8,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,109,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 9",IDC_SELECTION_CHOICE9,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE |
WS_TABSTOP,35,122,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 10",IDC_SELECTION_CHOICE10,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,135,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 11",IDC_SELECTION_CHOICE11,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,148,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 12",IDC_SELECTION_CHOICE12,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,161,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 13",IDC_SELECTION_CHOICE13,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,174,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 14",IDC_SELECTION_CHOICE14,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,187,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 15",IDC_SELECTION_CHOICE15,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,200,269,10,WS_EX_TRANSPARENT
    CONTROL         "Choice 16",IDC_SELECTION_CHOICEMAX,"Button",BS_AUTORADIOBUTTON | NOT WS_VISIBLE | WS_TABSTOP,35,213,269,10,WS_EX_TRANSPARENT
    EDITTEXT        IDC_SELECTION_USERNAME,197,57,0,9,ES_AUTOHSCROLL | NOT WS_VISIBLE | WS_TABSTOP | WS_BORDER
END


IDD_LIST DIALOGEX 0, 0, 312, 59
STYLE DS_SETFONT | DS_FIXEDSYS | DS_NOFAILCREATE | DS_CENTER | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_THICKFRAME
CAPTION "Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    LTEXT           "",IDC_LIST_LINE,0,0,312,32
    LTEXT           "",IDC_STATIC,0,0,312,31
    ICON            IDI_ICON,IDC_LIST_ICON,6,6,20,20,0,WS_EX_TRANSPARENT
    LTEXT           "Message",IDC_LIST_TEXT,35,5,269,8
    PUSHBUTTON      "OK",IDOK,254,40,50,12
    LTEXT           "List 1",IDC_LIST_ITEM1,35,17,269,10,SS_PATHELLIPSIS
    LTEXT           "List 2",IDC_LIST_ITEM2,35,28,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 3",IDC_LIST_ITEM3,35,39,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 4",IDC_LIST_ITEM4,35,50,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 5",IDC_LIST_ITEM5,35,61,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 6",IDC_LIST_ITEM6,35,72,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 7",IDC_LIST_ITEM7,35,73,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 8",IDC_LIST_ITEM8,35,84,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 9",IDC_LIST_ITEM9,35,95,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 10",IDC_LIST_ITEM10,35,106,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 11",IDC_LIST_ITEM11,35,117,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 12",IDC_LIST_ITEM12,35,128,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 13",IDC_LIST_ITEM13,35,139,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 14",IDC_LIST_ITEM14,35,150,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 15",IDC_LIST_ITEM15,35,161,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
    LTEXT           "List 16",IDC_LIST_ITEMMAX,35,172,269,10,SS_PATHELLIPSIS | NOT WS_VISIBLE
END

IDD_UPDATE_POLICY DIALOGEX 0, 0, 287, 198
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Update policy and settings"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    ICON            IDI_ICON,IDC_ABOUT_ICON,11,8,20,20
    CONTROL         "",IDC_POLICY,"RichEdit20W",WS_VSCROLL | WS_TABSTOP | 0x804,46,8,235,132,WS_EX_STATICEDGE
    GROUPBOX        "Settings",IDS_UPDATE_SETTINGS_GRP,45,145,165,46
    LTEXT           "Check for updates",IDS_UPDATE_FREQUENCY_TXT,51,158,80,10
    COMBOBOX        IDC_UPDATE_FREQUENCY,133,158,66,12,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    LTEXT           "Include beta versions",IDS_INCLUDE_BETAS_TXT,51,173,80,10
    COMBOBOX        IDC_INCLUDE_BETAS,133,173,66,30,CBS_DROPDOWNLIST | WS_VSCROLL | WS_TABSTOP
    GROUPBOX        "",IDS_CHECK_NOW_GRP,210,145,71,46
    PUSHBUTTON      "Check Now",IDC_CHECK_NOW,221,158,50,11
    DEFPUSHBUTTON   "Close",IDCANCEL,221,173,50,11,WS_GROUP
END

IDD_NEW_VERSION DIALOGEX 0, 0, 384, 268
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "Check For Updates - Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    PUSHBUTTON      "Close",IDCANCEL,167,245,50,12,WS_GROUP
    CONTROL         "",IDC_RELEASE_NOTES,"RichEdit20W",WS_VSCROLL | 0x804,15,77,352,88,WS_EX_STATICEDGE
    GROUPBOX        "Release Notes",IDS_NEW_VERSION_NOTES_GRP,8,63,367,111
    LTEXT           "A newer version is available. Please download the latest version!",IDS_NEW_VERSION_AVAIL_TXT,10,32,366,8
    LTEXT           "[...]",IDC_YOUR_VERSION,10,8,366,8
    LTEXT           "[...]",IDC_LATEST_VERSION,10,19,366,8
    CTEXT           "Click here to go to the website",IDC_WEBSITE,10,49,366,9,SS_NOTIFY
    GROUPBOX        "Download",IDS_NEW_VERSION_DOWNLOAD_GRP,8,177,367,58
    EDITTEXT        IDC_DOWNLOAD_URL,15,191,351,11,ES_AUTOHSCROLL | ES_READONLY
    CONTROL         "",IDC_PROGRESS,"msctls_progress32",WS_BORDER,15,212,270,11
    DEFPUSHBUTTON   "Download",IDC_DOWNLOAD,293,212,74,11,WS_GROUP
END

IDD_ABOUT DIALOGEX 0, 0, 287, 198
STYLE DS_SETFONT | DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU
CAPTION "About Rufus"
FONT 9, "Segoe UI Symbol", 400, 0, 0x0
BEGIN
    ICON            IDI_ICON,IDC_ABOUT_ICON,11,8,20,20
    LTEXT           "Rufus",IDC_ABOUT_TITLE,46,8,235,10
    LTEXT           "Version: [...]",IDC_ABOUT_VERSION,46,19,235,10
    LTEXT           "Syslinux Version: [...]",IDC_ABOUT_SYSLINUX_VERSION,46,30,235,10
    LTEXT           "Windows Version: [...]",IDC_ABOUT_WINDOWS_VERSION,46,41,235,10
    LTEXT           "Locale ID: [...]",IDC_ABOUT_LOCALE_ID,46,52,235,10
    LTEXT           "License: GPLv3",IDC_ABOUT_LICENSE,46,63,235,10
    LTEXT           "Homepage: http://rufus.akeo.ie",IDC_ABOUT_HOMEPAGE,46,74,235,10
    LTEXT           "Source Code:



#ifdef APSTUDIO_INVOKED
/////////////////////////////////////////////////////////////////////////////
//
// TEXTINCLUDE
//

1 TEXTINCLUDE 
BEGIN
    "resource.h\0"
END

2 TEXTINCLUDE 
BEGIN
    "#ifndef _USING_V110_SDK71_\r\n"
    "#define _USING_V110_SDK71_\r\n"
    "#endif\r\n"
    "#include <windows.h>\r\n"
    "#ifndef IDC_STATIC\r\n"
    "#define IDC_STATIC -1\r\n"
    "#endif\r\n"
    "\0"
END

3 TEXTINCLUDE 
BEGIN
    "\r\n"
    "IDR_LC_RUFUS_LOC        RCDATA                  ""../res/loc/embedded.loc""\r\n"
    "IDR_SL_LDLINUX_V4_BSS   RCDATA                  ""../res/syslinux/ldlinux_v4.bss""\r\n"
    "IDR_SL_LDLINUX_V4_SYS   RCDATA                  ""../res/syslinux/ldlinux_v4.sys""\r\n"
    "IDR_SL_LDLINUX_V6_BSS   RCDATA                  ""../res/syslinux/ldlinux_v6.bss""\r\n"
    "IDR_SL_LDLINUX_V6_SYS   RCDATA                  ""../res/syslinux/ldlinux_v6.sys""\r\n"
    "IDR_SL_MBOOT_C32        RCDATA                  ""../res/syslinux/mboot.c32""\r\n"
    "IDR_GR_GRUB_GRLDR_MBR   RCDATA                  ""../res/grub/grldr.mbr""\r\n"
    "IDR_GR_GRUB2_CORE_IMG   RCDATA                  ""../res/grub2/core.img""\r\n"
    "IDR_SBR_MSG             RCDATA                  ""../res/mbr/msg.txt""\r\n"
    "IDR_FD_COMMAND_COM      RCDATA                  ""../res/freedos/COMMAND.COM""\r\n"
    "IDR_FD_KERNEL_SYS       RCDATA                  ""../res/freedos/KERNEL.SYS""\r\n"
    "IDR_FD_DISPLAY_EXE      RCDATA                  ""../res/freedos/DISPLAY.EXE""\r\n"
    "IDR_FD_KEYB_EXE         RCDATA                  ""../res/freedos/KEYB.EXE""\r\n"
    "IDR_FD_MODE_COM         RCDATA                  ""../res/freedos/MODE.COM""\r\n"
    "IDR_FD_KB1_SYS          RCDATA                  ""../res/freedos/KEYBOARD.SYS""\r\n"
    "IDR_FD_KB2_SYS          RCDATA                  ""../res/freedos/KEYBRD2.SYS""\r\n"
    "IDR_FD_KB3_SYS          RCDATA                  ""../res/freedos/KEYBRD3.SYS""\r\n"
    "IDR_FD_KB4_SYS          RCDATA                  ""../res/freedos/KEYBRD4.SYS""\r\n"
    "IDR_FD_EGA1_CPX         RCDATA                  ""../res/freedos/EGA.CPX""\r\n"
    "IDR_FD_EGA2_CPX         RCDATA                  ""../res/freedos/EGA2.CPX""\r\n"
    "IDR_FD_EGA3_CPX         RCDATA                  ""../res/freedos/EGA3.CPX""\r\n"
    "IDR_FD_EGA4_CPX         RCDATA                  ""../res/freedos/EGA4.CPX""\r\n"
    "IDR_FD_EGA5_CPX         RCDATA                  ""../res/freedos/EGA5.CPX""\r\n"
    "IDR_FD_EGA6_CPX         RCDATA                  ""../res/freedos/EGA6.CPX""\r\n"
    "IDR_FD_EGA7_CPX         RCDATA                  ""../res/freedos/EGA7.CPX""\r\n"
    "IDR_FD_EGA8_CPX         RCDATA                  ""../res/freedos/EGA8.CPX""\r\n"
    "IDR_FD_EGA9_CPX         RCDATA                  ""../res/freedos/EGA9.CPX""\r\n"
    "IDR_FD_EGA10_CPX        RCDATA                  ""../res/freedos/EGA10.CPX""\r\n"
    "IDR_FD_EGA11_CPX        RCDATA                  ""../res/freedos/EGA11.CPX""\r\n"
    "IDR_FD_EGA12_CPX        RCDATA                  ""../res/freedos/EGA12.CPX""\r\n"
    "IDR_FD_EGA13_CPX        RCDATA                  ""../res/freedos/EGA13.CPX""\r\n"
    "IDR_FD_EGA14_CPX        RCDATA                  ""../res/freedos/EGA14.CPX""\r\n"
    "IDR_FD_EGA15_CPX        RCDATA                  ""../res/freedos/EGA15.CPX""\r\n"
    "IDR_FD_EGA16_CPX        RCDATA                  ""../res/freedos/EGA16.CPX""\r\n"
    "IDR_FD_EGA17_CPX        RCDATA                  ""../res/freedos/EGA17.CPX""\r\n"
    "IDR_FD_EGA18_CPX        RCDATA                  ""../res/freedos/EGA18.CPX""\r\n"
    "IDR_XT_HOGGER           RCDATA                  ""../res/hogger/hogger.exe""\r\n"
    "IDR_UEFI_NTFS           RCDATA                  ""../res/uefi/uefi-ntfs.img""\r\n"
    "IDI_LANG_16             RCDATA                  ""../res/icons/lang-16.png""\r\n"
    "IDI_INFO_16             RCDATA                  ""../res/icons/info-16.png""\r\n"
    "IDI_SETTINGS_16         RCDATA                  ""../res/icons/settings-16.png""\r\n"
    "IDI_LOG_16              RCDATA                  ""../res/icons/log-16.png""\r\n"
    "IDI_SAVE_16             RCDATA                  ""../res/icons/save-16.png""\r\n"
    "IDI_HASH_16             RCDATA                  ""../res/icons/hash-16.png""\r\n"
    "IDI_LANG_24             RCDATA                  ""../res/icons/lang-24.png""\r\n"
    "IDI_INFO_24             RCDATA                  ""../res/icons/info-24.png""\r\n"
    "IDI_SETTINGS_24         RCDATA                  ""../res/icons/settings-24.png""\r\n"
    "IDI_LOG_24              RCDATA                  ""../res/icons/log-24.png""\r\n"
    "IDI_SAVE_24             RCDATA                  ""../res/icons/save-24.png""\r\n"
    "IDI_HASH_24             RCDATA                  ""../res/icons/hash-24.png""\r\n"
    "IDI_LANG_32             RCDATA                  ""../res/icons/lang-32.png""\r\n"
    "IDI_INFO_32             RCDATA                  ""../res/icons/info-32.png""\r\n"
    "IDI_SETTINGS_32         RCDATA                  ""../res/icons/settings-32.png""\r\n"
    "IDI_LOG_32              RCDATA                  ""../res/icons/log-32.png""\r\n"
    "IDI_SAVE_32             RCDATA                  ""../res/icons/save-32.png""\r\n"
    "IDI_HASH_32             RCDATA                  ""../res/icons/hash-32.png""\r\n"
    "IDI_LANG_48             RCDATA                  ""../res/icons/lang-48.png""\r\n"
    "IDI_INFO_48             RCDATA                  ""../res/icons/info-48.png""\r\n"
    "IDI_SETTINGS_48         RCDATA                  ""../res/icons/settings-48.png""\r\n"
    "IDI_LOG_48              RCDATA                  ""../res/icons/log-48.png""\r\n"
    "IDI_SAVE_48             RCDATA                  ""../res/icons/save-48.png""\r\n"
    "\r\n"
    "// Must reference a manifest for visual styles and elevation\r\n"
    "// Oh, and it must happen at the end, or MinGW will ignore it!\r\n"
    "#if defined(__GNUC__)\r\n"
    "CREATEPROCESS_MANIFEST_RESOURCE_ID RT_MANIFEST ""rufus.manifest""\r\n"
    "#endif\r\n"
    "\0"
END

#endif    // APSTUDIO_INVOKED


/////////////////////////////////////////////////////////////////////////////
//
// DESIGNINFO
//

#ifdef APSTUDIO_INVOKED
GUIDELINES DESIGNINFO
BEGIN
    IDD_DIALOG, DIALOG
    BEGIN
    END

    IDD_ABOUTBOX, DIALOG
    BEGIN
    END

    IDD_CHECKSUM, DIALOG
    BEGIN
    END

    IDD_LICENSE, DIALOG
    BEGIN
    END

    IDD_LOG, DIALOG
    BEGIN
    END

    IDD_NOTIFICATION, DIALOG
    BEGIN
    END

    IDD_SELECTION, DIALOG
    BEGIN
    END

    IDD_LIST, DIALOG
    BEGIN
    END

    IDD_UPDATE_POLICY, DIALOG
    BEGIN
    END

    IDD_NEW_VERSION, DIALOG
    BEGIN
    END
END
#endif    // APSTUDIO_INVOKED


/////////////////////////////////////////////////////////////////////////////
//
// Version
//

VS_VERSION_INFO VERSIONINFO
 FILEVERSION 3,22,2009,0
 PRODUCTVERSION 3,22,2009,0
 FILEFLAGSMASK 0x3fL
#ifdef _DEBUG
 FILEFLAGS 0x1L
#else
 FILEFLAGS 0x0L
#endif
 FILEOS 0x40004L
 FILETYPE 0x1L
 FILESUBTYPE 0x0L
BEGIN
    BLOCK "StringFileInfo"
    BEGIN
        BLOCK "000004b0"
        BEGIN
            VALUE "Comments", "https://rufus.ie"
            VALUE "CompanyName", "Akeo Consulting"
            VALUE "FileDescription", "Rufus"
            VALUE "FileVersion", "3.22.2009"
            VALUE "InternalName", "Rufus"
            VALUE "LegalCopyright", "© 2011-2023 Pete Batard (GPL v3)"
            VALUE "LegalTrademarks", "https://www.gnu.org/licenses/gpl-3.0.html"
            VALUE "OriginalFilename", "rufus-3.22.exe"
            VALUE "ProductName", "Rufus"
            VALUE "ProductVersion", "3.22.2009"
        END
    END
    BLOCK "VarFileInfo"
    BEGIN
        VALUE "Translation", 0x0, 1200
    END
END


/////////////////////////////////////////////////////////////////////////////
//
// Icon
//

// Icon with lowest ID value placed first to ensure application icon
// remains consistent on all systems.
IDI_ICON                ICON                    "../res/rufus.ico"

#endif    // Neutral resources
/////////////////////////////////////////////////////////////////////////////



#ifndef APSTUDIO_INVOKED
/////////////////////////////////////////////////////////////////////////////
//
// Generated from the TEXTINCLUDE 3 resource.
//

IDR_LC_RUFUS_LOC        RCDATA                  "../res/loc/embedded.loc"
IDR_SL_LDLINUX_V4_BSS   RCDATA                  "../res/syslinux/ldlinux_v4.bss"
IDR_SL_LDLINUX_V4_SYS   RCDATA                  "../res/syslinux/ldlinux_v4.sys"
IDR_SL_LDLINUX_V6_BSS   RCDATA                  "../res/syslinux/ldlinux_v6.bss"
IDR_SL_LDLINUX_V6_SYS   RCDATA                  "../res/syslinux/ldlinux_v6.sys"
IDR_SL_MBOOT_C32        RCDATA                  "../res/syslinux/mboot.c32"
IDR_GR_GRUB_GRLDR_MBR   RCDATA                  "../res/grub/grldr.mbr"
IDR_GR_GRUB2_CORE_IMG   RCDATA                  "../res/grub2/core.img"
IDR_SBR_MSG             RCDATA                  "../res/mbr/msg.txt"
IDR_FD_COMMAND_COM      RCDATA                  "../res/freedos/COMMAND.COM"
IDR_FD_KERNEL_SYS       RCDATA                  "../res/freedos/KERNEL.SYS"
IDR_FD_DISPLAY_EXE      RCDATA                  "../res/freedos/DISPLAY.EXE"
IDR_FD_KEYB_EXE         RCDATA                  "../res/freedos/KEYB.EXE"
IDR_FD_MODE_COM         RCDATA                  "../res/freedos/MODE.COM"
IDR_FD_KB1_SYS          RCDATA                  "../res/freedos/KEYBOARD.SYS"
IDR_FD_KB2_SYS          RCDATA                  "../res/freedos/KEYBRD2.SYS"
IDR_FD_KB3_SYS          RCDATA                  "../res/freedos/KEYBRD3.SYS"
IDR_FD_KB4_SYS          RCDATA                  "../res/freedos/KEYBRD4.SYS"
IDR_FD_EGA1_CPX         RCDATA                  "../res/freedos/EGA.CPX"
IDR_FD_EGA2_CPX         RCDATA                  "../res/freedos/EGA2.CPX"
IDR_FD_EGA3_CPX         RCDATA                  "../res/freedos/EGA3.CPX"
IDR_FD_EGA4_CPX         RCDATA                  "../res/freedos/EGA4.CPX"
IDR_FD_EGA5_CPX         RCDATA                  "../res/freedos/EGA5.CPX"
IDR_FD_EGA6_CPX         RCDATA                  "../res/freedos/EGA6.CPX"
IDR_FD_EGA7_CPX         RCDATA                  "../res/freedos/EGA7.CPX"
IDR_FD_EGA8_CPX         RCDATA                  "../res/freedos/EGA8.CPX"
IDR_FD_EGA9_CPX         RCDATA                  "../res/freedos/EGA9.CPX"
IDR_FD_EGA10_CPX        RCDATA                  "../res/freedos/EGA10.CPX"
IDR_FD_EGA11_CPX        RCDATA                  "../res/freedos/EGA11.CPX"
IDR_FD_EGA12_CPX        RCDATA                  "../res/freedos/EGA12.CPX"
IDR_FD_EGA13_CPX        RCDATA                  "../res/freedos/EGA13.CPX"
IDR_FD_EGA14_CPX        RCDATA                  "../res/freedos/EGA14.CPX"
IDR_FD_EGA15_CPX        RCDATA                  "../res/freedos/EGA15.CPX"
IDR_FD_EGA16_CPX        RCDATA                  "../res/freedos/EGA16.CPX"
IDR_FD_EGA17_CPX        RCDATA                  "../res/freedos/EGA17.CPX"
IDR_FD_EGA18_CPX        RCDATA                  "../res/freedos/EGA18.CPX"
IDR_XT_HOGGER           RCDATA                  "../res/hogger/hogger.exe"
IDR_UEFI_NTFS           RCDATA                  "../res/uefi/uefi-ntfs.img"
IDI_LANG_16             RCDATA                  "../res/icons/lang-16.png"
IDI_INFO_16             RCDATA                  "../res/icons/info-16.png"
IDI_SETTINGS_16         RCDATA                  "../res/icons/settings-16.png"
IDI_LOG_16              RCDATA                  "../res/icons/log-16.png"
IDI_SAVE_16             RCDATA                  "../res/icons/save-16.png"
IDI_HASH_16             RCDATA                  "../res/icons/hash-16.png"
IDI_LANG_24             RCDATA                  "../res/icons/lang-24.png"
IDI_INFO_24             RCDATA                  "../res/icons/info-24.png"
IDI_SETTINGS_24         RCDATA                  "../res/icons/settings-24.png"
IDI_LOG_24              RCDATA                  "../res/icons/log-24.png"
IDI_SAVE_24             RCDATA                  "../res/icons/save-24.png"
IDI_HASH_24             RCDATA                  "../res/icons/hash-24.png"
IDI_LANG_32             RCDATA                  "../res/icons/lang-32.png"
IDI_INFO_32             RCDATA                  "../res/icons/info-32.png"
IDI_SETTINGS_32         RCDATA                  "../res/icons/settings-32.png"
IDI_LOG_32              RCDATA                  "../res/icons/log-32.png"
IDI_SAVE_32             RCDATA                  "../res/icons/save-32.png"
IDI_HASH_32             RCDATA                  "../res/icons/hash-32.png"

// Must reference a manifest for visual styles and elevation
// Oh, and it must happen at the end, or MinGW will ignore it!
#if defined(__GNUC__)
CREATEPROCESS_MANIFEST_RESOURCE_ID RT_MANIFEST "rufus.manifest"
#endif

/////////////////////////////////////////////////////////////////////////////
#endif    // not APSTUDIO_INVOKED

