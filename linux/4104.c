cocci_test_suite() {
	const struct mvebu_a3700_comphy_conf cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 81 */[];
	struct mvebu_a3700_comphy_conf {
		unsigned int lane;
		enum phy_mode mode;
		int submode;
		unsigned int port;
		u32 fw_mode;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 58 */;
	struct platform_driver cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 318 */;
	const struct of_device_id cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 312 */[];
	struct device_node *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 266 */;
	struct phy_provider *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 265 */;
	struct platform_device *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 263 */;
	struct of_phandle_args *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 245 */;
	struct device *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 244 */;
	const struct phy_ops cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 237 */;
	struct mvebu_a3700_comphy_lane *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 232 */;
	struct phy *cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 230 */;
	u32 cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 171 */;
	enum phy_mode cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 122 */;
	int cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 121 */;
	struct arm_smccc_res cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 114 */;
	unsigned long cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 111 */;
	struct mvebu_a3700_comphy_lane {
		struct device *dev;
		unsigned int id;
		enum phy_mode mode;
		int submode;
		int port;
	} cocci_id/* drivers/phy/marvell/phy-mvebu-a3700-comphy.c 103 */;
}
