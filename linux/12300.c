cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 437 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 431 */[];
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 373 */;
	struct spi_device *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 371 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 363 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 335 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 176 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 175 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 160 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 138 */;
	struct spi_message cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 137 */;
	struct spi_transfer cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 136 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 134 */;
	enum st7789v_prefix cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 133 */;
	struct st7789v cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 130 */;
	struct st7789v *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 128 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 128 */;
	enum st7789v_prefix{ST7789V_COMMAND=0, ST7789V_DATA=1,} cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 123 */;
	struct st7789v {
		struct drm_panel panel;
		struct spi_device *spi;
		struct gpio_desc *reset;
		struct backlight_device *backlight;
		struct regulator *power;
	} cocci_id/* drivers/gpu/drm/panel/panel-sitronix-st7789v.c 115 */;
}
