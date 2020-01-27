cocci_test_suite() {
	struct sv_cable_table cocci_id/* drivers/ata/pata_serverworks.c 83 */[];
	struct sv_cable_table {
		int device;
		int subvendor;
		int (*cable_detect)(struct ata_port *ap);
	} cocci_id/* drivers/ata/pata_serverworks.c 77 */;
	struct pci_dev *cocci_id/* drivers/ata/pata_serverworks.c 70 */;
	struct ata_port *cocci_id/* drivers/ata/pata_serverworks.c 68 */;
	int cocci_id/* drivers/ata/pata_serverworks.c 68 */;
	const char *cocci_id/* drivers/ata/pata_serverworks.c 52 */[];
	struct pci_driver cocci_id/* drivers/ata/pata_serverworks.c 476 */;
	const struct pci_device_id cocci_id/* drivers/ata/pata_serverworks.c 466 */[];
	struct ata_host *cocci_id/* drivers/ata/pata_serverworks.c 452 */;
	struct scsi_host_template *cocci_id/* drivers/ata/pata_serverworks.c 415 */;
	const struct ata_port_info *cocci_id/* drivers/ata/pata_serverworks.c 414 */[];
	const struct ata_port_info cocci_id/* drivers/ata/pata_serverworks.c 387 */[4];
	const struct pci_device_id *cocci_id/* drivers/ata/pata_serverworks.c 385 */;
	void cocci_id/* drivers/ata/pata_serverworks.c 349 */;
	u32 cocci_id/* drivers/ata/pata_serverworks.c 305 */;
	u8 cocci_id/* drivers/ata/pata_serverworks.c 300 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_serverworks.c 273 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_serverworks.c 260 */;
	const u8 cocci_id/* drivers/ata/pata_serverworks.c 229 */[];
	u16 cocci_id/* drivers/ata/pata_serverworks.c 202 */;
	char cocci_id/* drivers/ata/pata_serverworks.c 172 */[ATA_ID_PROD_LEN + 1];
	const char *cocci_id/* drivers/ata/pata_serverworks.c 171 */;
	struct ata_device *cocci_id/* drivers/ata/pata_serverworks.c 169 */;
	unsigned long cocci_id/* drivers/ata/pata_serverworks.c 169 */;
	struct sv_cable_table *cocci_id/* drivers/ata/pata_serverworks.c 106 */;
}
