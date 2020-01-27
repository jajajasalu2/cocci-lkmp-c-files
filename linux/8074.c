cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 99 */[];
	struct phy_driver cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 91 */;
	struct gmii2rgmii *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 64 */;
	struct device_node *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 63 */;
	struct device *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 62 */;
	struct mdio_device *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 60 */;
	int cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 60 */;
	u16 cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 35 */;
	struct mii_bus *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 33 */;
	struct phy_device *cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 30 */;
	struct gmii2rgmii {
		struct phy_device *phy_dev;
		struct phy_driver *phy_drv;
		struct phy_driver conv_phy_drv;
		struct mdio_device *mdio;
	} cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 23 */;
	struct mdio_driver cocci_id/* drivers/net/phy/xilinx_gmii2rgmii.c 105 */;
}
