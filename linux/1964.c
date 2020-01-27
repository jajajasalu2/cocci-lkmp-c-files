cocci_test_suite() {
	struct ad5755_state {
		struct spi_device *spi;
		const struct ad5755_chip_info *chip_info;
		unsigned int pwr_down;
		unsigned int ctrl[AD5755_NUM_CHANNELS];
		struct iio_chan_spec channels[AD5755_NUM_CHANNELS];
		union {
			__be32 d32;
			u8 d8[4];
		} data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5755.c 87 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5755.c 794 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/ad5755.c 784 */[];
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5755.c 774 */[];
	enum ad5755_type cocci_id/* drivers/iio/dac/ad5755.c 728 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5755.c 726 */;
	struct ad5755_chip_info {
		const struct iio_chan_spec channel_template;
		unsigned int calib_shift;
		bool has_voltage_out;
	} cocci_id/* drivers/iio/dac/ad5755.c 72 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5755.c 610 */[3];
	struct device_node *cocci_id/* drivers/iio/dac/ad5755.c 606 */;
	struct device *cocci_id/* drivers/iio/dac/ad5755.c 604 */;
	struct ad5755_platform_data *cocci_id/* drivers/iio/dac/ad5755.c 604 */;
	const struct ad5755_platform_data cocci_id/* drivers/iio/dac/ad5755.c 590 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5755.c 562 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5755.c 561 */;
	const struct ad5755_platform_data *cocci_id/* drivers/iio/dac/ad5755.c 558 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5755.c 557 */;
	const struct ad5755_chip_info cocci_id/* drivers/iio/dac/ad5755.c 448 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ad5755.c 421 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5755.c 416 */;
	const char *cocci_id/* drivers/iio/dac/ad5755.c 403 */;
	size_t cocci_id/* drivers/iio/dac/ad5755.c 403 */;
	char *cocci_id/* drivers/iio/dac/ad5755.c 394 */;
	uintptr_t cocci_id/* drivers/iio/dac/ad5755.c 393 */;
	ssize_t cocci_id/* drivers/iio/dac/ad5755.c 393 */;
	unsigned int *cocci_id/* drivers/iio/dac/ad5755.c 303 */;
	bool cocci_id/* drivers/iio/dac/ad5755.c 302 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5755.c 302 */;
	long cocci_id/* drivers/iio/dac/ad5755.c 302 */;
	struct ad5755_state *cocci_id/* drivers/iio/dac/ad5755.c 301 */;
	int cocci_id/* drivers/iio/dac/ad5755.c 301 */;
	enum ad5755_mode cocci_id/* drivers/iio/dac/ad5755.c 287 */;
	int *cocci_id/* drivers/iio/dac/ad5755.c 285 */;
	void cocci_id/* drivers/iio/dac/ad5755.c 284 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5755.c 202 */[];
	const int cocci_id/* drivers/iio/dac/ad5755.c 113 */[][2];
	enum ad5755_type{ID_AD5755, ID_AD5757, ID_AD5735, ID_AD5737,} cocci_id/* drivers/iio/dac/ad5755.c 105 */;
}
