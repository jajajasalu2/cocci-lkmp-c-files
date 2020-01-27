cocci_test_suite() {
	struct acpi_resource_i2c_serialbus *cocci_id/* drivers/i2c/i2c-core-acpi.c 76 */;
	struct i2c_acpi_handler_data cocci_id/* drivers/i2c/i2c-core-acpi.c 708 */;
	struct i2c_acpi_handler_data *cocci_id/* drivers/i2c/i2c-core-acpi.c 697 */;
	struct acpi_connection_info *cocci_id/* drivers/i2c/i2c-core-acpi.c 584 */;
	struct gsb_buffer *cocci_id/* drivers/i2c/i2c-core-acpi.c 582 */;
	u64 *cocci_id/* drivers/i2c/i2c-core-acpi.c 579 */;
	acpi_physical_address cocci_id/* drivers/i2c/i2c-core-acpi.c 578 */;
	struct acpi_resource_i2c_serialbus **cocci_id/* drivers/i2c/i2c-core-acpi.c 56 */;
	bool cocci_id/* drivers/i2c/i2c-core-acpi.c 55 */;
	struct i2c_msg cocci_id/* drivers/i2c/i2c-core-acpi.c 548 */[1];
	struct i2c_msg cocci_id/* drivers/i2c/i2c-core-acpi.c 505 */[2];
	u8 cocci_id/* drivers/i2c/i2c-core-acpi.c 502 */;
	u8 *cocci_id/* drivers/i2c/i2c-core-acpi.c 502 */;
	struct i2c_client *cocci_id/* drivers/i2c/i2c-core-acpi.c 501 */;
	int cocci_id/* drivers/i2c/i2c-core-acpi.c 501 */;
	struct notifier_block cocci_id/* drivers/i2c/i2c-core-acpi.c 438 */;
	struct notifier_block *cocci_id/* drivers/i2c/i2c-core-acpi.c 402 */;
	unsigned long cocci_id/* drivers/i2c/i2c-core-acpi.c 402 */;
	struct device *cocci_id/* drivers/i2c/i2c-core-acpi.c 385 */;
	const void *cocci_id/* drivers/i2c/i2c-core-acpi.c 373 */;
	struct i2c_acpi_lookup cocci_id/* drivers/i2c/i2c-core-acpi.c 337 */;
	struct i2c_acpi_lookup {
		struct i2c_board_info *info;
		acpi_handle adapter_handle;
		acpi_handle device_handle;
		acpi_handle search_handle;
		int n;
		int index;
		u32 speed;
		u32 min_speed;
		u32 force_speed;
	} cocci_id/* drivers/i2c/i2c-core-acpi.c 33 */;
	const struct acpi_device_id cocci_id/* drivers/i2c/i2c-core-acpi.c 289 */[];
	const struct acpi_device_id *cocci_id/* drivers/i2c/i2c-core-acpi.c 279 */;
	struct i2c_board_info cocci_id/* drivers/i2c/i2c-core-acpi.c 241 */;
	struct acpi_device *cocci_id/* drivers/i2c/i2c-core-acpi.c 240 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/i2c-core-acpi.c 239 */;
	void **cocci_id/* drivers/i2c/i2c-core-acpi.c 237 */;
	void *cocci_id/* drivers/i2c/i2c-core-acpi.c 237 */;
	u32 cocci_id/* drivers/i2c/i2c-core-acpi.c 236 */;
	acpi_status cocci_id/* drivers/i2c/i2c-core-acpi.c 236 */;
	acpi_handle cocci_id/* drivers/i2c/i2c-core-acpi.c 236 */;
	struct gsb_buffer {
		u8 status;
		u8 len;
		union {
			u16 wdata;
			u8 bdata;
			u8 data[0];
		};
	}__packed cocci_id/* drivers/i2c/i2c-core-acpi.c 23 */;
	void cocci_id/* drivers/i2c/i2c-core-acpi.c 221 */;
	acpi_handle *cocci_id/* drivers/i2c/i2c-core-acpi.c 180 */;
	struct i2c_acpi_handler_data {
		struct acpi_connection_info info;
		struct i2c_adapter *adapter;
	} cocci_id/* drivers/i2c/i2c-core-acpi.c 18 */;
	struct resource cocci_id/* drivers/i2c/i2c-core-acpi.c 139 */;
	int *cocci_id/* drivers/i2c/i2c-core-acpi.c 138 */;
	struct acpi_resource *cocci_id/* drivers/i2c/i2c-core-acpi.c 136 */;
	struct list_head cocci_id/* drivers/i2c/i2c-core-acpi.c 112 */;
	struct i2c_board_info *cocci_id/* drivers/i2c/i2c-core-acpi.c 111 */;
	struct i2c_acpi_lookup *cocci_id/* drivers/i2c/i2c-core-acpi.c 109 */;
}
