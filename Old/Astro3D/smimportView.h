// smimportView.h : interface of the CSmimportView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SMIMPORTVIEW_H__2D059AB0_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
#define AFX_SMIMPORTVIEW_H__2D059AB0_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CSmimportView : public CView
{
protected: // create from serialization only
	CSmimportView();
	DECLARE_DYNCREATE(CSmimportView)

// Attributes
public:
	CSmimportDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSmimportView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSmimportView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSmimportView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in smimportView.cpp
inline CSmimportDoc* CSmimportView::GetDocument()
   { return (CSmimportDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SMIMPORTVIEW_H__2D059AB0_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
