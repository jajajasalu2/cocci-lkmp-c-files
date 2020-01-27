cocci_test_suite() {
	enum phy_mode cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 96 */;
	u32 cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 76 */;
	unsigned int cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 76 */;
	struct a38x_comphy_lane *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 75 */;
	int cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 75 */;
	void cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 57 */;
	const u8 cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 48 */[MAX_A38X_COMPHY][MAX_A38X_PORTS];
	struct a38x_comphy {
		void __iomem *base;
		struct device *dev;
		struct a38x_comphy_lane lane[MAX_A38X_COMPHY];
	} cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 42 */;
	struct a38x_comphy_lane {
		void __iomem *base;
		struct a38x_comphy *priv;
		unsigned int n;
		int port;
	} cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 34 */;
	struct a38x_comphy cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 32 */;
	struct platform_driver cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 228 */;
	const struct of_device_id cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 222 */[];
	struct phy *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 186 */;
	void __iomem *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 171 */;
	struct resource *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 170 */;
	struct a38x_comphy *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 169 */;
	struct device_node *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 168 */;
	struct phy_provider *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 167 */;
	struct platform_device *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 165 */;
	struct of_phandle_args *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 133 */;
	struct device *cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 132 */;
	const struct phy_ops cocci_id/* drivers/phy/marvell/phy-armada38x-comphy.c 127 */;
}
