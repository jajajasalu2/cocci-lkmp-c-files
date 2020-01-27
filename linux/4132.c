cocci_test_suite() {
	u8 cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 80 */;
	u32 cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 79 */;
	const struct uniphier_u3ssphy_param *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 77 */;
	void cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 76 */;
	struct uniphier_u3ssphy_soc_data {
		bool is_legacy;
		int nparams;
		const struct uniphier_u3ssphy_param param[MAX_PHY_PARAMS];
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 61 */;
	struct uniphier_u3ssphy_priv {
		struct device *dev;
		void __iomem *base;
		struct clk *clk,*clk_ext,*clk_parent,*clk_parent_gio;
		struct reset_control *rst,*rst_parent,*rst_parent_gio;
		struct regulator *vbus;
		const struct uniphier_u3ssphy_soc_data *data;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 52 */;
	struct uniphier_u3ssphy_param {
		struct {
			int reg_no;
			int msb;
			int lsb;
		} field;
		u8 value;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 43 */;
	struct platform_driver cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 333 */;
	const struct of_device_id cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 312 */[];
	const struct uniphier_u3ssphy_soc_data cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 302 */;
	struct resource *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 218 */;
	struct phy_provider *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 217 */;
	struct device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 215 */;
	struct platform_device *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 213 */;
	const struct phy_ops cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 205 */;
	struct uniphier_u3ssphy_priv *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 195 */;
	struct phy *cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 193 */;
	int cocci_id/* drivers/phy/socionext/phy-uniphier-usb3ss.c 193 */;
}
