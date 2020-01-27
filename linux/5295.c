cocci_test_suite() {
	long cocci_id/* drivers/ata/sata_sx4.c 989 */;
	u16 cocci_id/* drivers/ata/sata_sx4.c 987 */;
	struct ata_ioports *cocci_id/* drivers/ata/sata_sx4.c 964 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/sata_sx4.c 956 */;
	unsigned long cocci_id/* drivers/ata/sata_sx4.c 895 */;
	struct ata_link *cocci_id/* drivers/ata/sata_sx4.c 894 */;
	unsigned int *cocci_id/* drivers/ata/sata_sx4.c 894 */;
	enum{PDC_MMIO_BAR=3, PDC_DIMM_BAR=4, PDC_PRD_TBL=0x44, PDC_PKT_SUBMIT=0x40, PDC_HDMA_PKT_SUBMIT=0x100, PDC_INT_SEQMASK=0x40, PDC_HDMA_CTLSTAT=0x12C, PDC_CTLSTAT=0x60, PDC_20621_SEQCTL=0x400, PDC_20621_SEQMASK=0x480, PDC_20621_GENERAL_CTL=0x484, PDC_20621_PAGE_SIZE=(32 * 1024), PDC_20621_DIMM_WINDOW=0x0C, PDC_20621_DIMM_BASE=0x00200000, PDC_20621_DIMM_DATA=(64 * 1024), PDC_DIMM_DATA_STEP=(256 * 1024), PDC_DIMM_WINDOW_STEP=(8 * 1024), PDC_DIMM_HOST_PRD=(6 * 1024), PDC_DIMM_HOST_PKT=(128 * 0), PDC_DIMM_HPKT_PRD=(128 * 1), PDC_DIMM_ATA_PKT=(128 * 2), PDC_DIMM_APKT_PRD=(128 * 3), PDC_DIMM_HEADER_SZ=PDC_DIMM_APKT_PRD + 128, PDC_PAGE_WINDOW=0x40, PDC_PAGE_DATA=PDC_PAGE_WINDOW + (PDC_20621_DIMM_DATA / PDC_20621_PAGE_SIZE), PDC_PAGE_SET=PDC_DIMM_DATA_STEP / PDC_20621_PAGE_SIZE, PDC_CHIP0_OFS=0xC0000, PDC_20621_ERR_MASK=(1 << 19) | (1 << 20) | (1 << 21) | (1 << 22) | (1 << 23), board_20621=0, PDC_MASK_INT=(1 << 10), PDC_RESET=(1 << 11), PDC_DMA_ENABLE=(1 << 7), PDC_MAX_HDMA=32, PDC_HDMA_Q_MASK=(PDC_MAX_HDMA - 1), PDC_DIMM0_SPD_DEV_ADDRESS=0x50, PDC_DIMM1_SPD_DEV_ADDRESS=0x51, PDC_I2C_CONTROL=0x48, PDC_I2C_ADDR_DATA=0x4C, PDC_DIMM0_CONTROL=0x80, PDC_DIMM1_CONTROL=0x84, PDC_SDRAM_CONTROL=0x88, PDC_I2C_WRITE=0, PDC_I2C_READ=(1 << 6), PDC_I2C_START=(1 << 7), PDC_I2C_MASK_INT=(1 << 5), PDC_I2C_COMPLETE=(1 << 16), PDC_I2C_NO_ACK=(1 << 20), PDC_DIMM_SPD_SUBADDRESS_START=0x00, PDC_DIMM_SPD_SUBADDRESS_END=0x7F, PDC_DIMM_SPD_ROW_NUM=3, PDC_DIMM_SPD_COLUMN_NUM=4, PDC_DIMM_SPD_MODULE_ROW=5, PDC_DIMM_SPD_TYPE=11, PDC_DIMM_SPD_FRESH_RATE=12, PDC_DIMM_SPD_BANK_NUM=17, PDC_DIMM_SPD_CAS_LATENCY=18, PDC_DIMM_SPD_ATTRIBUTE=21, PDC_DIMM_SPD_ROW_PRE_CHARGE=27, PDC_DIMM_SPD_ROW_ACTIVE_DELAY=28, PDC_DIMM_SPD_RAS_CAS_DELAY=29, PDC_DIMM_SPD_ACTIVE_PRECHARGE=30, PDC_DIMM_SPD_SYSTEM_FREQ=126, PDC_CTL_STATUS=0x08, PDC_DIMM_WINDOW_CTLR=0x0C, PDC_TIME_CONTROL=0x3C, PDC_TIME_PERIOD=0x40, PDC_TIME_COUNTER=0x44, PDC_GENERAL_CTLR=0x484, PCI_PLL_INIT=0x8A531824, PCI_X_TCOUNT=0xEE1E5CFF, PDC_TIMER_BUZZER=(1 << 10), PDC_TIMER_MODE_PERIODIC=0, PDC_TIMER_MODE_ONCE=(1 << 8), PDC_TIMER_ENABLE=(1 << 7), PDC_TIMER_MASK_INT=(1 << 5), PDC_TIMER_SEQ_MASK=0x1f, PDC_TIMER_DEFAULT=PDC_TIMER_MODE_ONCE | PDC_TIMER_ENABLE | PDC_TIMER_MASK_INT,} cocci_id/* drivers/ata/sata_sx4.c 82 */;
	irqreturn_t cocci_id/* drivers/ata/sata_sx4.c 775 */;
	struct pdc_host_priv *cocci_id/* drivers/ata/sata_sx4.c 590 */;
	void __iomem *cocci_id/* drivers/ata/sata_sx4.c 555 */;
	struct ata_host *cocci_id/* drivers/ata/sata_sx4.c 554 */;
	struct ata_port *cocci_id/* drivers/ata/sata_sx4.c 553 */;
	u32 cocci_id/* drivers/ata/sata_sx4.c 551 */;
	unsigned int cocci_id/* drivers/ata/sata_sx4.c 550 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_sx4.c 549 */;
	void cocci_id/* drivers/ata/sata_sx4.c 549 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sx4.c 533 */;
	struct pdc_port_priv *cocci_id/* drivers/ata/sata_sx4.c 441 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_sx4.c 439 */;
	u8 cocci_id/* drivers/ata/sata_sx4.c 349 */;
	__le32 *cocci_id/* drivers/ata/sata_sx4.c 348 */;
	u8 *cocci_id/* drivers/ata/sata_sx4.c 344 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_sx4.c 343 */;
	struct device *cocci_id/* drivers/ata/sata_sx4.c 285 */;
	struct pci_driver cocci_id/* drivers/ata/sata_sx4.c 275 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_sx4.c 269 */[];
	const struct ata_port_info cocci_id/* drivers/ata/sata_sx4.c 256 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_sx4.c 235 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_sx4.c 228 */;
	int cocci_id/* drivers/ata/sata_sx4.c 225 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_sx4.c 224 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_sx4.c 222 */(struct ata_link *link,
						     unsigned int *class,
						     unsigned long deadline);
	unsigned int cocci_id/* drivers/ata/sata_sx4.c 221 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_sx4.c 220 */(struct ata_port *ap);
	void cocci_id/* drivers/ata/sata_sx4.c 215 */(struct ata_host *host,
						      void *psource,
						      u32 offset, u32 size);
	unsigned int cocci_id/* drivers/ata/sata_sx4.c 210 */(struct ata_host *host,
							      u32 device,
							      u32 subaddr,
							      u32 *pdata);
	int cocci_id/* drivers/ata/sata_sx4.c 209 */(struct ata_host *host);
	unsigned int cocci_id/* drivers/ata/sata_sx4.c 208 */(struct ata_host *host);
	void cocci_id/* drivers/ata/sata_sx4.c 207 */(struct ata_port *ap,
						      const struct ata_taskfile *tf);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sx4.c 205 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_sx4.c 204 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_sx4.c 200 */(struct pci_dev *pdev,
						     const struct pci_device_id *ent);
	struct pdc_host_priv {
		unsigned int doing_hdma;
		unsigned int hdma_prod;
		unsigned int hdma_cons;
		struct {
			struct ata_queued_cmd *qc;
			unsigned int seq;
			unsigned long pkt_ofs;
		} hdma[32];
	} cocci_id/* drivers/ata/sata_sx4.c 188 */;
	struct pdc_port_priv {
		u8 dimm_buf[(ATA_PRD_SZ * ATA_MAX_PRD) + 512];
		u8 *pkt;
		dma_addr_t pkt_dma;
	} cocci_id/* drivers/ata/sata_sx4.c 182 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_sx4.c 1433 */[];
	const struct pci_device_id *cocci_id/* drivers/ata/sata_sx4.c 1431 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_sx4.c 1430 */;
	void *cocci_id/* drivers/ata/sata_sx4.c 1380 */;
	u8 cocci_id/* drivers/ata/sata_sx4.c 1344 */[40];
	const struct {
		unsigned int reg;
		unsigned int ofs;
	} cocci_id/* drivers/ata/sata_sx4.c 1148 */[];
	u32 cocci_id/* drivers/ata/sata_sx4.c 1143 */[50];
	int cocci_id/* drivers/ata/sata_sx4.c 1121 */;
	u32 *cocci_id/* drivers/ata/sata_sx4.c 1086 */;
}
