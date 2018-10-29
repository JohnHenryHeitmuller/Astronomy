// starmap.h : main header file for the STARMAP application
//
/*	Conventions:

	Class Names,			CSM...(class name)
		Member functions,	Start upper, word break with caps
		Member variables,	m_...(var name), word break w/

	typedefs,				TSM...(type name)
	local variables,		(var name), word break w/ caps

*/

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "MapData.h"

/////////////////////////////////////////////////////////////////////////////
// CStarmapApp:
// See starmap.cpp for the implementation of this class
//

class CStarmapApp : public CWinApp
{
public:
	CStarmapApp();
	~CStarmapApp();
	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStarmapApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStarmapApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	CStatusBar*			m_pStatusBar;
	CMapDataEntryTable* m_pDataTable;
};


/////////////////////////////////////////////////////////////////////////////
