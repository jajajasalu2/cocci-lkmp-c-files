cocci_test_suite() {
	struct panel_lvds *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 51 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 49 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 49 */;
	struct panel_lvds cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 46 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 286 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 279 */[];
	struct panel_lvds {
		struct drm_panel panel;
		struct device *dev;
		const char *label;
		unsigned int width;
		unsigned int height;
		struct videomode video_mode;
		unsigned int bus_format;
		bool data_mirror;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct gpio_desc *enable_gpio;
		struct gpio_desc *reset_gpio;
	} cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 26 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 197 */;
	const char *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 146 */;
	struct display_timing cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 145 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 144 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 134 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 113 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-lvds.c 112 */;
}
