cocci_test_suite() {
	struct mdio_device_id __maybe_unused cocci_id/* drivers/net/phy/at803x.c 767 */[];
	struct phy_driver cocci_id/* drivers/net/phy/at803x.c 707 */[];
	struct at803x_context cocci_id/* drivers/net/phy/at803x.c 604 */;
	struct at803x_priv *cocci_id/* drivers/net/phy/at803x.c 512 */;
	struct phy_device *cocci_id/* drivers/net/phy/at803x.c 510 */;
	int cocci_id/* drivers/net/phy/at803x.c 510 */;
	unsigned int cocci_id/* drivers/net/phy/at803x.c 384 */;
	struct device_node *cocci_id/* drivers/net/phy/at803x.c 382 */;
	bool cocci_id/* drivers/net/phy/at803x.c 374 */;
	struct regulator_config cocci_id/* drivers/net/phy/at803x.c 354 */;
	struct device *cocci_id/* drivers/net/phy/at803x.c 353 */;
	const struct regulator_desc cocci_id/* drivers/net/phy/at803x.c 340 */;
	struct regulator_ops cocci_id/* drivers/net/phy/at803x.c 337 */;
	const unsigned int cocci_id/* drivers/net/phy/at803x.c 322 */[];
	struct regulator_dev *cocci_id/* drivers/net/phy/at803x.c 304 */;
	u32 cocci_id/* drivers/net/phy/at803x.c 258 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/phy/at803x.c 256 */;
	const u8 *cocci_id/* drivers/net/phy/at803x.c 215 */;
	struct net_device *cocci_id/* drivers/net/phy/at803x.c 214 */;
	const struct at803x_context *cocci_id/* drivers/net/phy/at803x.c 201 */;
	void cocci_id/* drivers/net/phy/at803x.c 200 */;
	struct at803x_context *cocci_id/* drivers/net/phy/at803x.c 189 */;
	u16 cocci_id/* drivers/net/phy/at803x.c 146 */;
	struct at803x_context {
		u16 bmcr;
		u16 advertise;
		u16 control1000;
		u16 int_enable;
		u16 smart_speed;
		u16 led_control;
	} cocci_id/* drivers/net/phy/at803x.c 126 */;
	struct at803x_priv {
		int flags;
#define AT803X_KEEP_PLL_ENABLED BIT(0)
			u16 clk_25m_reg;
		u16 clk_25m_mask;
		struct regulator_dev *vddio_rdev;
		struct regulator_dev *vddh_rdev;
		struct regulator *vddio;
	} cocci_id/* drivers/net/phy/at803x.c 116 */;
}
