cocci_test_suite() {
	struct of_phandle_args *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 86 */;
	struct device *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 85 */;
	struct rockchip_pcie_phy cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 81 */;
	struct rockchip_pcie_phy {
		struct rockchip_pcie_data *phy_data;
		struct regmap *reg_base;
		struct phy_pcie_instance {
			struct phy *phy;
			u32 index;
		} phys[PHY_MAX_LANE_NUM];
		struct mutex pcie_mutex;
		struct reset_control *phy_rst;
		struct clk *clk_pciephy_ref;
		int pwr_cnt;
		int init_cnt;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 65 */;
	struct rockchip_pcie_data {
		unsigned int pcie_conf;
		unsigned int pcie_status;
		unsigned int pcie_laneoff;
	} cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 59 */;
	struct platform_driver cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 429 */;
	struct rockchip_pcie_data *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 386 */;
	const struct of_device_id *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 368 */;
	struct regmap *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 367 */;
	struct phy_provider *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 366 */;
	struct platform_device *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 362 */;
	const struct of_device_id cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 352 */[];
	const struct rockchip_pcie_data cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 346 */;
	const struct phy_ops cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 338 */;
	struct phy_pcie_instance *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 323 */;
	struct phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 321 */;
	int cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 321 */;
	unsigned long cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 181 */;
	u32 cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 122 */;
	struct rockchip_pcie_phy *cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 122 */;
	void cocci_id/* drivers/phy/rockchip/phy-rockchip-pcie.c 100 */;
}
