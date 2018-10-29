// A3DTypes.h

#ifndef A3DTypes_h
#define A3DTypes_h

#include <windows.h>

//	Type Used	ANSI C++ type	Description
//  ----------	--------------	--------------------------
//	TCHAR		char			Text character
//	PTCHAR		char*			Ponier to text character
		
//	TCHAR[]		char[]			Text character string
//	PTSTR		char*			Pointer to text character string
typedef LPCTSTR PCTSTR;
//	PCTSTR		const char*		Pointer to a constant text character string
		
//	CHAR		char			8 bit integer
//	PCHAR		char*			Pointer to 8 bit interger
//	UCHAR		unsigned char	unsigned 8 bit integer
//	PUCHAR		unsigned char*	Pointer to unsigned 8 bit integer
//	INT			int				16 bit integer
//	PINT		int*			Pointer to 16 bit integer
//	UINT		unsigned int	unsigned 16 bit integer
//	PUINT		unsigned int*	Pointer to unsigned 16 bit integer
//	LONG		long			32 bit integer
//	PLONG		long*			Pointer to 32 bit integer
//	ULONG		unsigned long	unsigned 32 bit integer
//	PULONG		unsigned long*	Pointer to unsigned 32 bit integer
//	LONGLONG					64 bit integer
//	PLONGLONG					Pointer to 64 bit integer
//	ULONGLONG					unsigned 64 bit integer
//	PULONGLONG					Pointer to unsigned 64 bit integer
		
//	FLOAT		float			4 byte (7 digit) floating point numeric
//	PFLOAT		float*			Pointer to 4 byte (7 digit) floating point numeric
typedef double DOUBLE;
//	DOUBLE		double			8 byte (15 digit) Floating point numeric
typedef double* PDOUBLE;
//	PDOUBLE 	double*			Pointer to 8 byte (15 digit) floating point numeric
typedef long double LONGDOUBLE;
//	LONGDOUBLE	long double		10 byte (19 digit) Floating point numeric
typedef long double* PLONGDOUBLE;
//	PLONGDOUBLE long double*	Pointer to 10 byte (19 digit) floating point numeric
		
//	BOOLEAN		unsigned char	Logical Flag
//	PBOOLEAN	unsigned char*	Pointer to logical Flag

#endif