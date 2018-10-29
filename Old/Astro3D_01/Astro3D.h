// Astro3D.h : main header file for the ASTRO3D application
//

#if !defined(AFX_ASTRO3D_H__DF8724B5_BD36_11D1_8312_000000000000__INCLUDED_)
#define AFX_ASTRO3D_H__DF8724B5_BD36_11D1_8312_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "A3DTools.h"

/////////////////////////////////////////////////////////////////////////////
// CAstro3DApp:
// See Astro3D.cpp for the implementation of this class
//

class CAstro3DApp : public CWinApp
{
public:
	CAstro3DApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAstro3DApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAstro3DApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASTRO3D_H__DF8724B5_BD36_11D1_8312_000000000000__INCLUDED_)
