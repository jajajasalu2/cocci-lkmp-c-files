cocci_test_suite() {
	__be16 cocci_id/* drivers/staging/iio/adc/ad7816.c 68 */;
	u16 *cocci_id/* drivers/staging/iio/adc/ad7816.c 64 */;
	enum ad7816_type{ID_AD7816, ID_AD7817, ID_AD7818,} cocci_id/* drivers/staging/iio/adc/ad7816.c 55 */;
	struct spi_driver cocci_id/* drivers/staging/iio/adc/ad7816.c 440 */;
	struct ad7816_chip_info {
		kernel_ulong_t id;
		struct spi_device *spi_dev;
		struct gpio_desc *rdwr_pin;
		struct gpio_desc *convert_pin;
		struct gpio_desc *busy_pin;
		u8 oti_data[AD7816_CS_MAX + 1];
		u8 channel_id;
		u8 mode;
	} cocci_id/* drivers/staging/iio/adc/ad7816.c 44 */;
	const struct spi_device_id cocci_id/* drivers/staging/iio/adc/ad7816.c 431 */[];
	const struct of_device_id cocci_id/* drivers/staging/iio/adc/ad7816.c 423 */[];
	struct iio_dev *cocci_id/* drivers/staging/iio/adc/ad7816.c 355 */;
	struct ad7816_chip_info *cocci_id/* drivers/staging/iio/adc/ad7816.c 354 */;
	struct spi_device *cocci_id/* drivers/staging/iio/adc/ad7816.c 352 */;
	const struct iio_info cocci_id/* drivers/staging/iio/adc/ad7816.c 343 */;
	u8 cocci_id/* drivers/staging/iio/adc/ad7816.c 297 */;
	long cocci_id/* drivers/staging/iio/adc/ad7816.c 296 */;
	size_t cocci_id/* drivers/staging/iio/adc/ad7816.c 292 */;
	const char *cocci_id/* drivers/staging/iio/adc/ad7816.c 291 */;
	struct device_attribute *cocci_id/* drivers/staging/iio/adc/ad7816.c 290 */;
	struct device *cocci_id/* drivers/staging/iio/adc/ad7816.c 289 */;
	ssize_t cocci_id/* drivers/staging/iio/adc/ad7816.c 289 */;
	irqreturn_t cocci_id/* drivers/staging/iio/adc/ad7816.c 262 */;
	void *cocci_id/* drivers/staging/iio/adc/ad7816.c 262 */;
	int cocci_id/* drivers/staging/iio/adc/ad7816.c 262 */;
	const struct attribute_group cocci_id/* drivers/staging/iio/adc/ad7816.c 249 */;
	struct attribute *cocci_id/* drivers/staging/iio/adc/ad7816.c 241 */[];
	s8 cocci_id/* drivers/staging/iio/adc/ad7816.c 220 */;
	u16 cocci_id/* drivers/staging/iio/adc/ad7816.c 219 */;
	unsigned long cocci_id/* drivers/staging/iio/adc/ad7816.c 182 */;
	char *cocci_id/* drivers/staging/iio/adc/ad7816.c 157 */;
}
