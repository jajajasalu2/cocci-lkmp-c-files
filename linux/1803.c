cocci_test_suite() {
	struct tsl2583_chip {
		struct mutex als_mutex;
		struct i2c_client *client;
		struct tsl2583_als_info als_cur_info;
		struct tsl2583_settings als_settings;
		int als_time_scale;
		int als_saturation;
	} cocci_id/* drivers/iio/light/tsl2583.c 98 */;
	struct i2c_driver cocci_id/* drivers/iio/light/tsl2583.c 934 */;
	const struct of_device_id cocci_id/* drivers/iio/light/tsl2583.c 925 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/light/tsl2583.c 917 */[];
	int __maybe_unused cocci_id/* drivers/iio/light/tsl2583.c 896 */;
	struct tsl2583_settings {
		int als_time;
		int als_gain;
		int als_gain_trim;
		int als_cal_target;
		struct tsl2583_lux als_device_lux[TSL2583_MAX_LUX_TABLE_ENTRIES];
	} cocci_id/* drivers/iio/light/tsl2583.c 84 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/light/tsl2583.c 803 */;
	struct i2c_client *cocci_id/* drivers/iio/light/tsl2583.c 802 */;
	const struct iio_info cocci_id/* drivers/iio/light/tsl2583.c 796 */;
	const struct tsl2583_lux cocci_id/* drivers/iio/light/tsl2583.c 74 */[];
	struct tsl2583_lux {
		unsigned int ratio;
		unsigned int ch0;
		unsigned int ch1;
	} cocci_id/* drivers/iio/light/tsl2583.c 68 */;
	int *cocci_id/* drivers/iio/light/tsl2583.c 652 */;
	long cocci_id/* drivers/iio/light/tsl2583.c 652 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/light/tsl2583.c 651 */;
	bool cocci_id/* drivers/iio/light/tsl2583.c 634 */;
	struct tsl2583_als_info {
		u16 als_ch0;
		u16 als_ch1;
		u16 lux;
	} cocci_id/* drivers/iio/light/tsl2583.c 62 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/light/tsl2583.c 612 */[];
	const struct attribute_group cocci_id/* drivers/iio/light/tsl2583.c 608 */;
	struct attribute *cocci_id/* drivers/iio/light/tsl2583.c 599 */[];
	int cocci_id/* drivers/iio/light/tsl2583.c 554 */[TSL2583_MAX_LUX_TABLE_ENTRIES * 3 + 1];
	const unsigned int cocci_id/* drivers/iio/light/tsl2583.c 553 */;
	unsigned int cocci_id/* drivers/iio/light/tsl2583.c 524 */;
	int cocci_id/* drivers/iio/light/tsl2583.c 500 */;
	struct tsl2583_chip *cocci_id/* drivers/iio/light/tsl2583.c 499 */;
	struct iio_dev *cocci_id/* drivers/iio/light/tsl2583.c 498 */;
	const char *cocci_id/* drivers/iio/light/tsl2583.c 496 */;
	size_t cocci_id/* drivers/iio/light/tsl2583.c 496 */;
	struct device_attribute *cocci_id/* drivers/iio/light/tsl2583.c 495 */;
	struct device *cocci_id/* drivers/iio/light/tsl2583.c 494 */;
	ssize_t cocci_id/* drivers/iio/light/tsl2583.c 494 */;
	char *cocci_id/* drivers/iio/light/tsl2583.c 463 */;
	u8 cocci_id/* drivers/iio/light/tsl2583.c 361 */;
	const __le16 *cocci_id/* drivers/iio/light/tsl2583.c 216 */;
	struct tsl2583_lux *cocci_id/* drivers/iio/light/tsl2583.c 170 */;
	u8 cocci_id/* drivers/iio/light/tsl2583.c 169 */[5];
	u64 cocci_id/* drivers/iio/light/tsl2583.c 167 */;
	u32 cocci_id/* drivers/iio/light/tsl2583.c 166 */;
	u16 cocci_id/* drivers/iio/light/tsl2583.c 165 */;
	void cocci_id/* drivers/iio/light/tsl2583.c 125 */;
	const struct gainadj cocci_id/* drivers/iio/light/tsl2583.c 114 */[];
	struct gainadj {
		s16 ch0;
		s16 ch1;
		s16 mean;
	} cocci_id/* drivers/iio/light/tsl2583.c 107 */;
}
