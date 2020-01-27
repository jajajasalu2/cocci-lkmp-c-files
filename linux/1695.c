cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/health/max30102.c 625 */;
	const struct of_device_id cocci_id/* drivers/iio/health/max30102.c 618 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/health/max30102.c 611 */[];
	struct iio_buffer *cocci_id/* drivers/iio/health/max30102.c 510 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/health/max30102.c 507 */;
	struct i2c_client *cocci_id/* drivers/iio/health/max30102.c 506 */;
	const struct iio_info cocci_id/* drivers/iio/health/max30102.c 502 */;
	long cocci_id/* drivers/iio/health/max30102.c 470 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/health/max30102.c 469 */;
	bool cocci_id/* drivers/iio/health/max30102.c 441 */;
	enum max3012_led_idx{MAX30102_LED_RED, MAX30102_LED_IR, MAX30105_LED_GREEN,} cocci_id/* drivers/iio/health/max30102.c 37 */;
	struct device_node *cocci_id/* drivers/iio/health/max30102.c 326 */;
	struct device *cocci_id/* drivers/iio/health/max30102.c 325 */;
	enum max30102_chip_id{max30102, max30105,} cocci_id/* drivers/iio/health/max30102.c 32 */;
	int *cocci_id/* drivers/iio/health/max30102.c 315 */;
	irqreturn_t cocci_id/* drivers/iio/health/max30102.c 291 */;
	void *cocci_id/* drivers/iio/health/max30102.c 291 */;
	u8 *cocci_id/* drivers/iio/health/max30102.c 265 */;
	unsigned int cocci_id/* drivers/iio/health/max30102.c 242 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/health/max30102.c 235 */;
	u8 cocci_id/* drivers/iio/health/max30102.c 196 */;
	struct max30102_data *cocci_id/* drivers/iio/health/max30102.c 194 */;
	struct iio_dev *cocci_id/* drivers/iio/health/max30102.c 192 */;
	int cocci_id/* drivers/iio/health/max30102.c 192 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/health/max30102.c 147 */[];
	const unsigned long cocci_id/* drivers/iio/health/max30102.c 121 */[];
	const struct regmap_config cocci_id/* drivers/iio/health/max30102.c 114 */;
	struct max30102_data {
		struct i2c_client *client;
		struct iio_dev *indio_dev;
		struct mutex lock;
		struct regmap *regmap;
		enum max30102_chip_id chip_id;
		u8 buffer[12];
		__be32 processed_buffer[3];
	} cocci_id/* drivers/iio/health/max30102.c 103 */;
}
