// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__2C2EF8C3_43CD_47D2_A979_EC36873E602D__INCLUDED_)
#define AFX_STDAFX_H__2C2EF8C3_43CD_47D2_A979_EC36873E602D__INCLUDED_

//#ifndef WINVER              // Allow use of features specific to Windows XP or later.
//#define WINVER 0x0600       // Change this to the appropriate value to target other versions of Windows.
//#endif
// 
//#ifndef _WIN32_WINNT        // Allow use of features specific to Windows XP or later.                  
//#define _WIN32_WINNT 0x0600 // Change this to the appropriate value to target other versions of Windows.
//#endif
//
//#ifndef _WIN32_WINDOWS        // Allow use of features specific to Windows XP or later.                  
//#define _WIN32_WINDOWS 0x0600 // Change this to the appropriate value to target other versions of Windows.
//#endif     
//
//#ifndef _WIN32_IE        // Allow use of features specific to Windows XP or later.                  
//#define _WIN32_IE 0x0700 // Change this to the appropriate value to target other versions of Windows.
//#endif     

//#define WINVER         0x0400
//#define _WIN32_WINNT   0x0400
//#define _WIN32_WINDOWS 0x0400
//#define _WIN32_IE      0x0400


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
//#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#define WM_TRAY_NOTIFY WM_APP+1000
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__2C2EF8C3_43CD_47D2_A979_EC36873E602D__INCLUDED_)
