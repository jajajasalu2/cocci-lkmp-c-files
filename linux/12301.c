cocci_test_suite() {
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 461 */;
	const struct kingdisplay_panel_cmd cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 45 */[];
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 405 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 400 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 375 */;
	struct kingdisplay_panel *cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 373 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 373 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 367 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 359 */;
	struct kingdisplay_panel_cmd {
		char cmd;
		char data;
	} cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 34 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 338 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 323 */;
	struct kingdisplay_panel_cmd cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 260 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 239 */;
	struct kingdisplay_panel {
		struct drm_panel base;
		struct mipi_dsi_device *link;
		struct backlight_device *backlight;
		struct regulator *supply;
		struct gpio_desc *enable_gpio;
		bool prepared;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 22 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 186 */;
	struct kingdisplay_panel cocci_id/* drivers/gpu/drm/panel/panel-kingdisplay-kd097d04.c 183 */;
}
