cocci_test_suite() {
	u32 cocci_id/* drivers/ata/sata_sil24.c 978 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_sil24.c 976 */;
	struct ata_link *cocci_id/* drivers/ata/sata_sil24.c 975 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_sil24.c 974 */;
	u32 *cocci_id/* drivers/ata/sata_sil24.c 912 */;
	u16 cocci_id/* drivers/ata/sata_sil24.c 840 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sil24.c 833 */;
	u8 cocci_id/* drivers/ata/sata_sil24.c 792 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_sil24.c 772 */;
	struct sil24_sge *cocci_id/* drivers/ata/sata_sil24.c 770 */;
	const char *cocci_id/* drivers/ata/sata_sil24.c 697 */;
	unsigned int *cocci_id/* drivers/ata/sata_sil24.c 690 */;
	struct ata_taskfile cocci_id/* drivers/ata/sata_sil24.c 652 */;
	u64 cocci_id/* drivers/ata/sata_sil24.c 619 */;
	dma_addr_t cocci_id/* drivers/ata/sata_sil24.c 602 */;
	struct sil24_prb *cocci_id/* drivers/ata/sata_sil24.c 601 */;
	unsigned long cocci_id/* drivers/ata/sata_sil24.c 597 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/sata_sil24.c 595 */;
	int cocci_id/* drivers/ata/sata_sil24.c 557 */;
	void __iomem *cocci_id/* drivers/ata/sata_sil24.c 556 */;
	struct ata_port *cocci_id/* drivers/ata/sata_sil24.c 554 */;
	void cocci_id/* drivers/ata/sata_sil24.c 554 */;
	int cocci_id/* drivers/ata/sata_sil24.c 490 */[];
	u8 cocci_id/* drivers/ata/sata_sil24.c 483 */[6 * 4];
	struct sil24_prb __iomem *cocci_id/* drivers/ata/sata_sil24.c 482 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_sil24.c 479 */;
	struct ata_device *cocci_id/* drivers/ata/sata_sil24.c 469 */;
	enum{SIL24_HOST_BAR=0, SIL24_PORT_BAR=2, SIL24_PRB_SZ=sizeof(struct sil24_prb) + 2 * sizeof(struct sil24_sge), SIL24_MAX_SGT=(PAGE_SIZE - SIL24_PRB_SZ) / (4 * sizeof(struct sil24_sge)), SIL24_MAX_SGE=4 * SIL24_MAX_SGT + 1, HOST_SLOT_STAT=0x00, HOST_CTRL=0x40, HOST_IRQ_STAT=0x44, HOST_PHY_CFG=0x48, HOST_BIST_CTRL=0x50, HOST_BIST_PTRN=0x54, HOST_BIST_STAT=0x58, HOST_MEM_BIST_STAT=0x5c, HOST_FLASH_CMD=0x70, HOST_FLASH_DATA=0x74, HOST_TRANSITION_DETECT=0x75, HOST_GPIO_CTRL=0x76, HOST_I2C_ADDR=0x78, HOST_I2C_DATA=0x7c, HOST_I2C_XFER_CNT=0x7e, HOST_I2C_CTRL=0x7f, HOST_SSTAT_ATTN=(1 << 31), HOST_CTRL_M66EN=(1 << 16), HOST_CTRL_TRDY=(1 << 17), HOST_CTRL_STOP=(1 << 18), HOST_CTRL_DEVSEL=(1 << 19), HOST_CTRL_REQ64=(1 << 20), HOST_CTRL_GLOBAL_RST=(1 << 31), PORT_REGS_SIZE=0x2000, PORT_LRAM=0x0000, PORT_LRAM_SLOT_SZ=0x0080, PORT_PMP=0x0f80, PORT_PMP_STATUS=0x0000, PORT_PMP_QACTIVE=0x0004, PORT_PMP_SIZE=0x0008, PORT_CTRL_STAT=0x1000, PORT_CTRL_CLR=0x1004, PORT_IRQ_STAT=0x1008, PORT_IRQ_ENABLE_SET=0x1010, PORT_IRQ_ENABLE_CLR=0x1014, PORT_ACTIVATE_UPPER_ADDR=0x101c, PORT_EXEC_FIFO=0x1020, PORT_CMD_ERR=0x1024, PORT_FIS_CFG=0x1028, PORT_FIFO_THRES=0x102c, PORT_DECODE_ERR_CNT=0x1040, PORT_DECODE_ERR_THRESH=0x1042, PORT_CRC_ERR_CNT=0x1044, PORT_CRC_ERR_THRESH=0x1046, PORT_HSHK_ERR_CNT=0x1048, PORT_HSHK_ERR_THRESH=0x104a, PORT_PHY_CFG=0x1050, PORT_SLOT_STAT=0x1800, PORT_CMD_ACTIVATE=0x1c00, PORT_CONTEXT=0x1e04, PORT_EXEC_DIAG=0x1e00, PORT_PSD_DIAG=0x1e40, PORT_SCONTROL=0x1f00, PORT_SSTATUS=0x1f04, PORT_SERROR=0x1f08, PORT_SACTIVE=0x1f0c, PORT_CS_PORT_RST=(1 << 0), PORT_CS_DEV_RST=(1 << 1), PORT_CS_INIT=(1 << 2), PORT_CS_IRQ_WOC=(1 << 3), PORT_CS_CDB16=(1 << 5), PORT_CS_PMP_RESUME=(1 << 6), PORT_CS_32BIT_ACTV=(1 << 10), PORT_CS_PMP_EN=(1 << 13), PORT_CS_RDY=(1 << 31), PORT_IRQ_COMPLETE=(1 << 0), PORT_IRQ_ERROR=(1 << 1), PORT_IRQ_PORTRDY_CHG=(1 << 2), PORT_IRQ_PWR_CHG=(1 << 3), PORT_IRQ_PHYRDY_CHG=(1 << 4), PORT_IRQ_COMWAKE=(1 << 5), PORT_IRQ_UNK_FIS=(1 << 6), PORT_IRQ_DEV_XCHG=(1 << 7), PORT_IRQ_8B10B=(1 << 8), PORT_IRQ_CRC=(1 << 9), PORT_IRQ_HANDSHAKE=(1 << 10), PORT_IRQ_SDB_NOTIFY=(1 << 11), DEF_PORT_IRQ=PORT_IRQ_COMPLETE | PORT_IRQ_ERROR | PORT_IRQ_PHYRDY_CHG | PORT_IRQ_DEV_XCHG | PORT_IRQ_UNK_FIS | PORT_IRQ_SDB_NOTIFY, PORT_IRQ_RAW_SHIFT=16, PORT_IRQ_MASKED_MASK=0x7ff, PORT_IRQ_RAW_MASK=(0x7ff << PORT_IRQ_RAW_SHIFT), PORT_IRQ_STEER_SHIFT=30, PORT_IRQ_STEER_MASK=(3 << PORT_IRQ_STEER_SHIFT), PORT_CERR_DEV=1, PORT_CERR_SDB=2, PORT_CERR_DATA=3, PORT_CERR_SEND=4, PORT_CERR_INCONSISTENT=5, PORT_CERR_DIRECTION=6, PORT_CERR_UNDERRUN=7, PORT_CERR_OVERRUN=8, PORT_CERR_PKT_PROT=11, PORT_CERR_SGT_BOUNDARY=16, PORT_CERR_SGT_TGTABRT=17, PORT_CERR_SGT_MSTABRT=18, PORT_CERR_SGT_PCIPERR=19, PORT_CERR_CMD_BOUNDARY=24, PORT_CERR_CMD_TGTABRT=25, PORT_CERR_CMD_MSTABRT=26, PORT_CERR_CMD_PCIPERR=27, PORT_CERR_XFR_UNDEF=32, PORT_CERR_XFR_TGTABRT=33, PORT_CERR_XFR_MSTABRT=34, PORT_CERR_XFR_PCIPERR=35, PORT_CERR_SENDSERVICE=36, PRB_CTRL_PROTOCOL=(1 << 0), PRB_CTRL_PACKET_READ=(1 << 4), PRB_CTRL_PACKET_WRITE=(1 << 5), PRB_CTRL_NIEN=(1 << 6), PRB_CTRL_SRST=(1 << 7), PRB_PROT_PACKET=(1 << 0), PRB_PROT_TCQ=(1 << 1), PRB_PROT_NCQ=(1 << 2), PRB_PROT_READ=(1 << 3), PRB_PROT_WRITE=(1 << 4), PRB_PROT_TRANSPARENT=(1 << 5), SGE_TRM=(1 << 31), SGE_LNK=(1 << 30), SGE_DRD=(1 << 29), SIL24_MAX_CMDS=31, BID_SIL3124=0, BID_SIL3132=1, BID_SIL3131=2, SIL24_COMMON_FLAGS=ATA_FLAG_SATA | ATA_FLAG_PIO_DMA | ATA_FLAG_NCQ | ATA_FLAG_ACPI_SATA | ATA_FLAG_AN | ATA_FLAG_PMP, SIL24_FLAG_PCIX_IRQ_WOC=(1 << 24), IRQ_STAT_4PORTS=0xf,} cocci_id/* drivers/ata/sata_sil24.c 46 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_sil24.c 424 */[];
	bool cocci_id/* drivers/ata/sata_sil24.c 413 */;
	struct sil24_sge {
		__le64 addr;
		__le32 cnt;
		__le32 flags;
	} cocci_id/* drivers/ata/sata_sil24.c 39 */;
	struct ata_port_operations cocci_id/* drivers/ata/sata_sil24.c 384 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_sil24.c 376 */;
	struct pci_driver cocci_id/* drivers/ata/sata_sil24.c 365 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_sil24.c 353 */[];
	int cocci_id/* drivers/ata/sata_sil24.c 350 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_sil24.c 347 */(struct pci_dev *pdev);
	int cocci_id/* drivers/ata/sata_sil24.c 345 */(struct pci_dev *pdev,
						       const struct pci_device_id *ent);
	void cocci_id/* drivers/ata/sata_sil24.c 343 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_sil24.c 342 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_sil24.c 338 */(struct ata_link *link,
						       unsigned int *class,
						       unsigned long deadline);
	bool cocci_id/* drivers/ata/sata_sil24.c 331 */(struct ata_queued_cmd *qc);
	unsigned int cocci_id/* drivers/ata/sata_sil24.c 330 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sil24.c 329 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_sil24.c 328 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_sil24.c 327 */(struct ata_link *link,
						       unsigned sc_reg,
						       u32 val);
	int cocci_id/* drivers/ata/sata_sil24.c 326 */(struct ata_link *link,
						       unsigned sc_reg,
						       u32 *val);
	void cocci_id/* drivers/ata/sata_sil24.c 325 */(struct ata_device *dev);
	struct sil24_port_priv {
		union sil24_cmd_block *cmd_block;
		dma_addr_t cmd_block_dma;
		int do_port_rst;
	} cocci_id/* drivers/ata/sata_sil24.c 319 */;
	struct sil24_prb {
		__le16 ctrl;
		__le16 prot;
		__le32 rx_cnt;
		u8 fis[6 * 4];
	} cocci_id/* drivers/ata/sata_sil24.c 29 */;
	const struct sil24_cerr_info {
		unsigned int err_mask,action;
		const char *desc;
	} cocci_id/* drivers/ata/sata_sil24.c 261 */[];
	union sil24_cmd_block {
		struct sil24_ata_block ata;
		struct sil24_atapi_block atapi;
	} cocci_id/* drivers/ata/sata_sil24.c 256 */;
	struct sil24_atapi_block {
		struct sil24_prb prb;
		u8 cdb[16];
		struct sil24_sge sge[SIL24_MAX_SGE];
	} cocci_id/* drivers/ata/sata_sil24.c 250 */;
	struct sil24_ata_block {
		struct sil24_prb prb;
		struct sil24_sge sge[SIL24_MAX_SGE];
	} cocci_id/* drivers/ata/sata_sil24.c 245 */;
	union sil24_cmd_block cocci_id/* drivers/ata/sata_sil24.c 1271 */;
	void __iomem *const*cocci_id/* drivers/ata/sata_sil24.c 1265 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_sil24.c 1264 */[];
	struct ata_port_info cocci_id/* drivers/ata/sata_sil24.c 1263 */;
	const struct pci_device_id *cocci_id/* drivers/ata/sata_sil24.c 1260 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_sil24.c 1260 */;
	struct ata_host *cocci_id/* drivers/ata/sata_sil24.c 1219 */;
	size_t cocci_id/* drivers/ata/sata_sil24.c 1197 */;
	union sil24_cmd_block *cocci_id/* drivers/ata/sata_sil24.c 1196 */;
	struct device *cocci_id/* drivers/ata/sata_sil24.c 1194 */;
	struct sil24_port_priv *cocci_id/* drivers/ata/sata_sil24.c 1173 */;
	unsigned cocci_id/* drivers/ata/sata_sil24.c 1143 */;
	irqreturn_t cocci_id/* drivers/ata/sata_sil24.c 1139 */;
	void *cocci_id/* drivers/ata/sata_sil24.c 1139 */;
	unsigned int cocci_id/* drivers/ata/sata_sil24.c 1014 */;
	const struct sil24_cerr_info *cocci_id/* drivers/ata/sata_sil24.c 1013 */;
}
