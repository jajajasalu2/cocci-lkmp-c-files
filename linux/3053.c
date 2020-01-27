cocci_test_suite() {
	struct prt_quirk {
		const struct dmi_system_id *system;
		unsigned int segment;
		unsigned int bus;
		unsigned int device;
		unsigned char pin;
		const char *source;
		const char *actual_source;
	} cocci_id/* drivers/acpi/pci_irq.c 83 */;
	const struct dmi_system_id cocci_id/* drivers/acpi/pci_irq.c 59 */[];
	u8 cocci_id/* drivers/acpi/pci_irq.c 493 */;
	void cocci_id/* drivers/acpi/pci_irq.c 489 */;
	char cocci_id/* drivers/acpi/pci_irq.c 411 */[16];
	char *cocci_id/* drivers/acpi/pci_irq.c 410 */;
	bool cocci_id/* drivers/acpi/pci_irq.c 378 */;
	char cocci_id/* drivers/acpi/pci_irq.c 37 */;
	u32 cocci_id/* drivers/acpi/pci_irq.c 356 */;
	struct pci_dev *cocci_id/* drivers/acpi/pci_irq.c 354 */;
	int cocci_id/* drivers/acpi/pci_irq.c 354 */;
	struct acpi_prt_entry {
		struct acpi_pci_id id;
		u8 pin;
		acpi_handle link;
		u32 index;
	} cocci_id/* drivers/acpi/pci_irq.c 30 */;
	struct pci_bus *cocci_id/* drivers/acpi/pci_irq.c 247 */;
	unsigned long cocci_id/* drivers/acpi/pci_irq.c 233 */;
	struct acpi_buffer cocci_id/* drivers/acpi/pci_irq.c 210 */;
	acpi_status cocci_id/* drivers/acpi/pci_irq.c 209 */;
	struct acpi_prt_entry cocci_id/* drivers/acpi/pci_irq.c 153 */;
	struct acpi_prt_entry *cocci_id/* drivers/acpi/pci_irq.c 147 */;
	struct acpi_prt_entry **cocci_id/* drivers/acpi/pci_irq.c 142 */;
	struct acpi_pci_routing_table *cocci_id/* drivers/acpi/pci_irq.c 141 */;
	acpi_handle cocci_id/* drivers/acpi/pci_irq.c 140 */;
	const struct prt_quirk *cocci_id/* drivers/acpi/pci_irq.c 116 */;
	const struct prt_quirk cocci_id/* drivers/acpi/pci_irq.c 100 */[];
}
