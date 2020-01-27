cocci_test_suite() {
	struct corgi_lcd {
		struct spi_device *spi_dev;
		struct lcd_device *lcd_dev;
		struct backlight_device *bl_dev;
		int limit_mask;
		int intensity;
		int power;
		int mode;
		char buf[2];
		int gpio_backlight_on;
		int gpio_backlight_cont;
		int gpio_backlight_cont_inverted;
		void (*kick_battery)(void);
	} cocci_id/* drivers/video/backlight/corgi_lcd.c 82 */;
	struct spi_driver cocci_id/* drivers/video/backlight/corgi_lcd.c 594 */;
	struct corgi_lcd cocci_id/* drivers/video/backlight/corgi_lcd.c 542 */;
	struct corgi_lcd_platform_data *cocci_id/* drivers/video/backlight/corgi_lcd.c 533 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/corgi_lcd.c 532 */;
	struct spi_device *cocci_id/* drivers/video/backlight/corgi_lcd.c 530 */;
	struct device *cocci_id/* drivers/video/backlight/corgi_lcd.c 468 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/corgi_lcd.c 452 */;
	void cocci_id/* drivers/video/backlight/corgi_lcd.c 441 */;
	struct corgi_lcd *cocci_id/* drivers/video/backlight/corgi_lcd.c 391 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/corgi_lcd.c 389 */;
	int cocci_id/* drivers/video/backlight/corgi_lcd.c 389 */;
	struct lcd_ops cocci_id/* drivers/video/backlight/corgi_lcd.c 383 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/corgi_lcd.c 376 */;
	struct fb_videomode *cocci_id/* drivers/video/backlight/corgi_lcd.c 335 */;
	struct spi_transfer cocci_id/* drivers/video/backlight/corgi_lcd.c 174 */;
	struct spi_message cocci_id/* drivers/video/backlight/corgi_lcd.c 173 */;
	uint8_t cocci_id/* drivers/video/backlight/corgi_lcd.c 171 */;
	unsigned long cocci_id/* drivers/video/backlight/corgi_lcd.c 103 */;
	int cocci_id/* drivers/video/backlight/corgi_lcd.c 100 */(struct corgi_lcd *lcd,
								  int reg,
								  uint8_t val);
}
