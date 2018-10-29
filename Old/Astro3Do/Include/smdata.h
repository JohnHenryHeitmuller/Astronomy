/* smdata.h
 */
#include <memory.h>

#include "smtypes.h"
#include "smlists.h"

class CBayerCode
{   // Coded Bayer Designation
public:
	CBayerCode()
		{	Init();
		};

	void Init(void)
		{	m_GreekLetter = 0;
			m_Superscript = 0;
			m_ConstellationNdx = 0;
		};
	void Get( LGreekLetterNdx *GreekLetter, TUInt8 *Superscript, LConstellationNdx *ConstellationNdx) 
		{	*GreekLetter = m_GreekLetter; 
			*Superscript = m_Superscript;
			*ConstellationNdx = m_ConstellationNdx;
		};

	void Set( LGreekLetterNdx GreekLetter, TUInt8 Superscript, LConstellationNdx ConstellationNdx) 
		{	m_GreekLetter = GreekLetter; 
			m_Superscript = Superscript;
			m_ConstellationNdx = ConstellationNdx;
		};

protected:
    LGreekLetterNdx		m_GreekLetter;
	TUInt8				m_Superscript;		// Superscript number for bayer.
	LConstellationNdx	m_ConstellationNdx;
};

class CDmNbr
{   // Durchmusterung (DM) number */
public:
	CDmNbr()
		{	Init();
		};

	void Init(void)
		{	m_DmZone = 0;
			m_DmNbr = 0;
		};
	void Set( TInt8 DmZone, TUInt16 DmNbr)
		{	m_DmZone = DmZone;
			m_DmNbr	= DmNbr;
		};

protected:
    TInt8   m_DmZone;		    // I2 DM zone, sign stored in zone.
    TUInt16 m_DmNbr;		    // I5 DM number.
};

class CRightAscention
{
public:
	CRightAscention()
		{	Init();
		};
	CRightAscention( TInt32 TenthsOfSeconds) 
		{ m_TenthsOfSeconds = TenthsOfSeconds; 
		};
	CRightAscention( TInt16 hours, TInt16 minutes, TInt16 seconds, TInt16 tenths) 
		{ Set( hours, minutes, seconds, tenths); 
		};

	void Init(void)
		{	m_TenthsOfSeconds = 0;
		}
	void Set( TInt16 hours, TInt16 minutes, TInt16 seconds, TInt16 tenths) 
		{	m_TenthsOfSeconds  = hours * 36000;
			m_TenthsOfSeconds += minutes  * 600;
			m_TenthsOfSeconds += seconds  * 10;
			m_TenthsOfSeconds += tenths;
		};
	void Get( TInt32 *TenthsOfSeconds) 
		{	*TenthsOfSeconds = m_TenthsOfSeconds;
		};
	void Get( double *degrees)	
		{ *degrees = (m_TenthsOfSeconds/864000)*360;
		};
	void Get( TInt16 *hours, TInt16 *minutes, TInt16 *seconds, TInt16 *tenths)
		{	TInt32 remainder = m_TenthsOfSeconds % 36000;
			*hours = m_TenthsOfSeconds / 36000;
			*minutes = remainder / 600;
			remainder %= 600;
			*seconds = remainder / 10;
			*tenths = remainder % 10;
		}

protected:
	TInt32	m_TenthsOfSeconds;
};

class CDeclination
{
public:
	CDeclination()
		{	Init();
		}
	CDeclination( TInt16 degrees, TInt16 minutes, TInt16 seconds) 
		{ Set( degrees, minutes, seconds); 
		};

	void Init()
		{	Set(0,0,0);
		}
	void Set( TInt16 degrees, TInt16 minutes, TInt16 seconds) 
		{	m_Degrees = (TInt8)degrees;
			m_Minutes = (TInt8)minutes;
			m_Seconds = (TInt8)seconds;
		};
	void Get( double *degrees)	
		{ *degrees = m_Degrees + (((m_Minutes*60)+m_Seconds)/3600);
		};
	void Get( TInt16 *degrees, TInt16 *minutes, TInt16 *seconds)
		{	*degrees = m_Degrees;
			*minutes = m_Minutes;
			*seconds = m_Seconds;
		};

protected:
    TInt8   m_Degrees,           // sign stored in degrees
          	m_Minutes,
            m_Seconds;
};

class CBitFlags
{
public:
	CBitFlags()
		{	Init();
		}
	void Init(void)
		{	RadVelVariable =0;
			RadVelVariableSuspected = 0;
			RadVelSpectoscopicBinaries = 0;
			RadVelSingleLinedSpectra = 0;
			RadVelDoubleLinedSpectra = 0;
			RadVelOrbitalData = 0;
			RotVelLessThan = 0;
			RotVelLessThanEqual = 0;
			VSinIUncertain = 0;
			Remarks = 0;
		};

	TUInt16 RadVelVariable : 1;
	TUInt16 RadVelVariableSuspected : 1;
	TUInt16 RadVelSpectoscopicBinaries : 1;
	TUInt16 RadVelSingleLinedSpectra : 1;
	TUInt16 RadVelDoubleLinedSpectra : 1;
	TUInt16 RadVelOrbitalData : 1;
	TUInt16 RotVelLessThan : 1;
	TUInt16 RotVelLessThanEqual : 1;
	TUInt16 VSinIUncertain : 1;
	TUInt16 Remarks : 1;
};

