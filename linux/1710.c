cocci_test_suite() {
	int *cocci_id/* drivers/iio/potentiometer/mcp41010.c 82 */;
	long cocci_id/* drivers/iio/potentiometer/mcp41010.c 82 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/mcp41010.c 81 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/mcp41010.c 75 */[];
	struct mcp41010_data {
		struct spi_device *spi;
		const struct mcp41010_cfg *cfg;
		struct mutex lock;
		unsigned int value[MCP41010_MAX_WIPERS];
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/potentiometer/mcp41010.c 58 */;
	const struct mcp41010_cfg cocci_id/* drivers/iio/potentiometer/mcp41010.c 49 */[];
	enum mcp41010_type{MCP41010, MCP41050, MCP41100, MCP42010, MCP42050, MCP42100,} cocci_id/* drivers/iio/potentiometer/mcp41010.c 40 */;
	struct mcp41010_cfg {
		char name[16];
		int wipers;
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/mcp41010.c 34 */;
	struct spi_driver cocci_id/* drivers/iio/potentiometer/mcp41010.c 190 */;
	const struct spi_device_id cocci_id/* drivers/iio/potentiometer/mcp41010.c 179 */[];
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/mcp41010.c 168 */[];
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/mcp41010.c 140 */;
	struct mcp41010_data *cocci_id/* drivers/iio/potentiometer/mcp41010.c 139 */;
	struct device *cocci_id/* drivers/iio/potentiometer/mcp41010.c 138 */;
	struct spi_device *cocci_id/* drivers/iio/potentiometer/mcp41010.c 135 */;
	int cocci_id/* drivers/iio/potentiometer/mcp41010.c 135 */;
	const struct iio_info cocci_id/* drivers/iio/potentiometer/mcp41010.c 130 */;
}
