// starmapView.cpp : implementation of the CStarmapView class
//

#include "stdafx.h"
#include "starmap.h"

#include "starmapDoc.h"
#include "starmapView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStarmapView

IMPLEMENT_DYNCREATE(CStarmapView, CView)

BEGIN_MESSAGE_MAP(CStarmapView, CView)
	//{{AFX_MSG_MAP(CStarmapView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStarmapView construction/destruction

CStarmapView::CStarmapView()
{
	// TODO: add construction code here

}

CStarmapView::~CStarmapView()
{
}

BOOL CStarmapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CStarmapView drawing

void CStarmapView::OnDraw(CDC* pDC)
{
	CStarmapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CStarmapView printing

BOOL CStarmapView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CStarmapView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CStarmapView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CStarmapView diagnostics

#ifdef _DEBUG
void CStarmapView::AssertValid() const
{
	CView::AssertValid();
}

void CStarmapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStarmapDoc* CStarmapView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStarmapDoc)));
	return (CStarmapDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStarmapView message handlers
