cocci_test_suite() {
	int cocci_id/* drivers/ata/sata_qstor.c 99 */(struct ata_link *link,
						      unsigned int sc_reg,
						      u32 val);
	int cocci_id/* drivers/ata/sata_qstor.c 98 */(struct ata_link *link,
						      unsigned int sc_reg,
						      u32 *val);
	struct qs_port_priv {
		u8 *pkt;
		dma_addr_t pkt_dma;
		qs_state_t state;
	} cocci_id/* drivers/ata/sata_qstor.c 92 */;
	enum{qs_state_mmio, qs_state_pkt,} cocci_id/* drivers/ata/sata_qstor.c 90 */;
	enum{QS_DMA_BOUNDARY=~0UL,} cocci_id/* drivers/ata/sata_qstor.c 86 */;
	void __iomem *cocci_id/* drivers/ata/sata_qstor.c 586 */;
	struct ata_port *cocci_id/* drivers/ata/sata_qstor.c 584 */;
	struct ata_host *cocci_id/* drivers/ata/sata_qstor.c 556 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_qstor.c 555 */[];
	unsigned int cocci_id/* drivers/ata/sata_qstor.c 554 */;
	const struct pci_device_id *cocci_id/* drivers/ata/sata_qstor.c 552 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_qstor.c 551 */;
	int cocci_id/* drivers/ata/sata_qstor.c 551 */;
	struct device *cocci_id/* drivers/ata/sata_qstor.c 469 */;
	struct ata_ioports *cocci_id/* drivers/ata/sata_qstor.c 449 */;
	void cocci_id/* drivers/ata/sata_qstor.c 449 */;
	unsigned long cocci_id/* drivers/ata/sata_qstor.c 436 */;
	irqreturn_t cocci_id/* drivers/ata/sata_qstor.c 432 */;
	void *cocci_id/* drivers/ata/sata_qstor.c 432 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_qstor.c 345 */;
	u8 cocci_id/* drivers/ata/sata_qstor.c 337 */;
	enum{QS_MMIO_BAR=4, QS_PORTS=4, QS_MAX_PRD=LIBATA_MAX_PRD, QS_CPB_ORDER=6, QS_CPB_BYTES=(1 << QS_CPB_ORDER), QS_PRD_BYTES=QS_MAX_PRD * 16, QS_PKT_BYTES=QS_CPB_BYTES + QS_PRD_BYTES, QS_HCF_CNFG3=0x0003, QS_HID_HPHY=0x0004, QS_HCT_CTRL=0x00e4, QS_HST_SFF=0x0100, QS_HVS_SERD3=0x0393, QS_HPHY_64BIT=(1 << 1), QS_CNFG3_GSRST=0x01, QS_SERD3_PHY_ENA=0xf0, QS_CCF_CPBA=0x0710, QS_CCF_CSEP=0x0718, QS_CFC_HUFT=0x0800, QS_CFC_HDFT=0x0804, QS_CFC_DUFT=0x0808, QS_CFC_DDFT=0x080c, QS_CCT_CTR0=0x0900, QS_CCT_CTR1=0x0901, QS_CCT_CFF=0x0a00, QS_CTR0_REG=(1 << 1), QS_CTR0_CLER=(1 << 2), QS_CTR1_RDEV=(1 << 1), QS_CTR1_RCHN=(1 << 4), QS_CCF_RUN_PKT=0x107, QS_HCB_HDR=0x01, QS_DCB_HDR=0x02, QS_HF_DIRO=(1 << 0), QS_HF_DAT=(1 << 3), QS_HF_IEN=(1 << 4), QS_HF_VLD=(1 << 5), QS_DF_PORD=(1 << 2), QS_DF_ELBA=(1 << 3), board_2068_idx=0,} cocci_id/* drivers/ata/sata_qstor.c 28 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_qstor.c 263 */;
	unsigned long long cocci_id/* drivers/ata/sata_qstor.c 257 */;
	__le32 *cocci_id/* drivers/ata/sata_qstor.c 253 */;
	__le64 *cocci_id/* drivers/ata/sata_qstor.c 249 */;
	u32 cocci_id/* drivers/ata/sata_qstor.c 246 */;
	u64 cocci_id/* drivers/ata/sata_qstor.c 245 */;
	u8 *cocci_id/* drivers/ata/sata_qstor.c 241 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_qstor.c 238 */;
	u32 *cocci_id/* drivers/ata/sata_qstor.c 214 */;
	struct ata_link *cocci_id/* drivers/ata/sata_qstor.c 206 */;
	struct qs_port_priv *cocci_id/* drivers/ata/sata_qstor.c 174 */;
	u8 __iomem *cocci_id/* drivers/ata/sata_qstor.c 173 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_qstor.c 166 */;
	struct pci_driver cocci_id/* drivers/ata/sata_qstor.c 154 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_qstor.c 148 */[];
	const struct ata_port_info cocci_id/* drivers/ata/sata_qstor.c 138 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_qstor.c 117 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_qstor.c 111 */;
	void cocci_id/* drivers/ata/sata_qstor.c 109 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_qstor.c 108 */(struct ata_link *link,
						       unsigned long deadline);
	int cocci_id/* drivers/ata/sata_qstor.c 105 */(struct ata_queued_cmd *qc);
	unsigned int cocci_id/* drivers/ata/sata_qstor.c 104 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_qstor.c 103 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_qstor.c 102 */(struct ata_host *host);
	int cocci_id/* drivers/ata/sata_qstor.c 101 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_qstor.c 100 */(struct pci_dev *pdev,
						       const struct pci_device_id *ent);
}
