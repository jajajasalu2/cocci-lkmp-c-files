cocci_test_suite() {
	struct spi_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 88 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 88 */;
	u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 67 */[16];
	struct spi_transfer cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 60 */;
	struct spi_message cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 59 */;
	u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 57 */;
	u16 cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 57 */;
	struct panel_drv_data cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 55 */;
	struct panel_drv_data {
		struct omap_dss_device dssdev;
		struct omap_dss_device *in;
		struct spi_device *spi;
		int data_lines;
		struct omap_video_timings videomode;
		int backlight_gpio;
		struct gpio_desc *enable_gpio;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 39 */;
	struct spi_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 342 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 335 */[];
	struct gpio_desc *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 244 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 241 */;
	struct omap_dss_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 225 */;
	struct panel_drv_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 219 */;
	struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 217 */;
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 216 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 216 */;
	const struct omap_video_timings cocci_id/* drivers/video/fbdev/omap2/omapfb/displays/panel-lgphilips-lb035q02.c 18 */;
}
