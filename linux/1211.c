cocci_test_suite() {
	struct resource *cocci_id/* drivers/usb/host/ehci-mv.c 99 */;
	struct ehci_hcd *cocci_id/* drivers/usb/host/ehci-mv.c 97 */;
	struct usb_hcd *cocci_id/* drivers/usb/host/ehci-mv.c 96 */;
	struct mv_usb_platform_data *cocci_id/* drivers/usb/host/ehci-mv.c 95 */;
	struct platform_device *cocci_id/* drivers/usb/host/ehci-mv.c 93 */;
	struct ehci_hcd_mv cocci_id/* drivers/usb/host/ehci-mv.c 90 */;
	const struct ehci_driver_overrides cocci_id/* drivers/usb/host/ehci-mv.c 88 */;
	struct hc_driver __read_mostly cocci_id/* drivers/usb/host/ehci-mv.c 86 */;
	struct device *cocci_id/* drivers/usb/host/ehci-mv.c 68 */;
	int cocci_id/* drivers/usb/host/ehci-mv.c 54 */;
	struct ehci_hcd_mv *cocci_id/* drivers/usb/host/ehci-mv.c 49 */;
	void cocci_id/* drivers/usb/host/ehci-mv.c 49 */;
	void __exit cocci_id/* drivers/usb/host/ehci-mv.c 294 */;
	int __init cocci_id/* drivers/usb/host/ehci-mv.c 284 */;
	struct ehci_hcd_mv {
		int mode;
		void __iomem *base;
		void __iomem *cap_regs;
		void __iomem *op_regs;
		struct usb_phy *otg;
		struct clk *clk;
		struct phy *phy;
		int (*set_vbus)(unsigned int vbus);
	} cocci_id/* drivers/usb/host/ehci-mv.c 28 */;
	struct platform_driver cocci_id/* drivers/usb/host/ehci-mv.c 272 */;
	const struct of_device_id cocci_id/* drivers/usb/host/ehci-mv.c 267 */[];
	const struct platform_device_id cocci_id/* drivers/usb/host/ehci-mv.c 248 */[];
	struct ehci_caps *cocci_id/* drivers/usb/host/ehci-mv.c 167 */;
	void __iomem *cocci_id/* drivers/usb/host/ehci-mv.c 150 */;
	unsigned long cocci_id/* drivers/usb/host/ehci-mv.c 150 */;
	u32 cocci_id/* drivers/usb/host/ehci-mv.c 101 */;
}
