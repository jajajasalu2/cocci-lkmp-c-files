cocci_test_suite() {
	const struct ads8688_ranges cocci_id/* drivers/iio/adc/ti-ads8688.c 89 */[5];
	struct ads8688_ranges {
		enum ads8688_range range;
		unsigned int scale;
		int offset;
		u8 reg;
	} cocci_id/* drivers/iio/adc/ti-ads8688.c 82 */;
	enum ads8688_id{ID_ADS8684, ID_ADS8688,} cocci_id/* drivers/iio/adc/ti-ads8688.c 77 */;
	struct ads8688_state {
		struct mutex lock;
		const struct ads8688_chip_info *chip_info;
		struct spi_device *spi;
		struct regulator *reg;
		unsigned int vref_mv;
		enum ads8688_range range[8];
		union {
			__be32 d32;
			u8 d8[4];
		} data[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/adc/ti-ads8688.c 64 */;
	struct ads8688_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
	} cocci_id/* drivers/iio/adc/ti-ads8688.c 59 */;
	struct spi_driver cocci_id/* drivers/iio/adc/ti-ads8688.c 513 */;
	enum ads8688_range{ADS8688_PLUSMINUS25VREF, ADS8688_PLUSMINUS125VREF, ADS8688_PLUSMINUS0625VREF, ADS8688_PLUS25VREF, ADS8688_PLUS125VREF,} cocci_id/* drivers/iio/adc/ti-ads8688.c 51 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/ti-ads8688.c 506 */[];
	const struct spi_device_id cocci_id/* drivers/iio/adc/ti-ads8688.c 499 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/ti-ads8688.c 418 */;
	struct ads8688_state *cocci_id/* drivers/iio/adc/ti-ads8688.c 417 */;
	struct spi_device *cocci_id/* drivers/iio/adc/ti-ads8688.c 415 */;
	int cocci_id/* drivers/iio/adc/ti-ads8688.c 415 */;
	const struct ads8688_chip_info cocci_id/* drivers/iio/adc/ti-ads8688.c 404 */[];
	u16 cocci_id/* drivers/iio/adc/ti-ads8688.c 386 */[ADS8688_MAX_CHANNELS + sizeof(s64) / sizeof(u16)];
	struct iio_poll_func *cocci_id/* drivers/iio/adc/ti-ads8688.c 384 */;
	irqreturn_t cocci_id/* drivers/iio/adc/ti-ads8688.c 382 */;
	void *cocci_id/* drivers/iio/adc/ti-ads8688.c 382 */;
	const struct iio_info cocci_id/* drivers/iio/adc/ti-ads8688.c 375 */;
	enum ads8688_range cocci_id/* drivers/iio/adc/ti-ads8688.c 281 */;
	unsigned long cocci_id/* drivers/iio/adc/ti-ads8688.c 248 */;
	int *cocci_id/* drivers/iio/adc/ti-ads8688.c 245 */;
	long cocci_id/* drivers/iio/adc/ti-ads8688.c 245 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/ti-ads8688.c 244 */;
	struct spi_transfer cocci_id/* drivers/iio/adc/ti-ads8688.c 216 */[];
	u32 cocci_id/* drivers/iio/adc/ti-ads8688.c 190 */;
	unsigned int cocci_id/* drivers/iio/adc/ti-ads8688.c 186 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/ti-ads8688.c 168 */[];
	const struct attribute_group cocci_id/* drivers/iio/adc/ti-ads8688.c 147 */;
	struct attribute *cocci_id/* drivers/iio/adc/ti-ads8688.c 141 */[];
	struct device_attribute *cocci_id/* drivers/iio/adc/ti-ads8688.c 130 */;
	char *cocci_id/* drivers/iio/adc/ti-ads8688.c 130 */;
	struct device *cocci_id/* drivers/iio/adc/ti-ads8688.c 129 */;
	ssize_t cocci_id/* drivers/iio/adc/ti-ads8688.c 129 */;
}
