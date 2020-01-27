cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/adc/ad799x.c 881 */;
	enum{ad7991, ad7995, ad7999, ad7992, ad7993, ad7994, ad7997, ad7998,} cocci_id/* drivers/iio/adc/ad799x.c 88 */;
	const struct i2c_device_id cocci_id/* drivers/iio/adc/ad799x.c 867 */[];
	const struct ad799x_chip_info *cocci_id/* drivers/iio/adc/ad799x.c 766 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/adc/ad799x.c 761 */;
	struct i2c_client *cocci_id/* drivers/iio/adc/ad799x.c 760 */;
	const struct ad799x_chip_info cocci_id/* drivers/iio/adc/ad799x.c 586 */[];
	const struct iio_event_spec cocci_id/* drivers/iio/adc/ad799x.c 543 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/ad799x.c 523 */;
	const struct attribute_group cocci_id/* drivers/iio/adc/ad799x.c 519 */;
	struct attribute *cocci_id/* drivers/iio/adc/ad799x.c 513 */[];
	struct ad799x_state *cocci_id/* drivers/iio/adc/ad799x.c 478 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/ad799x.c 477 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ad799x.c 475 */;
	void *cocci_id/* drivers/iio/adc/ad799x.c 475 */;
	int cocci_id/* drivers/iio/adc/ad799x.c 475 */;
	int *cocci_id/* drivers/iio/adc/ad799x.c 458 */;
	enum iio_event_info cocci_id/* drivers/iio/adc/ad799x.c 457 */;
	unsigned int cocci_id/* drivers/iio/adc/ad799x.c 412 */;
	enum iio_event_direction cocci_id/* drivers/iio/adc/ad799x.c 371 */;
	enum iio_event_type cocci_id/* drivers/iio/adc/ad799x.c 370 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ad799x.c 369 */;
	size_t cocci_id/* drivers/iio/adc/ad799x.c 329 */;
	const char *cocci_id/* drivers/iio/adc/ad799x.c 328 */;
	char *cocci_id/* drivers/iio/adc/ad799x.c 314 */;
	struct device_attribute *cocci_id/* drivers/iio/adc/ad799x.c 313 */;
	struct device *cocci_id/* drivers/iio/adc/ad799x.c 312 */;
	ssize_t cocci_id/* drivers/iio/adc/ad799x.c 312 */;
	const unsigned int cocci_id/* drivers/iio/adc/ad799x.c 302 */[];
	long cocci_id/* drivers/iio/adc/ad799x.c 274 */;
	u8 cocci_id/* drivers/iio/adc/ad799x.c 246 */;
	unsigned cocci_id/* drivers/iio/adc/ad799x.c 244 */;
	const unsigned long *cocci_id/* drivers/iio/adc/ad799x.c 219 */;
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ad799x.c 178 */;
	u16 cocci_id/* drivers/iio/adc/ad799x.c 135 */;
	struct ad799x_state {
		struct i2c_client *client;
		const struct ad799x_chip_config *chip_config;
		struct regulator *reg;
		struct regulator *vref;
		unsigned id;
		u16 config;
		u8 *rx_buf;
		unsigned int transfer_size;
	} cocci_id/* drivers/iio/adc/ad799x.c 123 */;
	struct ad799x_chip_info {
		int num_channels;
		const struct ad799x_chip_config noirq_config;
		const struct ad799x_chip_config irq_config;
	} cocci_id/* drivers/iio/adc/ad799x.c 117 */;
	struct ad799x_chip_config {
		const struct iio_chan_spec channel[9];
		u16 default_config;
		const struct iio_info *info;
	} cocci_id/* drivers/iio/adc/ad799x.c 105 */;
}
