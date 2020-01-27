cocci_test_suite() {
	struct atp867x_priv {
		void __iomem *dma_mode;
		void __iomem *mstr_piospd;
		void __iomem *slave_piospd;
		void __iomem *eightb_piospd;
		int pci66mhz;
	} cocci_id/* drivers/ata/pata_atp867x.c 99 */;
	struct pci_driver cocci_id/* drivers/ata/pata_atp867x.c 539 */;
	struct pci_device_id cocci_id/* drivers/ata/pata_atp867x.c 533 */[];
	const struct ata_port_info *cocci_id/* drivers/ata/pata_atp867x.c 480 */[];
	const struct ata_port_info cocci_id/* drivers/ata/pata_atp867x.c 472 */;
	const struct pci_device_id *cocci_id/* drivers/ata/pata_atp867x.c 470 */;
	unsigned long cocci_id/* drivers/ata/pata_atp867x.c 451 */;
	struct ata_ioports *cocci_id/* drivers/ata/pata_atp867x.c 435 */;
	struct ata_port *cocci_id/* drivers/ata/pata_atp867x.c 434 */;
	unsigned long long cocci_id/* drivers/ata/pata_atp867x.c 427 */;
	unsigned int cocci_id/* drivers/ata/pata_atp867x.c 409 */;
	struct pci_dev *cocci_id/* drivers/ata/pata_atp867x.c 408 */;
	struct device *cocci_id/* drivers/ata/pata_atp867x.c 407 */;
	struct ata_host *cocci_id/* drivers/ata/pata_atp867x.c 405 */;
	int cocci_id/* drivers/ata/pata_atp867x.c 405 */;
	u8 cocci_id/* drivers/ata/pata_atp867x.c 364 */;
	enum{ATP867X_IO_CHANNEL_OFFSET=0x10, ATP867X_IO_PIOSPD_ACTIVE_SHIFT=4, ATP867X_IO_PIOSPD_RECOVER_SHIFT=0, ATP867X_IO_DMAMODE_MSTR_SHIFT=0, ATP867X_IO_DMAMODE_MSTR_MASK=0x07, ATP867X_IO_DMAMODE_SLAVE_SHIFT=4, ATP867X_IO_DMAMODE_SLAVE_MASK=0x70, ATP867X_IO_DMAMODE_UDMA_6=0x07, ATP867X_IO_DMAMODE_UDMA_5=0x06, ATP867X_IO_DMAMODE_UDMA_4=0x05, ATP867X_IO_DMAMODE_UDMA_3=0x04, ATP867X_IO_DMAMODE_UDMA_2=0x03, ATP867X_IO_DMAMODE_UDMA_1=0x02, ATP867X_IO_DMAMODE_UDMA_0=0x01, ATP867X_IO_DMAMODE_DISABLE=0x00, ATP867X_IO_SYS_INFO_66MHZ=0x04, ATP867X_IO_SYS_INFO_SLOW_UDMA5=0x02, ATP867X_IO_SYS_MASK_RESERVED=(~0xf1), ATP867X_IO_PORTSPD_VAL=0x1143, ATP867X_PREREAD_VAL=0x0200, ATP867X_NUM_PORTS=4, ATP867X_BAR_IOBASE=0, ATP867X_BAR_ROMBASE=6,} cocci_id/* drivers/ata/pata_atp867x.c 33 */;
	struct atp867x_priv *cocci_id/* drivers/ata/pata_atp867x.c 291 */;
	void cocci_id/* drivers/ata/pata_atp867x.c 288 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_atp867x.c 265 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_atp867x.c 261 */;
	struct ata_timing cocci_id/* drivers/ata/pata_atp867x.c 207 */;
	unsigned char cocci_id/* drivers/ata/pata_atp867x.c 142 */;
	struct ata_device *cocci_id/* drivers/ata/pata_atp867x.c 107 */;
}
