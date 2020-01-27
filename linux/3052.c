cocci_test_suite() {
	const struct dmi_system_id cocci_id/* drivers/acpi/button.c 79 */[];
	const struct acpi_device_id cocci_id/* drivers/acpi/button.c 68 */[];
	long cocci_id/* drivers/acpi/button.c 639 */;
	const struct dmi_system_id *cocci_id/* drivers/acpi/button.c 634 */;
	struct acpi_driver *cocci_id/* drivers/acpi/button.c 632 */;
	const struct kernel_param *cocci_id/* drivers/acpi/button.c 612 */;
	const char *const cocci_id/* drivers/acpi/button.c 54 */[];
	struct acpi_button cocci_id/* drivers/acpi/button.c 498 */;
	char *cocci_id/* drivers/acpi/button.c 491 */;
	const char *cocci_id/* drivers/acpi/button.c 490 */;
	struct input_dev *cocci_id/* drivers/acpi/button.c 489 */;
	struct acpi_button *cocci_id/* drivers/acpi/button.c 488 */;
	struct acpi_device *cocci_id/* drivers/acpi/button.c 486 */;
	int cocci_id/* drivers/acpi/button.c 486 */;
	enum{ACPI_BUTTON_LID_INIT_IGNORE, ACPI_BUTTON_LID_INIT_OPEN, ACPI_BUTTON_LID_INIT_METHOD, ACPI_BUTTON_LID_INIT_DISABLED,} cocci_id/* drivers/acpi/button.c 47 */;
	struct device *cocci_id/* drivers/acpi/button.c 459 */;
	u32 cocci_id/* drivers/acpi/button.c 404 */;
	void cocci_id/* drivers/acpi/button.c 404 */;
	struct proc_dir_entry *cocci_id/* drivers/acpi/button.c 286 */;
	void *cocci_id/* drivers/acpi/button.c 272 */;
	struct seq_file *cocci_id/* drivers/acpi/button.c 271 */;
	int __maybe_unused cocci_id/* drivers/acpi/button.c 271 */;
	bool cocci_id/* drivers/acpi/button.c 193 */;
	ktime_t cocci_id/* drivers/acpi/button.c 192 */;
	acpi_status cocci_id/* drivers/acpi/button.c 180 */;
	unsigned long long cocci_id/* drivers/acpi/button.c 179 */;
	unsigned long cocci_id/* drivers/acpi/button.c 166 */;
	struct acpi_button {
		unsigned int type;
		struct input_dev *input;
		char phys[32];
		unsigned long pushed;
		int last_state;
		ktime_t last_time;
		bool suspended;
	} cocci_id/* drivers/acpi/button.c 153 */;
	struct acpi_driver cocci_id/* drivers/acpi/button.c 141 */;
	int cocci_id/* drivers/acpi/button.c 134 */(struct device *dev);
	void cocci_id/* drivers/acpi/button.c 130 */(struct acpi_device *device,
						     u32 event);
	int cocci_id/* drivers/acpi/button.c 128 */(struct acpi_device *device);
}
