/* smtypes.h, star map data types

  Data Types Naming Conventions
  -----------------------------
	T...		a typedef'ed data type
	C...		a class object data type
	L...		a global static list data
	L...Ndx		a typedef'ed index for a global static list
	C...Table	an class object wrapper of a static global list
*/

#ifndef SMTYPES_H
#define SMTYPES_H

typedef unsigned char	TUInt8;
typedef unsigned short  TUInt16;
typedef unsigned long	TUInt32;
typedef signed char     TInt8;
typedef signed short    TInt16;
typedef signed long		TInt32;

typedef struct TConstellationtag
{
	char	*m_Code;
	char	*m_Name;
	char	*m_Description;
} TConstellation;

#endif