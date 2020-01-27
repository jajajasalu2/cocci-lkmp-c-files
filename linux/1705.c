cocci_test_suite() {
	const struct mcp4531_cfg cocci_id/* drivers/iio/potentiometer/mcp4531.c 77 */[];
	enum mcp4531_type{MCP453x_502, MCP453x_103, MCP453x_503, MCP453x_104, MCP454x_502, MCP454x_103, MCP454x_503, MCP454x_104, MCP455x_502, MCP455x_103, MCP455x_503, MCP455x_104, MCP456x_502, MCP456x_103, MCP456x_503, MCP456x_104, MCP463x_502, MCP463x_103, MCP463x_503, MCP463x_104, MCP464x_502, MCP464x_103, MCP464x_503, MCP464x_104, MCP465x_502, MCP465x_103, MCP465x_503, MCP465x_104, MCP466x_502, MCP466x_103, MCP466x_503, MCP466x_104,} cocci_id/* drivers/iio/potentiometer/mcp4531.c 42 */;
	struct i2c_driver cocci_id/* drivers/iio/potentiometer/mcp4531.c 387 */;
	struct mcp4531_cfg {
		int wipers;
		int avail[3];
		int kohms;
	} cocci_id/* drivers/iio/potentiometer/mcp4531.c 36 */;
	struct iio_dev *cocci_id/* drivers/iio/potentiometer/mcp4531.c 359 */;
	struct mcp4531_data *cocci_id/* drivers/iio/potentiometer/mcp4531.c 358 */;
	struct device *cocci_id/* drivers/iio/potentiometer/mcp4531.c 357 */;
	struct i2c_client *cocci_id/* drivers/iio/potentiometer/mcp4531.c 355 */;
	int cocci_id/* drivers/iio/potentiometer/mcp4531.c 355 */;
	const struct of_device_id cocci_id/* drivers/iio/potentiometer/mcp4531.c 285 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/potentiometer/mcp4531.c 209 */[];
	const struct iio_info cocci_id/* drivers/iio/potentiometer/mcp4531.c 203 */;
	long cocci_id/* drivers/iio/potentiometer/mcp4531.c 167 */;
	const int **cocci_id/* drivers/iio/potentiometer/mcp4531.c 166 */;
	int *cocci_id/* drivers/iio/potentiometer/mcp4531.c 166 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/potentiometer/mcp4531.c 165 */;
	s32 cocci_id/* drivers/iio/potentiometer/mcp4531.c 145 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/potentiometer/mcp4531.c 134 */[];
	struct mcp4531_data {
		struct i2c_client *client;
		const struct mcp4531_cfg *cfg;
	} cocci_id/* drivers/iio/potentiometer/mcp4531.c 119 */;
}
