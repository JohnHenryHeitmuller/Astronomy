// SMRecordset.cpp : implementation file
//

#include "stdafx.h"
#include "smimport.h"
#include "SMRecordset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSMRecordset

IMPLEMENT_DYNAMIC(CSMRecordset, CRecordset)

CSMRecordset::CSMRecordset(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CSMRecordset)
	m_SKY2000 = _T("");
	m_ID = 0;
	m_HD = 0;
	m_m_HD = _T("");
	m_u_HD = _T("");
	m_SAO = 0;
	m_m_SAO = _T("");
	m_DM = _T("");
	m_m_DM = _T("");
	m_u_DM = _T("");
	m_HR = 0;
	m_WDS = _T("");
	m_m_WDS = _T("");
	m_PPM = 0;
	m_u_PPM = _T("");
	m_ID_merg = 0;
	m_name = _T("");
	m_var = _T("");
	m_RAh = 0;
	m_RAm = 0;
	m_RAs = 0.0f;
	m_DEsign = _T("");
	m_DEd = 0;
	m_DEm = 0;
	m_DEs = 0.0f;
	m_e_pos = 0.0f;
	m_n_pos = _T("");
	m_r_pos = 0;
	m_pmRA = 0.0f;
	m_pmDE = 0.0f;
	m_r_pm = 0;
	m_RV = 0.0f;
	m_r_RV = 0;
	m_Plx = 0.0f;
	m_e_Plx = 0.0f;
	m_r_Plx = 0;
	m_GCI_X = 0.0f;
	m_GCI_Y = 0.0f;
	m_GCI_Z = 0.0f;
	m_GLON = 0.0f;
	m_GLAT = 0.0f;
	m_Vmag = 0.0f;
	m_Vder = 0.0f;
	m_e_Vmag = 0.0f;
	m_f_Vmag = _T("");
	m_r_Vmag = 0;
	m_n_Vmag = 0;
	m_Bmag = 0.0f;
	m_B_V = 0.0f;
	m_e_Bmag = 0.0f;
	m_f_Bmag = _T("");
	m_r_Bmag = 0;
	m_Umag = 0.0f;
	m_U_B = 0.0f;
	m_e_Umag = 0.0f;
	m_n_Umag = _T("");
	m_r_Umag = 0;
	m_Ptv = 0.0f;
	m_r_Ptv = 0;
	m_Ptg = 0.0f;
	m_r_Ptg = 0;
	m_Sp_MK = _T("");
	m_r_Sp_MK = 0;
	m_Sp = _T("");
	m_r_Sp = 0;
	m_sep = 0.0f;
	m_del_mag = 0.0f;
	m_per_orb = 0.0f;
	m_PA = 0;
	m_date = 0.0f;
	m_r_dup = 0;
	m_n_del_mag = _T("");
	m_dis_near = 0.0f;
	m_dis_2 = 0.0f;
	m_ID_A = 0;
	m_ID_B = 0;
	m_ID_C = 0;
	m_mag_max = 0.0f;
	m_mag_min = 0.0f;
	m_var_amp = 0.0f;
	m_n_var_amp = _T("");
	m_var_per = 0.0f;
	m_var_Epoch = 0.0f;
	m_var_typ = 0;
	m_r_var = 0;
	m_mag_1 = 0.0f;
	m_v_mag_1 = 0.0f;
	m_e_mag_1 = 0.0f;
	m_n_mag_1 = _T("");
	m_p_mag_1 = _T("");
	m_r_mag_1 = 0;
	m_mag_2 = 0.0f;
	m_v_mag_2 = 0.0f;
	m_e_mag_2 = 0.0f;
	m_n_mag_2 = _T("");
	m_p_mag_2 = _T("");
	m_r_mag_2 = 0;
	m_mag1_mag2 = 0.0f;
	m_f_mag_1 = _T("");
	m_f_mag_2 = _T("");
	m_mag_3 = 0.0f;
	m_v_mag_3 = 0.0f;
	m_e_mag_3 = 0.0f;
	m_n_mag_3 = _T("");
	m_p_mag_3 = _T("");
	m_r_mag_3 = 0;
	m_f_mag_3 = _T("");
	m_u_WDS = _T("");
	m_nFields = 108;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}

