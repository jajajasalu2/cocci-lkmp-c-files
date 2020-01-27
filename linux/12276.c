cocci_test_suite() {
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 90 */;
	ssize_t cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 77 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 75 */;
	u8 *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 75 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 52 */[3];
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 434 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 40 */;
	struct sharp_panel cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 37 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 351 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 347 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 338 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 319 */;
	struct sharp_panel *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 317 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 317 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 311 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 303 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 283 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 268 */;
	struct sharp_panel {
		struct drm_panel base;
		struct mipi_dsi_device *link1;
		struct mipi_dsi_device *link2;
		struct backlight_device *backlight;
		struct regulator *supply;
		bool prepared;
		bool enabled;
		const struct drm_display_mode *mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 20 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 168 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sharp-lq101r1sx01.c 133 */;
}
