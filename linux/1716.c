cocci_test_suite() {
	struct ad2s90_state *cocci_id/* drivers/iio/resolver/ad2s90.c 81 */;
	struct iio_dev *cocci_id/* drivers/iio/resolver/ad2s90.c 80 */;
	struct spi_device *cocci_id/* drivers/iio/resolver/ad2s90.c 78 */;
	int cocci_id/* drivers/iio/resolver/ad2s90.c 78 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/resolver/ad2s90.c 71 */;
	const struct iio_info cocci_id/* drivers/iio/resolver/ad2s90.c 67 */;
	long cocci_id/* drivers/iio/resolver/ad2s90.c 34 */;
	int *cocci_id/* drivers/iio/resolver/ad2s90.c 32 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/resolver/ad2s90.c 31 */;
	struct ad2s90_state {
		struct mutex lock;
		struct spi_device *sdev;
		u8 rx[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/resolver/ad2s90.c 24 */;
	struct spi_driver cocci_id/* drivers/iio/resolver/ad2s90.c 119 */;
	const struct spi_device_id cocci_id/* drivers/iio/resolver/ad2s90.c 113 */[];
	const struct of_device_id cocci_id/* drivers/iio/resolver/ad2s90.c 107 */[];
}
