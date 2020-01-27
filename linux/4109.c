cocci_test_suite() {
	void __iomem *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 84 */;
	void cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 65 */;
	struct phy_berlin_priv {
		void __iomem *base;
		spinlock_t lock;
		struct clk *clk;
		struct phy_berlin_desc **phys;
		unsigned nphys;
		u32 phy_base;
	} cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 56 */;
	struct phy_berlin_desc {
		struct phy *phy;
		u32 power_bit;
		unsigned index;
	} cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 50 */;
	struct platform_driver cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 286 */;
	const struct of_device_id cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 279 */[];
	struct resource *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 194 */;
	struct phy_provider *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 192 */;
	struct device_node *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 190 */;
	struct platform_device *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 187 */;
	u32 cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 182 */[];
	const struct phy_ops cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 176 */;
	int cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 160 */;
	struct phy_berlin_priv *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 159 */;
	struct of_phandle_args *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 157 */;
	struct phy *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 156 */;
	struct device *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 156 */;
	u32 cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 137 */;
	struct phy_berlin_desc *cocci_id/* drivers/phy/marvell/phy-berlin-sata.c 135 */;
}
