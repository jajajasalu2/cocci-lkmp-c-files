cocci_test_suite() {
	struct mcp3422 {
		struct i2c_client *i2c;
		u8 id;
		u8 config;
		u8 pga[4];
		struct mutex lock;
	} cocci_id/* drivers/iio/adc/mcp3422.c 86 */;
	const int cocci_id/* drivers/iio/adc/mcp3422.c 65 */[4];
	const int cocci_id/* drivers/iio/adc/mcp3422.c 58 */[4][4];
	struct i2c_driver cocci_id/* drivers/iio/adc/mcp3422.c 414 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/mcp3422.c 407 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/adc/mcp3422.c 393 */[];
	u8 cocci_id/* drivers/iio/adc/mcp3422.c 334 */;
	struct mcp3422 *cocci_id/* drivers/iio/adc/mcp3422.c 332 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/mcp3422.c 331 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/adc/mcp3422.c 329 */;
	struct i2c_client *cocci_id/* drivers/iio/adc/mcp3422.c 328 */;
	int cocci_id/* drivers/iio/adc/mcp3422.c 328 */;
	const struct iio_info cocci_id/* drivers/iio/adc/mcp3422.c 321 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/mcp3422.c 305 */[];
	const struct attribute_group cocci_id/* drivers/iio/adc/mcp3422.c 301 */;
	struct attribute *cocci_id/* drivers/iio/adc/mcp3422.c 295 */[];
	struct device_attribute *cocci_id/* drivers/iio/adc/mcp3422.c 267 */;
	char *cocci_id/* drivers/iio/adc/mcp3422.c 267 */;
	struct device *cocci_id/* drivers/iio/adc/mcp3422.c 266 */;
	ssize_t cocci_id/* drivers/iio/adc/mcp3422.c 266 */;
	long cocci_id/* drivers/iio/adc/mcp3422.c 157 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/mcp3422.c 134 */;
	u32 cocci_id/* drivers/iio/adc/mcp3422.c 116 */;
	u8 cocci_id/* drivers/iio/adc/mcp3422.c 115 */[4];
	u8 *cocci_id/* drivers/iio/adc/mcp3422.c 111 */;
	int *cocci_id/* drivers/iio/adc/mcp3422.c 111 */;
}
