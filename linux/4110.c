cocci_test_suite() {
	struct resource *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 984 */;
	struct device_node *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 983 */;
	struct phy_provider *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 982 */;
	struct platform_device *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 979 */;
	struct mvebu_comphy_priv *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 967 */;
	void cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 967 */;
	struct of_phandle_args *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 902 */;
	struct device *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 901 */;
	const struct phy_ops cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 894 */;
	struct phy *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 879 */;
	u32 cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 327 */;
	struct mvebu_comphy_lane *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 324 */;
	int cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 324 */;
	enum phy_mode cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 319 */;
	const struct mvebu_comphy_conf *cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 288 */;
	bool cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 282 */;
	struct arm_smccc_res cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 275 */;
	unsigned long cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 272 */;
	struct mvebu_comphy_lane {
		struct mvebu_comphy_priv *priv;
		unsigned id;
		enum phy_mode mode;
		int submode;
		int port;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 264 */;
	struct mvebu_comphy_priv {
		void __iomem *base;
		struct regmap *regmap;
		struct device *dev;
		struct clk *mg_domain_clk;
		struct clk *mg_core_clk;
		struct clk *axi_clk;
		unsigned long cp_phys;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 254 */;
	const struct mvebu_comphy_conf cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 207 */[];
	struct mvebu_comphy_conf {
		enum phy_mode mode;
		int submode;
		unsigned lane;
		unsigned port;
		u32 mux;
		u32 fw_mode;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 178 */;
	struct platform_driver cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 1084 */;
	const struct of_device_id cocci_id/* drivers/phy/marvell/phy-mvebu-cp110-comphy.c 1078 */[];
}
