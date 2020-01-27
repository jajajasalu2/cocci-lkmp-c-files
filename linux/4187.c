cocci_test_suite() {
	struct spear1340_miphy_priv {
		enum spear1340_miphy_mode mode;
		struct regmap *misc;
		struct phy *phy;
	} cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 79 */;
	enum spear1340_miphy_mode{SATA, PCIE,} cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 74 */;
	struct platform_driver cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 277 */;
	struct phy_provider *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 245 */;
	struct device *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 243 */;
	struct platform_device *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 241 */;
	struct of_phandle_args *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 222 */;
	const struct phy_ops cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 188 */;
	const struct of_device_id cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 182 */[];
	struct spear1340_miphy_priv *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 171 */;
	struct phy *cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 169 */;
	int cocci_id/* drivers/phy/st/phy-spear1340-miphy.c 169 */;
}
