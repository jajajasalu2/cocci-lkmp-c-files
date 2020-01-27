cocci_test_suite() {
	s64 cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 94 */;
	struct wuxga_nt_panel cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 47 */;
	struct wuxga_nt_panel *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 45 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 45 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 303 */;
	struct wuxga_nt_panel {
		struct drm_panel base;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *supply;
		bool prepared;
		bool enabled;
		ktime_t earliest_wake;
		const struct drm_display_mode *mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 30 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 251 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 242 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 208 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 207 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 205 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 199 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 191 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 171 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-panasonic-vvx10f034n00.c 156 */;
}
