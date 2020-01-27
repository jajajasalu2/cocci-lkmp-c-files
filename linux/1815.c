cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/iio/light/lv0104cs.c 520 */;
	const struct lv0104cs_mapping cocci_id/* drivers/iio/light/lv0104cs.c 52 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/lv0104cs.c 514 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/lv0104cs.c 480 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/lv0104cs.c 478 */;
	struct i2c_client *cocci_id/* drivers/iio/light/lv0104cs.c 477 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/lv0104cs.c 467 */[];
	const struct iio_info cocci_id/* drivers/iio/light/lv0104cs.c 461 */;
	struct lv0104cs_mapping {
		int val;
		int val2;
		u8 regval;
	} cocci_id/* drivers/iio/light/lv0104cs.c 46 */;
	const struct attribute_group cocci_id/* drivers/iio/light/lv0104cs.c 457 */;
	struct attribute *cocci_id/* drivers/iio/light/lv0104cs.c 450 */[];
	struct device_attribute *cocci_id/* drivers/iio/light/lv0104cs.c 394 */;
	struct device *cocci_id/* drivers/iio/light/lv0104cs.c 393 */;
	ssize_t cocci_id/* drivers/iio/light/lv0104cs.c 393 */;
	struct lv0104cs_private {
		struct i2c_client *client;
		struct mutex lock;
		u8 calibscale;
		u8 scale;
		u8 int_time;
	} cocci_id/* drivers/iio/light/lv0104cs.c 38 */;
	long cocci_id/* drivers/iio/light/lv0104cs.c 228 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/lv0104cs.c 227 */;
	u16 cocci_id/* drivers/iio/light/lv0104cs.c 164 */;
	u8 cocci_id/* drivers/iio/light/lv0104cs.c 163 */;
	int *cocci_id/* drivers/iio/light/lv0104cs.c 161 */;
	struct lv0104cs_private *cocci_id/* drivers/iio/light/lv0104cs.c 160 */;
	int cocci_id/* drivers/iio/light/lv0104cs.c 160 */;
	char *cocci_id/* drivers/iio/light/lv0104cs.c 149 */;
	__be16 cocci_id/* drivers/iio/light/lv0104cs.c 146 */;
	u16 *cocci_id/* drivers/iio/light/lv0104cs.c 144 */;
}
