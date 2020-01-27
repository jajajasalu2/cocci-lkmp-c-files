cocci_test_suite() {
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 37 */;
	struct osd101t2587_panel cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 34 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 240 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 232 */;
	struct osd101t2587_panel {
		struct drm_panel base;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *supply;
		bool prepared;
		bool enabled;
		const struct drm_display_mode *default_mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 19 */;
	const struct of_device_id *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 178 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 175 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 159 */;
	struct osd101t2587_panel *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 157 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 157 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 147 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 139 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 118 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-osd-osd101t2587-53ts.c 101 */;
}
