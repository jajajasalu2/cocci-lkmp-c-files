cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 98 */;
	struct rb070d30_panel cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 45 */;
	struct rb070d30_panel *cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 43 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 43 */;
	struct rb070d30_panel {
		struct drm_panel panel;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct {
			struct gpio_desc *power;
			struct gpio_desc *reset;
			struct gpio_desc *updn;
			struct gpio_desc *shlr;
		} gpios;
	} cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 29 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 244 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 238 */[];
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 160 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 152 */;
	const u32 cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 128 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 127 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 125 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-ronbo-rb070d30.c 107 */;
}
