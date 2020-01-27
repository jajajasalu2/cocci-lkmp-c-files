cocci_test_suite() {
	enum bcm_usb_phy_ctrl_bits{CORERDY, AFE_LDO_PWRDWNB, AFE_PLL_PWRDWNB, AFE_BG_PWRDWNB, PHY_ISO, PHY_RESETB, PHY_PCTL,} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 74 */;
	enum pll_ctrl_bits{PLL_RESETB, SSPLL_SUSPEND_EN, PLL_SEQ_START, PLL_LOCK, PLL_PDIV,} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 50 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 383 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 361 */;
	enum bcm_usb_phy_version cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 360 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 357 */;
	const struct of_device_id *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 356 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 352 */;
	void *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 342 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 339 */[];
	const u8 cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 33 */[];
	struct bcm_usb_phy_cfg cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 294 */;
	uint32_t cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 287 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 286 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 286 */;
	struct of_phandle_args *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 266 */;
	struct phy_ops cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 259 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 246 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 189 */;
	const u8 *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 188 */;
	void __iomem *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 187 */;
	struct bcm_usb_phy_cfg *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 184 */;
	int cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 184 */;
	enum bcm_usb_phy_reg{PLL_NDIV_FRAC, PLL_NDIV_INT, PLL_CTRL, PHY_CTRL, PHY_PLL_CTRL,} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 18 */;
	enum bcm_usb_phy_version{BCM_SR_USB_COMBO_PHY, BCM_SR_USB_HS_PHY,} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 13 */;
	void cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 126 */;
	enum bcm_usb_phy_type{USB_HS_PHY, USB_SS_PHY,} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 119 */;
	struct bcm_usb_phy_cfg {
		uint32_t type;
		uint32_t version;
		void __iomem *regs;
		struct phy *phy;
		const u8 *offset;
	} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-usb.c 109 */;
}
