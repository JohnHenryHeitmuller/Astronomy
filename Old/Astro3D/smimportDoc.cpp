// smimportDoc.cpp : implementation of the CSmimportDoc class
//

#include "stdafx.h"
#include "smimport.h"

#include "smimportDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSmimportDoc

IMPLEMENT_DYNCREATE(CSmimportDoc, CDocument)

BEGIN_MESSAGE_MAP(CSmimportDoc, CDocument)
	//{{AFX_MSG_MAP(CSmimportDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSmimportDoc construction/destruction

CSmimportDoc::CSmimportDoc()
{
	// TODO: add one-time construction code here

}

CSmimportDoc::~CSmimportDoc()
{
}

BOOL CSmimportDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSmimportDoc serialization

void CSmimportDoc::Serialize(CArchive& ar)
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
// CSmimportDoc diagnostics

#ifdef _DEBUG
void CSmimportDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSmimportDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSmimportDoc commands
