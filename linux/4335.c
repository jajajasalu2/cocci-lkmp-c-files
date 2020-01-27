cocci_test_suite() {
	struct rfkill *cocci_id/* drivers/platform/x86/dell-rbtn.c 89 */;
	acpi_status cocci_id/* drivers/platform/x86/dell-rbtn.c 70 */;
	union acpi_object cocci_id/* drivers/platform/x86/dell-rbtn.c 69 */;
	struct acpi_object_list cocci_id/* drivers/platform/x86/dell-rbtn.c 68 */;
	struct acpi_device *cocci_id/* drivers/platform/x86/dell-rbtn.c 66 */;
	u32 cocci_id/* drivers/platform/x86/dell-rbtn.c 450 */;
	enum rbtn_type cocci_id/* drivers/platform/x86/dell-rbtn.c 389 */;
	struct rbtn_data *cocci_id/* drivers/platform/x86/dell-rbtn.c 388 */;
	void *cocci_id/* drivers/platform/x86/dell-rbtn.c 359 */;
	unsigned long long cocci_id/* drivers/platform/x86/dell-rbtn.c 35 */;
	struct notifier_block *cocci_id/* drivers/platform/x86/dell-rbtn.c 339 */;
	int cocci_id/* drivers/platform/x86/dell-rbtn.c 339 */;
	int *cocci_id/* drivers/platform/x86/dell-rbtn.c 314 */;
	struct device *cocci_id/* drivers/platform/x86/dell-rbtn.c 310 */;
	bool cocci_id/* drivers/platform/x86/dell-rbtn.c 306 */;
	struct acpi_driver cocci_id/* drivers/platform/x86/dell-rbtn.c 289 */;
	void ACPI_SYSTEM_XFACE cocci_id/* drivers/platform/x86/dell-rbtn.c 245 */;
	const struct acpi_device_id cocci_id/* drivers/platform/x86/dell-rbtn.c 212 */[];
	void cocci_id/* drivers/platform/x86/dell-rbtn.c 210 */(struct acpi_device *device,
								u32 event);
	struct rbtn_data {
		enum rbtn_type type;
		struct rfkill *rfkill;
		struct input_dev *input_dev;
		bool suspended;
	} cocci_id/* drivers/platform/x86/dell-rbtn.c 21 */;
	int cocci_id/* drivers/platform/x86/dell-rbtn.c 208 */(struct acpi_device *device);
	void cocci_id/* drivers/platform/x86/dell-rbtn.c 195 */;
	enum rbtn_type{RBTN_UNKNOWN, RBTN_TOGGLE, RBTN_SLIDER,} cocci_id/* drivers/platform/x86/dell-rbtn.c 15 */;
	const struct rfkill_ops cocci_id/* drivers/platform/x86/dell-rbtn.c 107 */;
}
