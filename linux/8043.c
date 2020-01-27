cocci_test_suite() {
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/dp83867.c 629 */[];
	struct phy_driver cocci_id/* drivers/net/phy/dp83867.c 605 */[];
	u16 cocci_id/* drivers/net/phy/dp83867.c 450 */;
	struct dp83867_private *cocci_id/* drivers/net/phy/dp83867.c 448 */;
	struct device_node *cocci_id/* drivers/net/phy/dp83867.c 347 */;
	struct device *cocci_id/* drivers/net/phy/dp83867.c 346 */;
	const u16 cocci_id/* drivers/net/phy/dp83867.c 308 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/phy/dp83867.c 220 */;
	void cocci_id/* drivers/net/phy/dp83867.c 219 */;
	u8 *cocci_id/* drivers/net/phy/dp83867.c 158 */;
	struct net_device *cocci_id/* drivers/net/phy/dp83867.c 156 */;
	struct phy_device *cocci_id/* drivers/net/phy/dp83867.c 143 */;
	int cocci_id/* drivers/net/phy/dp83867.c 143 */;
	struct dp83867_private {
		u32 rx_id_delay;
		u32 tx_id_delay;
		u32 fifo_depth;
		int io_impedance;
		int port_mirroring;
		bool rxctrl_strap_quirk;
		bool set_clk_output;
		u32 clk_output_sel;
		bool sgmii_ref_clk_en;
	} cocci_id/* drivers/net/phy/dp83867.c 131 */;
	enum{DP83867_PORT_MIRROING_KEEP, DP83867_PORT_MIRROING_EN, DP83867_PORT_MIRROING_DIS,} cocci_id/* drivers/net/phy/dp83867.c 125 */;
}
