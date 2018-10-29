// A3DView.cpp : implementation of the CAstro3DView class
//

#include "stdafx.h"
#include "Astro3D.h"

#include "A3DDoc.h"
#include "A3DView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView

IMPLEMENT_DYNCREATE(CAstro3DView, CScrollView)

BEGIN_MESSAGE_MAP(CAstro3DView, CScrollView)
	//{{AFX_MSG_MAP(CAstro3DView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView construction/destruction

CAstro3DView::CAstro3DView()
{
	// TODO: add construction code here

}

CAstro3DView::~CAstro3DView()
{
}

BOOL CAstro3DView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView drawing

void CAstro3DView::OnDraw(CDC* pDC)
{
	CAstro3DDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

void CAstro3DView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();
	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView printing

BOOL CAstro3DView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CAstro3DView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CAstro3DView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView diagnostics

#ifdef _DEBUG
void CAstro3DView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CAstro3DView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CAstro3DDoc* CAstro3DView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAstro3DDoc)));
	return (CAstro3DDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CAstro3DView message handlers
