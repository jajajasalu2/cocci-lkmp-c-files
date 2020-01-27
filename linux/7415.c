cocci_test_suite() {
	struct panel_drv_data cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 56 */;
	const struct omap_video_timings cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 35 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 325 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 318 */[];
	int __exit cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 302 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 260 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 214 */;
	struct gpio_desc *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 199 */;
	const char *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 197 */;
	struct gpio_desc **cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 197 */;
	struct device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 196 */;
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		struct omap_dss_device *in;
		struct regulator *vcc;
		int data_lines;
		struct omap_video_timings videomode;
		struct gpio_desc *resb_gpio;
		struct gpio_desc *ini_gpio;
		struct gpio_desc *mo_gpio;
		struct gpio_desc *lr_gpio;
		struct gpio_desc *ud_gpio;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 19 */;
	struct omap_dss_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 182 */;
	struct panel_drv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 176 */;
	struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 174 */;
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 173 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 173 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-sharp-ls037v7dw01.c 127 */;
}