void CSMRecordset::Init(void)
{
	m_SKY2000 = _T("");
	m_ID = 0;
	m_HD = 0;
	m_m_HD = _T("");
	m_u_HD = _T("");
	m_SAO = 0;
	m_m_SAO = _T("");
	m_DM = _T("");
	m_m_DM = _T("");
	m_u_DM = _T("");
    m_HR = 0;
	m_WDS = _T("");
	m_m_WDS = _T("");
	m_PPM = 0;
	m_u_PPM = _T("");
	m_ID_merg = 0;
	m_name = _T("");
	m_var = _T("");
	m_RAh = 0;
	m_RAm = 0;
	m_RAs = 0.0f;
	m_DEsign = _T("");
	m_DEd = 0;
	m_DEm = 0;
	m_DEs = 0.0f;
	m_e_pos = 0.0f;
	m_n_pos = _T("");
	m_r_pos = 0;
	m_pmRA = 0.0f;
	m_pmDE = 0.0f;
	m_r_pm = 0;
	m_RV = 0.0f;
	m_r_RV = 0;
	m_Plx = 0.0f;
	m_e_Plx = 0.0f;
	m_r_Plx = 0;
	m_GCI_X = 0.0f;
	m_GCI_Y = 0.0f;
	m_GCI_Z = 0.0f;
	m_GLON = 0.0f;
	m_GLAT = 0.0f;
	m_Vmag = 0.0f;
	m_Vder = 0.0f;
	m_e_Vmag = 0.0f;
	m_f_Vmag = _T("");
	m_r_Vmag = 0;
	m_n_Vmag = 0;
	m_Bmag = 0.0f;
	m_B_V = 0.0f;
	m_e_Bmag = 0.0f;
	m_f_Bmag = _T("");
	m_r_Bmag = 0;
	m_Umag = 0.0f;
	m_U_B = 0.0f;
	m_e_Umag = 0.0f;
	m_n_Umag = _T("");
	m_r_Umag = 0;
	m_Ptv = 0.0f;
	m_r_Ptv = 0;
	m_Ptg = 0.0f;
	m_r_Ptg = 0;
	m_Sp_MK = _T("");
	m_r_Sp_MK = 0;
	m_Sp = _T("");
	m_r_Sp = 0;
	m_sep = 0.0f;
	m_del_mag = 0.0f;
	m_per_orb = 0.0f;
	m_PA = 0;
	m_date = 0.0f;
	m_r_dup = 0;
	m_n_del_mag = _T("");
	m_dis_near = 0.0f;
	m_dis_2 = 0.0f;
	m_ID_A = 0;
	m_ID_B = 0;
	m_ID_C = 0;
	m_mag_max = 0.0f;
	m_mag_min = 0.0f;
	m_var_amp = 0.0f;
	m_n_var_amp = _T("");
	m_var_per = 0.0f;
	m_var_Epoch = 0.0f;
	m_var_typ = 0;
	m_r_var = 0;
	m_mag_1 = 0.0f;
	m_v_mag_1 = 0.0f;
	m_e_mag_1 = 0.0f;
	m_n_mag_1 = _T("");
	m_p_mag_1 = _T("");
	m_r_mag_1 = 0;
	m_mag_2 = 0.0f;
	m_v_mag_2 = 0.0f;
	m_e_mag_2 = 0.0f;
	m_n_mag_2 = _T("");
	m_p_mag_2 = _T("");
	m_r_mag_2 = 0;
	m_mag1_mag2 = 0.0f;
	m_f_mag_1 = _T("");
	m_f_mag_2 = _T("");
	m_mag_3 = 0.0f;
	m_v_mag_3 = 0.0f;
	m_e_mag_3 = 0.0f;
	m_n_mag_3 = _T("");
	m_p_mag_3 = _T("");
	m_r_mag_3 = 0;
	m_f_mag_3 = _T("");
	m_u_WDS = _T("");
}

CString CSMRecordset::GetDefaultConnect()
{
	return _T("ODBC;DSN=Astro3D");
}

CString CSMRecordset::GetDefaultSQL()
{
	return _T("[Objects]");
}

