cocci_test_suite() {
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/dps310.c 94 */[];
	struct dps310_data {
		struct i2c_client *client;
		struct regmap *regmap;
		struct mutex lock;
		s32 c0,c1;
		s32 c00,c10,c20,c30,c01,c11,c21;
		s32 pressure_raw;
		s32 temp_raw;
	} cocci_id/* drivers/iio/pressure/dps310.c 83 */;
	struct i2c_driver cocci_id/* drivers/iio/pressure/dps310.c 816 */;
	const struct i2c_device_id cocci_id/* drivers/iio/pressure/dps310.c 810 */[];
	struct iio_dev *cocci_id/* drivers/iio/pressure/dps310.c 724 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/pressure/dps310.c 721 */;
	struct i2c_client *cocci_id/* drivers/iio/pressure/dps310.c 720 */;
	const int cocci_id/* drivers/iio/pressure/dps310.c 72 */[];
	const struct iio_info cocci_id/* drivers/iio/pressure/dps310.c 675 */;
	const struct regmap_config cocci_id/* drivers/iio/pressure/dps310.c 666 */;
	void *cocci_id/* drivers/iio/pressure/dps310.c 659 */;
	void cocci_id/* drivers/iio/pressure/dps310.c 659 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/dps310.c 642 */;
	long cocci_id/* drivers/iio/pressure/dps310.c 544 */;
	int *cocci_id/* drivers/iio/pressure/dps310.c 543 */;
	u64 cocci_id/* drivers/iio/pressure/dps310.c 521 */;
	s64 cocci_id/* drivers/iio/pressure/dps310.c 476 */[7];
	s64 cocci_id/* drivers/iio/pressure/dps310.c 472 */;
	struct dps310_data *cocci_id/* drivers/iio/pressure/dps310.c 465 */;
	int cocci_id/* drivers/iio/pressure/dps310.c 465 */;
	bool cocci_id/* drivers/iio/pressure/dps310.c 396 */;
	struct device *cocci_id/* drivers/iio/pressure/dps310.c 396 */;
	unsigned int cocci_id/* drivers/iio/pressure/dps310.c 396 */;
	u8 cocci_id/* drivers/iio/pressure/dps310.c 307 */[3];
	s32 cocci_id/* drivers/iio/pressure/dps310.c 306 */;
	u8 cocci_id/* drivers/iio/pressure/dps310.c 194 */;
	u32 cocci_id/* drivers/iio/pressure/dps310.c 114 */;
	u8 cocci_id/* drivers/iio/pressure/dps310.c 113 */[18];
}
