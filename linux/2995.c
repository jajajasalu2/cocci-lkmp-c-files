cocci_test_suite() {
	struct acpi_resource_extended_irq *cocci_id/* drivers/acpi/evged.c 81 */;
	struct acpi_resource_irq *cocci_id/* drivers/acpi/evged.c 80 */;
	struct resource cocci_id/* drivers/acpi/evged.c 79 */;
	acpi_handle cocci_id/* drivers/acpi/evged.c 77 */;
	struct device *cocci_id/* drivers/acpi/evged.c 76 */;
	struct acpi_ged_device *cocci_id/* drivers/acpi/evged.c 75 */;
	unsigned int cocci_id/* drivers/acpi/evged.c 72 */;
	struct acpi_resource *cocci_id/* drivers/acpi/evged.c 68 */;
	acpi_status cocci_id/* drivers/acpi/evged.c 59 */;
	struct acpi_ged_event *cocci_id/* drivers/acpi/evged.c 58 */;
	irqreturn_t cocci_id/* drivers/acpi/evged.c 56 */;
	void *cocci_id/* drivers/acpi/evged.c 56 */;
	int cocci_id/* drivers/acpi/evged.c 56 */;
	struct acpi_ged_event {
		struct list_head node;
		struct device *dev;
		unsigned int gsi;
		unsigned int irq;
		acpi_handle handle;
	} cocci_id/* drivers/acpi/evged.c 48 */;
	struct acpi_ged_device {
		struct device *dev;
		struct list_head event_list;
	} cocci_id/* drivers/acpi/evged.c 43 */;
	struct platform_driver cocci_id/* drivers/acpi/evged.c 171 */;
	const struct acpi_device_id cocci_id/* drivers/acpi/evged.c 166 */[];
	void cocci_id/* drivers/acpi/evged.c 147 */;
	struct platform_device *cocci_id/* drivers/acpi/evged.c 125 */;
}
