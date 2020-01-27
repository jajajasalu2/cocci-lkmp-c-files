cocci_test_suite() {
	const struct regmap_access_table cocci_id/* drivers/iio/magnetometer/rm3100-core.c 96 */;
	const struct regmap_range cocci_id/* drivers/iio/magnetometer/rm3100-core.c 92 */[];
	struct rm3100_data {
		struct regmap *regmap;
		struct completion measuring_done;
		bool use_interrupt;
		int conversion_time;
		int scale;
		u8 buffer[RM3100_SCAN_BYTES];
		struct iio_trigger *drdy_trig;
		struct mutex lock;
	} cocci_id/* drivers/iio/magnetometer/rm3100-core.c 73 */;
	unsigned int cocci_id/* drivers/iio/magnetometer/rm3100-core.c 539 */;
	struct regmap *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 535 */;
	struct device *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 535 */;
	unsigned long cocci_id/* drivers/iio/magnetometer/rm3100-core.c 474 */;
	struct iio_poll_func *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 472 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/magnetometer/rm3100-core.c 463 */;
	struct rm3100_data *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 458 */;
	struct iio_dev *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 456 */;
	int cocci_id/* drivers/iio/magnetometer/rm3100-core.c 456 */;
	const struct iio_info cocci_id/* drivers/iio/magnetometer/rm3100-core.c 440 */;
	long cocci_id/* drivers/iio/magnetometer/rm3100-core.c 401 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 400 */;
	u8 cocci_id/* drivers/iio/magnetometer/rm3100-core.c 307 */;
	int *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 288 */;
	const int cocci_id/* drivers/iio/magnetometer/rm3100-core.c 281 */[RM3100_SAMP_NUM][3];
	const struct attribute_group cocci_id/* drivers/iio/magnetometer/rm3100-core.c 270 */;
	struct attribute *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 265 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/magnetometer/rm3100-core.c 254 */[];
	u8 cocci_id/* drivers/iio/magnetometer/rm3100-core.c 209 */[3];
	irqreturn_t cocci_id/* drivers/iio/magnetometer/rm3100-core.c 136 */;
	void *cocci_id/* drivers/iio/magnetometer/rm3100-core.c 136 */;
}
