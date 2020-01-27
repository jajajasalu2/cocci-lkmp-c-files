cocci_test_suite() {
	u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 88 */[3];
	u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 77 */;
	u8 *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 76 */;
	u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 72 */[2];
	u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 69 */;
	struct panel_drv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 69 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 69 */;
	struct spi_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 463 */;
	const struct spi_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 455 */[];
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 446 */[];
	struct spi_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 373 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 358 */;
	struct omap_dss_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 344 */;
	struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 336 */;
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 335 */;
	const struct omap_video_timings cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 33 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 295 */;
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		struct omap_dss_device *in;
		int data_lines;
		struct omap_video_timings videomode;
		struct spi_device *spi_dev;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 22 */;
	struct panel_drv_data cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 156 */;
	enum jbt_register{JBT_REG_SLEEP_IN=0x10, JBT_REG_SLEEP_OUT=0x11, JBT_REG_DISPLAY_OFF=0x28, JBT_REG_DISPLAY_ON=0x29, JBT_REG_RGB_FORMAT=0x3a, JBT_REG_QUAD_RATE=0x3b, JBT_REG_POWER_ON_OFF=0xb0, JBT_REG_BOOSTER_OP=0xb1, JBT_REG_BOOSTER_MODE=0xb2, JBT_REG_BOOSTER_FREQ=0xb3, JBT_REG_OPAMP_SYSCLK=0xb4, JBT_REG_VSC_VOLTAGE=0xb5, JBT_REG_VCOM_VOLTAGE=0xb6, JBT_REG_EXT_DISPL=0xb7, JBT_REG_OUTPUT_CONTROL=0xb8, JBT_REG_DCCLK_DCEV=0xb9, JBT_REG_DISPLAY_MODE1=0xba, JBT_REG_DISPLAY_MODE2=0xbb, JBT_REG_DISPLAY_MODE=0xbc, JBT_REG_ASW_SLEW=0xbd, JBT_REG_DUMMY_DISPLAY=0xbe, JBT_REG_DRIVE_SYSTEM=0xbf, JBT_REG_SLEEP_OUT_FR_A=0xc0, JBT_REG_SLEEP_OUT_FR_B=0xc1, JBT_REG_SLEEP_OUT_FR_C=0xc2, JBT_REG_SLEEP_IN_LCCNT_D=0xc3, JBT_REG_SLEEP_IN_LCCNT_E=0xc4, JBT_REG_SLEEP_IN_LCCNT_F=0xc5, JBT_REG_SLEEP_IN_LCCNT_G=0xc6, JBT_REG_GAMMA1_FINE_1=0xc7, JBT_REG_GAMMA1_FINE_2=0xc8, JBT_REG_GAMMA1_INCLINATION=0xc9, JBT_REG_GAMMA1_BLUE_OFFSET=0xca, JBT_REG_BLANK_CONTROL=0xcf, JBT_REG_BLANK_TH_TV=0xd0, JBT_REG_CKV_ON_OFF=0xd1, JBT_REG_CKV_1_2=0xd2, JBT_REG_OEV_TIMING=0xd3, JBT_REG_ASW_TIMING_1=0xd4, JBT_REG_ASW_TIMING_2=0xd5, JBT_REG_HCLOCK_VGA=0xec, JBT_REG_HCLOCK_QVGA=0xed,} cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-tpo-td028ttec1.c 104 */;
}
