cocci_test_suite() {
	const char *cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 94 */[BRCM_FAMILY_COUNT];
	void __iomem *cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 854 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 853 */;
	struct brcm_usb_init_params *cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 851 */;
	void cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 851 */;
	int cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 823 */;
	enum brcm_family_type{BRCM_FAMILY_3390A0, BRCM_FAMILY_7250B0, BRCM_FAMILY_7271A0, BRCM_FAMILY_7364A0, BRCM_FAMILY_7366C0, BRCM_FAMILY_74371A0, BRCM_FAMILY_7439B0, BRCM_FAMILY_7445D0, BRCM_FAMILY_7260A0, BRCM_FAMILY_7278A0, BRCM_FAMILY_COUNT,} cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 77 */;
	unsigned int cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 756 */;
	enum brcm_family_type cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 750 */;
	const u32 cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 190 */[BRCM_FAMILY_COUNT][USB_CTRL_SELECTOR_COUNT];
	const struct id_to_type cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 175 */[];
	struct id_to_type {
		u32 id;
		int type;
	} cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 170 */;
	enum{USB_CTRL_SETUP_SCB1_EN_SELECTOR, USB_CTRL_SETUP_SCB2_EN_SELECTOR, USB_CTRL_SETUP_SS_EHCI64BIT_EN_SELECTOR, USB_CTRL_SETUP_STRAP_IPP_SEL_SELECTOR, USB_CTRL_SETUP_OC3_DISABLE_SELECTOR, USB_CTRL_PLL_CTL_PLL_IDDQ_PWRDN_SELECTOR, USB_CTRL_USB_PM_BDC_SOFT_RESETB_SELECTOR, USB_CTRL_USB_PM_XHC_SOFT_RESETB_SELECTOR, USB_CTRL_USB_PM_USB_PWRDN_SELECTOR, USB_CTRL_USB30_CTL1_XHC_SOFT_RESETB_SELECTOR, USB_CTRL_USB30_CTL1_USB3_IOC_SELECTOR, USB_CTRL_USB30_CTL1_USB3_IPP_SELECTOR, USB_CTRL_USB_DEVICE_CTL1_PORT_MODE_SELECTOR, USB_CTRL_USB_PM_SOFT_RESET_SELECTOR, USB_CTRL_SETUP_CC_DRD_MODE_ENABLE_SELECTOR, USB_CTRL_SETUP_STRAP_CC_DRD_MODE_ENABLE_SEL_SELECTOR, USB_CTRL_USB_PM_USB20_HC_RESETB_SELECTOR, USB_CTRL_SETUP_ENDIAN_SELECTOR, USB_CTRL_SELECTOR_COUNT,} cocci_id/* drivers/phy/broadcom/phy-brcm-usb-init.c 107 */;
}
