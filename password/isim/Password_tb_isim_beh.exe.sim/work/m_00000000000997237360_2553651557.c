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
static const char *ng0 = "C:/Users/let02/Documents/let02_WorkSpace/StudyMaterials/Verilog_2/final_exam/password/password/lights_control.v";
static const char *ng1 = "%4dns: green=%d, red=%d, yellow=%d";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_8_0(char *t0)
{
    char t4[8];
    char t29[8];
    char t42[8];
    char t55[8];
    char t61[8];
    char t96[8];
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
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1688U);
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

LAB13:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB19;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;

LAB19:    memset(t29, 0, 8);
    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB23:    t23 = (t29 + 4);
    t28 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t23);
    t41 = (t28 || t40);
    if (t41 > 0)
        goto LAB24;

LAB25:    memcpy(t61, t29, 8);

LAB26:    t90 = (t61 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t61);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(27, ng0);

LAB46:    xsi_set_current_line(28, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2088);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = (t0 + 2408);
    t30 = (t23 + 56U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t0, (char)118, t4, 32, (char)118, t6, 1, (char)118, t14, 1, (char)118, t31, 1);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB44:
LAB40:
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

LAB12:    xsi_set_current_line(9, ng0);

LAB15:    xsi_set_current_line(10, ng0);
    *((int *)t29) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t30 = (t29 + 4);
    *((int *)t30) = 0;
    t31 = (t0 + 2088);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2248);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t0, (char)118, t29, 32, (char)118, t33, 1, (char)118, t36, 1, (char)118, t39, 1);
    xsi_set_current_line(11, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB18:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t29) = 1;
    goto LAB23;

LAB22:    t14 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB24:    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t32 = (t31 + 4);
    t33 = (t30 + 4);
    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t30);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t33);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t32);
    t51 = *((unsigned int *)t33);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB30;

LAB27:    if (t52 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t42) = 1;

LAB30:    memset(t55, 0, 8);
    t35 = (t42 + 4);
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t42);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t35) != 0)
        goto LAB33;

LAB34:    t62 = *((unsigned int *)t29);
    t63 = *((unsigned int *)t55);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t37 = (t29 + 4);
    t38 = (t55 + 4);
    t39 = (t61 + 4);
    t65 = *((unsigned int *)t37);
    t66 = *((unsigned int *)t38);
    t67 = (t65 | t66);
    *((unsigned int *)t39) = t67;
    t68 = *((unsigned int *)t39);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    t34 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t55) = 1;
    goto LAB34;

LAB33:    t36 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB34;

LAB35:    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t39);
    *((unsigned int *)t61) = (t70 | t71);
    t72 = (t29 + 4);
    t73 = (t55 + 4);
    t74 = *((unsigned int *)t29);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t55);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t86 & t84);
    t87 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t87 & t85);
    t88 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t88 & t84);
    t89 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t89 & t85);
    goto LAB37;

LAB38:    xsi_set_current_line(15, ng0);

LAB41:    xsi_set_current_line(16, ng0);
    *((int *)t96) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t97 = (t96 + 4);
    *((int *)t97) = 0;
    t98 = (t0 + 2088);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t0 + 2248);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 2408);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t0, (char)118, t96, 32, (char)118, t100, 1, (char)118, t103, 1, (char)118, t106, 1);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB40;

LAB42:    xsi_set_current_line(21, ng0);

LAB45:    xsi_set_current_line(22, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 2088);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2248);
    t23 = (t14 + 56U);
    t30 = *((char **)t23);
    t31 = (t0 + 2408);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t0, (char)118, t4, 32, (char)118, t13, 1, (char)118, t30, 1, (char)118, t33, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB44;

}


extern void work_m_00000000000997237360_2553651557_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000000997237360_2553651557", "isim/Password_tb_isim_beh.exe.sim/work/m_00000000000997237360_2553651557.didat");
	xsi_register_executes(pe);
}
