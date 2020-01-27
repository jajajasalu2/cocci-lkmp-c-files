cocci_test_suite() {
	struct hx8357_data {
		unsigned im_pins[HX8357_NUM_IM_PINS];
		unsigned reset;
		struct spi_device *spi;
		int state;
		bool use_im_pins;
	} cocci_id/* drivers/video/backlight/hx8357.c 85 */;
	struct spi_driver cocci_id/* drivers/video/backlight/hx8357.c 669 */;
	int (*cocci_id/* drivers/video/backlight/hx8357.c 658 */)(struct lcd_device *);
	const struct of_device_id *cocci_id/* drivers/video/backlight/hx8357.c 585 */;
	struct spi_device *cocci_id/* drivers/video/backlight/hx8357.c 581 */;
	const struct of_device_id cocci_id/* drivers/video/backlight/hx8357.c 568 */[];
	struct lcd_ops cocci_id/* drivers/video/backlight/hx8357.c 563 */;
	struct hx8357_data *cocci_id/* drivers/video/backlight/hx8357.c 558 */;
	void cocci_id/* drivers/video/backlight/hx8357.c 319 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/hx8357.c 275 */;
	int cocci_id/* drivers/video/backlight/hx8357.c 275 */;
	u8 cocci_id/* drivers/video/backlight/hx8357.c 264 */;
	u8 *cocci_id/* drivers/video/backlight/hx8357.c 264 */;
	u16 *cocci_id/* drivers/video/backlight/hx8357.c 220 */;
	struct spi_transfer cocci_id/* drivers/video/backlight/hx8357.c 219 */[2];
	struct spi_message cocci_id/* drivers/video/backlight/hx8357.c 218 */;
	u16 cocci_id/* drivers/video/backlight/hx8357.c 214 */;
	u8 cocci_id/* drivers/video/backlight/hx8357.c 130 */[];
}
