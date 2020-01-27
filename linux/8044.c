cocci_test_suite() {
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/adin.c 773 */[];
	struct phy_driver cocci_id/* drivers/net/phy/adin.c 728 */[];
	u64 *cocci_id/* drivers/net/phy/adin.c 701 */;
	struct ethtool_stats *cocci_id/* drivers/net/phy/adin.c 701 */;
	void cocci_id/* drivers/net/phy/adin.c 700 */;
	struct adin_priv *cocci_id/* drivers/net/phy/adin.c 680 */;
	struct adin_hw_stat *cocci_id/* drivers/net/phy/adin.c 679 */;
	u64 cocci_id/* drivers/net/phy/adin.c 677 */;
	u32 *cocci_id/* drivers/net/phy/adin.c 654 */;
	bool cocci_id/* drivers/net/phy/adin.c 519 */;
	struct mii_bus *cocci_id/* drivers/net/phy/adin.c 480 */;
	struct adin_clause45_mmd_map *cocci_id/* drivers/net/phy/adin.c 459 */;
	u16 cocci_id/* drivers/net/phy/adin.c 457 */;
	struct phy_device *cocci_id/* drivers/net/phy/adin.c 456 */;
	int cocci_id/* drivers/net/phy/adin.c 456 */;
	const u16 *cocci_id/* drivers/net/phy/adin.c 404 */;
	const u8 *cocci_id/* drivers/net/phy/adin.c 402 */;
	const void *cocci_id/* drivers/net/phy/adin.c 398 */;
	struct ethtool_tunable *cocci_id/* drivers/net/phy/adin.c 385 */;
	void *cocci_id/* drivers/net/phy/adin.c 385 */;
	u16 *cocci_id/* drivers/net/phy/adin.c 336 */;
	u8 cocci_id/* drivers/net/phy/adin.c 311 */;
	u8 *cocci_id/* drivers/net/phy/adin.c 291 */;
	u32 cocci_id/* drivers/net/phy/adin.c 220 */;
	struct device *cocci_id/* drivers/net/phy/adin.c 200 */;
	const struct adin_cfg_reg_map *cocci_id/* drivers/net/phy/adin.c 197 */;
	const char *cocci_id/* drivers/net/phy/adin.c 196 */;
	size_t cocci_id/* drivers/net/phy/adin.c 185 */;
	struct adin_priv {
		u64 stats[ARRAY_SIZE(adin_hw_stats)];
	} cocci_id/* drivers/net/phy/adin.c 179 */;
	struct adin_hw_stat cocci_id/* drivers/net/phy/adin.c 162 */[];
	struct adin_hw_stat {
		const char *string;
		u16 reg1;
		u16 reg2;
	} cocci_id/* drivers/net/phy/adin.c 156 */;
	struct adin_clause45_mmd_map cocci_id/* drivers/net/phy/adin.c 148 */[];
	struct adin_clause45_mmd_map {
		int devad;
		u16 cl45_regnum;
		u16 adin_regnum;
	} cocci_id/* drivers/net/phy/adin.c 142 */;
	const struct adin_cfg_reg_map cocci_id/* drivers/net/phy/adin.c 117 */[];
	struct adin_cfg_reg_map {
		int cfg;
		int reg;
	} cocci_id/* drivers/net/phy/adin.c 112 */;
}
