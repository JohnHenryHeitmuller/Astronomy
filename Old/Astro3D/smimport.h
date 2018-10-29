// smimport.h : main header file for the SMIMPORT application
//

#if !defined(AFX_SMIMPORT_H__2D059AA8_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
#define AFX_SMIMPORT_H__2D059AA8_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSmimportApp:
// See smimport.cpp for the implementation of this class
//

class CSmimportApp : public CWinApp
{
public:
	CSmimportApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSmimportApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSmimportApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SMIMPORT_H__2D059AA8_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
