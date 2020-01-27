cocci_test_suite() {
	u16 cocci_id/* drivers/net/phy/mscc.c 989 */;
	const void *cocci_id/* drivers/net/phy/mscc.c 885 */;
	struct ethtool_tunable *cocci_id/* drivers/net/phy/mscc.c 873 */;
	void *cocci_id/* drivers/net/phy/mscc.c 873 */;
	phy_interface_t cocci_id/* drivers/net/phy/mscc.c 818 */;
	char cocci_id/* drivers/net/phy/mscc.c 786 */[28];
	u32 *cocci_id/* drivers/net/phy/mscc.c 783 */;
	struct device_node *cocci_id/* drivers/net/phy/mscc.c 751 */;
	char *cocci_id/* drivers/net/phy/mscc.c 746 */;
	u16 cocci_id/* drivers/net/phy/mscc.c 691 */[3];
	struct ethtool_wolinfo *cocci_id/* drivers/net/phy/mscc.c 686 */;
	u8 *cocci_id/* drivers/net/phy/mscc.c 570 */;
	u64 *cocci_id/* drivers/net/phy/mscc.c 493 */;
	struct ethtool_stats *cocci_id/* drivers/net/phy/mscc.c 493 */;
	const struct vsc8531_edge_rate_table cocci_id/* drivers/net/phy/mscc.c 435 */[];
	struct vsc8531_edge_rate_table {
		u32 vddmac;
		u32 slowdown[8];
	} cocci_id/* drivers/net/phy/mscc.c 430 */;
	struct vsc8531_private {
		int rate_magic;
		u16 supp_led_modes;
		u32 leds_mode[MAX_LEDS];
		u8 nleds;
		const struct vsc85xx_hw_stat *hw_stats;
		u64 *stats;
		int nstats;
		bool pkg_init;
		unsigned int base_addr;
	} cocci_id/* drivers/net/phy/mscc.c 414 */;
	const struct vsc85xx_hw_stat cocci_id/* drivers/net/phy/mscc.c 365 */[];
	struct vsc85xx_hw_stat {
		const char *string;
		u8 reg;
		u16 page;
		u16 mask;
	} cocci_id/* drivers/net/phy/mscc.c 329 */;
	struct reg_val {
		u16 reg;
		u32 val;
	} cocci_id/* drivers/net/phy/mscc.c 324 */;
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/mscc.c 2678 */[];
	struct phy_driver cocci_id/* drivers/net/phy/mscc.c 2349 */[];
	u32 cocci_id/* drivers/net/phy/mscc.c 2322 */[2];
	u64 cocci_id/* drivers/net/phy/mscc.c 2256 */;
	u32 cocci_id/* drivers/net/phy/mscc.c 2241 */[4];
	enum rgmii_rx_clock_delay{RGMII_RX_CLK_DELAY_0_2_NS=0, RGMII_RX_CLK_DELAY_0_8_NS=1, RGMII_RX_CLK_DELAY_1_1_NS=2, RGMII_RX_CLK_DELAY_1_7_NS=3, RGMII_RX_CLK_DELAY_2_0_NS=4, RGMII_RX_CLK_DELAY_2_3_NS=5, RGMII_RX_CLK_DELAY_2_6_NS=6, RGMII_RX_CLK_DELAY_3_4_NS=7,} cocci_id/* drivers/net/phy/mscc.c 21 */;
	unsigned long cocci_id/* drivers/net/phy/mscc.c 1971 */;
	u8 cocci_id/* drivers/net/phy/mscc.c 1968 */;
	u32 cocci_id/* drivers/net/phy/mscc.c 1968 */;
	struct phy_device *cocci_id/* drivers/net/phy/mscc.c 1968 */;
	int cocci_id/* drivers/net/phy/mscc.c 1968 */;
	unsigned int cocci_id/* drivers/net/phy/mscc.c 1837 */;
	const struct reg_val cocci_id/* drivers/net/phy/mscc.c 1815 */[];
	struct phy_device cocci_id/* drivers/net/phy/mscc.c 1609 */;
	struct mdio_device **cocci_id/* drivers/net/phy/mscc.c 1592 */;
	bool cocci_id/* drivers/net/phy/mscc.c 1303 */;
	const struct firmware *cocci_id/* drivers/net/phy/mscc.c 1300 */;
	struct device *cocci_id/* drivers/net/phy/mscc.c 1299 */;
	u16 *cocci_id/* drivers/net/phy/mscc.c 1129 */;
	void cocci_id/* drivers/net/phy/mscc.c 1015 */;
	struct vsc8531_private *cocci_id/* drivers/net/phy/mscc.c 1004 */;
}
