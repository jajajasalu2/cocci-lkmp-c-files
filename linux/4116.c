cocci_test_suite() {
	unsigned int *cocci_id/* drivers/phy/cadence/cdns-dphy.c 98 */;
	struct cdns_dphy {
		struct cdns_dphy_cfg cfg;
		void __iomem *regs;
		struct clk *psm_clk;
		struct clk *pll_ref_clk;
		const struct cdns_dphy_ops *ops;
		struct phy *phy;
	} cocci_id/* drivers/phy/cadence/cdns-dphy.c 86 */;
	struct cdns_dphy_ops {
		int (*probe)(struct cdns_dphy *dphy);
		void (*remove)(struct cdns_dphy *dphy);
		void (*set_psm_div)(struct cdns_dphy *dphy, u8 div);
		void (*set_clk_lane_cfg)(struct cdns_dphy *dphy,
					 enum cdns_dphy_clk_lane_cfg cfg);
		void (*set_pll_cfg)(struct cdns_dphy *dphy,
				    const struct cdns_dphy_cfg *cfg);
		unsigned long (*get_wakeup_time_ns)(struct cdns_dphy *dphy);
	} cocci_id/* drivers/phy/cadence/cdns-dphy.c 75 */;
	struct cdns_dphy cocci_id/* drivers/phy/cadence/cdns-dphy.c 74 */;
	enum cdns_dphy_clk_lane_cfg{DPHY_CLK_CFG_LEFT_DRIVES_ALL=0, DPHY_CLK_CFG_LEFT_DRIVES_RIGHT=1, DPHY_CLK_CFG_LEFT_DRIVES_LEFT=2, DPHY_CLK_CFG_RIGHT_DRIVES_ALL=3,} cocci_id/* drivers/phy/cadence/cdns-dphy.c 67 */;
	struct cdns_dphy_cfg {
		u8 pll_ipdiv;
		u8 pll_opdiv;
		u16 pll_fbdiv;
		unsigned int nlanes;
	} cocci_id/* drivers/phy/cadence/cdns-dphy.c 60 */;
	struct platform_driver cocci_id/* drivers/phy/cadence/cdns-dphy.c 379 */;
	const struct of_device_id cocci_id/* drivers/phy/cadence/cdns-dphy.c 373 */[];
	struct resource *cocci_id/* drivers/phy/cadence/cdns-dphy.c 317 */;
	struct phy_provider *cocci_id/* drivers/phy/cadence/cdns-dphy.c 315 */;
	struct platform_device *cocci_id/* drivers/phy/cadence/cdns-dphy.c 313 */;
	const struct phy_ops cocci_id/* drivers/phy/cadence/cdns-dphy.c 306 */;
	struct cdns_dphy_cfg cocci_id/* drivers/phy/cadence/cdns-dphy.c 249 */;
	union phy_configure_opts *cocci_id/* drivers/phy/cadence/cdns-dphy.c 246 */;
	enum phy_mode cocci_id/* drivers/phy/cadence/cdns-dphy.c 235 */;
	unsigned int cocci_id/* drivers/phy/cadence/cdns-dphy.c 218 */;
	struct cdns_dphy *cocci_id/* drivers/phy/cadence/cdns-dphy.c 217 */;
	struct cdns_dphy_cfg *cocci_id/* drivers/phy/cadence/cdns-dphy.c 215 */;
	struct phy_configure_opts_mipi_dphy *cocci_id/* drivers/phy/cadence/cdns-dphy.c 214 */;
	struct phy *cocci_id/* drivers/phy/cadence/cdns-dphy.c 213 */;
	int cocci_id/* drivers/phy/cadence/cdns-dphy.c 213 */;
	const struct cdns_dphy_ops cocci_id/* drivers/phy/cadence/cdns-dphy.c 207 */;
	u8 cocci_id/* drivers/phy/cadence/cdns-dphy.c 196 */;
	u32 cocci_id/* drivers/phy/cadence/cdns-dphy.c 179 */;
	const struct cdns_dphy_cfg *cocci_id/* drivers/phy/cadence/cdns-dphy.c 177 */;
	void cocci_id/* drivers/phy/cadence/cdns-dphy.c 176 */;
	unsigned long cocci_id/* drivers/phy/cadence/cdns-dphy.c 165 */;
	enum cdns_dphy_clk_lane_cfg cocci_id/* drivers/phy/cadence/cdns-dphy.c 152 */;
	u64 cocci_id/* drivers/phy/cadence/cdns-dphy.c 101 */;
}
