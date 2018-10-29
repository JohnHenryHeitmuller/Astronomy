/*	YALE_BSC.H

	By:  JRD	91/01/01	ver 1.0

*/

#define	ENT_SIZE	212

/* Yale Bright Star Catalog Record format */
class BSC_ENTRY 
{
public:
	char bs_num[4];			/* 1-  4    ---   I4             BS = HR number. */
							/* 5- 14    ---   A10 (10A1)     Name (subdivided) */
	char flamsteed[3];		/* 5-  7    ---   I3             Flamsteed number */
	char bayer[2];			/* 8-  9    ---   I2		 	 Coded Bayer Designation */
	char bayer_sup[2];		/* 10- 11   ---   I2             Sup number for bayer */
	char abbrev[3]; 		/* 12- 14   ---   A3             Constellation abbrev */
	char unused1;			/* 15       ---   1X             Blank */
							/* 16- 23   ---   A8             Durchmusterung (DM) number */
	char dm_sign[1];		/* 16       ---   A1             Sign of DM number. */
    char dm_zone[2];		/* 17- 18   ---   A2 (I2)        DM zone. */
	char dm_num[5];			/* 19- 23   ---   A5  (I5)       DM number. */
	char unused2;			/* 24       ---   1X             Blank */
	char hd_num[6];			/* 25- 30   ---   I6             Henty Draper Cat num */
	char unused3;			/* 31       ---   1X             Blank */
	char ir_flag[1];		/* 32       ---   A1             IR flag (I if IR)*/
	char ir_ref[1];			/* 33       ---   A1             Reference for IR src */
	char multi_star[6];		/* 34- 39   ---   A6 (6A1)       Double or multi star */
	char multi_comp[2];		/* 40- 41   ---   A2             Multi-star components */
	char unused4;			/* 42       ---   1X             Blank */
	char var_desig[9];		/* 43- 51   ---   A9 (9A1)       Variable star desig */
	char unused5;			/* 52       ---   1X             Blank */
	char ra_hour_1900[2];	/* 53- 54   ---   I2 (hours)     RA (alpha) for 1900 */
	char unused6;			/* 55       ---   1X             Blank */
	char ra_min_1900[2];	/* 56- 57   ---   I2 (min)       Alpha */
	char unused7;			/* 58       ---   1X             Blank */
	char ra_sec_1900[4];	/* 59- 62   ---   F4.1 (sec)     Alpha */
	char unused8;			/* 63       ---   1X             Blank */
	char dec_sign_1900[1];	/* 64       ---   A1             DEC sign (delta) 1900 */
	char dec_deg_1900[2];	/* 65- 66   ---   I2 (deg)       Delta */
	char unused9;			/* 67       ---   1X             Blank */
	char dec_min_1900[2];	/* 68- 69   ---   I2 (min)       Delta */
	char unused10;			/* 70       ---   1X             Blank */
	char dec_sec_1900[2];	/* 71- 72   ---   I2 (sec)       Delta */
	char unused11;			/* 73       ---   1X             Blank */
	char ra_hour_2000[2];	/* 74- 75   ---   I2 (hours)     RA (alpha) for 2000 */
	char unused12;			/* 76       ---   1X             Blank */
	char ra_min_2000[2];	/* 77- 78   ---   I2 (min)       Alpha */
	char unused13;			/* 79       ---   1X             Blank */
	char ra_sec_2000[4];	/* 80- 83   ---   F4.1 (sec)     Alpha */
	char unused14;			/* 84       ---   1X             Blank */
	char dec_sign_2000[1];	/* 85       ---   A1             DEC sign (delta) 2000 */
	char dec_deg_2000[2];	/* 86- 87   ---   I2 (deg)       Delta */
	char unused15;			/* 88       ---   1X             Blank */
	char dec_min_2000[2];	/* 89- 90   ---   I2 (min)       Delta */
	char unused16;			/* 91       ---   1X             Blank */
	char dec_sec_2000[2];	/* 92- 93   ---   I2 (sec)       Delta */
	char unused17;			/* 94       ---   1X             Blank */
	char longitude[6];		/* 95-100   ---   F6.2 (deg)     Galactic longitude II */
	char unused18;			/* 101      ---   1X             Blank */
	char latitude[6];		/* 102-107  ---   F6.2 (lat)     Galactic latitude II */
	char unused19;			/* 108      ---   1X             Blank */
	char magnitude[5];		/* 109-113  ---   F5.2 (mag)     Visual magnitude */
	char mag_code[1];		/* 114      ---   A1             Visual magnitude code */
	char unused20;			/* 115      ---   1X             Blank */
	char b_v_mag[5];		/* 116-120  ---   F5.2 (mag)     B - V on Johnson */
	char unused21;			/* 121      ---   1X             Blank */
	char u_b_mag[5];		/* 122-126  ---   F5.2 (mag)     U - B on Johnson */
	char unused22;			/* 127      ---   1X             Blank */
	char r_i_mag[5];		/* 128-132  ---   F5.2 (mag)     R - I */
	char r_i_system[1];		/* 133      ---   A1             Code for R - I system */
	char unused23;			/* 134      ---   1X             Blank */
	char spec_type[20];		/* 135-154  ---   20A1 (5A4)     Spectral type */
	char unused24;			/* 155      ---   1X             Blank */
	char nu_sub_alpha[6];	/* 156-161  ---   F6.3           Annual proper motion */
	char unused25;			/* 162      ---   1X             Blank */
	char mu_sub_delta[6];	/* 163-168  ---   F6.3           Annula proper motion */
	char parallax_type[1];	/* 169      ---   A1             parallax type */
	char parallax[5];		/* 170-174  ---   F5.3           parallax */
	char unused26;			/* 175      ---   1X             Blank */
	char rad_vel[4];		/* 176-179  ---   I4 (km/s)      Radial velocity */
	char rad_vel_com[4];	/* 180-183  ---   A4 (4A1)       Radial-velocity comts */
	char unused27;			/* 184      ---   1X             Blank */
	char rot_vel[1];		/* 185      ---   A1             Proj rot velocity */
	char v_sin_i[3];		/* 186-188  ---   I3 (km/s)      v*sin(i) */
	char v_sin_i_unc[1];	/* 189      ---   A1             (:) for uncertain */
	char unused28;			/* 190      ---   1X             Blank */
	char delta_mag[4];		/* 191-194  ---   F4.1 (mag)     magnitude diff */
	char reserved1;			/* 195      ---   1X             Reserved for (:) */
	char separation[6];		/* 196-201  ---   F6.1           Separation of comp */
	char unused29;			/* 202      ---   1X             Blank */
	char comp_id[4];		/* 203-206  ---   4A1 (A4)       Id of the components */
	char comp_num[2];		/* 207-208  ---   I2 (A2)        Numof components */
	char unused30[3];		/* 209-211  ---   3X             Blank */
	char remarks[1];		/* 212      ---   A1             (*) indicates a remark */
	char unused31[8];		/* 213-220  ---   8X             Blank Padding */
};

