cocci_test_suite() {
	struct sun6i_dphy {
		struct clk *bus_clk;
		struct clk *mod_clk;
		struct regmap *regs;
		struct reset_control *reset;
		struct phy *phy;
		struct phy_configure_opts_mipi_dphy config;
	} cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 87 */;
	struct platform_driver cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 307 */;
	const struct of_device_id cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 301 */[];
	void __iomem *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 257 */;
	struct resource *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 256 */;
	struct phy_provider *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 254 */;
	struct platform_device *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 252 */;
	struct regmap_config cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 244 */;
	struct phy_ops cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 236 */;
	u8 cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 125 */;
	struct sun6i_dphy *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 110 */;
	union phy_configure_opts *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 108 */;
	struct phy *cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 108 */;
	int cocci_id/* drivers/phy/allwinner/phy-sun6i-mipi-dphy.c 108 */;
}
