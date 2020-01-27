cocci_test_suite() {
	struct s6e63m0 {
		struct device *dev;
		struct drm_panel panel;
		struct backlight_device *bl_dev;
		struct regulator_bulk_data supplies[2];
		struct gpio_desc *reset_gpio;
		bool prepared;
		bool enabled;
		int error;
	} cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 89 */;
	struct spi_driver cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 501 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 495 */[];
	struct spi_device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 436 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 421 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 42 */[NUM_GAMMA_LEVELS][GAMMA_TABLE_COUNT];
	struct backlight_properties cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 416 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 414 */;
	const struct backlight_ops cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 410 */;
	struct backlight_device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 394 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 386 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 368 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 367 */;
	const u8 *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 154 */;
	size_t cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 154 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 154 */;
	struct spi_message cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 146 */;
	struct spi_transfer cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 142 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 139 */;
	struct s6e63m0 cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 128 */;
	struct s6e63m0 *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 126 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 126 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-samsung-s6e63m0.c 110 */;
}
