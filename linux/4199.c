cocci_test_suite() {
	struct regmap *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 81 */;
	void __iomem *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 55 */;
	void cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 52 */;
	struct histb_combphy_priv {
		void __iomem *mmio;
		struct regmap *syscon;
		struct reset_control *por_rst;
		struct clk *ref_clk;
		struct phy *phy;
		struct histb_combphy_mode mode;
	} cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 43 */;
	struct histb_combphy_mode {
		int fixed;
		int select;
		u32 reg;
		u32 shift;
		u32 mask;
	} cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 35 */;
	struct platform_driver cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 274 */;
	const struct of_device_id cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 268 */[];
	u32 cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 198 */[3];
	struct histb_combphy_mode *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 197 */;
	struct device_node *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 196 */;
	struct device *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 194 */;
	struct phy_provider *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 193 */;
	struct platform_device *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 191 */;
	struct of_phandle_args *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 165 */;
	const struct phy_ops cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 158 */;
	u32 cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 145 */;
	struct histb_combphy_priv *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 144 */;
	struct phy *cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 142 */;
	int cocci_id/* drivers/phy/hisilicon/phy-histb-combphy.c 142 */;
}
