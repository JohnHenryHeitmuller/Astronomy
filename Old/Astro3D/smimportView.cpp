// smimportView.cpp : implementation of the CSmimportView class
//

#include "stdafx.h"
#include "smimport.h"

#include "smimportDoc.h"
#include "smimportView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSmimportView

IMPLEMENT_DYNCREATE(CSmimportView, CView)

BEGIN_MESSAGE_MAP(CSmimportView, CView)
	//{{AFX_MSG_MAP(CSmimportView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSmimportView construction/destruction

CSmimportView::CSmimportView()
{
	// TODO: add construction code here

}

CSmimportView::~CSmimportView()
{
}

BOOL CSmimportView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSmimportView drawing

void CSmimportView::OnDraw(CDC* pDC)
{
	CSmimportDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSmimportView diagnostics

#ifdef _DEBUG
void CSmimportView::AssertValid() const
{
	CView::AssertValid();
}

void CSmimportView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSmimportDoc* CSmimportView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSmimportDoc)));
	return (CSmimportDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSmimportView message handlers
