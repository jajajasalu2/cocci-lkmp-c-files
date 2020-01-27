cocci_test_suite() {
	long cocci_id/* drivers/iio/resolver/ad2s1200.c 51 */;
	int *cocci_id/* drivers/iio/resolver/ad2s1200.c 49 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/resolver/ad2s1200.c 48 */;
	struct ad2s1200_state {
		struct mutex lock;
		struct spi_device *sdev;
		struct gpio_desc *sample;
		struct gpio_desc *rdvel;
		__be16 rx ____cacheline_aligned;
	} cocci_id/* drivers/iio/resolver/ad2s1200.c 39 */;
	struct spi_driver cocci_id/* drivers/iio/resolver/ad2s1200.c 194 */;
	const struct spi_device_id cocci_id/* drivers/iio/resolver/ad2s1200.c 187 */[];
	const struct of_device_id cocci_id/* drivers/iio/resolver/ad2s1200.c 180 */[];
	struct iio_dev *cocci_id/* drivers/iio/resolver/ad2s1200.c 135 */;
	struct ad2s1200_state *cocci_id/* drivers/iio/resolver/ad2s1200.c 134 */;
	struct spi_device *cocci_id/* drivers/iio/resolver/ad2s1200.c 132 */;
	int cocci_id/* drivers/iio/resolver/ad2s1200.c 132 */;
	const struct iio_info cocci_id/* drivers/iio/resolver/ad2s1200.c 128 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/resolver/ad2s1200.c 112 */[];
}
