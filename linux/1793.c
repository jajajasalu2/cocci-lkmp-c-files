cocci_test_suite() {
	struct iio_dev *cocci_id/* drivers/iio/light/si1133.c 992 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/si1133.c 989 */;
	struct i2c_client *cocci_id/* drivers/iio/light/si1133.c 988 */;
	const struct iio_info cocci_id/* drivers/iio/light/si1133.c 869 */;
	const struct attribute_group cocci_id/* drivers/iio/light/si1133.c 865 */;
	struct attribute *cocci_id/* drivers/iio/light/si1133.c 859 */[];
	long cocci_id/* drivers/iio/light/si1133.c 744 */;
	u8 cocci_id/* drivers/iio/light/si1133.c 710 */[SI1133_LUX_BUFFER_SIZE];
	int *cocci_id/* drivers/iio/light/si1133.c 703 */;
	irqreturn_t cocci_id/* drivers/iio/light/si1133.c 638 */;
	void *cocci_id/* drivers/iio/light/si1133.c 638 */;
	__be16 cocci_id/* drivers/iio/light/si1133.c 617 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/si1133.c 612 */;
	u8 *cocci_id/* drivers/iio/light/si1133.c 600 */;
	u8 cocci_id/* drivers/iio/light/si1133.c 599 */;
	struct si1133_data *cocci_id/* drivers/iio/light/si1133.c 599 */;
	int cocci_id/* drivers/iio/light/si1133.c 599 */;
	uint8_t cocci_id/* drivers/iio/light/si1133.c 569 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/si1133.c 473 */[];
	u32 *cocci_id/* drivers/iio/light/si1133.c 455 */;
	unsigned long cocci_id/* drivers/iio/light/si1133.c 314 */;
	unsigned int cocci_id/* drivers/iio/light/si1133.c 313 */;
	struct device *cocci_id/* drivers/iio/light/si1133.c 312 */;
	s8 cocci_id/* drivers/iio/light/si1133.c 284 */;
	const struct si1133_coeff *cocci_id/* drivers/iio/light/si1133.c 280 */;
	u32 cocci_id/* drivers/iio/light/si1133.c 279 */;
	u16 cocci_id/* drivers/iio/light/si1133.c 253 */;
	const struct si1133_lux_coeff cocci_id/* drivers/iio/light/si1133.c 217 */;
	struct si1133_lux_coeff {
		struct si1133_coeff coeff_high[4];
		struct si1133_coeff coeff_low[9];
	} cocci_id/* drivers/iio/light/si1133.c 212 */;
	struct si1133_coeff {
		s16 info;
		u16 mag;
	} cocci_id/* drivers/iio/light/si1133.c 207 */;
	struct si1133_data {
		struct regmap *regmap;
		struct i2c_client *client;
		struct mutex mutex;
		int rsp_seq;
		u8 scan_mask;
		u8 adc_sens[6];
		u8 adc_config[6];
		struct completion completion;
	} cocci_id/* drivers/iio/light/si1133.c 192 */;
	const struct regmap_config cocci_id/* drivers/iio/light/si1133.c 180 */;
	const struct regmap_access_table cocci_id/* drivers/iio/light/si1133.c 175 */;
	const struct regmap_range cocci_id/* drivers/iio/light/si1133.c 159 */[];
	const int cocci_id/* drivers/iio/light/si1133.c 131 */[][2];
	enum si1133_int_time{_24_4_us=0, _48_8_us=1, _97_5_us=2, _195_0_us=3, _390_0_us=4, _780_0_us=5, _1_560_0_us=6, _3_120_0_us=7, _6_240_0_us=8, _12_480_0_us=9, _25_ms=10, _50_ms=11,} cocci_id/* drivers/iio/light/si1133.c 115 */;
	const int cocci_id/* drivers/iio/light/si1133.c 106 */[];
	struct i2c_driver cocci_id/* drivers/iio/light/si1133.c 1059 */;
	const struct i2c_device_id cocci_id/* drivers/iio/light/si1133.c 1053 */[];
}
