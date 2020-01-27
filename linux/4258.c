cocci_test_suite() {
	int cocci_id/* drivers/platform/x86/surface3_button.c 96 */;
	struct gpio_keys_platform_data *cocci_id/* drivers/platform/x86/surface3_button.c 95 */;
	struct gpio_keys_button *cocci_id/* drivers/platform/x86/surface3_button.c 94 */;
	bool cocci_id/* drivers/platform/x86/surface3_button.c 90 */;
	const struct surface3_button_info *cocci_id/* drivers/platform/x86/surface3_button.c 89 */;
	struct i2c_client *cocci_id/* drivers/platform/x86/surface3_button.c 88 */;
	struct platform_device *cocci_id/* drivers/platform/x86/surface3_button.c 87 */;
	struct gpio_desc *cocci_id/* drivers/platform/x86/surface3_button.c 73 */;
	struct device *cocci_id/* drivers/platform/x86/surface3_button.c 71 */;
	struct surface3_button_data {
		struct platform_device *children[BUTTON_TYPES];
	} cocci_id/* drivers/platform/x86/surface3_button.c 64 */;
	struct surface3_button_info {
		const char *name;
		int acpi_index;
		unsigned int event_type;
		unsigned int event_code;
		bool autorepeat;
		bool wakeup;
		bool active_low;
	} cocci_id/* drivers/platform/x86/surface3_button.c 54 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/surface3_button.c 48 */[];
	struct i2c_driver cocci_id/* drivers/platform/x86/surface3_button.c 234 */;
	const struct i2c_device_id cocci_id/* drivers/platform/x86/surface3_button.c 229 */[];
	struct surface3_button_data *cocci_id/* drivers/platform/x86/surface3_button.c 185 */;
	const struct i2c_device_id *cocci_id/* drivers/platform/x86/surface3_button.c 182 */;
	struct surface3_button_info cocci_id/* drivers/platform/x86/surface3_button.c 173 */[];
	void *cocci_id/* drivers/platform/x86/surface3_button.c 107 */;
}
