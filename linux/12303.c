cocci_test_suite() {
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 45 */;
	struct sharp_nt_panel cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 40 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 337 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 331 */[];
	void cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 273 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 245 */;
	struct sharp_nt_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 243 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 243 */;
	struct sharp_nt_panel {
		struct drm_panel base;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct gpio_desc *reset_gpio;
		bool prepared;
		bool enabled;
		const struct drm_display_mode *mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 24 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 235 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 215 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 200 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-ls043t1le01.c 103 */;
}
