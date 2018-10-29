// A3DTools.h : main header file for the A3DTOOLS DLL
//

#if !defined(AFX_A3DTOOLS_H__EC98A4B5_BB8E_11D1_8311_000000000000__INCLUDED_)
#define AFX_A3DTOOLS_H__EC98A4B5_BB8E_11D1_8311_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CA3DToolsApp
// See A3DTools.cpp for the implementation of this class
//

class CA3DToolsApp : public CWinApp
{
public:
	CA3DToolsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CA3DToolsApp)
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CA3DToolsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_A3DTOOLS_H__EC98A4B5_BB8E_11D1_8311_000000000000__INCLUDED_)
