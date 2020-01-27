cocci_test_suite() {
	u32 cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 92 */;
	enum phy_mode cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 89 */;
	const struct phy_ops cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 56 */;
	struct da8xx_usb_phy *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 47 */;
	struct phy *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 45 */;
	int cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 45 */;
	struct platform_driver cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 232 */;
	const struct of_device_id cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 226 */[];
	struct da8xx_usb_phy {
		struct phy_provider *phy_provider;
		struct phy *usb11_phy;
		struct phy *usb20_phy;
		struct clk *usb11_clk;
		struct clk *usb20_clk;
		struct regmap *regmap;
	} cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 21 */;
	struct device_node *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 143 */;
	struct da8xx_usb_phy_platform_data *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 142 */;
	struct platform_device *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 139 */;
	struct of_phandle_args *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 122 */;
	struct device *cocci_id/* drivers/phy/ti/phy-da8xx-usb.c 121 */;
}
