// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "smimport.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_RUN_IMPORT, OnRunImport)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFrameWnd::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

#include "skymap.h"
#include "SMRecordset.h"
bool TraslateField(  CSMRecordset *rs, CString *cstr, char* recbuf, int len)
{
    CString ctmp;
	bool eor = false; // end of record

	for( int i=0; i<len; i++)
	{	if( recbuf[i] == 0 )
		{	eor = true;
			break;
		}
	}
	char fldbuf[32];
	memcpy( fldbuf, recbuf, len);
	fldbuf[len] = NULL;
	ctmp = fldbuf;
    //ctmp.TrimLeft();
    //ctmp.TrimRight();
    *cstr = ctmp;
	return(eor);
}

bool TraslateField(  CSMRecordset *rs, long *n, char* recbuf, int len)
{
	bool eor = false,  // end of record
         blank=true;
    int i;
    
	for( i=0; i<len; i++)
	{	if( recbuf[i] != ' ' )
		{	blank = false;
			break;
		}
	}
    if( blank )
    {   rs->SetFieldNull(n);
    } else
    {   for( i=0; i<len; i++)
	    {	if( recbuf[i] == 0 )
		    {	eor = true;
			    break;
		    }
	    }
	    char fldbuf[32];
	    memcpy( fldbuf, recbuf, len);
	    fldbuf[len] = NULL;
	    *n = atol(fldbuf);
    }
	return(eor);
}

bool TraslateField(  CSMRecordset *rs, int *n, char* recbuf, int len)
{
	bool eor = false,  // end of record
         blank=true;
    int i;
	for( i=0; i<len; i++)
	{	if( recbuf[i] != ' ' )
		{	blank = false;
			break;
		}
	}
    if( !blank )
    {   
        for( i=0; i<len; i++)
	    {	if( recbuf[i] == 0 )
		    {	eor = true;
			    break;
		    }
	    }
	    char fldbuf[32];
	    memcpy( fldbuf, recbuf, len);
	    fldbuf[len] = NULL;
	    *n = atoi(fldbuf);
    }
	return(eor);
}

bool TraslateField(  CSMRecordset *rs, BYTE *n, char* recbuf, int len)
{
	bool eor = false,  // end of record
         blank=true;
    int i;
    
	for( i=0; i<len; i++)
	{	if( recbuf[i] != ' ' )
		{	blank = false;
			break;
		}
	}
    if( !blank )
    {   for( i=0; i<len; i++)
	    {	if( recbuf[i] == 0 )
		    {	eor = true;
			    break;
		    }
	    }
	    char fldbuf[32];
	    memcpy( fldbuf, recbuf, len);
	    fldbuf[len] = NULL;
	    *n = (BYTE)atoi(fldbuf);
    }
	return(eor);
}

bool TraslateField(  CSMRecordset *rs, float *n, char* recbuf, int len)
{
	bool eor = false,  // end of record
         blank=true;
    int i;
    
	for( i=0; i<len; i++)
	{	if( recbuf[i] != ' ' )
		{	blank = false;
			break;
		}
	}
    if( blank )
    {   rs->SetFieldNull(n);
    } else
    {   for( i=0; i<len; i++)
	    {	if( recbuf[i] == 0 )
		    {	eor = true;
			    break;
		    }
	    }
	    char fldbuf[32];
	    memcpy( fldbuf, recbuf, len);
	    fldbuf[len] = NULL;
	    *n = (float)atof(fldbuf);
    }
	return(eor);
}

