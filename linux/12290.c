cocci_test_suite() {
	struct jdi_panel cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 52 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 505 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 448 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 398 */;
	struct jdi_panel *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 394 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 388 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 380 */;
	struct backlight_properties cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 369 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 368 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 366 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 365 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 360 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 331 */;
	struct jdi_panel {
		struct drm_panel base;
		struct mipi_dsi_device *dsi;
		struct regulator_bulk_data supplies[ARRAY_SIZE(regulator_names)];
		struct gpio_desc *enable_gpio;
		struct gpio_desc *reset_gpio;
		struct gpio_desc *dcdc_en_gpio;
		struct backlight_device *backlight;
		bool prepared;
		bool enabled;
		const struct drm_display_mode *mode;
	} cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 33 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 327 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 305 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 289 */;
	const char *const cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 28 */[];
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-jdi-lt070me05000.c 179 */;
}
