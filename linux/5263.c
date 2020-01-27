cocci_test_suite() {
	u32 cocci_id/* drivers/ata/sata_nv.c 873 */[2];
	irqreturn_t cocci_id/* drivers/ata/sata_nv.c 869 */;
	void *cocci_id/* drivers/ata/sata_nv.c 869 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_nv.c 811 */;
	u8 cocci_id/* drivers/ata/sata_nv.c 803 */;
	__le16 *cocci_id/* drivers/ata/sata_nv.c 768 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_nv.c 754 */;
	struct nv_adma_port_priv *cocci_id/* drivers/ata/sata_nv.c 750 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_nv.c 748 */;
	int cocci_id/* drivers/ata/sata_nv.c 748 */;
	unsigned long long cocci_id/* drivers/ata/sata_nv.c 740 */;
	unsigned short cocci_id/* drivers/ata/sata_nv.c 664 */;
	unsigned long cocci_id/* drivers/ata/sata_nv.c 663 */;
	struct scsi_device *cocci_id/* drivers/ata/sata_nv.c 657 */;
	bool cocci_id/* drivers/ata/sata_nv.c 585 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_nv.c 522 */[];
	struct nv_pi_priv cocci_id/* drivers/ata/sata_nv.c 520 */;
	struct nv_pi_priv {
		irq_handler_t irq_handler;
		struct scsi_host_template *sht;
	} cocci_id/* drivers/ata/sata_nv.c 514 */;
	struct ata_port_operations cocci_id/* drivers/ata/sata_nv.c 472 */;
	enum{NV_MMIO_BAR=5, NV_PORTS=2, NV_PIO_MASK=ATA_PIO4, NV_MWDMA_MASK=ATA_MWDMA2, NV_UDMA_MASK=ATA_UDMA6, NV_PORT0_SCR_REG_OFFSET=0x00, NV_PORT1_SCR_REG_OFFSET=0x40, NV_INT_STATUS=0x10, NV_INT_ENABLE=0x11, NV_INT_STATUS_CK804=0x440, NV_INT_ENABLE_CK804=0x441, NV_INT_DEV=0x01, NV_INT_PM=0x02, NV_INT_ADDED=0x04, NV_INT_REMOVED=0x08, NV_INT_PORT_SHIFT=4, NV_INT_ALL=0x0f, NV_INT_MASK=NV_INT_DEV | NV_INT_ADDED | NV_INT_REMOVED, NV_INT_CONFIG=0x12, NV_INT_CONFIG_METHD=0x01, NV_MCP_SATA_CFG_20=0x50, NV_MCP_SATA_CFG_20_SATA_SPACE_EN=0x04, NV_MCP_SATA_CFG_20_PORT0_EN=(1 << 17), NV_MCP_SATA_CFG_20_PORT1_EN=(1 << 16), NV_MCP_SATA_CFG_20_PORT0_PWB_EN=(1 << 14), NV_MCP_SATA_CFG_20_PORT1_PWB_EN=(1 << 12), NV_ADMA_MAX_CPBS=32, NV_ADMA_CPB_SZ=128, NV_ADMA_APRD_SZ=16, NV_ADMA_SGTBL_LEN=(1024 - NV_ADMA_CPB_SZ) / NV_ADMA_APRD_SZ, NV_ADMA_SGTBL_TOTAL_LEN=NV_ADMA_SGTBL_LEN + 5, NV_ADMA_SGTBL_SZ=NV_ADMA_SGTBL_LEN * NV_ADMA_APRD_SZ, NV_ADMA_PORT_PRIV_DMA_SZ=NV_ADMA_MAX_CPBS * (NV_ADMA_CPB_SZ + NV_ADMA_SGTBL_SZ), NV_ADMA_GEN=0x400, NV_ADMA_GEN_CTL=0x00, NV_ADMA_NOTIFIER_CLEAR=0x30, NV_ADMA_PORT=0x480, NV_ADMA_PORT_SIZE=0x100, NV_ADMA_CTL=0x40, NV_ADMA_CPB_COUNT=0x42, NV_ADMA_NEXT_CPB_IDX=0x43, NV_ADMA_STAT=0x44, NV_ADMA_CPB_BASE_LOW=0x48, NV_ADMA_CPB_BASE_HIGH=0x4C, NV_ADMA_APPEND=0x50, NV_ADMA_NOTIFIER=0x68, NV_ADMA_NOTIFIER_ERROR=0x6C, NV_ADMA_CTL_HOTPLUG_IEN=(1 << 0), NV_ADMA_CTL_CHANNEL_RESET=(1 << 5), NV_ADMA_CTL_GO=(1 << 7), NV_ADMA_CTL_AIEN=(1 << 8), NV_ADMA_CTL_READ_NON_COHERENT=(1 << 11), NV_ADMA_CTL_WRITE_NON_COHERENT=(1 << 12), NV_CPB_RESP_DONE=(1 << 0), NV_CPB_RESP_ATA_ERR=(1 << 3), NV_CPB_RESP_CMD_ERR=(1 << 4), NV_CPB_RESP_CPB_ERR=(1 << 7), NV_CPB_CTL_CPB_VALID=(1 << 0), NV_CPB_CTL_QUEUE=(1 << 1), NV_CPB_CTL_APRD_VALID=(1 << 2), NV_CPB_CTL_IEN=(1 << 3), NV_CPB_CTL_FPDMA=(1 << 4), NV_APRD_WRITE=(1 << 1), NV_APRD_END=(1 << 2), NV_APRD_CONT=(1 << 3), NV_ADMA_STAT_TIMEOUT=(1 << 0), NV_ADMA_STAT_HOTUNPLUG=(1 << 1), NV_ADMA_STAT_HOTPLUG=(1 << 2), NV_ADMA_STAT_CPBERR=(1 << 4), NV_ADMA_STAT_SERROR=(1 << 5), NV_ADMA_STAT_CMD_COMPLETE=(1 << 6), NV_ADMA_STAT_IDLE=(1 << 8), NV_ADMA_STAT_LEGACY=(1 << 9), NV_ADMA_STAT_STOPPED=(1 << 10), NV_ADMA_STAT_DONE=(1 << 12), NV_ADMA_STAT_ERR=NV_ADMA_STAT_CPBERR | NV_ADMA_STAT_TIMEOUT, NV_ADMA_PORT_REGISTER_MODE=(1 << 0), NV_ADMA_ATAPI_SETUP_COMPLETE=(1 << 1), NV_CTL_MCP55=0x400, NV_INT_STATUS_MCP55=0x440, NV_INT_ENABLE_MCP55=0x444, NV_NCQ_REG_MCP55=0x448, NV_INT_ALL_MCP55=0xffff, NV_INT_PORT_SHIFT_MCP55=16, NV_INT_MASK_MCP55=NV_INT_ALL_MCP55 & 0xfffd, NV_CTL_PRI_SWNCQ=0x02, NV_CTL_SEC_SWNCQ=0x04, NV_SWNCQ_IRQ_DEV=(1 << 0), NV_SWNCQ_IRQ_PM=(1 << 1), NV_SWNCQ_IRQ_ADDED=(1 << 2), NV_SWNCQ_IRQ_REMOVED=(1 << 3), NV_SWNCQ_IRQ_BACKOUT=(1 << 4), NV_SWNCQ_IRQ_SDBFIS=(1 << 5), NV_SWNCQ_IRQ_DHREGFIS=(1 << 6), NV_SWNCQ_IRQ_DMASETUP=(1 << 7), NV_SWNCQ_IRQ_HOTPLUG=NV_SWNCQ_IRQ_ADDED | NV_SWNCQ_IRQ_REMOVED,} cocci_id/* drivers/ata/sata_nv.c 40 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_nv.c 377 */;
	struct pci_driver cocci_id/* drivers/ata/sata_nv.c 362 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_nv.c 343 */[];
	enum nv_host_type{GENERIC, NFORCE2, NFORCE3=NFORCE2, CK804, ADMA, MCP5x, SWNCQ,} cocci_id/* drivers/ata/sata_nv.c 332 */;
	void cocci_id/* drivers/ata/sata_nv.c 325 */(struct ata_port *ap,
						     u16 fis);
	void cocci_id/* drivers/ata/sata_nv.c 315 */(struct ata_port *ap,
						     struct ata_taskfile *tf);
	void cocci_id/* drivers/ata/sata_nv.c 314 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_nv.c 313 */(struct ata_host *host);
	void cocci_id/* drivers/ata/sata_nv.c 312 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_nv.c 308 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_nv.c 307 */(struct ata_port *ap,
						    pm_message_t mesg);
	irqreturn_t cocci_id/* drivers/ata/sata_nv.c 302 */(int irq,
							    void *dev_instance);
	unsigned int cocci_id/* drivers/ata/sata_nv.c 301 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_nv.c 300 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_nv.c 299 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_nv.c 298 */(struct scsi_device *sdev);
	int cocci_id/* drivers/ata/sata_nv.c 292 */(struct ata_link *link,
						    unsigned int *class,
						    unsigned long deadline);
	int cocci_id/* drivers/ata/sata_nv.c 290 */(struct ata_link *link,
						    unsigned int sc_reg,
						    u32 val);
	int cocci_id/* drivers/ata/sata_nv.c 289 */(struct ata_link *link,
						    unsigned int sc_reg,
						    u32 *val);
	int cocci_id/* drivers/ata/sata_nv.c 283 */(struct pci_dev *pdev);
	int cocci_id/* drivers/ata/sata_nv.c 281 */(struct pci_dev *pdev,
						    const struct pci_device_id *ent);
	struct nv_swncq_port_priv {
		struct ata_bmdma_prd *prd;
		dma_addr_t prd_dma;
		void __iomem *sactive_block;
		void __iomem *irq_block;
		void __iomem *tag_block;
		u32 qc_active;
		unsigned int last_issue_tag;
		struct defer_queue defer_queue;
		u32 dhfis_bits;
		u32 dmafis_bits;
		u32 sdbfis_bits;
		unsigned int ncq_flags;
	} cocci_id/* drivers/ata/sata_nv.c 257 */;
	enum ncq_saw_flag_list{ncq_saw_d2h=(1U << 0), ncq_saw_dmas=(1U << 1), ncq_saw_sdb=(1U << 2), ncq_saw_backout=(1U << 3),} cocci_id/* drivers/ata/sata_nv.c 250 */;
	struct defer_queue {
		u32 defer_bits;
		unsigned int head;
		unsigned int tail;
		unsigned int tag[ATA_MAX_QUEUE];
	} cocci_id/* drivers/ata/sata_nv.c 243 */;
	struct nv_host_priv {
		unsigned long type;
	} cocci_id/* drivers/ata/sata_nv.c 239 */;
	struct nv_host_priv *cocci_id/* drivers/ata/sata_nv.c 2323 */;
	struct nv_pi_priv *cocci_id/* drivers/ata/sata_nv.c 2321 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_nv.c 2320 */[];
	const struct pci_device_id *cocci_id/* drivers/ata/sata_nv.c 2318 */;
	struct nv_adma_port_priv {
		struct nv_adma_cpb *cpb;
		dma_addr_t cpb_dma;
		struct nv_adma_prd *aprd;
		dma_addr_t aprd_dma;
		void __iomem *ctl_block;
		void __iomem *gen_block;
		void __iomem *notifier_clear_block;
		u64 adma_dma_mask;
		u8 flags;
		int last_issue_ncq;
	} cocci_id/* drivers/ata/sata_nv.c 226 */;
	struct nv_swncq_port_priv *cocci_id/* drivers/ata/sata_nv.c 2161 */;
	struct nv_adma_cpb {
		u8 resp_flags;
		u8 reserved1;
		u8 ctl_flags;
		u8 len;
		u8 tag;
		u8 next_cpb_idx;
		__le16 reserved2;
		__le16 tf[12];
		struct nv_adma_prd aprd[5];
		__le64 next_aprd;
		__le64 reserved3;
	} cocci_id/* drivers/ata/sata_nv.c 210 */;
	struct ata_bmdma_prd *cocci_id/* drivers/ata/sata_nv.c 1975 */;
	enum nv_adma_regbits{CMDEND=(1 << 15), WNB=(1 << 14), IGN=(1 << 13), CS1n=(1 << (4 + 8)), DA2=(1 << (2 + 8)), DA1=(1 << (1 + 8)), DA0=(1 << (0 + 8)),} cocci_id/* drivers/ata/sata_nv.c 196 */;
	unsigned char cocci_id/* drivers/ata/sata_nv.c 1888 */[ATA_ID_PROD_LEN + 1];
	struct ata_device *cocci_id/* drivers/ata/sata_nv.c 1884 */;
	struct nv_adma_prd {
		__le64 addr;
		__le32 len;
		u8 flags;
		u8 packet_len;
		__le16 reserved;
	} cocci_id/* drivers/ata/sata_nv.c 188 */;
	struct ata_queued_cmd cocci_id/* drivers/ata/sata_nv.c 1750 */;
	struct ata_port *cocci_id/* drivers/ata/sata_nv.c 1748 */;
	void cocci_id/* drivers/ata/sata_nv.c 1748 */;
	struct defer_queue *cocci_id/* drivers/ata/sata_nv.c 1731 */;
	struct nv_adma_cpb *cocci_id/* drivers/ata/sata_nv.c 1658 */;
	u32 cocci_id/* drivers/ata/sata_nv.c 1643 */;
	u16 cocci_id/* drivers/ata/sata_nv.c 1640 */;
	void __iomem *cocci_id/* drivers/ata/sata_nv.c 1638 */;
	const unsigned long *cocci_id/* drivers/ata/sata_nv.c 1541 */;
	struct ata_eh_context *cocci_id/* drivers/ata/sata_nv.c 1531 */;
	struct ata_link *cocci_id/* drivers/ata/sata_nv.c 1528 */;
	unsigned int *cocci_id/* drivers/ata/sata_nv.c 1528 */;
	u32 *cocci_id/* drivers/ata/sata_nv.c 1510 */;
	struct nv_adma_prd cocci_id/* drivers/ata/sata_nv.c 1383 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_nv.c 1347 */;
	unsigned int cocci_id/* drivers/ata/sata_nv.c 1315 */;
	u64 cocci_id/* drivers/ata/sata_nv.c 1304 */;
	struct nv_adma_prd *cocci_id/* drivers/ata/sata_nv.c 1294 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_nv.c 1292 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_nv.c 1270 */;
	struct ata_host *cocci_id/* drivers/ata/sata_nv.c 1268 */;
	struct ata_ioports *cocci_id/* drivers/ata/sata_nv.c 1247 */;
	pm_message_t cocci_id/* drivers/ata/sata_nv.c 1192 */;
	dma_addr_t cocci_id/* drivers/ata/sata_nv.c 1092 */;
	struct device *cocci_id/* drivers/ata/sata_nv.c 1088 */;
}
