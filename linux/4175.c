cocci_test_suite() {
	u32 cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 83 */;
	unsigned long cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 82 */;
	struct rcar_gen2_phy_driver *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 81 */;
	struct rcar_gen2_phy_data {
		const struct phy_ops *gen2_phy_ops;
		const u32 *select_value[PHYS_PER_CHANNEL];
		const u32 num_channels;
	} cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 71 */;
	struct rcar_gen2_phy_driver {
		void __iomem *base;
		struct clk *clk;
		spinlock_t lock;
		int num_channels;
		struct rcar_gen2_channel *channels;
	} cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 63 */;
	struct rcar_gen2_channel {
		struct device_node *of_node;
		struct rcar_gen2_phy_driver *drv;
		struct rcar_gen2_phy phys[PHYS_PER_CHANNEL];
		int selected_phy;
		u32 select_mask;
	} cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 55 */;
	struct rcar_gen2_phy {
		struct phy *phy;
		struct rcar_gen2_channel *channel;
		int number;
		u32 select_value;
	} cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 48 */;
	struct platform_driver cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 433 */;
	struct rcar_gen2_channel cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 380 */;
	const struct rcar_gen2_phy_data *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 345 */;
	struct clk *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 344 */;
	struct resource *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 342 */;
	struct device_node *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 341 */;
	struct phy_provider *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 340 */;
	struct device *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 338 */;
	struct platform_device *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 336 */;
	const u32 cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 331 */[];
	struct of_phandle_args *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 310 */;
	const struct of_device_id cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 284 */[];
	const struct rcar_gen2_phy_data cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 272 */;
	const u32 cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 263 */[][PHYS_PER_CHANNEL];
	const struct phy_ops cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 247 */;
	void __iomem *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 165 */;
	struct rcar_gen2_channel *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 108 */;
	struct rcar_gen2_phy *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 107 */;
	struct phy *cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 105 */;
	int cocci_id/* drivers/phy/renesas/phy-rcar-gen2.c 105 */;
}
