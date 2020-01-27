cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 530 */;
	const struct of_device_id cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 522 */[];
	struct phy_provider *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 446 */;
	struct device *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 445 */;
	struct resource *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 443 */;
	struct platform_device *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 441 */;
	u32 cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 367 */;
	unsigned int cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 219 */;
	void cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 217 */;
	struct cdns_dp_phy *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 136 */;
	unsigned char cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 134 */;
	struct phy *cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 132 */;
	int cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 132 */;
	const struct phy_ops cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 127 */;
	void cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 121 */(struct cdns_dp_phy *cdns_phy,
								    unsigned int offset,
								    unsigned char start_bit,
								    unsigned char num_bits,
								    unsigned int val);
	void cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 117 */(struct cdns_dp_phy *cdns_phy,
								    unsigned int lane);
	void cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 115 */(struct cdns_dp_phy *cdns_phy);
	int cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 112 */(struct phy *phy);
	struct cdns_dp_phy {
		void __iomem *base;
		void __iomem *sd_base;
		u32 num_lanes;
		u32 max_bit_rate;
		struct device *dev;
	} cocci_id/* drivers/phy/cadence/phy-cadence-dp.c 104 */;
}
