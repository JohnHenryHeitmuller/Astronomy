// smtypes.h, Star Map program data types

typedef unsigned char	TUInt8;
typedef unsigned short  TUInt16;
typedef unsigned long	TUInt32;
typedef signed char     TInt8;
typedef signed short    TInt16;
typedef signed long		TInt32;

typedef struct SFldEntrytag //: public CObject
{
	char Name[33];	    /* Proper name of field */
	char Label[11];	    /* abbreviated name of field */
	int  size;			/* Size of field (bytes) */
	char units[8];		/* The units of the field */
	char format[8];		/* data format */
} SFldEntry;

