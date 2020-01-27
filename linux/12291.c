cocci_test_suite() {
	struct ld9040 {
		struct device *dev;
		struct drm_panel panel;
		struct regulator_bulk_data supplies[2];
		struct gpio_desc *reset_gpio;
		u32 power_on_delay;
		u32 reset_delay;
		struct videomode vm;
		u32 width_mm;
		u32 height_mm;
		int brightness;
		int error;
	} cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 91 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 38 */[25][22];
	struct spi_driver cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 376 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 370 */[];
	struct ld9040 cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 320 */;
	struct spi_device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 314 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 299 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 298 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 288 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 268 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 266 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 221 */;
	struct ld9040 *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 172 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 172 */;
	const u8 cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 168 */[];
	const u8 *cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 142 */;
	size_t cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 142 */;
	struct spi_message cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 134 */;
	struct spi_transfer cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 130 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 127 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-samsung-ld9040.c 119 */;
}
