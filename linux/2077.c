cocci_test_suite() {
	int *cocci_id/* drivers/iio/amplifiers/ad8366.c 98 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/amplifiers/ad8366.c 97 */;
	unsigned char cocci_id/* drivers/iio/amplifiers/ad8366.c 68 */;
	struct ad8366_info cocci_id/* drivers/iio/amplifiers/ad8366.c 52 */[];
	struct ad8366_state {
		struct spi_device *spi;
		struct regulator *reg;
		struct mutex lock;
		struct gpio_desc *reset_gpio;
		unsigned char ch[2];
		enum ad8366_type type;
		struct ad8366_info *info;
		unsigned char data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/amplifiers/ad8366.c 37 */;
	struct ad8366_info {
		int gain_min;
		int gain_max;
	} cocci_id/* drivers/iio/amplifiers/ad8366.c 32 */;
	struct spi_driver cocci_id/* drivers/iio/amplifiers/ad8366.c 292 */;
	const struct spi_device_id cocci_id/* drivers/iio/amplifiers/ad8366.c 284 */[];
	struct regulator *cocci_id/* drivers/iio/amplifiers/ad8366.c 274 */;
	enum ad8366_type{ID_AD8366, ID_ADA4961, ID_ADL5240,} cocci_id/* drivers/iio/amplifiers/ad8366.c 26 */;
	struct ad8366_state *cocci_id/* drivers/iio/amplifiers/ad8366.c 208 */;
	struct iio_dev *cocci_id/* drivers/iio/amplifiers/ad8366.c 207 */;
	struct spi_device *cocci_id/* drivers/iio/amplifiers/ad8366.c 205 */;
	int cocci_id/* drivers/iio/amplifiers/ad8366.c 205 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/amplifiers/ad8366.c 196 */[];
	const struct iio_info cocci_id/* drivers/iio/amplifiers/ad8366.c 183 */;
	struct ad8366_info *cocci_id/* drivers/iio/amplifiers/ad8366.c 144 */;
	long cocci_id/* drivers/iio/amplifiers/ad8366.c 100 */;
}
