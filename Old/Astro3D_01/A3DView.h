// A3DView.h : interface of the CAstro3DView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_A3DVIEW_H__DF8724BD_BD36_11D1_8312_000000000000__INCLUDED_)
#define AFX_A3DVIEW_H__DF8724BD_BD36_11D1_8312_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CAstro3DView : public CScrollView
{
protected: // create from serialization only
	CAstro3DView();
	DECLARE_DYNCREATE(CAstro3DView)

// Attributes
public:
	CAstro3DDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAstro3DView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAstro3DView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAstro3DView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in A3DView.cpp
inline CAstro3DDoc* CAstro3DView::GetDocument()
   { return (CAstro3DDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_A3DVIEW_H__DF8724BD_BD36_11D1_8312_000000000000__INCLUDED_)
