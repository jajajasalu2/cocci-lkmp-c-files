cocci_test_suite() {
	struct ata_port *cocci_id/* drivers/ata/pdc_adma.c 613 */;
	void __iomem *cocci_id/* drivers/ata/pdc_adma.c 582 */;
	struct ata_host *cocci_id/* drivers/ata/pdc_adma.c 581 */;
	const struct ata_port_info *cocci_id/* drivers/ata/pdc_adma.c 580 */[];
	unsigned int cocci_id/* drivers/ata/pdc_adma.c 579 */;
	const struct pci_device_id *cocci_id/* drivers/ata/pdc_adma.c 577 */;
	struct pci_dev *cocci_id/* drivers/ata/pdc_adma.c 576 */;
	int cocci_id/* drivers/ata/pdc_adma.c 576 */;
	struct device *cocci_id/* drivers/ata/pdc_adma.c 537 */;
	struct ata_ioports *cocci_id/* drivers/ata/pdc_adma.c 518 */;
	void cocci_id/* drivers/ata/pdc_adma.c 518 */;
	irqreturn_t cocci_id/* drivers/ata/pdc_adma.c 502 */;
	void *cocci_id/* drivers/ata/pdc_adma.c 502 */;
	struct ata_eh_info *cocci_id/* drivers/ata/pdc_adma.c 487 */;
	enum{ADMA_MMIO_BAR=4, ADMA_PORTS=2, ADMA_CPB_BYTES=40, ADMA_PRD_BYTES=LIBATA_MAX_PRD * 16, ADMA_PKT_BYTES=ADMA_CPB_BYTES + ADMA_PRD_BYTES, ADMA_DMA_BOUNDARY=0xffffffff, ADMA_MODE_LOCK=0x00c7, ADMA_CONTROL=0x0000, ADMA_STATUS=0x0002, ADMA_CPB_COUNT=0x0004, ADMA_CPB_CURRENT=0x000c, ADMA_CPB_NEXT=0x000c, ADMA_CPB_LOOKUP=0x0010, ADMA_FIFO_IN=0x0014, ADMA_FIFO_OUT=0x0016, aNIEN=(1 << 8), aGO=(1 << 7), aRSTADM=(1 << 5), aPIOMD4=0x0003, aPSD=(1 << 6), aUIRQ=(1 << 4), aPERR=(1 << 0), cDONE=(1 << 0), cATERR=(1 << 3), cVLD=(1 << 0), cDAT=(1 << 2), cIEN=(1 << 3), pORD=(1 << 4), pDIRO=(1 << 5), pEND=(1 << 7), rIGN=(1 << 5), rEND=(1 << 7), ADMA_REGS_CONTROL=0x0e, ADMA_REGS_SECTOR_COUNT=0x12, ADMA_REGS_LBA_LOW=0x13, ADMA_REGS_LBA_MID=0x14, ADMA_REGS_LBA_HIGH=0x15, ADMA_REGS_DEVICE=0x16, ADMA_REGS_COMMAND=0x17, board_1841_idx=0,} cocci_id/* drivers/ata/pdc_adma.c 43 */;
	enum ata_completion_errors cocci_id/* drivers/ata/pdc_adma.c 298 */;
	unsigned long cocci_id/* drivers/ata/pdc_adma.c 289 */;
	__le32 *cocci_id/* drivers/ata/pdc_adma.c 271 */;
	u32 cocci_id/* drivers/ata/pdc_adma.c 267 */;
	u8 cocci_id/* drivers/ata/pdc_adma.c 263 */;
	u8 *cocci_id/* drivers/ata/pdc_adma.c 261 */;
	struct adma_port_priv *cocci_id/* drivers/ata/pdc_adma.c 260 */;
	struct scatterlist *cocci_id/* drivers/ata/pdc_adma.c 258 */;
	struct ata_link *cocci_id/* drivers/ata/pdc_adma.c 244 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pdc_adma.c 172 */;
	struct pci_driver cocci_id/* drivers/ata/pdc_adma.c 165 */;
	const struct pci_device_id cocci_id/* drivers/ata/pdc_adma.c 159 */[];
	struct ata_port_info cocci_id/* drivers/ata/pdc_adma.c 149 */[];
	struct ata_port_operations cocci_id/* drivers/ata/pdc_adma.c 132 */;
	struct scsi_host_template cocci_id/* drivers/ata/pdc_adma.c 126 */;
	int cocci_id/* drivers/ata/pdc_adma.c 124 */(struct ata_link *link,
						     unsigned long deadline);
	void cocci_id/* drivers/ata/pdc_adma.c 122 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/pdc_adma.c 121 */(struct ata_queued_cmd *qc);
	unsigned int cocci_id/* drivers/ata/pdc_adma.c 120 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/pdc_adma.c 119 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/pdc_adma.c 117 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/pdc_adma.c 115 */(struct pci_dev *pdev,
						     const struct pci_device_id *ent);
	struct adma_port_priv {
		u8 *pkt;
		dma_addr_t pkt_dma;
		adma_state_t state;
	} cocci_id/* drivers/ata/pdc_adma.c 109 */;
	enum{adma_state_idle, adma_state_pkt, adma_state_mmio,} cocci_id/* drivers/ata/pdc_adma.c 107 */;
}
