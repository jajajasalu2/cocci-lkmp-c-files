cocci_test_suite() {
	bool cocci_id/* drivers/iio/dac/mcp4725.c 80 */;
	u8 cocci_id/* drivers/iio/dac/mcp4725.c 79 */[3];
	const char *cocci_id/* drivers/iio/dac/mcp4725.c 74 */;
	struct device_attribute *cocci_id/* drivers/iio/dac/mcp4725.c 74 */;
	size_t cocci_id/* drivers/iio/dac/mcp4725.c 74 */;
	u8 cocci_id/* drivers/iio/dac/mcp4725.c 62 */[2];
	int __maybe_unused cocci_id/* drivers/iio/dac/mcp4725.c 58 */;
	struct i2c_driver cocci_id/* drivers/iio/dac/mcp4725.c 538 */;
	void *cocci_id/* drivers/iio/dac/mcp4725.c 527 */;
	const struct of_device_id cocci_id/* drivers/iio/dac/mcp4725.c 524 */[];
	const struct i2c_device_id cocci_id/* drivers/iio/dac/mcp4725.c 516 */[];
	enum chip_id cocci_id/* drivers/iio/dac/mcp4725.c 402 */;
	u8 cocci_id/* drivers/iio/dac/mcp4725.c 391 */;
	u8 cocci_id/* drivers/iio/dac/mcp4725.c 390 */[4];
	struct mcp4725_platform_data *cocci_id/* drivers/iio/dac/mcp4725.c 389 */;
	const struct i2c_device_id *cocci_id/* drivers/iio/dac/mcp4725.c 385 */;
	struct i2c_client *cocci_id/* drivers/iio/dac/mcp4725.c 384 */;
	struct device_node *cocci_id/* drivers/iio/dac/mcp4725.c 364 */;
	struct device *cocci_id/* drivers/iio/dac/mcp4725.c 361 */;
	const struct iio_info cocci_id/* drivers/iio/dac/mcp4725.c 354 */;
	struct mcp4725_data {
		struct i2c_client *client;
		int id;
		unsigned ref_mode;
		bool vref_buffered;
		u16 dac_value;
		bool powerdown;
		unsigned powerdown_mode;
		struct regulator *vdd_reg;
		struct regulator *vref_reg;
	} cocci_id/* drivers/iio/dac/mcp4725.c 33 */;
	int *cocci_id/* drivers/iio/dac/mcp4725.c 309 */;
	long cocci_id/* drivers/iio/dac/mcp4725.c 309 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/dac/mcp4725.c 243 */[];
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/dac/mcp4725.c 215 */[];
	const struct iio_enum cocci_id/* drivers/iio/dac/mcp4725.c 200 */[];
	enum chip_id{MCP4725, MCP4726,} cocci_id/* drivers/iio/dac/mcp4725.c 195 */;
	uintptr_t cocci_id/* drivers/iio/dac/mcp4725.c 166 */;
	char *cocci_id/* drivers/iio/dac/mcp4725.c 166 */;
	ssize_t cocci_id/* drivers/iio/dac/mcp4725.c 165 */;
	unsigned cocci_id/* drivers/iio/dac/mcp4725.c 156 */;
	struct mcp4725_data *cocci_id/* drivers/iio/dac/mcp4725.c 150 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/dac/mcp4725.c 148 */;
	struct iio_dev *cocci_id/* drivers/iio/dac/mcp4725.c 147 */;
	int cocci_id/* drivers/iio/dac/mcp4725.c 147 */;
	const char *const cocci_id/* drivers/iio/dac/mcp4725.c 135 */[];
	const struct attribute_group cocci_id/* drivers/iio/dac/mcp4725.c 131 */;
	struct attribute *cocci_id/* drivers/iio/dac/mcp4725.c 126 */[];
}
