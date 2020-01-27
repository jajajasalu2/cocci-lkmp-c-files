cocci_test_suite() {
	const struct via_isa_bridge {
		const char *name;
		u16 id;
		u8 rev_min;
		u8 rev_max;
		u8 udma_mask;
		u8 flags;
	} cocci_id/* drivers/ata/pata_via.c 88 */[];
	enum{VIA_IDFLAG_SINGLE=(1 << 0),} cocci_id/* drivers/ata/pata_via.c 80 */;
	struct pci_driver cocci_id/* drivers/ata/pata_via.c 703 */;
	const struct pci_device_id cocci_id/* drivers/ata/pata_via.c 690 */[];
	enum{VIA_BAD_PREQ=0x01, VIA_BAD_CLK66=0x02, VIA_SET_FIFO=0x04, VIA_NO_UNMASK=0x08, VIA_BAD_ID=0x10, VIA_BAD_AST=0x20, VIA_NO_ENABLES=0x40, VIA_SATA_PATA=0x80,} cocci_id/* drivers/ata/pata_via.c 69 */;
	void *cocci_id/* drivers/ata/pata_via.c 660 */;
	const struct ata_port_info *cocci_id/* drivers/ata/pata_via.c 590 */[];
	const struct ata_port_info cocci_id/* drivers/ata/pata_via.c 545 */;
	const struct pci_device_id *cocci_id/* drivers/ata/pata_via.c 542 */;
	const u8 cocci_id/* drivers/ata/pata_via.c 496 */[4];
	u8 cocci_id/* drivers/ata/pata_via.c 489 */;
	unsigned int cocci_id/* drivers/ata/pata_via.c 487 */;
	void cocci_id/* drivers/ata/pata_via.c 487 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_via.c 462 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_via.c 458 */;
	struct via_port cocci_id/* drivers/ata/pata_via.c 451 */;
	struct via_port *cocci_id/* drivers/ata/pata_via.c 444 */;
	struct ata_ioports *cocci_id/* drivers/ata/pata_via.c 392 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/pata_via.c 390 */;
	unsigned char cocci_id/* drivers/ata/pata_via.c 359 */[ATA_ID_PROD_LEN + 1];
	struct ata_host *cocci_id/* drivers/ata/pata_via.c 357 */;
	unsigned long cocci_id/* drivers/ata/pata_via.c 252 */;
	struct ata_timing cocci_id/* drivers/ata/pata_via.c 250 */;
	struct ata_device *cocci_id/* drivers/ata/pata_via.c 245 */;
	const struct pci_bits cocci_id/* drivers/ata/pata_via.c 217 */[];
	struct ata_link *cocci_id/* drivers/ata/pata_via.c 211 */;
	u32 cocci_id/* drivers/ata/pata_via.c 184 */;
	struct pci_dev *cocci_id/* drivers/ata/pata_via.c 183 */;
	const struct via_isa_bridge *cocci_id/* drivers/ata/pata_via.c 182 */;
	struct ata_port *cocci_id/* drivers/ata/pata_via.c 181 */;
	int cocci_id/* drivers/ata/pata_via.c 181 */;
	const struct dmi_system_id cocci_id/* drivers/ata/pata_via.c 146 */[];
	struct via_port {
		u8 cached_device;
	} cocci_id/* drivers/ata/pata_via.c 138 */;
}
