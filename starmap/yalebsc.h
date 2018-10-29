//	YALEBSC.H

// Yale Bright Star Catalog raw record format 
typedef struct TRawRecYBSCDatatag
{
	char m_BsNbr[4];		// 1-  4    ---   I4         BS = HR number. 
							// 5- 14    ---   A10 (10A1) Name (subdivided) 
	char m_Flamsteed[3];	// 5-  7    ---   I3         Flamsteed number 
	char m_Bayer[2];		// 8-  9    ---   I2		 Coded Bayer Designation 
	char m_BayerSup[2];		// 10- 11   ---   I2         Sup number for bayer 
	char m_Constellation[3];// 12- 14   ---   A3         Constellation abbrev 
	char m_Unused1;			// 15       ---   1X         Blank 
							// 16- 23   ---   A8         Durchmusterung (DM) number 
	char m_DmSign[1];		// 16       ---   A1         Sign of DM number. 
    char m_DmZone[2];		// 17- 18   ---   A2 (I2)    DM zone. 
	char m_DmNbr[5];		// 19- 23   ---   A5  (I5)   DM number. 
	char m_Unused2;			// 24       ---   1X         Blank 
	char m_DraperNbr[6];	// 25- 30   ---   I6         Henty Draper Cat num 
	char m_Unused3;			// 31       ---   1X         Blank 
	char m_IrFlag[1];		// 32       ---   A1         IR flag (I if IR)
	char m_IrRef[1];		// 33       ---   A1         Reference for IR src 
	char m_MultiStar[6];	// 34- 39   ---   A6 (6A1)   Double or multi star 
	char m_MultiComp[2];	// 40- 41   ---   A2         Multi-star components 
	char m_Unused4;			// 42       ---   1X         Blank 
	char m_VarDesig[9];		// 43- 51   ---   A9 (9A1)   Variable star desig 
	char m_Unused5;			// 52       ---   1X         Blank 
	char m_RaHour1900[2];	// 53- 54   ---   I2 (hours) RA (alpha) for 1900 
	char m_Unused6;			// 55       ---   1X         Blank 
	char m_RaMin1900[2];	// 56- 57   ---   I2 (min)   Alpha 
	char m_Unused7;			// 58       ---   1X         Blank 
	char m_RaSec1900[4];	// 59- 62   ---   F4.1 (sec) Alpha 
	char m_Unused8;			// 63       ---   1X         Blank 
	char m_DecSign1900[1];	// 64       ---   A1         DEC sign (delta) 1900 
	char m_DecDeg1900[2];	// 65- 66   ---   I2 (deg)   Delta 
	char m_Unused9;			// 67       ---   1X         Blank 
	char m_DecMin1900[2];	// 68- 69   ---   I2 (min)   Delta 
	char m_Unused10;		// 70       ---   1X         Blank 
	char m_DecSec1900[2];	// 71- 72   ---   I2 (sec)   Delta 
	char m_Unused11;		// 73       ---   1X         Blank 
	char m_RaHour2000[2];	// 74- 75   ---   I2 (hours) RA (alpha) for 2000 
	char m_Unused12;		// 76       ---   1X         Blank 
	char m_RaMin2000[2];	// 77- 78   ---   I2 (min)   Alpha 
	char m_Unused13;		// 79       ---   1X         Blank 
	char m_RaSec2000[4];	// 80- 83   ---   F4.1 (sec) Alpha 
	char m_Unused14;		// 84       ---   1X         Blank 
	char m_DecSign2000[1];	// 85       ---   A1         DEC sign (delta) 2000 
	char m_DecDeg2000[2];	// 86- 87   ---   I2 (deg)   Delta 
	char m_Unused15;		// 88       ---   1X         Blank 
	char m_DecMin2000[2];	// 89- 90   ---   I2 (min)   Delta 
	char m_Unused16;		// 91       ---   1X         Blank 
	char m_DecSec2000[2];	// 92- 93   ---   I2 (sec)   Delta 
	char m_Unused17;		// 94       ---   1X         Blank 
	char m_Longitude[6];	// 95-100   ---   F6.2 (deg) Galactic longitude II 
	char m_Unused18;		// 101      ---   1X         Blank 
	char m_Latitude[6];		// 102-107  ---   F6.2 (lat) Galactic latitude II 
	char m_Unused19;		// 108      ---   1X         Blank 
	char m_Magnitude[5];	// 109-113  ---   F5.2 (mag) Visual magnitude 
	char m_MagCode[1];		// 114      ---   A1         Visual magnitude code 
	char m_Unused20;		// 115      ---   1X         Blank 
	char m_BvMag[5];		// 116-120  ---   F5.2 (mag) B - V on Johnson 
	char m_Unused21;		// 121      ---   1X         Blank 
	char m_UbMag[5];		// 122-126  ---   F5.2 (mag) U - B on Johnson 
	char m_Unused22;		// 127      ---   1X         Blank 
	char m_RiMag[5];		// 128-132  ---   F5.2 (mag) R - I 
	char m_RiSystem[1];		// 133      ---   A1         Code for R - I system 
	char m_Unused23;		// 134      ---   1X         Blank 
	char m_SpecType[20];	// 135-154  ---   20A1 (5A4) Spectral type 
	char m_Unused24;		// 155      ---   1X         Blank 
	char m_NuSubAlpha[6];	// 156-161  ---   F6.3       Annual proper motion 
	char m_Unused25;		// 162      ---   1X         Blank 
	char m_MuSubDelta[6];	// 163-168  ---   F6.3       Annula proper motion 
	char m_ParallaxType[1];	// 169      ---   A1         parallax type 
	char m_Parallax[5];		// 170-174  ---   F5.3       parallax 
	char m_Unused26;		// 175      ---   1X         Blank 
	char m_RadVel[4];		// 176-179  ---   I4 (km/s)  Radial velocity 
	char m_RadVelCom[4];	// 180-183  ---   A4 (4A1)   Radial-velocity comts 
	char m_Unused27;		// 184      ---   1X         Blank 
	char m_RotVel[1];		// 185      ---   A1         Proj rot velocity 
	char m_VSinI[3];		// 186-188  ---   I3 (km/s)  v*sin(i) 
	char m_VSinIUnc[1];		// 189      ---   A1         (:) for uncertain 
	char m_Unused28;		// 190      ---   1X         Blank 
	char m_DeltaMag[4];		// 191-194  ---   F4.1 (mag) magnitude diff 
	char m_reserved1;		// 195      ---   1X         Reserved for (:) 
	char m_Separation[6];	// 196-201  ---   F6.1       Separation of comp 
	char m_Unused29;		// 202      ---   1X         Blank 
	char m_CompId[4];		// 203-206  ---   4A1 (A4)   Id of the components 
	char m_CompNbr[2];		// 207-208  ---   I2 (A2)    Numof components 
	char m_Unused30[3];		// 209-211  ---   3X         Blank 
	char m_Remarks[1];		// 212      ---   A1         (*) indicates a remark 
	char m_Unused31[8];		// 213-220  ---   8X         Blank Padding 
} TRawRecYBSCData;


