cocci_test_suite() {
	u32 cocci_id/* drivers/phy/ti/phy-gmii-sel.c 61 */;
	enum phy_mode cocci_id/* drivers/phy/ti/phy-gmii-sel.c 54 */;
	struct phy *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 54 */;
	struct phy_gmii_sel_priv {
		struct device *dev;
		const struct phy_gmii_sel_soc_data *soc_data;
		struct regmap *regmap;
		struct phy_provider *phy_provider;
		struct phy_gmii_sel_phy_priv *if_phys;
	} cocci_id/* drivers/phy/ti/phy-gmii-sel.c 46 */;
	struct phy_gmii_sel_soc_data {
		u32 num_ports;
		u32 features;
		const struct reg_field *regfields[PHY_GMII_SEL_LAST];
	} cocci_id/* drivers/phy/ti/phy-gmii-sel.c 40 */;
	struct platform_driver cocci_id/* drivers/phy/ti/phy-gmii-sel.c 338 */;
	struct phy_gmii_sel_phy_priv {
		struct phy_gmii_sel_priv *priv;
		u32 id;
		struct phy *if_phy;
		int rmii_clock_external;
		int phy_if_mode;
		struct regmap_field *fields[PHY_GMII_SEL_LAST];
	} cocci_id/* drivers/phy/ti/phy-gmii-sel.c 31 */;
	const struct of_device_id *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 298 */;
	struct device_node *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 297 */;
	struct platform_device *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 294 */;
	struct regmap_field *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 243 */;
	const struct reg_field *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 242 */;
	enum{PHY_GMII_SEL_PORT_MODE, PHY_GMII_SEL_RGMII_ID_MODE, PHY_GMII_SEL_RMII_IO_CLK_EN, PHY_GMII_SEL_LAST,} cocci_id/* drivers/phy/ti/phy-gmii-sel.c 24 */;
	struct phy_gmii_sel_phy_priv *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 230 */;
	struct device *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 229 */;
	const struct phy_gmii_sel_soc_data *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 228 */;
	struct phy_gmii_sel_priv *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 226 */;
	int cocci_id/* drivers/phy/ti/phy-gmii-sel.c 226 */;
	struct of_phandle_args *cocci_id/* drivers/phy/ti/phy-gmii-sel.c 200 */;
	const struct phy_ops cocci_id/* drivers/phy/ti/phy-gmii-sel.c 194 */;
	const struct of_device_id cocci_id/* drivers/phy/ti/phy-gmii-sel.c 173 */[];
	const struct phy_gmii_sel_soc_data cocci_id/* drivers/phy/ti/phy-gmii-sel.c 138 */;
	const struct reg_field cocci_id/* drivers/phy/ti/phy-gmii-sel.c 124 */[][PHY_GMII_SEL_LAST];
}
