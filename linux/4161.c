cocci_test_suite() {
	enum sata_phy_regs{BLOCK0_REG_BANK=0x000, BLOCK0_XGXSSTATUS=0x81, BLOCK0_XGXSSTATUS_PLL_LOCK=BIT(12), BLOCK0_SPARE=0x8d, BLOCK0_SPARE_OOB_CLK_SEL_MASK=0x3, BLOCK0_SPARE_OOB_CLK_SEL_REFBY2=0x1, PLL_REG_BANK_0=0x050, PLL_REG_BANK_0_PLLCONTROL_0=0x81, PLLCONTROL_0_FREQ_DET_RESTART=BIT(13), PLLCONTROL_0_FREQ_MONITOR=BIT(12), PLLCONTROL_0_SEQ_START=BIT(15), PLL_CAP_CHARGE_TIME=0x83, PLL_VCO_CAL_THRESH=0x84, PLL_CAP_CONTROL=0x85, PLL_FREQ_DET_TIME=0x86, PLL_ACTRL2=0x8b, PLL_ACTRL2_SELDIV_MASK=0x1f, PLL_ACTRL2_SELDIV_SHIFT=9, PLL_ACTRL6=0x86, PLL1_REG_BANK=0x060, PLL1_ACTRL2=0x82, PLL1_ACTRL3=0x83, PLL1_ACTRL4=0x84, PLL1_ACTRL5=0x85, PLL1_ACTRL6=0x86, PLL1_ACTRL7=0x87, TX_REG_BANK=0x070, TX_ACTRL0=0x80, TX_ACTRL0_TXPOL_FLIP=BIT(6), AEQRX_REG_BANK_0=0xd0, AEQ_CONTROL1=0x81, AEQ_CONTROL1_ENABLE=BIT(2), AEQ_CONTROL1_FREEZE=BIT(3), AEQ_FRC_EQ=0x83, AEQ_FRC_EQ_FORCE=BIT(0), AEQ_FRC_EQ_FORCE_VAL=BIT(1), AEQRX_REG_BANK_1=0xe0, AEQRX_SLCAL0_CTRL0=0x82, AEQRX_SLCAL1_CTRL0=0x86, OOB_REG_BANK=0x150, OOB1_REG_BANK=0x160, OOB_CTRL1=0x80, OOB_CTRL1_BURST_MAX_MASK=0xf, OOB_CTRL1_BURST_MAX_SHIFT=12, OOB_CTRL1_BURST_MIN_MASK=0xf, OOB_CTRL1_BURST_MIN_SHIFT=8, OOB_CTRL1_WAKE_IDLE_MAX_MASK=0xf, OOB_CTRL1_WAKE_IDLE_MAX_SHIFT=4, OOB_CTRL1_WAKE_IDLE_MIN_MASK=0xf, OOB_CTRL1_WAKE_IDLE_MIN_SHIFT=0, OOB_CTRL2=0x81, OOB_CTRL2_SEL_ENA_SHIFT=15, OOB_CTRL2_SEL_ENA_RC_SHIFT=14, OOB_CTRL2_RESET_IDLE_MAX_MASK=0x3f, OOB_CTRL2_RESET_IDLE_MAX_SHIFT=8, OOB_CTRL2_BURST_CNT_MASK=0x3, OOB_CTRL2_BURST_CNT_SHIFT=6, OOB_CTRL2_RESET_IDLE_MIN_MASK=0x3f, OOB_CTRL2_RESET_IDLE_MIN_SHIFT=0, TXPMD_REG_BANK=0x1a0, TXPMD_CONTROL1=0x81, TXPMD_CONTROL1_TX_SSC_EN_FRC=BIT(0), TXPMD_CONTROL1_TX_SSC_EN_FRC_VAL=BIT(1), TXPMD_TX_FREQ_CTRL_CONTROL1=0x82, TXPMD_TX_FREQ_CTRL_CONTROL2=0x83, TXPMD_TX_FREQ_CTRL_CONTROL2_FMIN_MASK=0x3ff, TXPMD_TX_FREQ_CTRL_CONTROL3=0x84, TXPMD_TX_FREQ_CTRL_CONTROL3_FMAX_MASK=0x3ff, RXPMD_REG_BANK=0x1c0, RXPMD_RX_FREQ_MON_CONTROL1=0x87,} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 78 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 717 */;
	struct brcm_sata_phy {
		struct device *dev;
		void __iomem *phy_base;
		void __iomem *ctrl_base;
		enum brcm_sata_phy_version version;
		struct brcm_sata_port phys[MAX_PORTS];
	} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 69 */;
	enum brcm_sata_phy_version cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 647 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 628 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 627 */;
	const struct of_device_id *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 625 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 624 */;
	const char *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 622 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 620 */;
	void *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 605 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 603 */[];
	struct brcm_sata_port {
		int portnum;
		struct phy *phy;
		struct brcm_sata_phy *phy_priv;
		bool ssc_en;
		enum brcm_sata_phy_rxaeq_mode rxaeq_mode;
		u32 rxaeq_val;
	} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 60 */;
	const struct phy_ops cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 597 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 579 */;
	enum brcm_sata_phy_rxaeq_mode cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 50 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 491 */;
	unsigned int cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 490 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 489 */;
	void __iomem *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 488 */;
	struct brcm_sata_port *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 486 */;
	int cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 486 */;
	enum brcm_sata_phy_rxaeq_mode{RXAEQ_MODE_OFF=0, RXAEQ_MODE_AUTO, RXAEQ_MODE_MANUAL,} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 44 */;
	struct brcm_sata_phy *cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 359 */;
	enum brcm_sata_phy_version{BRCM_SATA_PHY_STB_28NM, BRCM_SATA_PHY_STB_40NM, BRCM_SATA_PHY_IPROC_NS2, BRCM_SATA_PHY_IPROC_NSP, BRCM_SATA_PHY_IPROC_SR, BRCM_SATA_PHY_DSL_28NM,} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 35 */;
	void cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 202 */;
	enum sata_phy_ctrl_regs{PHY_CTRL_1=0x0, PHY_CTRL_1_RESET=BIT(0),} cocci_id/* drivers/phy/broadcom/phy-brcm-sata.c 158 */;
}
