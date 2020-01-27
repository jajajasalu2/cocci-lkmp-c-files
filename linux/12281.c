cocci_test_suite() {
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 68 */;
	struct innolux_panel cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 65 */;
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 557 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 503 */;
	struct innolux_panel {
		struct drm_panel base;
		struct mipi_dsi_device *link;
		const struct panel_desc *desc;
		struct backlight_device *backlight;
		struct regulator_bulk_data *supplies;
		struct gpio_desc *enable_gpio;
		bool prepared;
		bool enabled;
	} cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 50 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 455 */;
	struct innolux_panel *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 454 */;
	const struct panel_desc *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 452 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 451 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 451 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 440 */[];
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 432 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 410 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 409 */;
	struct panel_desc {
		const struct drm_display_mode *mode;
		unsigned int bpc;
		struct {
			unsigned int width;
			unsigned int height;
		} size;
		unsigned long flags;
		enum mipi_dsi_pixel_format format;
		const struct panel_init_cmd *init_cmds;
		unsigned int lanes;
		const char *const *supply_names;
		unsigned int num_supplies;
		unsigned int sleep_mode_delay;
		unsigned int power_down_delay;
	} cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 32 */;
	char cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 29 */[];
	const struct panel_init_cmd cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 280 */[];
	const struct panel_desc cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 241 */;
	struct panel_init_cmd {
		size_t len;
		const char *data;
	} cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 23 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 228 */;
	const char *const cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 224 */[];
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 146 */;
	const struct panel_init_cmd *cocci_id/* drivers/gpu/drm/panel/panel-innolux-p079zca.c 144 */;
}
