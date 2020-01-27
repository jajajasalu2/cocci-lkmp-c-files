cocci_test_suite() {
	u8 cocci_id/* drivers/iio/potentiometer/ds1803.c 64 */[ARRAY_SIZE(ds1803_channels)];
	int *cocci_id/* drivers/iio/potentiometer/ds1803.c 59 */;
	long cocci_id/* drivers/iio/potentiometer/ds1803.c 59 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/ds1803.c 58 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/ds1803.c 52 */[];
	struct ds1803_data {
		struct i2c_client *client;
		const struct ds1803_cfg *cfg;
	} cocci_id/* drivers/iio/potentiometer/ds1803.c 38 */;
	const struct ds1803_cfg cocci_id/* drivers/iio/potentiometer/ds1803.c 32 */[];
	struct ds1803_cfg {
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/ds1803.c 28 */;
	enum ds1803_type{DS1803_010, DS1803_050, DS1803_100,} cocci_id/* drivers/iio/potentiometer/ds1803.c 22 */;
	struct i2c_driver cocci_id/* drivers/iio/potentiometer/ds1803.c 156 */;
	const struct i2c_device_id cocci_id/* drivers/iio/potentiometer/ds1803.c 148 */[];
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/ds1803.c 139 */[];
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/ds1803.c 117 */;
	struct ds1803_data *cocci_id/* drivers/iio/potentiometer/ds1803.c 116 */;
	struct device *cocci_id/* drivers/iio/potentiometer/ds1803.c 115 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/potentiometer/ds1803.c 113 */;
	struct i2c_client *cocci_id/* drivers/iio/potentiometer/ds1803.c 112 */;
	int cocci_id/* drivers/iio/potentiometer/ds1803.c 112 */;
	const struct iio_info cocci_id/* drivers/iio/potentiometer/ds1803.c 107 */;
}
