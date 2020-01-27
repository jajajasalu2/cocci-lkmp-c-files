cocci_test_suite() {
	struct sun9i_usb_phy *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 98 */;
	struct phy *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 96 */;
	int cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 96 */;
	u32 cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 46 */;
	void cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 44 */;
	struct sun9i_usb_phy {
		struct phy *phy;
		void __iomem *pmu;
		struct reset_control *reset;
		struct clk *clk;
		struct clk *hsic_clk;
		enum usb_phy_interface type;
	} cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 35 */;
	struct platform_driver cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 182 */;
	const struct of_device_id cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 176 */[];
	struct resource *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 120 */;
	struct phy_provider *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 119 */;
	struct device_node *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 118 */;
	struct device *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 117 */;
	struct platform_device *cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 114 */;
	const struct phy_ops cocci_id/* drivers/phy/allwinner/phy-sun9i-usb.c 108 */;
}
