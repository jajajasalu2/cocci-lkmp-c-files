cocci_test_suite() {
	struct cdns_sierra_phy {
		struct device *dev;
		void __iomem *base;
		struct cdns_sierra_data *init_data;
		struct cdns_sierra_inst phys[SIERRA_MAX_LANES];
		struct reset_control *phy_rst;
		struct reset_control *apb_rst;
		struct clk *clk;
		int nsubnodes;
		bool autoconf;
	} cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 89 */;
	struct cdns_sierra_data {
		u32 id_value;
		u32 pcie_regs;
		u32 usb_regs;
		struct cdns_reg_pairs *pcie_vals;
		struct cdns_reg_pairs *usb_vals;
	} cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 81 */;
	struct cdns_reg_pairs {
		u16 val;
		u32 off;
	} cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 76 */;
	struct cdns_sierra_inst {
		struct phy *phy;
		u32 phy_type;
		u32 num_lanes;
		u32 mlane;
		struct reset_control *lnk_rst;
	} cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 68 */;
	struct platform_driver cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 382 */;
	const struct cdns_sierra_data cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 365 */;
	struct cdns_reg_pairs cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 353 */[];
	struct cdns_sierra_data *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 192 */;
	struct resource *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 168 */;
	const struct of_device_id *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 167 */;
	struct device *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 166 */;
	struct phy_provider *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 165 */;
	struct platform_device *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 162 */;
	const struct of_device_id cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 160 */[];
	struct device_node *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 146 */;
	struct cdns_sierra_inst *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 145 */;
	int cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 145 */;
	const struct phy_ops cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 139 */;
	u32 cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 107 */;
	struct cdns_reg_pairs *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 106 */;
	struct cdns_sierra_phy *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 104 */;
	struct phy *cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 101 */;
	void cocci_id/* drivers/phy/cadence/phy-cadence-sierra.c 101 */;
}
