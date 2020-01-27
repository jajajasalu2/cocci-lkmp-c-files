cocci_test_suite() {
	struct phy_driver cocci_id/* drivers/net/phy/micrel.c 980 */[];
	bool cocci_id/* drivers/net/phy/micrel.c 954 */;
	unsigned long cocci_id/* drivers/net/phy/micrel.c 953 */;
	struct kszphy_priv {
		const struct kszphy_type *type;
		int led_mode;
		bool rmii_ref_clk_sel;
		bool rmii_ref_clk_sel_val;
		u64 stats[ARRAY_SIZE(kszphy_hw_stats)];
	} cocci_id/* drivers/net/phy/micrel.c 93 */;
	struct clk *cocci_id/* drivers/net/phy/micrel.c 924 */;
	u64 *cocci_id/* drivers/net/phy/micrel.c 879 */;
	struct ethtool_stats *cocci_id/* drivers/net/phy/micrel.c 879 */;
	void cocci_id/* drivers/net/phy/micrel.c 878 */;
	struct kszphy_hw_stat cocci_id/* drivers/net/phy/micrel.c 861 */;
	u64 cocci_id/* drivers/net/phy/micrel.c 859 */;
	struct kszphy_type {
		u32 led_mode_reg;
		u16 interrupt_level_mask;
		bool has_broadcast_disable;
		bool has_nand_tree_disable;
		bool has_rmii_ref_clk_sel;
	} cocci_id/* drivers/net/phy/micrel.c 85 */;
	u8 *cocci_id/* drivers/net/phy/micrel.c 849 */;
	struct kszphy_hw_stat cocci_id/* drivers/net/phy/micrel.c 80 */[];
	struct kszphy_hw_stat {
		const char *string;
		u8 reg;
		u8 bits;
	} cocci_id/* drivers/net/phy/micrel.c 74 */;
	char *cocci_id/* drivers/net/phy/micrel.c 712 */[4];
	char *cocci_id/* drivers/net/phy/micrel.c 711 */[2];
	struct device_node *cocci_id/* drivers/net/phy/micrel.c 710 */;
	char *cocci_id/* drivers/net/phy/micrel.c 658 */[];
	const char *cocci_id/* drivers/net/phy/micrel.c 572 */[4];
	const char *cocci_id/* drivers/net/phy/micrel.c 571 */[2];
	int cocci_id/* drivers/net/phy/micrel.c 505 */[4];
	u8 cocci_id/* drivers/net/phy/micrel.c 503 */;
	const char *cocci_id/* drivers/net/phy/micrel.c 503 */[];
	size_t cocci_id/* drivers/net/phy/micrel.c 502 */;
	const struct device_node *cocci_id/* drivers/net/phy/micrel.c 452 */;
	const struct device *cocci_id/* drivers/net/phy/micrel.c 451 */;
	const char *cocci_id/* drivers/net/phy/micrel.c 404 */;
	u16 cocci_id/* drivers/net/phy/micrel.c 403 */;
	const u32 cocci_id/* drivers/net/phy/micrel.c 345 */;
	struct phy_device *cocci_id/* drivers/net/phy/micrel.c 333 */;
	int cocci_id/* drivers/net/phy/micrel.c 333 */;
	const struct kszphy_type *cocci_id/* drivers/net/phy/micrel.c 293 */;
	struct kszphy_priv *cocci_id/* drivers/net/phy/micrel.c 292 */;
	u32 cocci_id/* drivers/net/phy/micrel.c 140 */;
	const struct kszphy_type cocci_id/* drivers/net/phy/micrel.c 124 */;
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/micrel.c 1201 */[];
}
