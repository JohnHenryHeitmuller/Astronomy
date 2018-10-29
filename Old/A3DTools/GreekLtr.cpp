// GreekLtr.cpp: implementation of the CGreekLetter class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "A3DTools.h"
#include "GreekLtr.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

PCTSTR tblGreekLetterName[25] =
	{	"",
		"Alpha",	"Beta",		"Gamma",	"Delta",
		"Epsilon",	"Zeta",		"Eta",		"Theta",
		"Iota",		"Kappa",	"Lambda",	"Mu",
		"Nu",		"Xi",		"Omicron",	"Pi",
		"Rho",		"Sigma",	"Tau",		"Upsilon",
		"Phi",		"Chi",		"Psi",		"Omega"
	};

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CGreekLetter::CGreekLetter()
{

}

CGreekLetter::~CGreekLetter()
{

}
