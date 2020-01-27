cocci_test_suite() {
	long cocci_id/* drivers/iio/dac/mcp4922.c 63 */;
	int *cocci_id/* drivers/iio/dac/mcp4922.c 61 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/mcp4922.c 60 */;
	u8 cocci_id/* drivers/iio/dac/mcp4922.c 50 */;
	u32 cocci_id/* drivers/iio/dac/mcp4922.c 50 */;
	struct mcp4922_state {
		struct spi_device *spi;
		unsigned int value[MCP4922_NUM_CHANNELS];
		unsigned int vref_mv;
		struct regulator *vref_reg;
		u8 mosi[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/dac/mcp4922.c 27 */;
	enum mcp4922_supported_device_ids{ID_MCP4902, ID_MCP4912, ID_MCP4922,} cocci_id/* drivers/iio/dac/mcp4922.c 21 */;
	struct spi_driver cocci_id/* drivers/iio/dac/mcp4922.c 197 */;
	const struct spi_device_id cocci_id/* drivers/iio/dac/mcp4922.c 189 */[];
	const struct spi_device_id *cocci_id/* drivers/iio/dac/mcp4922.c 123 */;
	struct mcp4922_state *cocci_id/* drivers/iio/dac/mcp4922.c 122 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/mcp4922.c 121 */;
	struct spi_device *cocci_id/* drivers/iio/dac/mcp4922.c 119 */;
	int cocci_id/* drivers/iio/dac/mcp4922.c 119 */;
	const struct iio_info cocci_id/* drivers/iio/dac/mcp4922.c 114 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/mcp4922.c 108 */[3][MCP4922_NUM_CHANNELS];
}
