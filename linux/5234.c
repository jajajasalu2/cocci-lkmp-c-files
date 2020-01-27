cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/ata/sata_promise.c 919 */;
	void *cocci_id/* drivers/ata/sata_promise.c 919 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_promise.c 846 */;
	u32 cocci_id/* drivers/ata/sata_promise.c 844 */;
	const struct ata_port *cocci_id/* drivers/ata/sata_promise.c 779 */;
	struct ata_link *cocci_id/* drivers/ata/sata_promise.c 772 */;
	unsigned int *cocci_id/* drivers/ata/sata_promise.c 772 */;
	const struct ata_host *cocci_id/* drivers/ata/sata_promise.c 692 */;
	const unsigned char cocci_id/* drivers/ata/sata_promise.c 681 */[4];
	const unsigned long cocci_id/* drivers/ata/sata_promise.c 674 */;
	unsigned long cocci_id/* drivers/ata/sata_promise.c 672 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_promise.c 636 */;
	const u32 cocci_id/* drivers/ata/sata_promise.c 578 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_promise.c 577 */;
	struct ata_bmdma_prd *cocci_id/* drivers/ata/sata_promise.c 576 */;
	__le32 *cocci_id/* drivers/ata/sata_promise.c 493 */;
	struct pdc_port_priv *cocci_id/* drivers/ata/sata_promise.c 491 */;
	u8 *cocci_id/* drivers/ata/sata_promise.c 490 */;
	dma_addr_t cocci_id/* drivers/ata/sata_promise.c 488 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_promise.c 485 */;
	u32 *cocci_id/* drivers/ata/sata_promise.c 468 */;
	enum{PDC_MAX_PORTS=4, PDC_MMIO_BAR=3, PDC_MAX_PRD=LIBATA_MAX_PRD - 1, PDC_INT_SEQMASK=0x40, PDC_FLASH_CTL=0x44, PDC_PCI_CTL=0x48, PDC_SATA_PLUG_CSR=0x6C, PDC2_SATA_PLUG_CSR=0x60, PDC_TBG_MODE=0x41C, PDC_SLEW_CTL=0x470, PDC_FEATURE=0x04, PDC_SECTOR_COUNT=0x08, PDC_SECTOR_NUMBER=0x0C, PDC_CYLINDER_LOW=0x10, PDC_CYLINDER_HIGH=0x14, PDC_DEVICE=0x18, PDC_COMMAND=0x1C, PDC_ALTSTATUS=0x38, PDC_PKT_SUBMIT=0x40, PDC_GLOBAL_CTL=0x48, PDC_CTLSTAT=0x60, PDC_SATA_ERROR=0x04, PDC_PHYMODE4=0x14, PDC_LINK_LAYER_ERRORS=0x6C, PDC_FPDMA_CTLSTAT=0xD8, PDC_INTERNAL_DEBUG_1=0xF8, PDC_INTERNAL_DEBUG_2=0xFC, PDC_FPDMA_CTLSTAT_RESET=1 << 3, PDC_FPDMA_CTLSTAT_DMASETUP_INT_FLAG=1 << 10, PDC_FPDMA_CTLSTAT_SETDB_INT_FLAG=1 << 11, PDC_PH_ERR=(1 << 8), PDC_SH_ERR=(1 << 9), PDC_DH_ERR=(1 << 10), PDC2_HTO_ERR=(1 << 12), PDC2_ATA_HBA_ERR=(1 << 13), PDC2_ATA_DMA_CNT_ERR=(1 << 14), PDC_OVERRUN_ERR=(1 << 19), PDC_UNDERRUN_ERR=(1 << 20), PDC_DRIVE_ERR=(1 << 21), PDC_PCI_SYS_ERR=(1 << 22), PDC1_PCI_PARITY_ERR=(1 << 23), PDC1_ERR_MASK=PDC1_PCI_PARITY_ERR, PDC2_ERR_MASK=PDC2_HTO_ERR | PDC2_ATA_HBA_ERR | PDC2_ATA_DMA_CNT_ERR, PDC_ERR_MASK=PDC_PH_ERR | PDC_SH_ERR | PDC_DH_ERR | PDC_OVERRUN_ERR | PDC_UNDERRUN_ERR | PDC_DRIVE_ERR | PDC_PCI_SYS_ERR | PDC1_ERR_MASK | PDC2_ERR_MASK, board_2037x=0, board_2037x_pata=1, board_20319=2, board_20619=3, board_2057x=4, board_2057x_pata=5, board_40518=6, PDC_HAS_PATA=(1 << 1), PDC_SEQCNTRL_INT_MASK=(1 << 5), PDC_FEATURE_ATAPI_PIO=0x00, PDC_FEATURE_ATAPI_DMA=0x01, PDC_DEVICE_SATA=0xE0, PDC_DMA_ENABLE=(1 << 7), PDC_IRQ_DISABLE=(1 << 10), PDC_RESET=(1 << 11), PDC_COMMON_FLAGS=ATA_FLAG_PIO_POLLING, PDC_FLAG_GEN_II=(1 << 24), PDC_FLAG_SATA_PATA=(1 << 25), PDC_FLAG_4_PORTS=(1 << 26),} cocci_id/* drivers/ata/sata_promise.c 35 */;
	struct device *cocci_id/* drivers/ata/sata_promise.c 317 */;
	struct pci_driver cocci_id/* drivers/ata/sata_promise.c 308 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_promise.c 284 */[];
	const struct ata_port_info cocci_id/* drivers/ata/sata_promise.c 213 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_promise.c 197 */;
	const struct ata_port_operations cocci_id/* drivers/ata/sata_promise.c 168 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_promise.c 162 */;
	void cocci_id/* drivers/ata/sata_promise.c 158 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_promise.c 157 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_promise.c 153 */(struct ata_link *link,
							 unsigned int *class,
							 unsigned long deadline);
	unsigned int cocci_id/* drivers/ata/sata_promise.c 148 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_promise.c 145 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_promise.c 144 */(struct ata_port *ap,
							  const struct ata_taskfile *tf);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_promise.c 142 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_promise.c 140 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_promise.c 139 */(struct pci_dev *pdev,
							 const struct pci_device_id *ent);
	int cocci_id/* drivers/ata/sata_promise.c 138 */(struct ata_link *link,
							 unsigned int sc_reg,
							 u32 val);
	int cocci_id/* drivers/ata/sata_promise.c 137 */(struct ata_link *link,
							 unsigned int sc_reg,
							 u32 *val);
	struct pdc_host_priv {
		spinlock_t hard_reset_lock;
	} cocci_id/* drivers/ata/sata_promise.c 133 */;
	struct pdc_port_priv {
		u8 *pkt;
		dma_addr_t pkt_dma;
	} cocci_id/* drivers/ata/sata_promise.c 128 */;
	unsigned int cocci_id/* drivers/ata/sata_promise.c 1222 */;
	struct ata_port *cocci_id/* drivers/ata/sata_promise.c 1221 */;
	u8 cocci_id/* drivers/ata/sata_promise.c 1202 */;
	void __iomem *cocci_id/* drivers/ata/sata_promise.c 1176 */;
	struct pdc_host_priv *cocci_id/* drivers/ata/sata_promise.c 1175 */;
	struct ata_host *cocci_id/* drivers/ata/sata_promise.c 1174 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_promise.c 1173 */[PDC_MAX_PORTS];
	const struct ata_port_info *cocci_id/* drivers/ata/sata_promise.c 1172 */;
	const struct pci_device_id *cocci_id/* drivers/ata/sata_promise.c 1170 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_promise.c 1169 */;
	int cocci_id/* drivers/ata/sata_promise.c 1169 */;
	void cocci_id/* drivers/ata/sata_promise.c 1095 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/sata_promise.c 1053 */;
}
