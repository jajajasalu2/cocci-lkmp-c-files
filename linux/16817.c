cocci_test_suite() {
	void *cocci_id/* drivers/input/misc/soc_button_array.c 87 */;
	int cocci_id/* drivers/input/misc/soc_button_array.c 72 */;
	struct gpio_keys_platform_data *cocci_id/* drivers/input/misc/soc_button_array.c 71 */;
	struct gpio_keys_button *cocci_id/* drivers/input/misc/soc_button_array.c 70 */;
	bool cocci_id/* drivers/input/misc/soc_button_array.c 66 */;
	const struct soc_button_info *cocci_id/* drivers/input/misc/soc_button_array.c 65 */;
	struct platform_device *cocci_id/* drivers/input/misc/soc_button_array.c 63 */;
	struct gpio_desc *cocci_id/* drivers/input/misc/soc_button_array.c 49 */;
	struct platform_driver cocci_id/* drivers/input/misc/soc_button_array.c 470 */;
	unsigned long cocci_id/* drivers/input/misc/soc_button_array.c 459 */;
	const struct acpi_device_id cocci_id/* drivers/input/misc/soc_button_array.c 458 */[];
	const struct soc_device_data cocci_id/* drivers/input/misc/soc_button_array.c 453 */;
	const struct soc_button_info cocci_id/* drivers/input/misc/soc_button_array.c 446 */[];
	u64 cocci_id/* drivers/input/misc/soc_button_array.c 416 */;
	union acpi_object *cocci_id/* drivers/input/misc/soc_button_array.c 415 */;
	acpi_handle cocci_id/* drivers/input/misc/soc_button_array.c 414 */;
	const guid_t cocci_id/* drivers/input/misc/soc_button_array.c 408 */;
	struct soc_button_data {
		struct platform_device *children[BUTTON_TYPES];
	} cocci_id/* drivers/input/misc/soc_button_array.c 40 */;
	struct soc_button_data *cocci_id/* drivers/input/misc/soc_button_array.c 325 */;
	const struct soc_device_data *cocci_id/* drivers/input/misc/soc_button_array.c 323 */;
	struct soc_device_data {
		const struct soc_button_info *button_info;
		int (*check)(struct device *dev);
	} cocci_id/* drivers/input/misc/soc_button_array.c 28 */;
	acpi_status cocci_id/* drivers/input/misc/soc_button_array.c 233 */;
	struct acpi_buffer cocci_id/* drivers/input/misc/soc_button_array.c 230 */;
	struct soc_button_info *cocci_id/* drivers/input/misc/soc_button_array.c 228 */;
	struct device *cocci_id/* drivers/input/misc/soc_button_array.c 228 */;
	const u8 cocci_id/* drivers/input/misc/soc_button_array.c 222 */[16];
	struct soc_button_info {
		const char *name;
		int acpi_index;
		unsigned int event_type;
		unsigned int event_code;
		bool autorepeat;
		bool wakeup;
	} cocci_id/* drivers/input/misc/soc_button_array.c 19 */;
	const union acpi_object *cocci_id/* drivers/input/misc/soc_button_array.c 148 */;
}
