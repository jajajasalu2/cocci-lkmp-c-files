cocci_test_suite() {
	const struct cmd_set cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 77 */[];
	struct truly_nt35597 cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 74 */;
	struct truly_nt35597 *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 72 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 72 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 668 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 659 */[];
	const struct mipi_dsi_device_info cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 563 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 558 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 557 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 552 */;
	const struct nt35597_config cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 543 */;
	struct truly_nt35597 {
		struct device *dev;
		struct drm_panel panel;
		struct regulator_bulk_data supplies[ARRAY_SIZE(regulator_names)];
		struct gpio_desc *reset_gpio;
		struct gpio_desc *mode_gpio;
		struct backlight_device *backlight;
		struct mipi_dsi_device *dsi[2];
		const struct nt35597_config *config;
		bool prepared;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 54 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 528 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 491 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 481 */;
	const struct nt35597_config *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 462 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 461 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 459 */;
	struct nt35597_config {
		u32 width_mm;
		u32 height_mm;
		const char *panel_name;
		const struct cmd_set *panel_on_cmds;
		u32 num_on_cmds;
		const struct drm_display_mode *dm;
	} cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 45 */;
	struct cmd_set {
		u8 commands[4];
		u8 size;
	} cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 40 */;
	const struct cmd_set *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 376 */;
	const unsigned long cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 34 */[];
	int cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 262 */;
	const u8 *cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 244 */;
	u32 cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 226 */;
	const char *const cocci_id/* drivers/gpu/drm/panel/panel-truly-nt35597.c 22 */[];
}
