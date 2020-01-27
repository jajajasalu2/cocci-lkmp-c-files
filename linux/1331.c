cocci_test_suite() {
	struct extcon_dev *cocci_id/* drivers/usb/phy/phy-omap-otg.c 90 */;
	const struct omap_usb_config *cocci_id/* drivers/usb/phy/phy-omap-otg.c 88 */;
	struct platform_device *cocci_id/* drivers/usb/phy/phy-omap-otg.c 86 */;
	struct otg_device cocci_id/* drivers/usb/phy/phy-omap-otg.c 66 */;
	void *cocci_id/* drivers/usb/phy/phy-omap-otg.c 64 */;
	unsigned long cocci_id/* drivers/usb/phy/phy-omap-otg.c 64 */;
	struct notifier_block *cocci_id/* drivers/usb/phy/phy-omap-otg.c 63 */;
	int cocci_id/* drivers/usb/phy/phy-omap-otg.c 63 */;
	u32 cocci_id/* drivers/usb/phy/phy-omap-otg.c 40 */;
	struct otg_device *cocci_id/* drivers/usb/phy/phy-omap-otg.c 40 */;
	void cocci_id/* drivers/usb/phy/phy-omap-otg.c 40 */;
	struct otg_device {
		void __iomem *base;
		bool id;
		bool vbus;
		struct extcon_dev *extcon;
		struct notifier_block vbus_nb;
		struct notifier_block id_nb;
	} cocci_id/* drivers/usb/phy/phy-omap-otg.c 21 */;
	struct platform_driver cocci_id/* drivers/usb/phy/phy-omap-otg.c 140 */;
}
