cocci_test_suite() {
	enum{VL6180_ALS, VL6180_RANGE, VL6180_PROX,} cocci_id/* drivers/iio/light/vl6180.c 91 */;
	struct vl6180_data {
		struct i2c_client *client;
		struct mutex lock;
		unsigned int als_gain_milli;
		unsigned int als_it_ms;
	} cocci_id/* drivers/iio/light/vl6180.c 84 */;
	struct i2c_driver cocci_id/* drivers/iio/light/vl6180.c 537 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/vl6180.c 531 */[];
	const struct of_device_id cocci_id/* drivers/iio/light/vl6180.c 525 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/vl6180.c 499 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/vl6180.c 496 */;
	struct i2c_client *cocci_id/* drivers/iio/light/vl6180.c 443 */;
	const struct iio_info cocci_id/* drivers/iio/light/vl6180.c 435 */;
	bool cocci_id/* drivers/iio/light/vl6180.c 353 */;
	struct vl6180_data *cocci_id/* drivers/iio/light/vl6180.c 353 */;
	int cocci_id/* drivers/iio/light/vl6180.c 353 */;
	const struct attribute_group cocci_id/* drivers/iio/light/vl6180.c 348 */;
	struct attribute *cocci_id/* drivers/iio/light/vl6180.c 343 */[];
	int *cocci_id/* drivers/iio/light/vl6180.c 293 */;
	long cocci_id/* drivers/iio/light/vl6180.c 293 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/vl6180.c 292 */;
	const u8 cocci_id/* drivers/iio/light/vl6180.c 284 */[8];
	const int cocci_id/* drivers/iio/light/vl6180.c 281 */[8];
	const struct iio_chan_spec cocci_id/* drivers/iio/light/vl6180.c 257 */[];
	u16 cocci_id/* drivers/iio/light/vl6180.c 211 */;
	__be16 cocci_id/* drivers/iio/light/vl6180.c 190 */[2];
	struct i2c_msg cocci_id/* drivers/iio/light/vl6180.c 171 */[1];
	u8 cocci_id/* drivers/iio/light/vl6180.c 170 */[3];
	u8 *cocci_id/* drivers/iio/light/vl6180.c 132 */;
	struct i2c_msg cocci_id/* drivers/iio/light/vl6180.c 131 */[2];
	__be16 cocci_id/* drivers/iio/light/vl6180.c 130 */;
	u8 cocci_id/* drivers/iio/light/vl6180.c 128 */;
	void *cocci_id/* drivers/iio/light/vl6180.c 127 */;
	const struct vl6180_chan_regs cocci_id/* drivers/iio/light/vl6180.c 106 */[];
	struct vl6180_chan_regs {
		u8 drdy_mask;
		u16 start_reg,value_reg;
		bool word;
	} cocci_id/* drivers/iio/light/vl6180.c 100 */;
}
