cocci_test_suite() {
	const struct mcp4131_cfg cocci_id/* drivers/iio/potentiometer/mcp4131.c 93 */[];
	enum mcp4131_type{MCP413x_502=0, MCP413x_103, MCP413x_503, MCP413x_104, MCP414x_502, MCP414x_103, MCP414x_503, MCP414x_104, MCP415x_502, MCP415x_103, MCP415x_503, MCP415x_104, MCP416x_502, MCP416x_103, MCP416x_503, MCP416x_104, MCP423x_502, MCP423x_103, MCP423x_503, MCP423x_104, MCP424x_502, MCP424x_103, MCP424x_503, MCP424x_104, MCP425x_502, MCP425x_103, MCP425x_503, MCP425x_104, MCP426x_502, MCP426x_103, MCP426x_503, MCP426x_104,} cocci_id/* drivers/iio/potentiometer/mcp4131.c 58 */;
	struct mcp4131_cfg {
		int wipers;
		int max_pos;
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/mcp4131.c 52 */;
	struct spi_driver cocci_id/* drivers/iio/potentiometer/mcp4131.c 480 */;
	const struct spi_device_id cocci_id/* drivers/iio/potentiometer/mcp4131.c 411 */[];
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/mcp4131.c 278 */[];
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/mcp4131.c 246 */;
	struct mcp4131_data *cocci_id/* drivers/iio/potentiometer/mcp4131.c 245 */;
	unsigned long cocci_id/* drivers/iio/potentiometer/mcp4131.c 244 */;
	struct device *cocci_id/* drivers/iio/potentiometer/mcp4131.c 243 */;
	struct spi_device *cocci_id/* drivers/iio/potentiometer/mcp4131.c 240 */;
	int cocci_id/* drivers/iio/potentiometer/mcp4131.c 240 */;
	const struct iio_info cocci_id/* drivers/iio/potentiometer/mcp4131.c 235 */;
	int *cocci_id/* drivers/iio/potentiometer/mcp4131.c 166 */;
	long cocci_id/* drivers/iio/potentiometer/mcp4131.c 166 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/mcp4131.c 165 */;
	struct spi_message cocci_id/* drivers/iio/potentiometer/mcp4131.c 156 */;
	struct spi_transfer cocci_id/* drivers/iio/potentiometer/mcp4131.c 151 */;
	void *cocci_id/* drivers/iio/potentiometer/mcp4131.c 149 */;
	size_t cocci_id/* drivers/iio/potentiometer/mcp4131.c 149 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/mcp4131.c 144 */[];
	struct mcp4131_data {
		struct spi_device *spi;
		const struct mcp4131_cfg *cfg;
		struct mutex lock;
		u8 buf[2]____cacheline_aligned;
	} cocci_id/* drivers/iio/potentiometer/mcp4131.c 128 */;
}
