cocci_test_suite() {
	struct acpi_buffer cocci_id/* drivers/acpi/power.c 930 */;
	union acpi_object cocci_id/* drivers/acpi/power.c 929 */;
	struct acpi_device *cocci_id/* drivers/acpi/power.c 928 */;
	acpi_handle cocci_id/* drivers/acpi/power.c 925 */;
	char *cocci_id/* drivers/acpi/power.c 893 */;
	struct device_attribute *cocci_id/* drivers/acpi/power.c 892 */;
	ssize_t cocci_id/* drivers/acpi/power.c 891 */;
	struct acpi_power_resource cocci_id/* drivers/acpi/power.c 881 */;
	int *cocci_id/* drivers/acpi/power.c 801 */;
	struct acpi_object_list cocci_id/* drivers/acpi/power.c 653 */;
	union acpi_object cocci_id/* drivers/acpi/power.c 652 */[3];
	struct acpi_power_resource_entry {
		struct list_head node;
		struct acpi_power_resource *resource;
	} cocci_id/* drivers/acpi/power.c 62 */;
	bool cocci_id/* drivers/acpi/power.c 580 */;
	const struct attribute_group *cocci_id/* drivers/acpi/power.c 571 */;
	const struct attribute_group cocci_id/* drivers/acpi/power.c 517 */;
	struct acpi_power_resource {
		struct acpi_device device;
		struct list_head list_node;
		char *name;
		u32 system_level;
		u32 order;
		unsigned int ref_count;
		bool wakeup_enabled;
		struct mutex resource_lock;
		struct list_head dependents;
	} cocci_id/* drivers/acpi/power.c 50 */;
	const struct attribute_group cocci_id/* drivers/acpi/power.c 498 */[];
	struct attribute *cocci_id/* drivers/acpi/power.c 494 */[];
	struct acpi_power_dependent_device {
		struct device *dev;
		struct list_head node;
	} cocci_id/* drivers/acpi/power.c 45 */;
	acpi_status cocci_id/* drivers/acpi/power.c 411 */;
	struct acpi_power_resource *cocci_id/* drivers/acpi/power.c 409 */;
	int cocci_id/* drivers/acpi/power.c 409 */;
	struct acpi_power_dependent_device *cocci_id/* drivers/acpi/power.c 355 */;
	void cocci_id/* drivers/acpi/power.c 339 */;
	struct list_head *cocci_id/* drivers/acpi/power.c 308 */;
	struct acpi_power_resource_entry *cocci_id/* drivers/acpi/power.c 307 */;
	struct device *cocci_id/* drivers/acpi/power.c 305 */;
	char cocci_id/* drivers/acpi/power.c 186 */[5];
	unsigned long long cocci_id/* drivers/acpi/power.c 185 */;
	union acpi_object *cocci_id/* drivers/acpi/power.c 144 */;
	unsigned int cocci_id/* drivers/acpi/power.c 144 */;
}
