// starmapDoc.cpp : implementation of the CStarmapDoc class
//

#include "stdafx.h"
#include "starmap.h"

#include "starmapDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStarmapDoc

IMPLEMENT_DYNCREATE(CStarmapDoc, CDocument)

BEGIN_MESSAGE_MAP(CStarmapDoc, CDocument)
	//{{AFX_MSG_MAP(CStarmapDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStarmapDoc construction/destruction

CStarmapDoc::CStarmapDoc()
{
	// TODO: add one-time construction code here

}

CStarmapDoc::~CStarmapDoc()
{
}

BOOL CStarmapDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CStarmapDoc serialization

void CStarmapDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CStarmapDoc diagnostics

#ifdef _DEBUG
void CStarmapDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStarmapDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStarmapDoc commands
