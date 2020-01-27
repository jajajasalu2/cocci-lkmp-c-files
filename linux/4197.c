cocci_test_suite() {
	u32 cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 94 */;
	struct ralink_usb_phy *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 71 */;
	void cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 71 */;
	struct ralink_usb_phy {
		struct reset_control *rstdev;
		struct reset_control *rsthost;
		u32 clk;
		struct phy *phy;
		void __iomem *base;
		struct regmap *sysctl;
	} cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 52 */;
	struct platform_driver cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 229 */;
	uintptr_t cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 186 */;
	const struct of_device_id *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 175 */;
	struct phy_provider *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 174 */;
	struct resource *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 173 */;
	struct device *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 172 */;
	struct platform_device *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 170 */;
	void *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 154 */;
	const struct of_device_id cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 151 */[];
	struct phy_ops cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 145 */;
	struct phy *cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 130 */;
	int cocci_id/* drivers/phy/ralink/phy-ralink-usb.c 130 */;
}
