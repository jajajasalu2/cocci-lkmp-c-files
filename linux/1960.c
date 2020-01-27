cocci_test_suite() {
	unsigned long cocci_id/* drivers/iio/pressure/zpa2326.c 935 */;
	const struct zpa2326_frequency cocci_id/* drivers/iio/pressure/zpa2326.c 90 */[];
	struct zpa2326_frequency {
		int hz;
		u16 odr;
	} cocci_id/* drivers/iio/pressure/zpa2326.c 81 */;
	bool cocci_id/* drivers/iio/pressure/zpa2326.c 788 */;
	irqreturn_t cocci_id/* drivers/iio/pressure/zpa2326.c 744 */;
	void *cocci_id/* drivers/iio/pressure/zpa2326.c 744 */;
	void cocci_id/* drivers/iio/pressure/zpa2326.c 712 */;
	struct {
		u32 pressure;
		u16 temperature;
		u64 timestamp;
	} cocci_id/* drivers/iio/pressure/zpa2326.c 581 */;
	const struct zpa2326_private *cocci_id/* drivers/iio/pressure/zpa2326.c 579 */;
	u32 *cocci_id/* drivers/iio/pressure/zpa2326.c 512 */;
	struct zpa2326_private *cocci_id/* drivers/iio/pressure/zpa2326.c 446 */;
	struct regmap *cocci_id/* drivers/iio/pressure/zpa2326.c 446 */;
	unsigned int cocci_id/* drivers/iio/pressure/zpa2326.c 444 */;
	const struct iio_dev *cocci_id/* drivers/iio/pressure/zpa2326.c 443 */;
	int cocci_id/* drivers/iio/pressure/zpa2326.c 443 */;
	u8 cocci_id/* drivers/iio/pressure/zpa2326.c 417 */;
	const struct zpa2326_frequency *cocci_id/* drivers/iio/pressure/zpa2326.c 406 */;
	const struct device *cocci_id/* drivers/iio/pressure/zpa2326.c 1710 */;
	struct zpa2326_private cocci_id/* drivers/iio/pressure/zpa2326.c 1599 */;
	const char *cocci_id/* drivers/iio/pressure/zpa2326.c 1592 */;
	struct iio_dev *cocci_id/* drivers/iio/pressure/zpa2326.c 1591 */;
	struct device *cocci_id/* drivers/iio/pressure/zpa2326.c 1591 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/zpa2326.c 1585 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/zpa2326.c 1554 */[];
	long cocci_id/* drivers/iio/pressure/zpa2326.c 1482 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/zpa2326.c 1479 */;
	const struct attribute_group cocci_id/* drivers/iio/pressure/zpa2326.c 1474 */;
	struct attribute *cocci_id/* drivers/iio/pressure/zpa2326.c 1469 */[];
	struct iio_trigger *cocci_id/* drivers/iio/pressure/zpa2326.c 1410 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/pressure/zpa2326.c 1386 */;
	const struct iio_buffer_setup_ops cocci_id/* drivers/iio/pressure/zpa2326.c 1288 */;
	struct zpa2326_private {
		s64 timestamp;
		struct regmap *regmap;
		int result;
		struct completion data_ready;
		struct iio_trigger *trigger;
		bool waken;
		int irq;
		const struct zpa2326_frequency *frequency;
		struct regulator *vref;
		struct regulator *vdd;
	} cocci_id/* drivers/iio/pressure/zpa2326.c 123 */;
	struct iio_poll_func *cocci_id/* drivers/iio/pressure/zpa2326.c 1154 */;
	__le16 *cocci_id/* drivers/iio/pressure/zpa2326.c 1038 */;
	u8 *cocci_id/* drivers/iio/pressure/zpa2326.c 1022 */;
	int *cocci_id/* drivers/iio/pressure/zpa2326.c 1003 */;
	enum iio_chan_type cocci_id/* drivers/iio/pressure/zpa2326.c 1002 */;
}
