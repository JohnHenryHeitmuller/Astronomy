// A3DDoc.cpp : implementation of the CAstro3DDoc class
//

#include "stdafx.h"
#include "Astro3D.h"

#include "A3DDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAstro3DDoc

IMPLEMENT_DYNCREATE(CAstro3DDoc, CDocument)

BEGIN_MESSAGE_MAP(CAstro3DDoc, CDocument)
	//{{AFX_MSG_MAP(CAstro3DDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAstro3DDoc construction/destruction

CAstro3DDoc::CAstro3DDoc()
{
	// TODO: add one-time construction code here

}

CAstro3DDoc::~CAstro3DDoc()
{
}

BOOL CAstro3DDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CAstro3DDoc serialization

void CAstro3DDoc::Serialize(CArchive& ar)
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
// CAstro3DDoc diagnostics

#ifdef _DEBUG
void CAstro3DDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAstro3DDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAstro3DDoc commands
