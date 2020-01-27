cocci_test_suite() {
	u8 cocci_id/* drivers/iio/adc/mcp3911.c 57 */;
	u32 *cocci_id/* drivers/iio/adc/mcp3911.c 57 */;
	struct mcp3911 {
		struct spi_device *spi;
		struct mutex lock;
		struct regulator *vref;
		struct clk *clki;
		u32 dev_addr;
	} cocci_id/* drivers/iio/adc/mcp3911.c 49 */;
	struct spi_driver cocci_id/* drivers/iio/adc/mcp3911.c 349 */;
	const struct spi_device_id cocci_id/* drivers/iio/adc/mcp3911.c 343 */[];
	const struct of_device_id cocci_id/* drivers/iio/adc/mcp3911.c 337 */[];
	struct iio_dev *cocci_id/* drivers/iio/adc/mcp3911.c 244 */;
	struct spi_device *cocci_id/* drivers/iio/adc/mcp3911.c 242 */;
	u32 cocci_id/* drivers/iio/adc/mcp3911.c 205 */;
	struct mcp3911 *cocci_id/* drivers/iio/adc/mcp3911.c 203 */;
	struct device_node *cocci_id/* drivers/iio/adc/mcp3911.c 203 */;
	int cocci_id/* drivers/iio/adc/mcp3911.c 203 */;
	const struct iio_info cocci_id/* drivers/iio/adc/mcp3911.c 198 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/mcp3911.c 193 */[];
	long cocci_id/* drivers/iio/adc/mcp3911.c 101 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/mcp3911.c 100 */;
	int *cocci_id/* drivers/iio/adc/mcp3911.c 100 */;
}
