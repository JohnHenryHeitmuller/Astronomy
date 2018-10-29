#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "smdata.h"
#include "smutil.h"
#include "yalebsc.h"

int XlatYbsc( TYBSCData* y, CStarDataRec *d);
int ParseCommandLine( int argc, char **argv);


#define MAX_YBSC_BUF	512

char	src_file_name[_MAX_PATH],
		trg_file_name[_MAX_PATH],
		ybsc_buf[MAX_YBSC_BUF];
FILE	*tmp_file_ptr,
		*src_file_ptr,
		*trg_file_ptr;

CStarDataRec *star_data_buf;
CConstellationTable *ctbl;


int main( int argc, char** argv)
{
	TUInt16 RecordsRead = 0,
			RecordsWritten = 0;

	printf("Astro 3D Data Compiler, v1.0\n");
	if( ParseCommandLine( argc, argv) )
	{	return(1);
	}

	printf("\nOpening source file (%s)...", src_file_name);
	src_file_ptr = fopen( src_file_name, "r");
	printf(" done.");

	printf("\nOpening temp file...");
	tmp_file_ptr = tmpfile();
	printf(" done.");

	star_data_buf = new CStarDataRec();
	ctbl		  = new CConstellationTable( LConstellation);

	printf( "\nData rec size = %d", sizeof(CStarDataRec));

/*
	printf("\n\nRecords read:       ");			
	while( fgets( ybsc_buf, MAX_YBSC_BUF, src_file_ptr) )
	{	RecordsRead++;
		printf( "\b\b\b\b\b\b%-6d", RecordsRead);
		if( XlatYbsc( (TYBSCData*)ybsc_buf, star_data_buf) )
		{	RecordsWritten++;
			printf( "Records written: %-6d"
				   "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b",
				   RecordsWritten);
			fwrite( (char*)star_data_buf, sizeof(CStarDataRec), 1, tmp_file_ptr);
		}
	}
	printf("\n");
	fclose( src_file_ptr);
*/
	printf("\nOpening Astro3D data file (%s)...", trg_file_name);
	trg_file_ptr = fopen( trg_file_name, "w");
	printf(" done.");

	CStarDataHdr *hdr = new CStarDataHdr();
	hdr->Set( RecordsWritten, sizeof(CStarDataRec));
	fwrite( (char*)hdr, sizeof(CStarDataHdr), 1, trg_file_ptr);
/*
	for( TUInt16 i=0; i<RecordsWritten; i++);
	{	fread( (char*)star_data_buf, sizeof(CStarDataRec), 1, tmp_file_ptr);
		fwrite( (char*)star_data_buf, sizeof(CStarDataRec), 1, trg_file_ptr);
	}
*/
	fclose( tmp_file_ptr);
	fclose( trg_file_ptr);

	delete star_data_buf;
	delete ctbl;
	delete hdr;
	return(0);
}

int ParseCommandLine( int argc, char **argv)
{
	strcpy( src_file_name, argv[1]);
	strcpy( trg_file_name, argv[2]);
	return(0);
}

