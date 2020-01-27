cocci_test_suite() {
	const struct ili9881c_instr cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 69 */[];
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 490 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 484 */[];
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 426 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 424 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 416 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 394 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 392 */;
	struct ili9881c_instr {
		enum ili9881c_op op;
		union arg {
			struct cmd {
				u8 cmd;
				u8 data;
			} cmd;
			u8 page;
		} arg;
	} cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 38 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 375 */;
	struct ili9881c *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 358 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 356 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 356 */;
	enum ili9881c_op{ILI9881C_SWITCH_PAGE, ILI9881C_COMMAND,} cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 33 */;
	const struct ili9881c_instr *cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 317 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 300 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 287 */[2];
	u8 cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 285 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 275 */[4];
	struct ili9881c cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 259 */;
	struct ili9881c {
		struct drm_panel panel;
		struct mipi_dsi_device *dsi;
		struct backlight_device *backlight;
		struct regulator *power;
		struct gpio_desc *reset;
	} cocci_id/* drivers/gpu/drm/panel/panel-ilitek-ili9881c.c 24 */;
}
