cocci_test_suite() {
	long cocci_id/* drivers/iio/dac/ad5504.c 98 */;
	int *cocci_id/* drivers/iio/dac/ad5504.c 96 */;
	struct spi_transfer cocci_id/* drivers/iio/dac/ad5504.c 80 */;
	u8 cocci_id/* drivers/iio/dac/ad5504.c 77 */;
	u16 cocci_id/* drivers/iio/dac/ad5504.c 69 */;
	enum ad5504_supported_device_ids{ID_AD5504, ID_AD5501,} cocci_id/* drivers/iio/dac/ad5504.c 64 */;
	struct ad5504_state {
		struct spi_device *spi;
		struct regulator *reg;
		unsigned short vref_mv;
		unsigned pwr_down_mask;
		unsigned pwr_down_mode;
		__be16 data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/ad5504.c 50 */;
	struct spi_driver cocci_id/* drivers/iio/dac/ad5504.c 361 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/ad5504.c 354 */[];
	struct regulator *cocci_id/* drivers/iio/dac/ad5504.c 277 */;
	struct ad5504_platform_data *cocci_id/* drivers/iio/dac/ad5504.c 274 */;
	struct spi_device *cocci_id/* drivers/iio/dac/ad5504.c 272 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/ad5504.c 265 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/ad5504.c 236 */[];
	const struct iio_info cocci_id/* drivers/iio/dac/ad5504.c 230 */;
	irqreturn_t cocci_id/* drivers/iio/dac/ad5504.c 218 */;
	void *cocci_id/* drivers/iio/dac/ad5504.c 218 */;
	int cocci_id/* drivers/iio/dac/ad5504.c 218 */;
	const struct attribute_group cocci_id/* drivers/iio/dac/ad5504.c 214 */;
	struct attribute *cocci_id/* drivers/iio/dac/ad5504.c 208 */[];
	bool cocci_id/* drivers/iio/dac/ad5504.c 182 */;
	size_t cocci_id/* drivers/iio/dac/ad5504.c 180 */;
	const char *cocci_id/* drivers/iio/dac/ad5504.c 179 */;
	uintptr_t cocci_id/* drivers/iio/dac/ad5504.c 170 */;
	char *cocci_id/* drivers/iio/dac/ad5504.c 170 */;
	ssize_t cocci_id/* drivers/iio/dac/ad5504.c 169 */;
	const struct iio_enum cocci_id/* drivers/iio/dac/ad5504.c 162 */;
	unsigned int cocci_id/* drivers/iio/dac/ad5504.c 153 */;
	struct ad5504_state *cocci_id/* drivers/iio/dac/ad5504.c 147 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/ad5504.c 145 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/ad5504.c 144 */;
	const char *constcocci_id/* drivers/iio/dac/ad5504.c 139 */[];
}
