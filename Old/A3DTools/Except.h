// Except.h: interface for the CA3DException class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXCEPT_H__EC98A4BF_BB8E_11D1_8311_000000000000__INCLUDED_)
#define AFX_EXCEPT_H__EC98A4BF_BB8E_11D1_8311_000000000000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
#include <afx.h>

//enum A3DExceptionCode { 

class CA3DException : public CException
{
public:
	CA3DException();
	virtual ~CA3DException();

};

#endif // !defined(AFX_EXCEPT_H__EC98A4BF_BB8E_11D1_8311_000000000000__INCLUDED_)
