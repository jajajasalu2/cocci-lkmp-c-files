cocci_test_suite() {
	enum spear1310_miphy_mode{SATA, PCIE,} cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 95 */;
	struct platform_driver cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 245 */;
	struct phy_provider *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 208 */;
	struct device *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 206 */;
	struct platform_device *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 204 */;
	struct of_phandle_args *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 185 */;
	const struct phy_ops cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 178 */;
	const struct of_device_id cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 172 */[];
	struct spear1310_miphy_priv *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 163 */;
	struct phy *cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 161 */;
	int cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 161 */;
	u32 cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 113 */;
	struct spear1310_miphy_priv {
		u32 id;
		enum spear1310_miphy_mode mode;
		struct regmap *misc;
		struct phy *phy;
	} cocci_id/* drivers/phy/st/phy-spear1310-miphy.c 100 */;
}
