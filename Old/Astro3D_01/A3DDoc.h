// A3DDoc.h : interface of the CAstro3DDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_A3DDOC_H__DF8724BB_BD36_11D1_8312_000000000000__INCLUDED_)
#define AFX_A3DDOC_H__DF8724BB_BD36_11D1_8312_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CAstro3DDoc : public CDocument
{
protected: // create from serialization only
	CAstro3DDoc();
	DECLARE_DYNCREATE(CAstro3DDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAstro3DDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CAstro3DDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CAstro3DDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_A3DDOC_H__DF8724BB_BD36_11D1_8312_000000000000__INCLUDED_)
