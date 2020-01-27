cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/chemical/ccs811.c 80 */[];
	struct ccs811_data {
		struct i2c_client *client;
		struct mutex lock;
		struct ccs811_reading buffer;
		struct iio_trigger *drdy_trig;
		bool drdy_trig_on;
	} cocci_id/* drivers/iio/chemical/ccs811.c 72 */;
	struct ccs811_reading {
		__be16 co2;
		__be16 voc;
		u8 status;
		u8 error;
		__be16 raw_data;
	}__attribute__((__packed__)) cocci_id/* drivers/iio/chemical/ccs811.c 64 */;
	struct i2c_driver cocci_id/* drivers/iio/chemical/ccs811.c 469 */;
	const struct i2c_device_id cocci_id/* drivers/iio/chemical/ccs811.c 463 */[];
	const struct i2c_device_id *cocci_id/* drivers/iio/chemical/ccs811.c 340 */;
	struct i2c_client *cocci_id/* drivers/iio/chemical/ccs811.c 339 */;
	struct ccs811_data *cocci_id/* drivers/iio/chemical/ccs811.c 331 */;
	struct iio_dev *cocci_id/* drivers/iio/chemical/ccs811.c 330 */;
	irqreturn_t cocci_id/* drivers/iio/chemical/ccs811.c 328 */;
	void *cocci_id/* drivers/iio/chemical/ccs811.c 328 */;
	int cocci_id/* drivers/iio/chemical/ccs811.c 328 */;
	u8 *cocci_id/* drivers/iio/chemical/ccs811.c 313 */;
	s16 cocci_id/* drivers/iio/chemical/ccs811.c 309 */[8];
	struct iio_poll_func *cocci_id/* drivers/iio/chemical/ccs811.c 305 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/chemical/ccs811.c 299 */;
	bool cocci_id/* drivers/iio/chemical/ccs811.c 279 */;
	struct iio_trigger *cocci_id/* drivers/iio/chemical/ccs811.c 278 */;
	const struct iio_info cocci_id/* drivers/iio/chemical/ccs811.c 274 */;
	int *cocci_id/* drivers/iio/chemical/ccs811.c 193 */;
	long cocci_id/* drivers/iio/chemical/ccs811.c 193 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/chemical/ccs811.c 192 */;
	char *cocci_id/* drivers/iio/chemical/ccs811.c 188 */;
}
