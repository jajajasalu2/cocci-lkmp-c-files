cocci_test_suite() {
	const unsigned int cocci_id/* drivers/iio/adc/mcp320x.c 99 */;
	struct mcp320x {
		struct spi_device *spi;
		struct spi_message msg;
		struct spi_transfer transfer[2];
		struct spi_message start_conv_msg;
		struct spi_transfer start_conv_transfer;
		struct regulator *reg;
		struct mutex lock;
		const struct mcp320x_chip_info *chip_info;
		u8 tx_buf ____cacheline_aligned;
		u8 rx_buf[4];
	} cocci_id/* drivers/iio/adc/mcp320x.c 83 */;
	struct mcp320x_chip_info {
		const struct iio_chan_spec *channels;
		unsigned int num_channels;
		unsigned int resolution;
		unsigned int conv_time;
	} cocci_id/* drivers/iio/adc/mcp320x.c 63 */;
	struct spi_driver cocci_id/* drivers/iio/adc/mcp320x.c 521 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/mcp320x.c 503 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/mcp320x.c 474 */[];
	enum{mcp3001, mcp3002, mcp3004, mcp3008, mcp3201, mcp3202, mcp3204, mcp3208, mcp3301, mcp3550_50, mcp3550_60, mcp3551, mcp3553,} cocci_id/* drivers/iio/adc/mcp320x.c 47 */;
	const struct mcp320x_chip_info *cocci_id/* drivers/iio/adc/mcp320x.c 377 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/mcp320x.c 375 */;
	struct spi_device *cocci_id/* drivers/iio/adc/mcp320x.c 373 */;
	const struct mcp320x_chip_info cocci_id/* drivers/iio/adc/mcp320x.c 300 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/mcp320x.c 296 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/mcp320x.c 255 */[];
	long cocci_id/* drivers/iio/adc/mcp320x.c 195 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/mcp320x.c 194 */;
	s32 cocci_id/* drivers/iio/adc/mcp320x.c 185 */;
	u32 cocci_id/* drivers/iio/adc/mcp320x.c 167 */;
	__be32 *cocci_id/* drivers/iio/adc/mcp320x.c 167 */;
	bool cocci_id/* drivers/iio/adc/mcp320x.c 120 */;
	int *cocci_id/* drivers/iio/adc/mcp320x.c 120 */;
	u8 cocci_id/* drivers/iio/adc/mcp320x.c 119 */;
	struct mcp320x *cocci_id/* drivers/iio/adc/mcp320x.c 119 */;
	int cocci_id/* drivers/iio/adc/mcp320x.c 119 */;
}
