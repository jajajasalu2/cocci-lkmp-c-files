cocci_test_suite() {
	const struct iio_event_spec cocci_id/* drivers/iio/dac/ad5421.c 82 */[];
	struct ad5421_state {
		struct spi_device *spi;
		unsigned int ctrl;
		enum ad5421_current_range current_range;
		unsigned int fault_mask;
		union {
			__be32 d32;
			u8 d8[4];
		} data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5421.c 66 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5421.c 522 */;
	struct ad5421_platform_data *cocci_id/* drivers/iio/dac/ad5421.c 471 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5421.c 469 */;
	const struct iio_info cocci_id/* drivers/iio/dac/ad5421.c 461 */;
	enum iio_event_info cocci_id/* drivers/iio/dac/ad5421.c 439 */;
	int *cocci_id/* drivers/iio/dac/ad5421.c 439 */;
	enum iio_event_direction cocci_id/* drivers/iio/dac/ad5421.c 415 */;
	enum iio_event_type cocci_id/* drivers/iio/dac/ad5421.c 414 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5421.c 414 */;
	const unsigned int cocci_id/* drivers/iio/dac/ad5421.c 356 */;
	long cocci_id/* drivers/iio/dac/ad5421.c 312 */;
	unsigned int *cocci_id/* drivers/iio/dac/ad5421.c 279 */;
	void cocci_id/* drivers/iio/dac/ad5421.c 278 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5421.c 204 */;
	struct ad5421_state *cocci_id/* drivers/iio/dac/ad5421.c 203 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5421.c 202 */;
	irqreturn_t cocci_id/* drivers/iio/dac/ad5421.c 200 */;
	void *cocci_id/* drivers/iio/dac/ad5421.c 200 */;
	int cocci_id/* drivers/iio/dac/ad5421.c 200 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5421.c 158 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad5421.c 105 */[];
}