class CStarDataHdr
{
public:
	CStarDataHdr()
		{	Init();
		};

	void Init(void)
		{	m_RecordCnt = 0;
			m_RecordSize = 0;
		};

	void Get( TUInt16 *RecordCnt, TUInt16 *RecordSize)
		{	*RecordCnt = m_RecordCnt;
			*RecordSize = m_RecordSize;
		};
	void Set( TUInt16 RecordCnt, TUInt16 RecordSize)
		{	m_RecordCnt = RecordCnt;
			m_RecordSize = RecordSize;
		};

protected:
	//TUInt8	m_FileTypeSignatureBlock[4];
	//TUInt8	m_SectionType;
	//TYInt8	m_SectionVersionFormat;
	TUInt16 m_RecordCnt;
	TUInt16	m_RecordSize;
};

class CStarDataRec : public CObject
{
public:
	CStarDataRec() 
		{	Init();
		};
	void Init(void)
		{	m_ParallaxTypeNdx = UNKNOWN_PARALLAX_TYPE;
			m_Parallax = 0.000;
			m_longitude = 000.00;
			m_latitude = 000.00;
			m_RA1900.Init();
			m_RA2000.Init();
			m_Dec1900.Init();
			m_Dec2000.Init();

			m_DataSourceNdx = UNKNOWN_DATA_SOURCE;
			m_YBSCNbr = 0000;
			m_FlamsteedNbr = 000;
			m_DraperNbr = 000000;
			m_BayerCode.Init();
			m_DmNbr.Init();

			m_BitFlags.Init();
			m_InfraredSourceNdx = NO_IR;
			memset( m_MultiStar, 0, sizeof(m_MultiStar));
			memset( m_MultiComp, 0, sizeof(m_MultiComp));
			memset( m_VarDesig, 0, sizeof(m_VarDesig));
			m_MagnitudeCodeNdx = UNKNOWN_MAGNITUDE_TYPE;
			m_Magnitude = 00.00;
			m_BvMag = 00.00;
			m_UbMag = 00.00;
			m_RiMag = 00.00;
			m_RiSystemNdx = UNKNOWN_RI_SYSTEM;
			memset( m_SpectralType, 0, sizeof(m_SpectralType));
			m_NuSubAlpha = 00.000;
	        m_MuSubDelta = 00.000;	    
			m_RadialVelocity = 0000;
			m_VSinI = 000;
			m_DeltaMag = 00.0;
			m_Separation = 0000.0;
			memset( m_ComponentList, 0, sizeof(m_ComponentList));
			m_Components = 00;
		};

//=================== Location Data =======================
	LParallaxTypeNdx	m_ParallaxTypeNdx;	// parallax type
	float				m_Parallax,		    // F5.3 parallax */
	                    m_longitude,        // F6.2 (deg) Galactic longitude II
	                    m_latitude;		    // F6.2 (deg) Galactic latitude II
    CRightAscention     m_RA1900,
                        m_RA2000;
    CDeclination        m_Dec1900,
                        m_Dec2000;

//========== Name Data/Catalog Cross References ===========
	LDataSourceNdx      m_DataSourceNdx;   	//
	TUInt16             m_YBSCNbr,			// I4 BS = HR number.
	                    m_FlamsteedNbr;		// I3 Flamsteed number
	TUInt32             m_DraperNbr;		// I6 Henty Draper Cat num
	CBayerCode          m_BayerCode;
    CDmNbr              m_DmNbr;

//=================== Attribute Data ======================
	CBitFlags			m_BitFlags;
	LInfraredSourceNdx  m_InfraredSourceNdx;// A1 IR flag
	char                m_MultiStar[7];		// A6 (6A1) Double or multi star 
	char                m_MultiComp[3];		// A2       Multi-star components 
	char                m_VarDesig[10];		// A9 (9A1) Variable star desig 
    LMagnitudeCodeNdx   m_MagnitudeCodeNdx;
	float               m_Magnitude,		// F5.2 (mag) Visual magnitude
                        m_BvMag,            // F5.2 (mag) B - V on Johnson
                        m_UbMag,            // F5.2 (mag) U - B on Johnson
                        m_RiMag;            // F5.2 (mag) R - I
    LRiSystemNdx        m_RiSystemNdx;
	char                m_SpectralType[21];	// 20A1 (5A4) Spectral type, zstring
	float               m_NuSubAlpha,	    // F6.3 Annual proper motion
	                    m_MuSubDelta;	    // F6.3 Annula proper motion
	TUInt16             m_RadialVelocity;   // I4 (km/s) Radial velocity
	TUInt16             m_VSinI;		    // I3 (km/s) v*sin(i)
	float               m_DeltaMag;		    // F4.1 (mag) magnitude diff
	float               m_Separation;		// F6.1 Separation of comp
	char                m_ComponentList[5];	// (A4) Id of the components, zstring
	TUInt8              m_Components;		// I2 (A2) Numof components
};


/*
class CMapNoteEntry : public CObject
class CMapNoteTable : public CObject
*/
