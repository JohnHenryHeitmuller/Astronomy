#if !defined(AFX_SMRECORDSET_H__4F9FA804_FFC1_11D2_BDD9_00104B2B78D9__INCLUDED_)
#define AFX_SMRECORDSET_H__4F9FA804_FFC1_11D2_BDD9_00104B2B78D9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// SMRecordset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSMRecordset recordset

class CSMRecordset : public CRecordset
{
public:
	CSMRecordset(CDatabase* pDatabase = NULL);
    void Init(void);
	DECLARE_DYNAMIC(CSMRecordset)

// Field/Param Data
	//{{AFX_FIELD(CSMRecordset, CRecordset)
	CString	m_SKY2000;
	long	m_ID;
	long	m_HD;
	CString	m_m_HD;
	CString	m_u_HD;
	long	m_SAO;
	CString	m_m_SAO;
	CString	m_DM;
	CString	m_m_DM;
	CString	m_u_DM;
	int		m_HR;
	CString	m_WDS;
	CString	m_m_WDS;
	long	m_PPM;
	CString	m_u_PPM;
	long	m_ID_merg;
	CString	m_name;
	CString	m_var;
	BYTE	m_RAh;
	BYTE	m_RAm;
	float	m_RAs;
	CString	m_DEsign;
	BYTE	m_DEd;
	BYTE	m_DEm;
	float	m_DEs;
	float	m_e_pos;
	CString	m_n_pos;
	BYTE	m_r_pos;
	float	m_pmRA;
	float	m_pmDE;
	BYTE	m_r_pm;
	float	m_RV;
	BYTE	m_r_RV;
	float	m_Plx;
	float	m_e_Plx;
	BYTE	m_r_Plx;
	float	m_GCI_X;
	float	m_GCI_Y;
	float	m_GCI_Z;
	float	m_GLON;
	float	m_GLAT;
	float	m_Vmag;
	float	m_Vder;
	float	m_e_Vmag;
	CString	m_f_Vmag;
	BYTE	m_r_Vmag;
	BYTE	m_n_Vmag;
	float	m_Bmag;
	float	m_B_V;
	float	m_e_Bmag;
	CString	m_f_Bmag;
	BYTE	m_r_Bmag;
	float	m_Umag;
	float	m_U_B;
	float	m_e_Umag;
	CString	m_n_Umag;
	BYTE	m_r_Umag;
	float	m_Ptv;
	BYTE	m_r_Ptv;
	float	m_Ptg;
	BYTE	m_r_Ptg;
	CString	m_Sp_MK;
	BYTE	m_r_Sp_MK;
	CString	m_Sp;
	BYTE	m_r_Sp;
	float	m_sep;
	float	m_del_mag;
	float	m_per_orb;
	int		m_PA;
	float	m_date;
	BYTE	m_r_dup;
	CString	m_n_del_mag;
	float	m_dis_near;
	float	m_dis_2;
	long	m_ID_A;
	long	m_ID_B;
	long	m_ID_C;
	float	m_mag_max;
	float	m_mag_min;
	float	m_var_amp;
	CString	m_n_var_amp;
	float	m_var_per;
	float	m_var_Epoch;
	int		m_var_typ;
	BYTE	m_r_var;
	float	m_mag_1;
	float	m_v_mag_1;
	float	m_e_mag_1;
	CString	m_n_mag_1;
	CString	m_p_mag_1;
	BYTE	m_r_mag_1;
	float	m_mag_2;
	float	m_v_mag_2;
	float	m_e_mag_2;
	CString	m_n_mag_2;
	CString	m_p_mag_2;
	int		m_r_mag_2;
	float	m_mag1_mag2;
	CString	m_f_mag_1;
	CString	m_f_mag_2;
	float	m_mag_3;
	float	m_v_mag_3;
	float	m_e_mag_3;
	CString	m_n_mag_3;
	CString	m_p_mag_3;
	BYTE	m_r_mag_3;
	CString	m_f_mag_3;
	CString	m_u_WDS;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSMRecordset)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SMRECORDSET_H__4F9FA804_FFC1_11D2_BDD9_00104B2B78D9__INCLUDED_)
