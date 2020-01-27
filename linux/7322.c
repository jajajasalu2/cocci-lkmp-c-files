cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/video/backlight/ams369fg06.c 552 */;
	void cocci_id/* drivers/video/backlight/ams369fg06.c 545 */;
	struct device *cocci_id/* drivers/video/backlight/ams369fg06.c 532 */;
	const unsigned short cocci_id/* drivers/video/backlight/ams369fg06.c 47 */[];
	struct ams369fg06 cocci_id/* drivers/video/backlight/ams369fg06.c 448 */;
	struct backlight_properties cocci_id/* drivers/video/backlight/ams369fg06.c 446 */;
	struct spi_device *cocci_id/* drivers/video/backlight/ams369fg06.c 440 */;
	const struct backlight_ops cocci_id/* drivers/video/backlight/ams369fg06.c 436 */;
	struct lcd_ops cocci_id/* drivers/video/backlight/ams369fg06.c 431 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/ams369fg06.c 389 */;
	struct lcd_platform_data *cocci_id/* drivers/video/backlight/ams369fg06.c 354 */;
	struct ams369fg06 {
		struct device *dev;
		struct spi_device *spi;
		unsigned int power;
		struct lcd_device *ld;
		struct backlight_device *bd;
		struct lcd_platform_data *lcd_pd;
	} cocci_id/* drivers/video/backlight/ams369fg06.c 33 */;
	struct backlight_device *cocci_id/* drivers/video/backlight/ams369fg06.c 311 */;
	const unsigned short *cocci_id/* drivers/video/backlight/ams369fg06.c 288 */[];
	unsigned int cocci_id/* drivers/video/backlight/ams369fg06.c 212 */;
	const unsigned int *cocci_id/* drivers/video/backlight/ams369fg06.c 210 */;
	struct ams369fg06 *cocci_id/* drivers/video/backlight/ams369fg06.c 209 */;
	int cocci_id/* drivers/video/backlight/ams369fg06.c 209 */;
	const unsigned short *cocci_id/* drivers/video/backlight/ams369fg06.c 191 */;
	unsigned char cocci_id/* drivers/video/backlight/ams369fg06.c 177 */;
	struct spi_transfer cocci_id/* drivers/video/backlight/ams369fg06.c 164 */;
	struct spi_message cocci_id/* drivers/video/backlight/ams369fg06.c 162 */;
	u16 cocci_id/* drivers/video/backlight/ams369fg06.c 161 */[1];
	unsigned int *cocci_id/* drivers/video/backlight/ams369fg06.c 152 */;
	struct ams369fg06_gamma cocci_id/* drivers/video/backlight/ams369fg06.c 151 */;
	struct ams369fg06_gamma {
		unsigned int *gamma_22_table[MAX_GAMMA_LEVEL];
	} cocci_id/* drivers/video/backlight/ams369fg06.c 147 */;
	const unsigned int cocci_id/* drivers/video/backlight/ams369fg06.c 135 */[];
}
