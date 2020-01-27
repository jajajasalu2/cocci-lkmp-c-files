cocci_test_suite() {
	struct mcfg_fixup cocci_id/* drivers/acpi/pci_mcfg.c 41 */[];
	void __init cocci_id/* drivers/acpi/pci_mcfg.c 279 */;
	struct mcfg_fixup {
		char oem_id[ACPI_OEM_ID_SIZE + 1];
		char oem_table_id[ACPI_OEM_TABLE_ID_SIZE + 1];
		u32 oem_revision;
		u16 segment;
		struct resource bus_range;
		struct pci_ecam_ops *ops;
		struct resource cfgres;
	} cocci_id/* drivers/acpi/pci_mcfg.c 26 */;
	struct acpi_mcfg_allocation cocci_id/* drivers/acpi/pci_mcfg.c 251 */;
	struct acpi_table_mcfg cocci_id/* drivers/acpi/pci_mcfg.c 247 */;
	struct acpi_mcfg_allocation *cocci_id/* drivers/acpi/pci_mcfg.c 243 */;
	struct acpi_table_mcfg *cocci_id/* drivers/acpi/pci_mcfg.c 242 */;
	struct acpi_table_header *cocci_id/* drivers/acpi/pci_mcfg.c 240 */;
	struct resource cocci_id/* drivers/acpi/pci_mcfg.c 200 */;
	struct mcfg_entry *cocci_id/* drivers/acpi/pci_mcfg.c 199 */;
	struct pci_ecam_ops *cocci_id/* drivers/acpi/pci_mcfg.c 196 */;
	int cocci_id/* drivers/acpi/pci_mcfg.c 174 */;
	struct mcfg_fixup *cocci_id/* drivers/acpi/pci_mcfg.c 173 */;
	u16 cocci_id/* drivers/acpi/pci_mcfg.c 171 */;
	struct mcfg_entry {
		struct list_head list;
		phys_addr_t addr;
		u16 segment;
		u8 bus_start;
		u8 bus_end;
	} cocci_id/* drivers/acpi/pci_mcfg.c 17 */;
	struct pci_ecam_ops **cocci_id/* drivers/acpi/pci_mcfg.c 168 */;
	struct resource *cocci_id/* drivers/acpi/pci_mcfg.c 167 */;
	struct acpi_pci_root *cocci_id/* drivers/acpi/pci_mcfg.c 166 */;
	void cocci_id/* drivers/acpi/pci_mcfg.c 166 */;
	u32 cocci_id/* drivers/acpi/pci_mcfg.c 149 */;
	char cocci_id/* drivers/acpi/pci_mcfg.c 148 */[ACPI_OEM_TABLE_ID_SIZE];
	char cocci_id/* drivers/acpi/pci_mcfg.c 147 */[ACPI_OEM_ID_SIZE];
}
