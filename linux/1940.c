cocci_test_suite() {
	long cocci_id/* drivers/iio/pressure/mpl115.c 98 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/pressure/mpl115.c 97 */;
	unsigned cocci_id/* drivers/iio/pressure/mpl115.c 50 */;
	u16 cocci_id/* drivers/iio/pressure/mpl115.c 48 */;
	struct mpl115_data *cocci_id/* drivers/iio/pressure/mpl115.c 45 */;
	int *cocci_id/* drivers/iio/pressure/mpl115.c 45 */;
	int cocci_id/* drivers/iio/pressure/mpl115.c 45 */;
	struct mpl115_data {
		struct device *dev;
		struct mutex lock;
		s16 a0;
		s16 b1,b2;
		s16 c12;
		const struct mpl115_ops *ops;
	} cocci_id/* drivers/iio/pressure/mpl115.c 24 */;
	struct iio_dev *cocci_id/* drivers/iio/pressure/mpl115.c 149 */;
	const struct mpl115_ops *cocci_id/* drivers/iio/pressure/mpl115.c 146 */;
	const char *cocci_id/* drivers/iio/pressure/mpl115.c 145 */;
	struct device *cocci_id/* drivers/iio/pressure/mpl115.c 145 */;
	const struct iio_info cocci_id/* drivers/iio/pressure/mpl115.c 141 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/pressure/mpl115.c 128 */[];
}
