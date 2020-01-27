cocci_test_suite() {
	struct acpi_pci_id *cocci_id/* drivers/acpi/acpica/hwpci.c 86 */;
	acpi_status cocci_id/* drivers/acpi/acpica/hwpci.c 41 */(struct acpi_pci_id *pci_id,
								 acpi_handle pci_device,
								 u16 *bus_number,
								 u8 *is_bridge);
	void cocci_id/* drivers/acpi/acpica/hwpci.c 39 */(struct acpi_pci_device *list_head);
	u16 cocci_id/* drivers/acpi/acpica/hwpci.c 371 */;
	acpi_status cocci_id/* drivers/acpi/acpica/hwpci.c 35 */(struct acpi_pci_id *pci_id,
								 struct acpi_pci_device *list_head);
	u64 cocci_id/* drivers/acpi/acpica/hwpci.c 302 */;
	acpi_object_type cocci_id/* drivers/acpi/acpica/hwpci.c 301 */;
	acpi_status cocci_id/* drivers/acpi/acpica/hwpci.c 30 */(acpi_handle root_pci_device,
								 acpi_handle pci_region,
								 struct acpi_pci_device **return_list_head);
	u8 *cocci_id/* drivers/acpi/acpica/hwpci.c 298 */;
	u16 *cocci_id/* drivers/acpi/acpica/hwpci.c 298 */;
	void cocci_id/* drivers/acpi/acpica/hwpci.c 262 */;
	struct acpi_pci_device {
		acpi_handle device;
		struct acpi_pci_device *next;
	} cocci_id/* drivers/acpi/acpica/hwpci.c 22 */;
	u8 cocci_id/* drivers/acpi/acpica/hwpci.c 211 */;
	struct acpi_pci_device cocci_id/* drivers/acpi/acpica/hwpci.c 168 */;
	struct acpi_pci_device *cocci_id/* drivers/acpi/acpica/hwpci.c 143 */;
	struct acpi_pci_device **cocci_id/* drivers/acpi/acpica/hwpci.c 138 */;
	acpi_handle cocci_id/* drivers/acpi/acpica/hwpci.c 136 */;
	acpi_status cocci_id/* drivers/acpi/acpica/hwpci.c 135 */;
}