/* Field format datatype */
class FLD_FORMAT 
{
public:
	char long_name[33];	    /* Proper name of field */
	char short_name[11];	/* abbreviated name of field */
	int  start;				/* Starting position */
	int  size;				/* Size of field (bytes) */
	char units[8];			/* The units of the field */
	char format[8];			/* data format */ 
};

#define	ENT_SIZE	212

/* Field ID Numbers */
enum FLD_ID
{ 	BS_NUM,			
	FLAMSTEED,		
	BAYER,			// .0
	BAYER_SUB,		// .1		
	ABBREV,			
	DM_SIGN,		// .0
	DM_ZONE,		// .1	
	DM_NUM,			// .2
	HD_NUM,			
	IR_FLAG,		// .0
	IR_REF,			// .1
	MULTI_STAR,		
	MULTI_COMP,
	VAR_DESIG,
	RA_HOUR_1900,	// .0
	RA_MIN_1900,	// .1
	RA_SEC_1900,	// .2
	DEC_SIGN_1900,	// .0
	DEC_DEG_1900,   // .1
	DEC_MIN_1900,   // .2
	DEC_SEC_1900,   // .3
	RA_HOUR_2000,   // .0
	RA_MIN_2000,    // .1
	RA_SEC_2000,    // .2
	DEC_SIGN_2000,  // .0
	DEC_DEG_2000,   // .1 
	DEC_MIN_2000,	// .2
	DEC_SEC_2000,	// .3
	LONGITUDE,
	LATITUDE,
	MAGNITUDE,
	MAG_CODE,
	B_V_MAG,
	U_B_MAG,
	R_I_MAG,
	R_I_SYSTEM,
	SPEC_TYPE,
	NU_SUB_ALPHA,
	MU_SUB_DELTA,
	PARALLAX_TYPE,	
	PARALLAX,
	RAD_VEL,
	RAD_VEL_COM,
	ROT_VEL,
	V_SIN_I,
	V_SIN_I_UNC,
	DELTA_MAG,
	SEPARATION,
	COMP_ID,
	COMP_NUM,
	REMARKS,
/* Special ID Codes */
	BSC_NAME,
	BSC_DM,
	BSC_RA_1900,
	BSC_DEC_1900,
	BSC_RA_2000,
	BSC_DEC_2000,

	NUM_FLDS
};

