cocci_test_suite() {
	const int cocci_id/* drivers/iio/proximity/srf08.c 94 */[];
	const struct srf08_chip_info cocci_id/* drivers/iio/proximity/srf08.c 86 */;
	struct i2c_driver cocci_id/* drivers/iio/proximity/srf08.c 548 */;
	const struct i2c_device_id cocci_id/* drivers/iio/proximity/srf08.c 540 */[];
	void *cocci_id/* drivers/iio/proximity/srf08.c 532 */;
	const struct of_device_id cocci_id/* drivers/iio/proximity/srf08.c 531 */[];
	struct srf08_data {
		struct i2c_client *client;
		int sensitivity;
		int range_mm;
		struct mutex lock;
		s16 buffer[8];
		enum srf08_sensor_type sensor_type;
		const struct srf08_chip_info *chip_info;
	} cocci_id/* drivers/iio/proximity/srf08.c 53 */;
	enum srf08_sensor_type cocci_id/* drivers/iio/proximity/srf08.c 466 */;
	struct srf08_data *cocci_id/* drivers/iio/proximity/srf08.c 450 */;
	struct iio_dev *cocci_id/* drivers/iio/proximity/srf08.c 449 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/proximity/srf08.c 447 */;
	struct i2c_client *cocci_id/* drivers/iio/proximity/srf08.c 446 */;
	int cocci_id/* drivers/iio/proximity/srf08.c 446 */;
	const struct iio_info cocci_id/* drivers/iio/proximity/srf08.c 442 */;
	struct srf08_chip_info {
		const int *sensitivity_avail;
		int num_sensitivity_avail;
		int sensitivity_default;
		int range_default;
	} cocci_id/* drivers/iio/proximity/srf08.c 44 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/proximity/srf08.c 416 */[];
	const struct attribute_group cocci_id/* drivers/iio/proximity/srf08.c 412 */;
	struct attribute *cocci_id/* drivers/iio/proximity/srf08.c 404 */[];
	unsigned int cocci_id/* drivers/iio/proximity/srf08.c 388 */;
	enum srf08_sensor_type{SRF02, SRF08, SRF10, SRF_MAX_TYPE,} cocci_id/* drivers/iio/proximity/srf08.c 37 */;
	const char *cocci_id/* drivers/iio/proximity/srf08.c 293 */;
	size_t cocci_id/* drivers/iio/proximity/srf08.c 293 */;
	u8 cocci_id/* drivers/iio/proximity/srf08.c 265 */;
	struct device_attribute *cocci_id/* drivers/iio/proximity/srf08.c 240 */;
	char *cocci_id/* drivers/iio/proximity/srf08.c 240 */;
	struct device *cocci_id/* drivers/iio/proximity/srf08.c 239 */;
	ssize_t cocci_id/* drivers/iio/proximity/srf08.c 239 */;
	long cocci_id/* drivers/iio/proximity/srf08.c 205 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/proximity/srf08.c 204 */;
	int *cocci_id/* drivers/iio/proximity/srf08.c 204 */;
	s16 cocci_id/* drivers/iio/proximity/srf08.c 185 */;
	struct iio_poll_func *cocci_id/* drivers/iio/proximity/srf08.c 182 */;
	irqreturn_t cocci_id/* drivers/iio/proximity/srf08.c 180 */;
}
