cocci_test_suite() {
	char cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 67 */[32];
	struct device *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 65 */;
	struct i2c_board_info cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 64 */;
	const struct i2c_inst_data *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 63 */;
	const struct acpi_device_id *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 62 */;
	struct i2c_multi_inst_data *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 61 */;
	struct platform_device *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 59 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 45 */;
	int *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 37 */;
	struct acpi_resource_i2c_serialbus *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 36 */;
	struct acpi_resource *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 34 */;
	void *cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 34 */;
	int cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 34 */;
	struct i2c_multi_inst_data {
		int num_clients;
		struct i2c_client *clients[0];
	} cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 29 */;
	struct i2c_inst_data {
		const char *type;
		unsigned int flags;
		int irq_idx;
	} cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 23 */;
	struct platform_driver cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 189 */;
	unsigned long cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 182 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 181 */[];
	const struct i2c_inst_data cocci_id/* drivers/platform/x86/i2c-multi-instantiate.c 154 */[];
}
