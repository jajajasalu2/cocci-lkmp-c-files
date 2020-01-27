cocci_test_suite() {
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/dp83869.c 426 */[];
	struct phy_driver cocci_id/* drivers/net/phy/dp83869.c 407 */[];
	struct dp83869_private *cocci_id/* drivers/net/phy/dp83869.c 344 */;
	struct device_node *cocci_id/* drivers/net/phy/dp83869.c 168 */;
	struct device *cocci_id/* drivers/net/phy/dp83869.c 167 */;
	struct phy_device *cocci_id/* drivers/net/phy/dp83869.c 116 */;
	int cocci_id/* drivers/net/phy/dp83869.c 116 */;
	struct dp83869_private {
		int tx_fifo_depth;
		int rx_fifo_depth;
		int io_impedance;
		int port_mirroring;
		bool rxctrl_strap_quirk;
		int clk_output_sel;
		int mode;
	} cocci_id/* drivers/net/phy/dp83869.c 106 */;
	enum{DP83869_PORT_MIRRORING_KEEP, DP83869_PORT_MIRRORING_EN, DP83869_PORT_MIRRORING_DIS,} cocci_id/* drivers/net/phy/dp83869.c 100 */;
}
