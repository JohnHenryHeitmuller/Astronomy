// smimportDoc.h : interface of the CSmimportDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SMIMPORTDOC_H__2D059AAE_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
#define AFX_SMIMPORTDOC_H__2D059AAE_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CSmimportDoc : public CDocument
{
protected: // create from serialization only
	CSmimportDoc();
	DECLARE_DYNCREATE(CSmimportDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSmimportDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSmimportDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSmimportDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SMIMPORTDOC_H__2D059AAE_FF0F_11D2_BDD9_00104B2B78D9__INCLUDED_)
