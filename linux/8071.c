cocci_test_suite() {
	struct ip101a_g_phy_priv {
		enum ip101gr_sel_intr32 sel_intr32;
	} cocci_id/* drivers/net/phy/icplus.c 60 */;
	enum ip101gr_sel_intr32{IP101GR_SEL_INTR32_KEEP, IP101GR_SEL_INTR32_INTR, IP101GR_SEL_INTR32_RXER,} cocci_id/* drivers/net/phy/icplus.c 54 */;
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/icplus.c 344 */[];
	struct phy_driver cocci_id/* drivers/net/phy/icplus.c 309 */[];
	u16 cocci_id/* drivers/net/phy/icplus.c 277 */;
	struct ip101a_g_phy_priv *cocci_id/* drivers/net/phy/icplus.c 233 */;
	struct device *cocci_id/* drivers/net/phy/icplus.c 202 */;
	struct phy_device *cocci_id/* drivers/net/phy/icplus.c 141 */;
	int cocci_id/* drivers/net/phy/icplus.c 141 */;
}