void TraslateRaw2RecordSet( CSMRecordset *rs, SkymapRecordRaw *buf)
{
	rs->Init();
	while(1)
	{
		if( TraslateField(	rs, &(rs->m_SKY2000),	buf->SKY2000,	27)	) break;
		if( TraslateField(	rs, &(rs->m_ID),		buf->ID,		8)  ) break;
		if( TraslateField(	rs, &(rs->m_HD),		buf->HD,		6)  ) break;
		if( TraslateField(	rs, &(rs->m_m_HD),		buf->m_HD,		1)	) break;
		if( TraslateField(	rs, &(rs->m_u_HD),		buf->u_HD,		1)	) break;
		if( TraslateField(	rs, &(rs->m_SAO),		buf->SAO,		6)  ) break;
		if( TraslateField(	rs, &(rs->m_m_SAO),		buf->m_SAO,		1)	) break;
		if( TraslateField(	rs, &(rs->m_DM),		buf->DM,		11)	) break;
		if( TraslateField(	rs, &(rs->m_m_DM),		buf->m_DM,		1)	) break;
		if( TraslateField(	rs, &(rs->m_u_DM),		buf->u_DM,		1)	) break;
		if( TraslateField(	rs, &(rs->m_HR),		buf->HR,		4)	) break;
		if( TraslateField(	rs, &(rs->m_WDS),		buf->WDS,		10)	) break;
		if( TraslateField(	rs, &(rs->m_m_WDS),		buf->m_WDS,		5)	) break;
		if( TraslateField(	rs, &(rs->m_u_WDS),		buf->u_WDS,		1)	) break;
		if( TraslateField(	rs, &(rs->m_PPM),		buf->PPM,		6)  ) break;
		if( TraslateField(	rs, &(rs->m_u_PPM),		buf->u_PPM,		1)	) break;
		if( TraslateField(	rs, &(rs->m_ID_merg),	buf->ID_merg,	8)  ) break;
		if( TraslateField(	rs, &(rs->m_name),		buf->name,		10)	) break;
		if( TraslateField(	rs, &(rs->m_var),		buf->var,		10)	) break;
		if( TraslateField(	rs, &(rs->m_RAh),		buf->RAh,		2)	) break;
		if( TraslateField(	rs, &(rs->m_RAh),		buf->RAh,		2)	) break;
		if( TraslateField(	rs, &(rs->m_RAs),		buf->RAs,		7)	) break;
		if( TraslateField(	rs, &(rs->m_DEsign),	buf->DEsign,	1)	) break;
		if( TraslateField(	rs, &(rs->m_DEd),		buf->DEd,		2)	) break;
		if( TraslateField(	rs, &(rs->m_DEm),		buf->DEm,		2)	) break;
		if( TraslateField(	rs, &(rs->m_DEs),		buf->DEs,		6)	) break;
		if( TraslateField(	rs, &(rs->m_e_pos),		buf->e_pos,		6)	) break;
		if( TraslateField(	rs, &(rs->m_n_pos),		buf->n_pos,		1)	) break;
		if( TraslateField(	rs, &(rs->m_r_pos),		buf->r_pos,		2)	) break;
		if( TraslateField(	rs, &(rs->m_pmRA),		buf->pmRA,		8)	) break;
		if( TraslateField(	rs, &(rs->m_pmDE),		buf->pmDE,		7)	) break;
		if( TraslateField(	rs, &(rs->m_r_pm),		buf->r_pm,		2)	) break;
		if( TraslateField(	rs, &(rs->m_RV),		buf->RV,		6)	) break;
		if( TraslateField(	rs, &(rs->m_r_RV),		buf->r_RV,		2)	) break;
		if( TraslateField(	rs, &(rs->m_Plx),		buf->Plx,		8)	) break;
		if( TraslateField(	rs, &(rs->m_e_Plx),		buf->e_Plx,		8)	) break;
		if( TraslateField(	rs, &(rs->m_r_Plx),		buf->r_Plx,		2)	) break;
		if( TraslateField(	rs, &(rs->m_GCI_X),		buf->GCI_X,		9)	) break;
		if( TraslateField(	rs, &(rs->m_GCI_Y),		buf->GCI_Y,		9)	) break;
		if( TraslateField(	rs, &(rs->m_GCI_Z),		buf->GCI_Z,		9)	) break;
		if( TraslateField(	rs, &(rs->m_GLON),		buf->GLON,		6)	) break;
		if( TraslateField(	rs, &(rs->m_GLAT),		buf->GLAT,		6)	) break;
		if( TraslateField(	rs, &(rs->m_Vmag),		buf->Vmag,		6)	) break;
		if( TraslateField(	rs, &(rs->m_Vder),		buf->Vder,		5)	) break;
		if( TraslateField(	rs, &(rs->m_e_Vmag),	buf->e_Vmag,	5)	) break;
		if( TraslateField(	rs, &(rs->m_f_Vmag),	buf->f_Vmag,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_Vmag),	buf->r_Vmag,	2)	) break;
		if( TraslateField(	rs, &(rs->m_n_Vmag),	buf->n_Vmag,	1)	) break;
		if( TraslateField(	rs, &(rs->m_Bmag),		buf->Bmag,		6)	) break;
		if( TraslateField(	rs, &(rs->m_B_V),		buf->B_V,		6)	) break;
		if( TraslateField(	rs, &(rs->m_e_Bmag),	buf->e_Bmag,	5)	) break;
		if( TraslateField(	rs, &(rs->m_f_Bmag),	buf->f_Bmag,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_Bmag),	buf->r_Bmag,	2)	) break;
		if( TraslateField(	rs, &(rs->m_Umag),		buf->Umag,		6)	) break;
		if( TraslateField(	rs, &(rs->m_U_B),		buf->U_B,		6)	) break;
		if( TraslateField(	rs, &(rs->m_e_Umag),	buf->e_Umag,	5)	) break;
		if( TraslateField(	rs, &(rs->m_n_Umag),	buf->n_Umag,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_Umag),	buf->r_Umag,	2)	) break;
		if( TraslateField(	rs, &(rs->m_Ptv),		buf->Ptv,		4)	) break;
		if( TraslateField(	rs, &(rs->m_r_Ptv),		buf->r_Ptv,		2)	) break;
		if( TraslateField(	rs, &(rs->m_Ptg),		buf->Ptg,		4)	) break;
		if( TraslateField(	rs, &(rs->m_r_Ptg),		buf->r_Ptg,		2)	) break;
		if( TraslateField(	rs, &(rs->m_Sp_MK),		buf->Sp_MK,		30)	) break;
		if( TraslateField(	rs, &(rs->m_r_Sp_MK),	buf->r_Sp_MK,	2)	) break;
		if( TraslateField(	rs, &(rs->m_Sp),		buf->Sp,		3	)	) break;
		if( TraslateField(	rs, &(rs->m_r_Sp),		buf->r_Sp,		2)	) break;
		if( TraslateField(	rs, &(rs->m_sep),		buf->sep,		7)	) break;
		if( TraslateField(	rs, &(rs->m_del_mag),	buf->del_mag,	5)	) break;
		if( TraslateField(	rs, &(rs->m_per_orb),	buf->per_orb,	7)	) break;
		if( TraslateField(	rs, &(rs->m_PA),		buf->PA,		3)	) break;
		if( TraslateField(	rs, &(rs->m_date),		buf->date,		7)	) break;
		if( TraslateField(	rs, &(rs->m_r_dup),		buf->r_dup,		2)	) break;
		if( TraslateField(	rs, &(rs->m_n_del_mag),	buf->n_del_mag,	1)	) break;
		if( TraslateField(	rs, &(rs->m_dis_near),	buf->dis_near,	7)	) break;
		if( TraslateField(	rs, &(rs->m_dis_2),		buf->dis_2,		7)	) break;
		if( TraslateField(	rs, &(rs->m_ID_A),		buf->ID_A,		8)	) break;
		if( TraslateField(	rs, &(rs->m_ID_B),		buf->ID_B,		8)	) break;
		if( TraslateField(	rs, &(rs->m_ID_C),		buf->ID_C,		8)	) break;
		if( TraslateField(	rs, &(rs->m_mag_max),	buf->mag_max,	5)	) break;
		if( TraslateField(	rs, &(rs->m_mag_min),	buf->mag_min,	5)	) break;
		if( TraslateField(	rs, &(rs->m_var_amp),	buf->var_amp,	5)	) break;
		if( TraslateField(	rs, &(rs->m_n_var_amp),	buf->n_var_amp,	1)	) break;
		if( TraslateField(	rs, &(rs->m_var_per),	buf->var_per,	8)	) break;
		if( TraslateField(	rs, &(rs->m_var_Epoch),	buf->var_Epoch,	8)	) break;
		if( TraslateField(	rs, &(rs->m_var_typ),	buf->var_typ,	3)	) break;
		if( TraslateField(	rs, &(rs->m_r_var),		buf->r_var,		2)	) break;
		if( TraslateField(	rs, &(rs->m_mag_1),		buf->mag_1,		6)	) break;
		if( TraslateField(	rs, &(rs->m_v_mag_1),	buf->v_mag_1,	6)	) break;
		if( TraslateField(	rs, &(rs->m_e_mag_1),	buf->e_mag_1,	5)	) break;
		if( TraslateField(	rs, &(rs->m_n_mag_1),	buf->n_mag_1,	1)	) break;
		if( TraslateField(	rs, &(rs->m_p_mag_1),	buf->p_mag_1,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_mag_1),	buf->r_mag_1,	2)	) break;
		if( TraslateField(	rs, &(rs->m_mag_2),		buf->mag_2,		6)	) break;
		if( TraslateField(	rs, &(rs->m_v_mag_2),	buf->v_mag_2,	6)	) break;
		if( TraslateField(	rs, &(rs->m_e_mag_2),	buf->e_mag_2,	5)	) break;
		if( TraslateField(	rs, &(rs->m_n_mag_2),	buf->n_mag_2,	1)	) break;
		if( TraslateField(	rs, &(rs->m_p_mag_2),	buf->p_mag_2,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_mag_2),	buf->r_mag_2,	2)	) break;
		if( TraslateField(	rs, &(rs->m_mag1_mag2),	buf->mag1_mag2,	6)	) break;
		if( TraslateField(	rs, &(rs->m_f_mag_1),	buf->f_mag_1,	1)	) break;
		if( TraslateField(	rs, &(rs->m_f_mag_2),	buf->f_mag_2,	1)	) break;
		if( TraslateField(	rs, &(rs->m_mag_3),		buf->mag_3,		6)	) break;
		if( TraslateField(	rs, &(rs->m_v_mag_3),	buf->v_mag_3,	6)	) break;
		if( TraslateField(	rs, &(rs->m_e_mag_3),	buf->e_mag_3,	5)	) break;
		if( TraslateField(	rs, &(rs->m_n_mag_3),	buf->n_mag_3,	1)	) break;
		if( TraslateField(	rs, &(rs->m_p_mag_3),	buf->p_mag_3,	1)	) break;
		if( TraslateField(	rs, &(rs->m_r_mag_3),	buf->r_mag_3,	2)	) break;
		if( TraslateField(	rs, &(rs->m_f_mag_3),	buf->f_mag_3,	1)	) break;
		break;
	}
}

