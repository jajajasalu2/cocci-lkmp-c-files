cocci_test_suite() {
	unsigned long cocci_id/* drivers/ata/sata_mv.c 911 */;
	unsigned int cocci_id/* drivers/ata/sata_mv.c 908 */;
	enum{MV_PRIMARY_BAR=0, MV_IO_BAR=2, MV_MISC_BAR=3, MV_MAJOR_REG_AREA_SZ=0x10000, MV_MINOR_REG_AREA_SZ=0x2000, COAL_CLOCKS_PER_USEC=150, MAX_COAL_TIME_THRESHOLD=((1 << 24) - 1), MAX_COAL_IO_COUNT=255, MV_PCI_REG_BASE=0, COAL_REG_BASE=0x18000, IRQ_COAL_CAUSE=(COAL_REG_BASE + 0x08), ALL_PORTS_COAL_IRQ=(1 << 4), IRQ_COAL_IO_THRESHOLD=(COAL_REG_BASE + 0xcc), IRQ_COAL_TIME_THRESHOLD=(COAL_REG_BASE + 0xd0), TRAN_COAL_CAUSE_LO=(COAL_REG_BASE + 0x88), TRAN_COAL_CAUSE_HI=(COAL_REG_BASE + 0x8c), SATAHC0_REG_BASE=0x20000, FLASH_CTL=0x1046c, GPIO_PORT_CTL=0x104f0, RESET_CFG=0x180d8, MV_PCI_REG_SZ=MV_MAJOR_REG_AREA_SZ, MV_SATAHC_REG_SZ=MV_MAJOR_REG_AREA_SZ, MV_SATAHC_ARBTR_REG_SZ=MV_MINOR_REG_AREA_SZ, MV_PORT_REG_SZ=MV_MINOR_REG_AREA_SZ, MV_MAX_Q_DEPTH=32, MV_MAX_Q_DEPTH_MASK=MV_MAX_Q_DEPTH - 1, MV_CRQB_Q_SZ=(32 * MV_MAX_Q_DEPTH), MV_CRPB_Q_SZ=(8 * MV_MAX_Q_DEPTH), MV_MAX_SG_CT=256, MV_SG_TBL_SZ=(16 * MV_MAX_SG_CT), MV_PORT_HC_SHIFT=2, MV_PORTS_PER_HC=(1 << MV_PORT_HC_SHIFT), MV_PORT_MASK=(MV_PORTS_PER_HC - 1), MV_FLAG_DUAL_HC=(1 << 30), MV_COMMON_FLAGS=ATA_FLAG_SATA | ATA_FLAG_PIO_POLLING, MV_GEN_I_FLAGS=MV_COMMON_FLAGS | ATA_FLAG_NO_ATAPI, MV_GEN_II_FLAGS=MV_COMMON_FLAGS | ATA_FLAG_NCQ | ATA_FLAG_PMP | ATA_FLAG_ACPI_SATA, MV_GEN_IIE_FLAGS=MV_GEN_II_FLAGS | ATA_FLAG_AN, CRQB_FLAG_READ=(1 << 0), CRQB_TAG_SHIFT=1, CRQB_IOID_SHIFT=6, CRQB_PMP_SHIFT=12, CRQB_HOSTQ_SHIFT=17, CRQB_CMD_ADDR_SHIFT=8, CRQB_CMD_CS=(0x2 << 11), CRQB_CMD_LAST=(1 << 15), CRPB_FLAG_STATUS_SHIFT=8, CRPB_IOID_SHIFT_6=5, CRPB_IOID_SHIFT_7=7, EPRD_FLAG_END_OF_TBL=(1 << 31), MV_PCI_COMMAND=0xc00, MV_PCI_COMMAND_MWRCOM=(1 << 4), MV_PCI_COMMAND_MRDTRIG=(1 << 7), PCI_MAIN_CMD_STS=0xd30, STOP_PCI_MASTER=(1 << 2), PCI_MASTER_EMPTY=(1 << 3), GLOB_SFT_RST=(1 << 4), MV_PCI_MODE=0xd00, MV_PCI_MODE_MASK=0x30, MV_PCI_EXP_ROM_BAR_CTL=0xd2c, MV_PCI_DISC_TIMER=0xd04, MV_PCI_MSI_TRIGGER=0xc38, MV_PCI_SERR_MASK=0xc28, MV_PCI_XBAR_TMOUT=0x1d04, MV_PCI_ERR_LOW_ADDRESS=0x1d40, MV_PCI_ERR_HIGH_ADDRESS=0x1d44, MV_PCI_ERR_ATTRIBUTE=0x1d48, MV_PCI_ERR_COMMAND=0x1d50, PCI_IRQ_CAUSE=0x1d58, PCI_IRQ_MASK=0x1d5c, PCI_UNMASK_ALL_IRQS=0x7fffff, PCIE_IRQ_CAUSE=0x1900, PCIE_IRQ_MASK=0x1910, PCIE_UNMASK_ALL_IRQS=0x40a, PCI_HC_MAIN_IRQ_CAUSE=0x1d60, PCI_HC_MAIN_IRQ_MASK=0x1d64, SOC_HC_MAIN_IRQ_CAUSE=0x20020, SOC_HC_MAIN_IRQ_MASK=0x20024, ERR_IRQ=(1 << 0), DONE_IRQ=(1 << 1), HC0_IRQ_PEND=0x1ff, HC_SHIFT=9, DONE_IRQ_0_3=0x000000aa, DONE_IRQ_4_7=(DONE_IRQ_0_3 << HC_SHIFT), PCI_ERR=(1 << 18), TRAN_COAL_LO_DONE=(1 << 19), TRAN_COAL_HI_DONE=(1 << 20), PORTS_0_3_COAL_DONE=(1 << 8), PORTS_4_7_COAL_DONE=(1 << 17), ALL_PORTS_COAL_DONE=(1 << 21), GPIO_INT=(1 << 22), SELF_INT=(1 << 23), TWSI_INT=(1 << 24), HC_MAIN_RSVD=(0x7f << 25), HC_MAIN_RSVD_5=(0x1fff << 19), HC_MAIN_RSVD_SOC=(0x3fffffb << 6), HC_CFG=0x00, HC_IRQ_CAUSE=0x14, DMA_IRQ=(1 << 0), HC_COAL_IRQ=(1 << 4), DEV_IRQ=(1 << 8), HC_IRQ_COAL_IO_THRESHOLD=0x000c, HC_IRQ_COAL_TIME_THRESHOLD=0x0010, SOC_LED_CTRL=0x2c, SOC_LED_CTRL_BLINK=(1 << 0), SOC_LED_CTRL_ACT_PRESENCE=(1 << 2), SHD_BLK=0x100, SHD_CTL_AST=0x20, SATA_STATUS=0x300, SATA_ACTIVE=0x350, FIS_IRQ_CAUSE=0x364, FIS_IRQ_CAUSE_AN=(1 << 9), LTMODE=0x30c, LTMODE_BIT8=(1 << 8), PHY_MODE2=0x330, PHY_MODE3=0x310, PHY_MODE4=0x314, PHY_MODE4_CFG_MASK=0x00000003, PHY_MODE4_CFG_VALUE=0x00000001, PHY_MODE4_RSVD_ZEROS=0x5de3fffa, PHY_MODE4_RSVD_ONES=0x00000005, SATA_IFCTL=0x344, SATA_TESTCTL=0x348, SATA_IFSTAT=0x34c, VENDOR_UNIQUE_FIS=0x35c, FISCFG=0x360, FISCFG_WAIT_DEV_ERR=(1 << 8), FISCFG_SINGLE_SYNC=(1 << 16), PHY_MODE9_GEN2=0x398, PHY_MODE9_GEN1=0x39c, PHYCFG_OFS=0x3a0, MV5_PHY_MODE=0x74, MV5_LTMODE=0x30, MV5_PHY_CTL=0x0C, SATA_IFCFG=0x050, LP_PHY_CTL=0x058, LP_PHY_CTL_PIN_PU_PLL=(1 << 0), LP_PHY_CTL_PIN_PU_RX=(1 << 1), LP_PHY_CTL_PIN_PU_TX=(1 << 2), LP_PHY_CTL_GEN_TX_3G=(1 << 5), LP_PHY_CTL_GEN_RX_3G=(1 << 9), MV_M2_PREAMP_MASK=0x7e0, EDMA_CFG=0, EDMA_CFG_Q_DEPTH=0x1f, EDMA_CFG_NCQ=(1 << 5), EDMA_CFG_NCQ_GO_ON_ERR=(1 << 14), EDMA_CFG_RD_BRST_EXT=(1 << 11), EDMA_CFG_WR_BUFF_LEN=(1 << 13), EDMA_CFG_EDMA_FBS=(1 << 16), EDMA_CFG_FBS=(1 << 26), EDMA_ERR_IRQ_CAUSE=0x8, EDMA_ERR_IRQ_MASK=0xc, EDMA_ERR_D_PAR=(1 << 0), EDMA_ERR_PRD_PAR=(1 << 1), EDMA_ERR_DEV=(1 << 2), EDMA_ERR_DEV_DCON=(1 << 3), EDMA_ERR_DEV_CON=(1 << 4), EDMA_ERR_SERR=(1 << 5), EDMA_ERR_SELF_DIS=(1 << 7), EDMA_ERR_SELF_DIS_5=(1 << 8), EDMA_ERR_BIST_ASYNC=(1 << 8), EDMA_ERR_TRANS_IRQ_7=(1 << 8), EDMA_ERR_CRQB_PAR=(1 << 9), EDMA_ERR_CRPB_PAR=(1 << 10), EDMA_ERR_INTRL_PAR=(1 << 11), EDMA_ERR_IORDY=(1 << 12), EDMA_ERR_LNK_CTRL_RX=(0xf << 13), EDMA_ERR_LNK_CTRL_RX_0=(1 << 13), EDMA_ERR_LNK_CTRL_RX_1=(1 << 14), EDMA_ERR_LNK_CTRL_RX_2=(1 << 15), EDMA_ERR_LNK_CTRL_RX_3=(1 << 16), EDMA_ERR_LNK_DATA_RX=(0xf << 17), EDMA_ERR_LNK_CTRL_TX=(0x1f << 21), EDMA_ERR_LNK_CTRL_TX_0=(1 << 21), EDMA_ERR_LNK_CTRL_TX_1=(1 << 22), EDMA_ERR_LNK_CTRL_TX_2=(1 << 23), EDMA_ERR_LNK_CTRL_TX_3=(1 << 24), EDMA_ERR_LNK_CTRL_TX_4=(1 << 25), EDMA_ERR_LNK_DATA_TX=(0x1f << 26), EDMA_ERR_TRANS_PROTO=(1 << 31), EDMA_ERR_OVERRUN_5=(1 << 5), EDMA_ERR_UNDERRUN_5=(1 << 6), EDMA_ERR_IRQ_TRANSIENT=EDMA_ERR_LNK_CTRL_RX_0 | EDMA_ERR_LNK_CTRL_RX_1 | EDMA_ERR_LNK_CTRL_RX_3 | EDMA_ERR_LNK_CTRL_TX, EDMA_EH_FREEZE=EDMA_ERR_D_PAR | EDMA_ERR_PRD_PAR | EDMA_ERR_DEV_DCON | EDMA_ERR_DEV_CON | EDMA_ERR_SERR | EDMA_ERR_SELF_DIS | EDMA_ERR_CRQB_PAR | EDMA_ERR_CRPB_PAR | EDMA_ERR_INTRL_PAR | EDMA_ERR_IORDY | EDMA_ERR_LNK_CTRL_RX_2 | EDMA_ERR_LNK_DATA_RX | EDMA_ERR_LNK_DATA_TX | EDMA_ERR_TRANS_PROTO, EDMA_EH_FREEZE_5=EDMA_ERR_D_PAR | EDMA_ERR_PRD_PAR | EDMA_ERR_DEV_DCON | EDMA_ERR_DEV_CON | EDMA_ERR_OVERRUN_5 | EDMA_ERR_UNDERRUN_5 | EDMA_ERR_SELF_DIS_5 | EDMA_ERR_CRQB_PAR | EDMA_ERR_CRPB_PAR | EDMA_ERR_INTRL_PAR | EDMA_ERR_IORDY, EDMA_REQ_Q_BASE_HI=0x10, EDMA_REQ_Q_IN_PTR=0x14, EDMA_REQ_Q_OUT_PTR=0x18, EDMA_REQ_Q_PTR_SHIFT=5, EDMA_RSP_Q_BASE_HI=0x1c, EDMA_RSP_Q_IN_PTR=0x20, EDMA_RSP_Q_OUT_PTR=0x24, EDMA_RSP_Q_PTR_SHIFT=3, EDMA_CMD=0x28, EDMA_EN=(1 << 0), EDMA_DS=(1 << 1), EDMA_RESET=(1 << 2), EDMA_STATUS=0x30, EDMA_STATUS_CACHE_EMPTY=(1 << 6), EDMA_STATUS_IDLE=(1 << 7), EDMA_IORDY_TMOUT=0x34, EDMA_ARB_CFG=0x38, EDMA_HALTCOND=0x60, EDMA_UNKNOWN_RSVD=0x6C, BMDMA_CMD=0x224, BMDMA_STATUS=0x228, BMDMA_PRD_LOW=0x22c, BMDMA_PRD_HIGH=0x230, MV_HP_FLAG_MSI=(1 << 0), MV_HP_ERRATA_50XXB0=(1 << 1), MV_HP_ERRATA_50XXB2=(1 << 2), MV_HP_ERRATA_60X1B2=(1 << 3), MV_HP_ERRATA_60X1C0=(1 << 4), MV_HP_GEN_I=(1 << 6), MV_HP_GEN_II=(1 << 7), MV_HP_GEN_IIE=(1 << 8), MV_HP_PCIE=(1 << 9), MV_HP_CUT_THROUGH=(1 << 10), MV_HP_FLAG_SOC=(1 << 11), MV_HP_QUIRK_LED_BLINK_EN=(1 << 12), MV_HP_FIX_LP_PHY_CTL=(1 << 13), MV_PP_FLAG_EDMA_EN=(1 << 0), MV_PP_FLAG_NCQ_EN=(1 << 1), MV_PP_FLAG_FBS_EN=(1 << 2), MV_PP_FLAG_DELAYED_EH=(1 << 3), MV_PP_FLAG_FAKE_ATA_BUSY=(1 << 4),} cocci_id/* drivers/ata/sata_mv.c 86 */;
	const struct mv_hw_ops cocci_id/* drivers/ata/sata_mv.c 817 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_mv.c 786 */[];
	int cocci_id/* drivers/ata/sata_mv.c 76 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_mv.c 735 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_mv.c 675 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_mv.c 662 */;
	u8 cocci_id/* drivers/ata/sata_mv.c 654 */(struct ata_port *ap);
	void cocci_id/* drivers/ata/sata_mv.c 651 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_mv.c 650 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/sata_mv.c 646 */(struct ata_port *ap,
						     struct mv_port_priv *pp);
	void cocci_id/* drivers/ata/sata_mv.c 640 */(struct ata_port *ap,
						     int pmp);
	void cocci_id/* drivers/ata/sata_mv.c 638 */(struct ata_port *ap,
						     int want_ncq,
						     int want_edma);
	int cocci_id/* drivers/ata/sata_mv.c 637 */(void __iomem *port_mmio);
	void cocci_id/* drivers/ata/sata_mv.c 634 */(struct mv_host_priv *hpriv,
						     void __iomem *mmio,
						     unsigned int port_no);
	void cocci_id/* drivers/ata/sata_mv.c 612 */(struct ata_host *host,
						     void __iomem *mmio);
	int cocci_id/* drivers/ata/sata_mv.c 609 */(struct mv_host_priv *hpriv,
						    void __iomem *mmio,
						    unsigned int n_hc);
	void cocci_id/* drivers/ata/sata_mv.c 607 */(struct mv_host_priv *hpriv,
						     int idx,
						     void __iomem *mmio);
	void cocci_id/* drivers/ata/sata_mv.c 606 */(struct mv_host_priv *hpriv,
						     void __iomem *mmio);
	void cocci_id/* drivers/ata/sata_mv.c 604 */(struct mv_host_priv *hpriv,
						     void __iomem *mmio,
						     unsigned int port);
	void cocci_id/* drivers/ata/sata_mv.c 602 */(struct ata_device *dev);
	void cocci_id/* drivers/ata/sata_mv.c 600 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_mv.c 598 */(struct ata_link *link,
						    unsigned int *class,
						    unsigned long deadline);
	unsigned int cocci_id/* drivers/ata/sata_mv.c 597 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_mv.c 595 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_mv.c 592 */(struct ata_port *ap);
	int cocci_id/* drivers/ata/sata_mv.c 591 */(struct ata_link *link,
						    unsigned int sc_reg_in,
						    u32 val);
	int cocci_id/* drivers/ata/sata_mv.c 590 */(struct ata_link *link,
						    unsigned int sc_reg_in,
						    u32 *val);
	struct mv_hw_ops {
		void (*phy_errata)(struct mv_host_priv *hpriv,
				   void __iomem *mmio, unsigned int port);
		void (*enable_leds)(struct mv_host_priv *hpriv,
				    void __iomem *mmio);
		void (*read_preamp)(struct mv_host_priv *hpriv, int idx,
				    void __iomem *mmio);
		int (*reset_hc)(struct mv_host_priv *hpriv,
				void __iomem *mmio, unsigned int n_hc);
		void (*reset_flash)(struct mv_host_priv *hpriv,
				    void __iomem *mmio);
		void (*reset_bus)(struct ata_host *host, void __iomem *mmio);
	} cocci_id/* drivers/ata/sata_mv.c 576 */;
	struct mv_host_priv {
		u32 hp_flags;
		unsigned int board_idx;
		u32 main_irq_mask;
		struct mv_port_signal signal[8];
		const struct mv_hw_ops *ops;
		int n_ports;
		void __iomem *base;
		void __iomem *main_irq_cause_addr;
		void __iomem *main_irq_mask_addr;
		u32 irq_cause_offset;
		u32 irq_mask_offset;
		u32 unmask_all_irqs;
		struct clk *clk;
		struct clk **port_clks;
		struct phy **port_phys;
		struct dma_pool *crqb_pool;
		struct dma_pool *crpb_pool;
		struct dma_pool *sg_tbl_pool;
	} cocci_id/* drivers/ata/sata_mv.c 537 */;
	struct mv_port_signal {
		u32 amps;
		u32 pre;
	} cocci_id/* drivers/ata/sata_mv.c 532 */;
	struct mv_port_priv {
		struct mv_crqb *crqb;
		dma_addr_t crqb_dma;
		struct mv_crpb *crpb;
		dma_addr_t crpb_dma;
		struct mv_sg *sg_tbl[MV_MAX_Q_DEPTH];
		dma_addr_t sg_tbl_dma[MV_MAX_Q_DEPTH];
		unsigned int req_idx;
		unsigned int resp_idx;
		u32 pp_flags;
		struct mv_cached_regs cached;
		unsigned int delayed_eh_pmp_map;
	} cocci_id/* drivers/ata/sata_mv.c 516 */;
	struct mv_cached_regs {
		u32 fiscfg;
		u32 ltmode;
		u32 haltcond;
		u32 unknown_rsvd;
	} cocci_id/* drivers/ata/sata_mv.c 509 */;
	struct mv_sg {
		__le32 addr;
		__le32 flags_size;
		__le32 addr_hi;
		__le32 reserved;
	} cocci_id/* drivers/ata/sata_mv.c 497 */;
	struct mv_crpb {
		__le16 id;
		__le16 flags;
		__le32 tmstmp;
	} cocci_id/* drivers/ata/sata_mv.c 490 */;
	struct mv_crqb_iie {
		__le32 addr;
		__le32 addr_hi;
		__le32 flags;
		__le32 len;
		__le32 ata_cmd[4];
	} cocci_id/* drivers/ata/sata_mv.c 481 */;
	struct mv_crqb {
		__le32 sg_addr;
		__le32 sg_addr_hi;
		__le16 ctrl_flags;
		__le16 ata_cmd[11];
	} cocci_id/* drivers/ata/sata_mv.c 474 */;
	enum chip_type{chip_504x, chip_508x, chip_5080, chip_604x, chip_608x, chip_6042, chip_7042, chip_soc,} cocci_id/* drivers/ata/sata_mv.c 462 */;
	void __exit cocci_id/* drivers/ata/sata_mv.c 4479 */;
	enum{MV_DMA_BOUNDARY=0xffffU, EDMA_REQ_Q_BASE_LO_MASK=0xfffffc00U, EDMA_RSP_Q_BASE_LO_MASK=0xffffff00U,} cocci_id/* drivers/ata/sata_mv.c 447 */;
	int __init cocci_id/* drivers/ata/sata_mv.c 4462 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_mv.c 4372 */[];
	const struct pci_device_id *cocci_id/* drivers/ata/sata_mv.c 4369 */;
	const char *cocci_id/* drivers/ata/sata_mv.c 4333 */;
	struct pci_driver cocci_id/* drivers/ata/sata_mv.c 4307 */;
	int cocci_id/* drivers/ata/sata_mv.c 4303 */(struct pci_dev *pdev);
	int cocci_id/* drivers/ata/sata_mv.c 4300 */(struct pci_dev *pdev,
						     const struct pci_device_id *ent);
	struct platform_driver cocci_id/* drivers/ata/sata_mv.c 4287 */;
	const struct of_device_id cocci_id/* drivers/ata/sata_mv.c 4279 */[];
	pm_message_t cocci_id/* drivers/ata/sata_mv.c 4237 */;
	char cocci_id/* drivers/ata/sata_mv.c 4134 */[16];
	struct phy *cocci_id/* drivers/ata/sata_mv.c 4112 */;
	struct clk *cocci_id/* drivers/ata/sata_mv.c 4107 */;
	struct resource *cocci_id/* drivers/ata/sata_mv.c 4056 */;
	const struct mv_sata_platform_data *cocci_id/* drivers/ata/sata_mv.c 4050 */;
	struct platform_device *cocci_id/* drivers/ata/sata_mv.c 4048 */;
	const struct mbus_dram_window *cocci_id/* drivers/ata/sata_mv.c 4030 */;
	const struct mbus_dram_target_info *cocci_id/* drivers/ata/sata_mv.c 4020 */;
	struct device *cocci_id/* drivers/ata/sata_mv.c 3999 */;
	struct ata_ioports *cocci_id/* drivers/ata/sata_mv.c 3696 */;
	const unsigned long *cocci_id/* drivers/ata/sata_mv.c 3637 */;
	bool cocci_id/* drivers/ata/sata_mv.c 3628 */;
	unsigned int *cocci_id/* drivers/ata/sata_mv.c 3619 */;
	const u32 cocci_id/* drivers/ata/sata_mv.c 3133 */;
	u32 cocci_id/* drivers/ata/sata_mv.c 3118 */;
	struct mv_host_priv *cocci_id/* drivers/ata/sata_mv.c 3116 */;
	void __iomem *cocci_id/* drivers/ata/sata_mv.c 3116 */;
	void cocci_id/* drivers/ata/sata_mv.c 3116 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_mv.c 3085 */;
	struct ata_host *cocci_id/* drivers/ata/sata_mv.c 3083 */;
	u32 *cocci_id/* drivers/ata/sata_mv.c 3055 */;
	struct ata_link *cocci_id/* drivers/ata/sata_mv.c 3055 */;
	irqreturn_t cocci_id/* drivers/ata/sata_mv.c 3002 */;
	void *cocci_id/* drivers/ata/sata_mv.c 3002 */;
	struct mv_crpb *cocci_id/* drivers/ata/sata_mv.c 2815 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_mv.c 2644 */;
	char *cocci_id/* drivers/ata/sata_mv.c 2609 */;
	u32 cocci_id/* drivers/ata/sata_mv.c 2288 */[5];
	struct mv_crqb_iie *cocci_id/* drivers/ata/sata_mv.c 2139 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_mv.c 2039 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_mv.c 2034 */;
	u8 cocci_id/* drivers/ata/sata_mv.c 1959 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_mv.c 1881 */;
	struct scsi_cmnd *cocci_id/* drivers/ata/sata_mv.c 1855 */;
	u16 cocci_id/* drivers/ata/sata_mv.c 1824 */;
	__le16 *cocci_id/* drivers/ata/sata_mv.c 1822 */;
	unsigned cocci_id/* drivers/ata/sata_mv.c 1822 */;
	dma_addr_t cocci_id/* drivers/ata/sata_mv.c 1794 */;
	struct mv_sg *cocci_id/* drivers/ata/sata_mv.c 1789 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_mv.c 1788 */;
	struct mv_port_priv *cocci_id/* drivers/ata/sata_mv.c 1536 */;
	struct ata_port *cocci_id/* drivers/ata/sata_mv.c 1507 */;
	struct ata_device *cocci_id/* drivers/ata/sata_mv.c 1405 */;
	const int cocci_id/* drivers/ata/sata_mv.c 1187 */;
}
