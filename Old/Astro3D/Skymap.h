/*  Skymap.h
    
    SKYMAP SKY2000 Master Catalog, Version 2. September of 1998
*/


class SkymapRecordRaw
{
public:
    char    SKY2000[27],    // A27
            ID[8],          // I8
            HD[6],          // I6   
            m_HD[1],        // A1  
            u_HD[1],        // A1
            SAO[6],         // I6
            m_SAO[1],       // A1
            DM[11],         // A11
            m_DM[1],        // A1
            u_DM[1],        // A1
            HR[4],          // I4
            WDS[10],        // A10      
            m_WDS[5],       // A5
            u_WDS[1],       // A1
            PPM[6],         // I6
            u_PPM[1],       // A1
            ID_merg[8],     // I8
            name[10],       // A10
            var[10],        // A10
            RAh[2],         // I2
            RAm[2],         // I2
            RAs[7],         // F7.4
            DEsign[1],          // A1  
            DEd[2],         // I2  
            DEm[2],         // I2  
            DEs[6],         // F6.3
            e_pos[6],       // F6.4
            n_pos[1],       // A1  
            r_pos[2],       // I2  
            pmRA[8],        // F8.5
            pmDE[7],        // F7.4
            r_pm[2],        // I2  
            RV[6],          // F6.1
            r_RV[2],        // I2  
            Plx[8],         // F8.5
            e_Plx[8],       // F8.6
            r_Plx[2],       // I2  
            GCI_X[9],       // F9.6
            GCI_Y[9],       // F9.6
            GCI_Z[9],       // F9.6
            GLON[6],        // F6.2
            GLAT[6],        // F6.2
            Vmag[6],        // F6.3
            Vder[5],        // F5.2
            e_Vmag[5],      // F5.3
            f_Vmag[1],      // A1  
            r_Vmag[2],      // I2  
            n_Vmag[1],      // I1  
            Bmag[6],        // F6.3
            B_V[6],         // F6.3
            e_Bmag[5],      // F5.3
            f_Bmag[1],      // A1  
            r_Bmag[2],      // I2  
            Umag[6],        // F6.3
            U_B[6],         // F6.3
            e_Umag[5],      // F5.3
            n_Umag[1],      // A1  
            r_Umag[2],      // I2  
            Ptv[4],         // F4.1
            r_Ptv[2],       // I2  
            Ptg[4],         // F4.1
            r_Ptg[2],       // I2  
            Sp_MK[30],      // A30 
            r_Sp_MK[2],     // I2  
            Sp[3],          // A3  
            r_Sp[2],        // I2  
            sep[7],         // F7.3
            del_mag[5],     // F5.2
            per_orb[7],     // F7.2
            PA[3],          // I3  
            date[7],        // F7.2
            r_dup[2],       // I2  
            n_del_mag[1],   // A1  
            dis_near[7],    // F7.4
            dis_2[7],       // F7.4
            ID_A[8],        // I8  
            ID_B[8],        // I8  
            ID_C[8],        // I8  
            mag_max[5],     // F5.2
            mag_min[5],     // F5.2
            var_amp[5],     // F5.2
            n_var_amp[1],   // A1  
            var_per[8],     // F8.2
            var_Epoch[8],   // F8.2
            var_typ[3],     // I3  
            r_var[2],       // I2  
            mag_1[6],       // F6.3
            v_mag_1[6],     // F6.3
            e_mag_1[5],     // F5.3
            n_mag_1[1],     // A1  
            p_mag_1[1],     // A1  
            r_mag_1[2],     // I2  
            mag_2[6],       // F6.3
            v_mag_2[6],     // F6.3
            e_mag_2[5],     // F5.3
            n_mag_2[1],     // A1  
            p_mag_2[1],     // A1  
            r_mag_2[2],     // I2  
            mag1_mag2[6],   // F6.3
            f_mag_1[1],     // A1  
            f_mag_2[1],     // A1  
            mag_3[6],       // F6.3
            v_mag_3[6],     // F6.3
            e_mag_3[5],     // F5.3
            n_mag_3[1],     // A1  
            p_mag_3[1],     // A1  
            r_mag_3[2],     // I2  
            f_mag_3[1],     // A1  
			crlf[2];
};


/*
class SkymapRecordRaw
{
public:

    char    SKY2000[27];
    long    ID;
    long    HD;
    char    m_HD;
    char    u_HD;
    long    SAO;
    char    m_SAO;
    char    DM[11];
    char    m_DM;
    char    u_DM;
    int     HR;
    char    WDS[10];
    char    m_WDS[5];
    char    u_WDS;
    long    PPM;
    char    u_PPM;
    int     ID_merg;
    char    name[10];
    char    var[10];
    int     RAh;
    int     RAm;
    float   RAs      
*/