#define IMPORT_MODULUS 300		// define as 1 to import all records

void CMainFrame::OnRunImport() 
{
	// TODO: Add your command handler code here
	enum			IMPORT_EXCEPTION { DATASOURCE_ERROR, INFILE_ERROR };
	CDatabase		dbAstro3D;
	CSMRecordset    rsAstro3DObject;
	SkymapRecordRaw	buf;
	FILE			*in = NULL;
	long			rec_imp = 0,
                    rec_skip = 0,
					rec_cnt = 0;
	char			msg[80];

	try
	{
		m_wndStatusBar.SetPaneText ( 0, "Initializing...", TRUE);

		if( !dbAstro3D.Open("Astro3D"))
		{	throw DATASOURCE_ERROR;
		}
		if( !rsAstro3DObject.Open( AFX_DB_USE_DEFAULT_TYPE, "Objects", CRecordset::appendOnly |CRecordset::optimizeBulkAdd ))
		{	throw DATASOURCE_ERROR;
		}

		if( (in = fopen( "c:\\dev\\astro3d\\skymap\\data\\skymap.txt", "r")) == NULL)
		{	throw INFILE_ERROR;
		}

		m_wndStatusBar.SetPaneText ( 0, "Record: 0", TRUE);
		memset( &buf, 0, sizeof(buf));
		while( fgets( (char*)&buf, sizeof(buf), in ))
		{	
			if( memcmp( buf.Plx, "        ", 8) != 0) // if parallax field is empty skip record
			{										  //   I noticed three recs in raw data that 
				rec_cnt++;							  //   had no parallax.
				if( rec_cnt % IMPORT_MODULUS == 0)
				{
					rec_imp++;

					rsAstro3DObject.AddNew();
					TraslateRaw2RecordSet( &rsAstro3DObject, &buf);
					rsAstro3DObject.Update();
				} else
				{   rec_skip++;
				}
            
				if( rec_imp % 10 == 0)
				{			
					sprintf( msg, "Records Imported: %ld, Skipped: %ld", rec_imp, rec_skip);
					m_wndStatusBar.SetPaneText ( 0, msg, TRUE);
				}
			}
			memset( &buf, 0, sizeof(buf));
		}
		fclose(in);
		sprintf( msg, "Import complets. %ld records imported, %ld records skipped", rec_imp, rec_skip);
		m_wndStatusBar.SetPaneText ( 0, msg, TRUE);
	}
	catch( IMPORT_EXCEPTION x)
	{
		switch(x)
		{	
			case DATASOURCE_ERROR:
				m_wndStatusBar.SetPaneText ( 0, "ODBC data source error!", TRUE);
				break;
			case INFILE_ERROR:
				m_wndStatusBar.SetPaneText ( 0, "Input file error!", TRUE);
				break;
		}
	}
	catch( CDBException x)
	{	m_wndStatusBar.SetPaneText ( 0, "Import Error: CDBException thrown!", TRUE);	
	}
	catch( CMemoryException )
	{	m_wndStatusBar.SetPaneText ( 0, "Import Error: CMemoryException thrown!", TRUE);
	}
}