/* Global variables */
struct FLD_FORMAT bsc_fld[] =  {
/*	 0000000000111111111122222222223333333333444444444455555555556 */
/*       0123456789012345678901234567890123456789012345678901234567890 */
{"Bright Star Number",			"BSC#"		,1	,4	,""		,"I4"},
{"Flamsteed Number",			"Flamsteed" ,5	,3	,""		,"I3"},
{"Bayer Designation",			"Bayer"		,8	,2	,""		,"I2"},
{"Bayer Supersposition",		"Bayer Sub"	,10	,2	,""		,"I2"},
{"Constellation Abbreviation",	"Con"		,12	,3	,""		,"A3"},
{"Durchmusterung Sign",			"DM Sgn"	,16	,1	,""		,"A1"},
{"Durchmusterung Zone",			"DM Zone"	,17	,2	,""		,"I2"},
{"Durchmusterung Number",		"DM#"		,19	,5	,""		,"I5"},
{"Henty Draper Catalog Number",	"HD#"		,25	,6	,""		,"I6"},
{"Infrared Source",				"IR Flag"	,32	,1	,""		,"A1"},
{"Infrared Source Reference",	"IR Ref"	,33	,1	,""		,"A1"},
{"Multiple Star Reference",		"Multi-Star",34	,6	,""		,"A6"},
{"Multiple Star Components",	"MS Comp"	,40	,2	,""		,"A2"},
{"Variable Star Designation",	"Var Desg"	,43	,9	,""		,"A9"},
{"Right Acension Epoch 1900",	"RA1900"	,53	,2	,"h"	,"I2"},
{"Right Acension Epoch 1900",	"RA1900"	,56	,2	,"m"	,"I2"},
{"Right Acension Epoch 1900",	"RA1900"	,59	,4	,"s"	,"F4.1"},
{"Declination Epoch 1900",		"DEC1900"	,64	,1	,""		,"A1"},
{"Declination Epoch 1900",		"DEC1900"	,65	,2	,"deg"	,"I2"},
{"Declination Epoch 1900",		"DEC1900"	,68	,2	,"m"	,"I2"},
{"Declination Epoch 1900",		"DEC1900"	,71	,2	,"s"	,"I2"},
{"Right Acension Epoch 2000",	"RA2000"	,74	,2	,"h"	,"I2"},
{"Right Acension Epoch 2000",	"RA2000"	,77	,2	,"m"	,"I2"},
{"Right Acension Epoch 2000",	"RA2000"	,80	,4	,"s"	,"F4.1"},
{"Declination Epoch 2000",		"DEC2000"	,85	,1	,""		,"A1"},
{"Declination Epoch 2000",		"DEC2000"	,86	,2	,"deg"	,"I2"},
{"Declination Epoch 2000",		"DEC2000"	,89	,2	,"min"	,"I2"},
{"Declination Epoch 2000",		"DEC2000"	,92	,2	,"sec"	,"I2"},
{"Galactic Longitude II",		"Gal Long"	,95	,6	,"deg"	,"F6.2"},
{"Galactic Latitude II",		"Gal Lat"	,102,6	,"deg"	,"F6.2"},
{"Visual Magnitude",			"Vis Mag"	,109,5	,"mag"	,"F5.2"},
{"Visual Magnitude Code",		"VM Code"	,114,1	,""		,"A1"},
{"B - V on Johnson System",		"B-V"		,116,5	,"mag"	,"F5.2"},
{"U - B on Johnson System",		"U-B"		,122,5	,"mag"	,"F5.2"},
{"R - I",						"R-I"		,128,5	,"mag"	,"F5.2"},
{"R - I System",				"R-I Sys"	,133,1	,""		,"A1"},
{"Spectral Type",				"Spec Type" ,135,20	,""		,"A20"},
{"Proper Motion (nu_sub_alpha)","PM Nu"		,156,6	,"year" ,"F6.3"},
{"Proper Motion (mu_sub_delta)","PM Mu"		,163,6	,"year" ,"F6.3"},
{"Parallax Type",				"PLX Type"	,169,1	,""		,"A1"},
{"Parallax",					"PLX"		,170,5	,""		,"F5.3"},
{"Radial Velocity",				"Radial Vel",176,4	,"km/s"	,"I4"},
{"Radial Velocity Comments",	"RV Remark" ,180,4	,""		,"A4"},
{"Projected Rotational Velocity","Proj'ed RV",185,1	,""		,"A1"},
{"v*sin(i)",					"v*sin(i)"	,186,3	,"km/s"	,"I3"},
{"v*sin(i) uncertainty",		"v*sin(i)?"	,189,1	,""		,"A1"},
{"Magnitude Difference",		"Mag Dif"	,191,4	,"mag"	,"F4.1"},
{"Component Separation",		"Comp Sep"	,196,6	,""		,"F6.1"},
{"Component Identification",	"Comp Id"	,203,4	,""		,"A4"},
{"Number of Components",		"Comp#"		,207,2	,""		,"I2"},
{"Remarks",						"Remarks"	,212,1	,""		,"A1"},
{"Name",						"Name"		,5	,10	,""		,"A10"},
{"Durchmusterung Designation",	"Durch Desg",16	,8	,""		,"A8"},
{"Right Acension (1900)",		"RA1900"	,53	,10	,""		,"A10"},
{"Declination (1900)",			"DEC1900"	,64	,10	,""		,"A10"},
{"Right Acension (2000)",		"RA2000"	,74	,10	,""		,"A10"},
{"Declination (2000)",			"DEC2000"	,85	,10	,""		,"A10"}
};


class TRIPLE
{public:
	int x, y, z;
};

class COORDINATE
{public:
	COORDINATE( TRIPLE t) { real = t;};

	TRIPLE	real, rotate;
	POINT	plot;

	void RotateVector( TRIPLE v);
	void Set( TRIPLE t );
};

