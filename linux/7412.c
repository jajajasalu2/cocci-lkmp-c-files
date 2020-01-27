cocci_test_suite() {
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 93 */;
	struct panel_drv_data cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 34 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 311 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 304 */[];
	int __exit cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 288 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 235 */;
	struct gpio_desc *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 205 */;
	struct videomode cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 204 */;
	struct display_timing cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 203 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 200 */;
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		struct omap_dss_device *in;
		int data_lines;
		struct omap_video_timings videomode;
		int backlight_gpio;
		struct gpio_desc *enable_gpio;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 20 */;
	const struct panel_dpi_platform_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 156 */;
	struct omap_dss_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 140 */;
	struct panel_drv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 134 */;
	struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 132 */;
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 131 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-dpi.c 131 */;
}
