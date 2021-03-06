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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000053704398_1086445890_init();
    work_m_00000000001278591338_2437389400_init();
    work_m_00000000001237567538_2254082409_init();
    work_m_00000000000466617681_1978930694_init();
    work_m_00000000002418031515_4020927633_init();
    work_m_00000000000997237360_2553651557_init();
    work_m_00000000002307175639_0046163887_init();
    work_m_00000000001459658847_0720750977_init();
    work_m_00000000001702321542_2863023267_init();
    work_m_00000000003752170268_3683860065_init();
    work_m_00000000000849213959_3867085207_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000849213959_3867085207");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
