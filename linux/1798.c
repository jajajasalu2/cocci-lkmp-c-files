cocci_test_suite() {
	const struct bh1750_chip_info *cocci_id/* drivers/iio/light/bh1750.c 75 */;
	u8 cocci_id/* drivers/iio/light/bh1750.c 74 */;
	u16 cocci_id/* drivers/iio/light/bh1750.c 73 */;
	struct bh1750_data *cocci_id/* drivers/iio/light/bh1750.c 70 */;
	int cocci_id/* drivers/iio/light/bh1750.c 70 */;
	const struct bh1750_chip_info cocci_id/* drivers/iio/light/bh1750.c 64 */[];
	struct bh1750_chip_info {
		u16 mtreg_min;
		u16 mtreg_max;
		u16 mtreg_default;
		int mtreg_to_usec;
		int mtreg_to_scale;
		int inc;
		u16 int_time_low_mask;
		u16 int_time_high_mask;
	} cocci_id/* drivers/iio/light/bh1750.c 45 */;
	struct bh1750_data {
		struct i2c_client *client;
		struct mutex lock;
		const struct bh1750_chip_info *chip_info;
		u16 mtreg;
	} cocci_id/* drivers/iio/light/bh1750.c 38 */;
	struct bh1750_chip_info cocci_id/* drivers/iio/light/bh1750.c 37 */;
	struct i2c_driver cocci_id/* drivers/iio/light/bh1750.c 320 */;
	const struct of_device_id cocci_id/* drivers/iio/light/bh1750.c 310 */[];
	enum{BH1710, BH1721, BH1750,} cocci_id/* drivers/iio/light/bh1750.c 31 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/bh1750.c 300 */[];
	int __maybe_unused cocci_id/* drivers/iio/light/bh1750.c 281 */;
	struct iio_dev *cocci_id/* drivers/iio/light/bh1750.c 236 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/bh1750.c 232 */;
	struct i2c_client *cocci_id/* drivers/iio/light/bh1750.c 231 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/bh1750.c 222 */[];
	const struct iio_info cocci_id/* drivers/iio/light/bh1750.c 216 */;
	const struct attribute_group cocci_id/* drivers/iio/light/bh1750.c 212 */;
	struct attribute *cocci_id/* drivers/iio/light/bh1750.c 207 */[];
	size_t cocci_id/* drivers/iio/light/bh1750.c 192 */;
	struct device_attribute *cocci_id/* drivers/iio/light/bh1750.c 189 */;
	struct device *cocci_id/* drivers/iio/light/bh1750.c 188 */;
	ssize_t cocci_id/* drivers/iio/light/bh1750.c 188 */;
	long cocci_id/* drivers/iio/light/bh1750.c 133 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/bh1750.c 132 */;
	char *cocci_id/* drivers/iio/light/bh1750.c 122 */;
	unsigned long cocci_id/* drivers/iio/light/bh1750.c 110 */;
	__be16 cocci_id/* drivers/iio/light/bh1750.c 108 */;
	int *cocci_id/* drivers/iio/light/bh1750.c 105 */;
}
