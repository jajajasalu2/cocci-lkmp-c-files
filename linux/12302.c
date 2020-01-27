cocci_test_suite() {
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 654 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 648 */[];
	void cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 640 */;
	u32 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 547 */;
	struct backlight_properties cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 545 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 543 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 525 */;
	const char *const cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 518 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 510 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 505 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 470 */;
	struct rad_panel *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 469 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 468 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 466 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 442 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 441 */;
	const struct cmd_set_entry cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 42 */[];
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 404 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 338 */[];
	struct cmd_set_entry {
		u8 cmd;
		u8 param;
	} cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 33 */;
	enum mipi_dsi_pixel_format cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 251 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 251 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 241 */[2];
	const struct cmd_set_entry *cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 240 */;
	size_t cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 235 */;
	struct rad_panel cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 230 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 211 */;
	struct rad_panel {
		struct drm_panel panel;
		struct mipi_dsi_device *dsi;
		struct gpio_desc *reset;
		struct backlight_device *backlight;
		struct regulator_bulk_data *supplies;
		unsigned int num_supplies;
		bool prepared;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 197 */;
	const u32 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 194 */;
	const u32 cocci_id/* drivers/gpu/drm/panel/panel-raydium-rm67191.c 188 */[];
}
