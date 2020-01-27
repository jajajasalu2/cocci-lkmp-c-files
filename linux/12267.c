cocci_test_suite() {
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 775 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 768 */[];
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 683 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 673 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 652 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 650 */;
	const struct s6e3ha2_panel_desc cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 624 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 610 */;
	struct s6e3ha2 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 504 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 502 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 474 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 437 */[S6E3HA2_GAMMA_CMD_CNT + 1];
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 427 */;
	unsigned char cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 420 */[];
	struct backlight_device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 411 */;
	struct s6e3ha2 *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 330 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 330 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 31 */[S6E3HA2_NUM_GAMMA_STEPS][S6E3HA2_GAMMA_CMD_CNT];
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 247 */;
	const void *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 245 */;
	size_t cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 245 */;
	struct s6e3ha2 {
		struct device *dev;
		struct drm_panel panel;
		struct backlight_device *bl_dev;
		struct regulator_bulk_data supplies[2];
		struct gpio_desc *reset_gpio;
		struct gpio_desc *enable_gpio;
		const struct s6e3ha2_panel_desc *desc;
	} cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 233 */;
	struct s6e3ha2_panel_desc {
		const struct drm_display_mode *mode;
		enum s6e3ha2_type type;
	} cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 228 */;
	enum s6e3ha2_type{HA2_TYPE, HF2_TYPE,} cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 223 */;
	unsigned char cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e3ha2.c 218 */[S6E3HA2_VINT_STATUS_MAX];
}
