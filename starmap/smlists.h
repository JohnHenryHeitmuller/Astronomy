/* smlists.h,	Star Map Program
				Static Data Lists
 */

enum    LInfraredSourceNdxtag { NOIR, UNCERTAINID, NASA, ENGLES };
typedef LInfraredSourceNdxtag LInfraredSourceNdx;

enum    LDataSourceNdxtag { NODATA, YALEBSC };
typedef LDataSourceNdxtag LDataSourceNdx;

typedef	TUInt8	LConstellationNdx;
typedef TUInt8	LGreekLetterNdx;
typedef TUInt8	LParallaxTypeNdx;
typedef TUInt8  LMagnitudeCodeNdx;
typedef TUInt8  LRiSystemNdx;        


#ifdef MAIN_MODULE
char* LDataSource[] =
{
    "No data",
    "Bright Star Catalogue, 4th Ed., May 1982, Wayne H. Warren Jr."
}

char* LInfraredSource[] =
{
    "Not an infrared source",
    "Uncertain identification"
    "NASA Merged Infrared Catalogue, Schmitz, et al. 1978",
    "Engles et al. 1982",
};

char* LGreekAlphabet[] =
{
    "Alpha", "Bata", "Gamma"
};


char* LMagnitudeCode[] =
{
    "No data",
    "V on UBV (Johnson) system",
    "HR magnitudes reduced to the UBV system",
    "H = original HR magnitude"
};


char* LParallaxType[] =
{
    "No data",
    "Dynamical",
    "Trigonometric"
};

char* LRiSystem[] =
{
    "No data",
    "Johnson system",
    "Eggen, on Kron system",
    "Cousins system"
};

#else

extern char* LDataSource[];
extern char* LInfraredSource[];
extern char* LGreekAlphabet[];
extern char* LParallaxType[];

#endif
