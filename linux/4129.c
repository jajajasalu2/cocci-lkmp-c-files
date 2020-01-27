cocci_test_suite() {
	const struct phy_ops cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 99 */;
	struct of_phandle_args *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 84 */;
	struct uniphier_u2phy_priv *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 70 */;
	struct phy *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 68 */;
	int cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 68 */;
	struct uniphier_u2phy_priv {
		struct regmap *regmap;
		struct phy *phy;
		struct regulator *vbus;
		const struct uniphier_u2phy_soc_data *data;
		struct uniphier_u2phy_priv *next;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 39 */;
	struct uniphier_u2phy_soc_data {
		struct uniphier_u2phy_param config0;
		struct uniphier_u2phy_param config1;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 34 */;
	struct uniphier_u2phy_param {
		u32 offset;
		u32 value;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 29 */;
	struct platform_driver cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 233 */;
	const struct of_device_id cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 220 */[];
	const struct uniphier_u2phy_soc_data cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 204 */[];
	const struct uniphier_u2phy_soc_data *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 113 */;
	struct regmap *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 112 */;
	struct phy_provider *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 111 */;
	struct device_node *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 109 */;
	struct device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 108 */;
	struct platform_device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb2.c 106 */;
}
