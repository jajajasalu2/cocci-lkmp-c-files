cocci_test_suite() {
	struct otm3225a_spi_instruction {
		unsigned char reg;
		unsigned short value;
		unsigned short delay;
	} cocci_id/* drivers/video/backlight/otm3225a.c 80 */;
	struct otm3225a_data {
		struct spi_device *spi;
		struct lcd_device *ld;
		int power;
	} cocci_id/* drivers/video/backlight/otm3225a.c 74 */;
	struct spi_driver cocci_id/* drivers/video/backlight/otm3225a.c 239 */;
	struct otm3225a_data cocci_id/* drivers/video/backlight/otm3225a.c 219 */;
	struct device *cocci_id/* drivers/video/backlight/otm3225a.c 217 */;
	struct spi_device *cocci_id/* drivers/video/backlight/otm3225a.c 213 */;
	struct lcd_ops cocci_id/* drivers/video/backlight/otm3225a.c 208 */;
	struct otm3225a_data *cocci_id/* drivers/video/backlight/otm3225a.c 203 */;
	struct lcd_device *cocci_id/* drivers/video/backlight/otm3225a.c 201 */;
	int cocci_id/* drivers/video/backlight/otm3225a.c 201 */;
	unsigned char cocci_id/* drivers/video/backlight/otm3225a.c 163 */[3];
	unsigned int cocci_id/* drivers/video/backlight/otm3225a.c 161 */;
	struct otm3225a_spi_instruction *cocci_id/* drivers/video/backlight/otm3225a.c 160 */;
	void cocci_id/* drivers/video/backlight/otm3225a.c 159 */;
	struct otm3225a_spi_instruction cocci_id/* drivers/video/backlight/otm3225a.c 136 */[];
}
