cocci_test_suite() {
	unsigned int cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 84 */;
	struct dm816x_usb_phy *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 83 */;
	struct phy *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 81 */;
	int cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 81 */;
	struct usb_gadget *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 72 */;
	struct usb_bus *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 62 */;
	struct dm816x_usb_phy {
		struct regmap *syscon;
		struct device *dev;
		unsigned int instance;
		struct clk *refclk;
		struct usb_phy phy;
		unsigned int usb_ctrl;
		unsigned int usbphy_ctrl;
	} cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 52 */;
	struct platform_driver cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 272 */;
	const struct of_device_id *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 191 */;
	struct usb_otg *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 190 */;
	struct phy_provider *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 189 */;
	struct resource *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 187 */;
	struct platform_device *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 184 */;
	const struct of_device_id cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 175 */[];
	struct device *cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 139 */;
	int __maybe_unused cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 139 */;
	const struct phy_ops cocci_id/* drivers/phy/ti/phy-dm816x-usb.c 116 */;
}
