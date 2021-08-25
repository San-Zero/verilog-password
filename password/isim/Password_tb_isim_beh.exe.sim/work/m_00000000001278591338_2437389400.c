/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/let02/Documents/let02_WorkSpace/StudyMaterials/Verilog_2/final_exam/password/password/keypad.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {11U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {14U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {1U, 0U};



static void Always_12_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(15, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 3, 0LL);
    goto LAB14;

}

static void Always_20_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(26, ng0);

LAB16:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng11)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(55, ng0);

LAB81:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB26:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(22, ng0);

LAB15:    xsi_set_current_line(23, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(28, ng0);

LAB27:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);

LAB28:    t12 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t13, 4, t12, 4);
    if (t32 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t31 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t31 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t31 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(34, ng0);

LAB44:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB39:    goto LAB26;

LAB20:    xsi_set_current_line(37, ng0);

LAB45:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t6 = *((char **)t3);

LAB46:    t3 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 4);
    if (t32 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t31 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t31 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t31 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(43, ng0);

LAB62:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 4, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB57:    goto LAB26;

LAB22:    xsi_set_current_line(46, ng0);

LAB63:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t12 = *((char **)t3);

LAB64:    t3 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t12, 4, t3, 4);
    if (t32 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t31 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t31 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t31 == 1)
        goto LAB71;

LAB72:
LAB74:
LAB73:    xsi_set_current_line(52, ng0);

LAB80:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t14 = *((char **)t3);
    t23 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB75:    goto LAB26;

LAB29:    xsi_set_current_line(30, ng0);

LAB40:    xsi_set_current_line(30, ng0);
    t14 = ((char*)((ng6)));
    t23 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB31:    xsi_set_current_line(31, ng0);

LAB41:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(32, ng0);

LAB42:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(33, ng0);

LAB43:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng11)));
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB47:    xsi_set_current_line(39, ng0);

LAB58:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 4, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(40, ng0);

LAB59:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng12)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(41, ng0);

LAB60:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(42, ng0);

LAB61:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng13)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB57;

LAB65:    xsi_set_current_line(48, ng0);

LAB76:    xsi_set_current_line(48, ng0);
    t14 = ((char*)((ng14)));
    t23 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t23, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB75;

LAB67:    xsi_set_current_line(49, ng0);

LAB77:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng5)));
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB75;

LAB69:    xsi_set_current_line(50, ng0);

LAB78:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng15)));
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB75;

LAB71:    xsi_set_current_line(51, ng0);

LAB79:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng16)));
    t14 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t14, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB75;

}


extern void work_m_00000000001278591338_2437389400_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_20_1};
	xsi_register_didat("work_m_00000000001278591338_2437389400", "isim/Password_tb_isim_beh.exe.sim/work/m_00000000001278591338_2437389400.didat");
	xsi_register_executes(pe);
}