int XlatYbsc( TYBSCData* y, CStarDataRec *d)
{	
	if( memcmp( y->m_Parallax, "     ", 5) == 0)
	{	return(0);
	}

	y->m_Unused1 = y->m_Unused2 = y->m_Unused3 = y->m_Unused4 = 
	y->m_Unused5 = y->m_Unused6 = y->m_Unused7 = y->m_Unused8 = 
	y->m_Unused9 = y->m_Unused10 = y->m_Unused11 = y->m_Unused12 = 
	y->m_Unused13 = y->m_Unused14 = y->m_Unused15 = y->m_Unused16 =
	y->m_Unused17 = y->m_Unused18 = y->m_Unused19 = y->m_Unused20 =
	y->m_Unused21 = y->m_Unused22 = y->m_Unused23 = y->m_Unused24 = 
	y->m_Unused25 = y->m_Unused26 = y->m_Unused27 = y->m_Unused28 = 
	y->m_Unused29 = NULL;

	switch( y->m_ParallaxType[0])
	{	case ' ':
			d->m_ParallaxTypeNdx = TRIGONOMETRIC;
			break;
		case 'D':
			d->m_ParallaxTypeNdx = DYNAMICAL;
			break;
	}
	d->m_Parallax = (float)atof( y->m_Parallax);
	d->m_longitude = (float)atof( y->m_Longitude);
	d->m_latitude = (float)atof( y->m_Latitude);
	y->m_RaSec1900[2] = NULL; 
	d->m_RA1900.Set( atoi(y->m_RaHour1900), atoi(y->m_RaMin1900), 
					atoi(y->m_RaSec1900), atoi((char*)&(y->m_RaSec1900[3])) );
	y->m_RaSec2000[2] = NULL; 
	d->m_RA2000.Set( atoi(y->m_RaHour2000), atoi(y->m_RaMin2000), 
					atoi(y->m_RaSec2000), atoi((char*)&(y->m_RaSec2000[3])) );
	d->m_Dec1900.Set( atoi(y->m_DecDeg1900), atoi(y->m_DecMin1900), 
					atoi(y->m_DecSec1900));
	d->m_Dec2000.Set( atoi(y->m_DecDeg2000), atoi(y->m_DecMin2000), 
					atoi(y->m_DecSec2000));
	d->m_DataSourceNdx = YALEBSC;
	d->m_YBSCNbr = atoi(y->m_BsNbr, 4);
	d->m_FlamsteedNbr = atoi(y->m_Flamsteed, 3);
	d->m_DraperNbr = atol(y->m_DraperNbr);
	d->m_BayerCode.Set( atoi(y->m_Bayer,2), atoi(y->m_BayerSup,2), 
							ctbl->CodeToNdx( y->m_Constellation));
	d->m_DmNbr.Set( atoi(y->m_DmZone,2), atoi(y->m_DmNbr));

	if( y->m_IrFlag[0] == 'I')
	{	switch(y->m_IrRef[0])
		{	case ' ':
				d->m_InfraredSourceNdx = NASA;
				break;
			case '\'':
				d->m_InfraredSourceNdx = ENGLES;
				break;
			default:
				d->m_InfraredSourceNdx = UNCERTAIN_ID;
				break;
		}
	} else
	{	d->m_InfraredSourceNdx = NO_IR;
	}
	memcpy(	d->m_MultiStar, y->m_MultiStar, 6);
	d->m_MultiStar[6] = NULL;
	memcpy(	d->m_MultiComp, y->m_MultiComp, 2);
	d->m_MultiComp[2] = NULL;
	memcpy(	d->m_VarDesig, y->m_VarDesig, 9);
	d->m_VarDesig[9] = NULL;

	switch( y->m_MagCode[0])
	{	case ' ':
			d->m_MagnitudeCodeNdx = V_ON_UBV;
			break;
		case 'R':
			d->m_MagnitudeCodeNdx = HR_REDUCED_TO_UBV;
			break;
		case 'H':
			d->m_MagnitudeCodeNdx = HR;
			break;
	}
	switch( y->m_RiSystem[0])
	{	case ' ':
			d->m_RiSystemNdx = JOHNSON;
			break;
		case 'E':
			d->m_RiSystemNdx = EGGEN;
			break;
		case 'C':
			d->m_RiSystemNdx = COUSINS;
			break;
	}
	d->m_Magnitude = (float)atof(y->m_Magnitude, 5);
	d->m_BvMag = (float)atof(y->m_BvMag);
	d->m_UbMag = (float)atof(y->m_UbMag);
	d->m_RiMag = (float)atof(y->m_RiMag, 5);
	memcpy( d->m_SpectralType, y->m_SpecType, 20);
	d->m_SpectralType[20] = NULL;
	d->m_NuSubAlpha = (float)atof( y->m_NuSubAlpha);
	d->m_MuSubDelta = (float)atof( y->m_MuSubDelta, 6);	    
	d->m_RadialVelocity = atoi( y->m_RadVel,4);
	d->m_VSinI = atoi( y->m_VSinI, 3);
	d->m_DeltaMag = (float)atof( y->m_DeltaMag, 4);
	d->m_Separation = (float)atof( y->m_Separation);
	memcpy( d->m_ComponentList, y->m_CompId, 4);
	d->m_ComponentList[4] = NULL;
	d->m_Components = atoi( y->m_CompNbr);

	d->m_BitFlags.RadVelVariable =0;
	d->m_BitFlags.RadVelVariableSuspected = 0;
	d->m_BitFlags.RadVelSpectoscopicBinaries = 0;
	d->m_BitFlags.RadVelSingleLinedSpectra = 0;
	d->m_BitFlags.RadVelDoubleLinedSpectra = 0;
	d->m_BitFlags.RadVelOrbitalData = 0;

	d->m_BitFlags.RotVelLessThan = 0;
	d->m_BitFlags.RotVelLessThanEqual = 0;
	d->m_BitFlags.VSinIUncertain = 0;

	if( y->m_Remarks[0] == '*')
	{	d->m_BitFlags.Remarks = 1;
	} else
	{	d->m_BitFlags.Remarks = 0;
	} 

	return(1);
}

