cocci_test_suite() {
	struct st7701_panel_desc {
		const struct drm_display_mode *mode;
		unsigned int lanes;
		unsigned long flags;
		enum mipi_dsi_pixel_format format;
		const char *const *supply_names;
		unsigned int num_supplies;
		unsigned int panel_sleep_delay;
	} cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 91 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 413 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 407 */[];
	const struct st7701_panel_desc *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 335 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 333 */;
	const struct st7701_panel_desc cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 323 */;
	const char *const cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 318 */[];
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 299 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 291 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 271 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 270 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 231 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 129 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 125 */[];
	size_t cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 118 */;
	const void *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 117 */;
	struct st7701 cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 114 */;
	struct st7701 *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 112 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 112 */;
	struct st7701 {
		struct drm_panel panel;
		struct mipi_dsi_device *dsi;
		const struct st7701_panel_desc *desc;
		struct backlight_device *backlight;
		struct regulator_bulk_data *supplies;
		struct gpio_desc *reset;
		unsigned int sleep_delay;
	} cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7701.c 101 */;
}
