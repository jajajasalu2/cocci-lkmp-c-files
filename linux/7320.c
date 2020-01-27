cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/video/backlight/tdo24m.c 434 */;
	void cocci_id/* drivers/video/backlight/tdo24m.c 427 */;
	struct device *cocci_id/* drivers/video/backlight/tdo24m.c 416 */;
	struct tdo24m cocci_id/* drivers/video/backlight/tdo24m.c 352 */;
	enum tdo24m_model cocci_id/* drivers/video/backlight/tdo24m.c 337 */;
	struct tdo24m_platform_data *cocci_id/* drivers/video/backlight/tdo24m.c 336 */;
	struct spi_transfer *cocci_id/* drivers/video/backlight/tdo24m.c 335 */;
	struct spi_message *cocci_id/* drivers/video/backlight/tdo24m.c 334 */;
	struct spi_device *cocci_id/* drivers/video/backlight/tdo24m.c 331 */;
	struct lcd_ops cocci_id/* drivers/video/backlight/tdo24m.c 325 */;
	struct fb_videomode *cocci_id/* drivers/video/backlight/tdo24m.c 311 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/tdo24m.c 304 */;
	struct tdo24m {
		struct spi_device *spi_dev;
		struct lcd_device *lcd_dev;
		struct spi_message msg;
		struct spi_transfer xfer;
		uint8_t *buf;
		int (*adj_mode)(struct tdo24m *lcd, int mode);
		int color_invert;
		int power;
		int mode;
	} cocci_id/* drivers/video/backlight/tdo24m.c 25 */;
	struct tdo24m *cocci_id/* drivers/video/backlight/tdo24m.c 217 */;
	int cocci_id/* drivers/video/backlight/tdo24m.c 217 */;
	uint32_t cocci_id/* drivers/video/backlight/tdo24m.c 179 */;
	const uint32_t *cocci_id/* drivers/video/backlight/tdo24m.c 175 */;
	const uint32_t cocci_id/* drivers/video/backlight/tdo24m.c 144 */[];
}
