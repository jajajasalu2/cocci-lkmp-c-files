cocci_test_suite() {
	struct phy *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 93 */;
	const struct of_device_id cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 68 */[];
	const struct ltq_rcu_usb2_bits cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 54 */;
	struct ltq_rcu_usb2_priv {
		struct regmap *regmap;
		unsigned int phy_reg_offset;
		unsigned int ana_cfg1_reg_offset;
		const struct ltq_rcu_usb2_bits *reg_bits;
		struct device *dev;
		struct phy *phy;
		struct clk *phy_gate_clk;
		struct reset_control *ctrl_reset;
		struct reset_control *phy_reset;
	} cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 35 */;
	struct ltq_rcu_usb2_bits {
		u8 hostmode;
		u8 slave_endianness;
		u8 host_endianness;
		bool have_ana_cfg;
	} cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 28 */;
	struct platform_driver cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 237 */;
	struct phy_provider *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 203 */;
	const __be32 *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 155 */;
	struct device *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 154 */;
	struct platform_device *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 152 */;
	struct ltq_rcu_usb2_priv *cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 151 */;
	int cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 151 */;
	struct phy_ops cocci_id/* drivers/phy/lantiq/phy-lantiq-rcu-usb2.c 144 */;
}
