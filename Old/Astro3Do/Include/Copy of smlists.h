/* smlists.h,	Star Map Program
				Static Data Lists
 */
#include <stdlib.h>
#include <memory.h>

#include "smtypes.h"

enum    LInfraredSourceNdxtag { NO_IR, UNCERTAIN_ID, NASA, ENGLES };
typedef LInfraredSourceNdxtag LInfraredSourceNdx;

enum    LDataSourceNdxtag { UNKNOWN_DATA_SOURCE, YALEBSC };
typedef LDataSourceNdxtag LDataSourceNdx;

enum	LParallaxTypeNdxtag { UNKNOWN_PARALLAX_TYPE, DYNAMICAL, TRIGONOMETRIC };
typedef LParallaxTypeNdxtag LParallaxTypeNdx;

enum	LMagnitudeCodeNdxtag { UNKNOWN_MAGNITUDE_TYPE, V_ON_UBV, HR_REDUCED_TO_UBV, HR }; 
typedef LMagnitudeCodeNdxtag LMagnitudeCodeNdx;

enum	LRiSystemNdxtag { UNKNOWN_RI_SYSTEM, JOHNSON, EGGEN, COUSINS };
typedef LRiSystemNdxtag LRiSystemNdx;

typedef	TUInt8	LConstellationNdx;
typedef TUInt8	LGreekLetterNdx;

extern char* LDataSource[];
extern char* LInfraredSource[];
extern char* LGreekAlphabet[];
extern char* LParallaxType[];
extern TConstellation LConstellation[];

class CConstellationTable
{
public:
	CConstellationTable( TConstellation *Table)
		{	m_Table = Table;
		};
	
	LConstellationNdx CodeToNdx( char *code)
		{	LConstellationNdx ndx = 0;
			while( m_Table[ndx].m_Code )
			{	if( memcmp( m_Table[ndx].m_Code, code, 3) == 0)
				{	break;
				}
				ndx++;
			}
			if( m_Table[ndx].m_Code == NULL )
				return(0);
			return(ndx);
		}

protected:
	TConstellation *m_Table;
};