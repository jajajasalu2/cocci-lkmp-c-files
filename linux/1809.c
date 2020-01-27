cocci_test_suite() {
	const struct {
		unsigned int gain;
		unsigned int scale;
	} cocci_id/* drivers/iio/light/zopt2201.c 80 */[];
	struct zopt2201_data {
		struct i2c_client *client;
		struct mutex lock;
		u8 gain;
		u8 res;
		u8 rate;
	} cocci_id/* drivers/iio/light/zopt2201.c 72 */;
	struct i2c_driver cocci_id/* drivers/iio/light/zopt2201.c 553 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/zopt2201.c 547 */[];
	struct iio_dev *cocci_id/* drivers/iio/light/zopt2201.c 506 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/zopt2201.c 503 */;
	struct i2c_client *cocci_id/* drivers/iio/light/zopt2201.c 502 */;
	const struct iio_info cocci_id/* drivers/iio/light/zopt2201.c 496 */;
	const struct attribute_group cocci_id/* drivers/iio/light/zopt2201.c 492 */;
	struct attribute *cocci_id/* drivers/iio/light/zopt2201.c 485 */[];
	char *cocci_id/* drivers/iio/light/zopt2201.c 450 */;
	struct device_attribute *cocci_id/* drivers/iio/light/zopt2201.c 449 */;
	struct device *cocci_id/* drivers/iio/light/zopt2201.c 448 */;
	ssize_t cocci_id/* drivers/iio/light/zopt2201.c 448 */;
	size_t cocci_id/* drivers/iio/light/zopt2201.c 435 */;
	u64 cocci_id/* drivers/iio/light/zopt2201.c 257 */;
	int *cocci_id/* drivers/iio/light/zopt2201.c 254 */;
	long cocci_id/* drivers/iio/light/zopt2201.c 254 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/zopt2201.c 253 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/zopt2201.c 229 */[];
	unsigned long cocci_id/* drivers/iio/light/zopt2201.c 195 */;
	u8 cocci_id/* drivers/iio/light/zopt2201.c 186 */[3];
	u8 cocci_id/* drivers/iio/light/zopt2201.c 174 */;
	bool cocci_id/* drivers/iio/light/zopt2201.c 172 */;
	struct zopt2201_data *cocci_id/* drivers/iio/light/zopt2201.c 172 */;
	int cocci_id/* drivers/iio/light/zopt2201.c 172 */;
	const struct {
		unsigned int scale,uscale;
		u8 gain;
		u8 res;
	} cocci_id/* drivers/iio/light/zopt2201.c 114 */[];
	const struct {
		unsigned int bits;
		unsigned long us;
	} cocci_id/* drivers/iio/light/zopt2201.c 102 */[];
}
