cocci_test_suite() {
	enum REG_ADDR{REG_ID=0x80, REG_PORTA, REG_PORTB, REG_PORTC, REG_PORTD, REG_POWERON, REG_PWM, REG_DDRA, REG_DDRB, REG_DDRC, REG_DDRD, REG_TEST, REG_WR_ADDRL, REG_WR_ADDRH, REG_READH, REG_READL, REG_WRITEH, REG_WRITEL, REG_ID2,} cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 64 */;
	void __exit cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 505 */;
	void cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 505 */;
	int __init cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 498 */;
	struct i2c_driver cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 489 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 483 */[];
	struct mipi_dsi_driver cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 478 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 460 */;
	struct mipi_dsi_device_info cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 368 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 366 */;
	struct device_node *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 365 */;
	struct device *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 363 */;
	const struct i2c_device_id *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 361 */;
	struct i2c_client *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 360 */;
	const struct drm_panel_funcs cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 352 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 323 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 322 */;
	const u32 cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 319 */;
	unsigned int cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 318 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 317 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 316 */;
	int cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 254 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 240 */[];
	u32 cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 238 */;
	u16 cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 238 */;
	u8 cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 223 */;
	struct rpi_touchscreen cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 220 */;
	struct rpi_touchscreen *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 218 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 218 */;
	const struct drm_display_mode cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 200 */[];
	struct rpi_touchscreen {
		struct drm_panel base;
		struct mipi_dsi_device *dsi;
		struct i2c_client *i2c;
	} cocci_id/* drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.c 194 */;
}
