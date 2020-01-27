cocci_test_suite() {
	void __init cocci_id/* drivers/acpi/pci_link.c 919 */;
	struct syscore_ops cocci_id/* drivers/acpi/pci_link.c 915 */;
	char *cocci_id/* drivers/acpi/pci_link.c 907 */;
	int __init cocci_id/* drivers/acpi/pci_link.c 907 */;
	u32 cocci_id/* drivers/acpi/pci_link.c 90 */;
	bool cocci_id/* drivers/acpi/pci_link.c 858 */;
	struct acpi_pci_link cocci_id/* drivers/acpi/pci_link.c 730 */;
	const struct acpi_device_id *cocci_id/* drivers/acpi/pci_link.c 723 */;
	struct acpi_device *cocci_id/* drivers/acpi/pci_link.c 722 */;
	struct acpi_pci_link {
		struct list_head list;
		struct acpi_device *device;
		struct acpi_pci_link_irq irq;
		int refcnt;
	} cocci_id/* drivers/acpi/pci_link.c 68 */;
	char **cocci_id/* drivers/acpi/pci_link.c 617 */;
	acpi_handle cocci_id/* drivers/acpi/pci_link.c 616 */;
	int *cocci_id/* drivers/acpi/pci_link.c 616 */;
	struct acpi_pci_link_irq {
		u32 active;
		u8 triggering;
		u8 polarity;
		u8 resource_type;
		u8 possible_count;
		u32 possible[ACPI_PCI_LINK_MAX_POSSIBLE];
		u8 initialized:1;
		u8 reserved:7;
	} cocci_id/* drivers/acpi/pci_link.c 57 */;
	int cocci_id/* drivers/acpi/pci_link.c 532 */;
	void cocci_id/* drivers/acpi/pci_link.c 496 */;
	struct acpi_scan_handler cocci_id/* drivers/acpi/pci_link.c 47 */;
	struct acpi_pci_link *cocci_id/* drivers/acpi/pci_link.c 459 */;
	int cocci_id/* drivers/acpi/pci_link.c 437 */[ACPI_MAX_ISA_IRQS];
	const struct acpi_device_id cocci_id/* drivers/acpi/pci_link.c 42 */[];
	void cocci_id/* drivers/acpi/pci_link.c 40 */(struct acpi_device *device);
	int cocci_id/* drivers/acpi/pci_link.c 38 */(struct acpi_device *device,
						     const struct acpi_device_id *not_used);
	struct acpi_resource cocci_id/* drivers/acpi/pci_link.c 302 */;
	struct acpi_buffer cocci_id/* drivers/acpi/pci_link.c 287 */;
	struct {
		struct acpi_resource res;
		struct acpi_resource end;
	} *cocci_id/* drivers/acpi/pci_link.c 283 */;
	struct acpi_resource_extended_irq *cocci_id/* drivers/acpi/pci_link.c 200 */;
	struct acpi_resource_irq *cocci_id/* drivers/acpi/pci_link.c 185 */;
	void *cocci_id/* drivers/acpi/pci_link.c 175 */;
	acpi_status cocci_id/* drivers/acpi/pci_link.c 174 */;
	struct acpi_resource *cocci_id/* drivers/acpi/pci_link.c 174 */;
}