void CSMRecordset::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CSMRecordset)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[SKY2000]"), m_SKY2000);
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[HD]"), m_HD);
	RFX_Text(pFX, _T("[m_HD]"), m_m_HD);
	RFX_Text(pFX, _T("[u_HD]"), m_u_HD);
	RFX_Long(pFX, _T("[SAO]"), m_SAO);
	RFX_Text(pFX, _T("[m_SAO]"), m_m_SAO);
	RFX_Text(pFX, _T("[DM]"), m_DM);
	RFX_Text(pFX, _T("[m_DM]"), m_m_DM);
	RFX_Text(pFX, _T("[u_DM]"), m_u_DM);
	RFX_Int(pFX, _T("[HR]"), m_HR);
	RFX_Text(pFX, _T("[WDS]"), m_WDS);
	RFX_Text(pFX, _T("[m_WDS]"), m_m_WDS);
	RFX_Long(pFX, _T("[PPM]"), m_PPM);
	RFX_Text(pFX, _T("[u_PPM]"), m_u_PPM);
	RFX_Long(pFX, _T("[ID_merg]"), m_ID_merg);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[var]"), m_var);
	RFX_Byte(pFX, _T("[RAh]"), m_RAh);
	RFX_Byte(pFX, _T("[RAm]"), m_RAm);
	RFX_Single(pFX, _T("[RAs]"), m_RAs);
	RFX_Text(pFX, _T("[DEsign]"), m_DEsign);
	RFX_Byte(pFX, _T("[DEd]"), m_DEd);
	RFX_Byte(pFX, _T("[DEm]"), m_DEm);
	RFX_Single(pFX, _T("[DEs]"), m_DEs);
	RFX_Single(pFX, _T("[e_pos]"), m_e_pos);
	RFX_Text(pFX, _T("[n_pos]"), m_n_pos);
	RFX_Byte(pFX, _T("[r_pos]"), m_r_pos);
	RFX_Single(pFX, _T("[pmRA]"), m_pmRA);
	RFX_Single(pFX, _T("[pmDE]"), m_pmDE);
	RFX_Byte(pFX, _T("[r_pm]"), m_r_pm);
	RFX_Single(pFX, _T("[RV]"), m_RV);
	RFX_Byte(pFX, _T("[r_RV]"), m_r_RV);
	RFX_Single(pFX, _T("[Plx]"), m_Plx);
	RFX_Single(pFX, _T("[e_Plx]"), m_e_Plx);
	RFX_Byte(pFX, _T("[r_Plx]"), m_r_Plx);
	RFX_Single(pFX, _T("[GCI_X]"), m_GCI_X);
	RFX_Single(pFX, _T("[GCI_Y]"), m_GCI_Y);
	RFX_Single(pFX, _T("[GCI_Z]"), m_GCI_Z);
	RFX_Single(pFX, _T("[GLON]"), m_GLON);
	RFX_Single(pFX, _T("[GLAT]"), m_GLAT);
	RFX_Single(pFX, _T("[Vmag]"), m_Vmag);
	RFX_Single(pFX, _T("[Vder]"), m_Vder);
	RFX_Single(pFX, _T("[e_Vmag]"), m_e_Vmag);
	RFX_Text(pFX, _T("[f_Vmag]"), m_f_Vmag);
	RFX_Byte(pFX, _T("[r_Vmag]"), m_r_Vmag);
	RFX_Byte(pFX, _T("[n_Vmag]"), m_n_Vmag);
	RFX_Single(pFX, _T("[Bmag]"), m_Bmag);
	RFX_Single(pFX, _T("[B_V]"), m_B_V);
	RFX_Single(pFX, _T("[e_Bmag]"), m_e_Bmag);
	RFX_Text(pFX, _T("[f_Bmag]"), m_f_Bmag);
	RFX_Byte(pFX, _T("[r_Bmag]"), m_r_Bmag);
	RFX_Single(pFX, _T("[Umag]"), m_Umag);
	RFX_Single(pFX, _T("[U_B]"), m_U_B);
	RFX_Single(pFX, _T("[e_Umag]"), m_e_Umag);
	RFX_Text(pFX, _T("[n_Umag]"), m_n_Umag);
	RFX_Byte(pFX, _T("[r_Umag]"), m_r_Umag);
	RFX_Single(pFX, _T("[Ptv]"), m_Ptv);
	RFX_Byte(pFX, _T("[r_Ptv]"), m_r_Ptv);
	RFX_Single(pFX, _T("[Ptg]"), m_Ptg);
	RFX_Byte(pFX, _T("[r_Ptg]"), m_r_Ptg);
	RFX_Text(pFX, _T("[Sp_MK]"), m_Sp_MK);
	RFX_Byte(pFX, _T("[r_Sp_MK]"), m_r_Sp_MK);
	RFX_Text(pFX, _T("[Sp]"), m_Sp);
	RFX_Byte(pFX, _T("[r_Sp]"), m_r_Sp);
	RFX_Single(pFX, _T("[sep]"), m_sep);
	RFX_Single(pFX, _T("[del_mag]"), m_del_mag);
	RFX_Single(pFX, _T("[per_orb]"), m_per_orb);
	RFX_Int(pFX, _T("[PA]"), m_PA);
	RFX_Single(pFX, _T("[date]"), m_date);
	RFX_Byte(pFX, _T("[r_dup]"), m_r_dup);
	RFX_Text(pFX, _T("[n_del_mag]"), m_n_del_mag);
	RFX_Single(pFX, _T("[dis_near]"), m_dis_near);
	RFX_Single(pFX, _T("[dis_2]"), m_dis_2);
	RFX_Long(pFX, _T("[ID_A]"), m_ID_A);
	RFX_Long(pFX, _T("[ID_B]"), m_ID_B);
	RFX_Long(pFX, _T("[ID_C]"), m_ID_C);
	RFX_Single(pFX, _T("[mag_max]"), m_mag_max);
	RFX_Single(pFX, _T("[mag_min]"), m_mag_min);
	RFX_Single(pFX, _T("[var_amp]"), m_var_amp);
	RFX_Text(pFX, _T("[n_var_amp]"), m_n_var_amp);
	RFX_Single(pFX, _T("[var_per]"), m_var_per);
	RFX_Single(pFX, _T("[var_Epoch]"), m_var_Epoch);
	RFX_Int(pFX, _T("[var_typ]"), m_var_typ);
	RFX_Byte(pFX, _T("[r_var]"), m_r_var);
	RFX_Single(pFX, _T("[mag_1]"), m_mag_1);
	RFX_Single(pFX, _T("[v_mag_1]"), m_v_mag_1);
	RFX_Single(pFX, _T("[e_mag_1]"), m_e_mag_1);
	RFX_Text(pFX, _T("[n_mag_1]"), m_n_mag_1);
	RFX_Text(pFX, _T("[p_mag_1]"), m_p_mag_1);
	RFX_Byte(pFX, _T("[r_mag_1]"), m_r_mag_1);
	RFX_Single(pFX, _T("[mag_2]"), m_mag_2);
	RFX_Single(pFX, _T("[v_mag_2]"), m_v_mag_2);
	RFX_Single(pFX, _T("[e_mag_2]"), m_e_mag_2);
	RFX_Text(pFX, _T("[n_mag_2]"), m_n_mag_2);
	RFX_Text(pFX, _T("[p_mag_2]"), m_p_mag_2);
	RFX_Int(pFX, _T("[r_mag_2]"), m_r_mag_2);
	RFX_Single(pFX, _T("[mag1-mag2]"), m_mag1_mag2);
	RFX_Text(pFX, _T("[f_mag_1]"), m_f_mag_1);
	RFX_Text(pFX, _T("[f_mag_2]"), m_f_mag_2);
	RFX_Single(pFX, _T("[mag_3]"), m_mag_3);
	RFX_Single(pFX, _T("[v_mag_3]"), m_v_mag_3);
	RFX_Single(pFX, _T("[e_mag_3]"), m_e_mag_3);
	RFX_Text(pFX, _T("[n_mag_3]"), m_n_mag_3);
	RFX_Text(pFX, _T("[p_mag_3]"), m_p_mag_3);
	RFX_Byte(pFX, _T("[r_mag_3]"), m_r_mag_3);
	RFX_Text(pFX, _T("[f_mag_3]"), m_f_mag_3);
	RFX_Text(pFX, _T("[u_WDS]"), m_u_WDS);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CSMRecordset diagnostics

#ifdef _DEBUG
void CSMRecordset::AssertValid() const
{
	CRecordset::AssertValid();
}

void CSMRecordset::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
