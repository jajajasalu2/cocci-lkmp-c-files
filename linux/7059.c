cocci_test_suite() {
	const struct dmi_system_id cocci_id/* drivers/ide/ide-acpi.c 75 */[];
	const struct dmi_system_id *cocci_id/* drivers/ide/ide-acpi.c 68 */;
	bool cocci_id/* drivers/ide/ide-acpi.c 59 */;
	struct ide_acpi_hwif_link cocci_id/* drivers/ide/ide-acpi.c 554 */;
	struct ide_acpi_drive_link *cocci_id/* drivers/ide/ide-acpi.c 480 */;
	union acpi_object cocci_id/* drivers/ide/ide-acpi.c 479 */[3];
	struct acpi_object_list cocci_id/* drivers/ide/ide-acpi.c 478 */;
	struct GTM_buffer cocci_id/* drivers/ide/ide-acpi.c 438 */;
	ide_hwif_t *cocci_id/* drivers/ide/ide-acpi.c 397 */;
	void cocci_id/* drivers/ide/ide-acpi.c 397 */;
	void *cocci_id/* drivers/ide/ide-acpi.c 380 */;
	struct ide_acpi_hwif_link {
		ide_hwif_t *hwif;
		acpi_handle obj_handle;
		struct GTM_buffer gtm;
		struct ide_acpi_drive_link master;
		struct ide_acpi_drive_link slave;
	} cocci_id/* drivers/ide/ide-acpi.c 38 */;
	struct ide_acpi_drive_link {
		acpi_handle obj_handle;
		u8 idbuff[512];
	} cocci_id/* drivers/ide/ide-acpi.c 33 */;
	struct ide_cmd cocci_id/* drivers/ide/ide-acpi.c 321 */;
	u8 *cocci_id/* drivers/ide/ide-acpi.c 320 */;
	unsigned int cocci_id/* drivers/ide/ide-acpi.c 308 */;
	unsigned long cocci_id/* drivers/ide/ide-acpi.c 289 */;
	unsigned long long cocci_id/* drivers/ide/ide-acpi.c 262 */;
	struct GTM_buffer {
		u32 PIO_speed0;
		u32 DMA_speed0;
		u32 PIO_speed1;
		u32 DMA_speed1;
		u32 GTM_flags;
	} cocci_id/* drivers/ide/ide-acpi.c 25 */;
	union acpi_object *cocci_id/* drivers/ide/ide-acpi.c 232 */;
	struct acpi_buffer cocci_id/* drivers/ide/ide-acpi.c 231 */;
	acpi_status cocci_id/* drivers/ide/ide-acpi.c 230 */;
	unsigned long *cocci_id/* drivers/ide/ide-acpi.c 227 */;
	unsigned int *cocci_id/* drivers/ide/ide-acpi.c 227 */;
	ide_drive_t *cocci_id/* drivers/ide/ide-acpi.c 226 */;
	int cocci_id/* drivers/ide/ide-acpi.c 226 */;
	struct device *cocci_id/* drivers/ide/ide-acpi.c 182 */;
	struct acpi_device_info *cocci_id/* drivers/ide/ide-acpi.c 130 */;
	struct pci_dev *cocci_id/* drivers/ide/ide-acpi.c 125 */;
	u64 *cocci_id/* drivers/ide/ide-acpi.c 123 */;
	acpi_handle *cocci_id/* drivers/ide/ide-acpi.c 122 */;
	struct acpi_device *cocci_id/* drivers/ide/ide-acpi.c 103 */;
	u64 cocci_id/* drivers/ide/ide-acpi.c 101 */;
	acpi_handle cocci_id/* drivers/ide/ide-acpi.c 101 */;
}
