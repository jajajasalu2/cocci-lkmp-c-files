cocci_test_suite() {
	long cocci_id/* drivers/iio/chemical/ams-iaq-core.c 94 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 93 */;
	int *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 93 */;
	struct ams_iaqcore_data *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 75 */;
	int cocci_id/* drivers/iio/chemical/ams-iaq-core.c 75 */;
	char *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 67 */;
	struct i2c_msg cocci_id/* drivers/iio/chemical/ams-iaq-core.c 63 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/chemical/ams-iaq-core.c 36 */[];
	struct ams_iaqcore_data {
		struct i2c_client *client;
		struct mutex lock;
		unsigned long last_update;
		struct ams_iaqcore_reading buffer;
	} cocci_id/* drivers/iio/chemical/ams-iaq-core.c 28 */;
	struct ams_iaqcore_reading {
		__be16 co2_ppm;
		u8 status;
		__be32 resistance;
		__be16 voc_ppb;
	}__attribute__((__packed__)) cocci_id/* drivers/iio/chemical/ams-iaq-core.c 21 */;
	struct i2c_driver cocci_id/* drivers/iio/chemical/ams-iaq-core.c 178 */;
	const struct of_device_id cocci_id/* drivers/iio/chemical/ams-iaq-core.c 172 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/chemical/ams-iaq-core.c 166 */[];
	struct iio_dev *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 140 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 138 */;
	struct i2c_client *cocci_id/* drivers/iio/chemical/ams-iaq-core.c 137 */;
	const struct iio_info cocci_id/* drivers/iio/chemical/ams-iaq-core.c 133 */;
}
