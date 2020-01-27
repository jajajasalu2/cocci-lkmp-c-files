cocci_test_suite() {
	const struct tegra_xusb_padctl_soc cocci_id/* drivers/phy/tegra/xusb-tegra186.c 895 */;
	const struct tegra_xusb_padctl_ops cocci_id/* drivers/phy/tegra/xusb-tegra186.c 882 */;
	bool cocci_id/* drivers/phy/tegra/xusb-tegra186.c 861 */;
	const struct tegra_xusb_padctl_soc *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 837 */;
	const struct tegra_xusb_pad_soc *const cocci_id/* drivers/phy/tegra/xusb-tegra186.c 781 */[];
	struct tegra_xusb_usb3_pad *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 720 */;
	const struct phy_ops cocci_id/* drivers/phy/tegra/xusb-tegra186.c 707 */;
	struct phy *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 702 */;
	u32 cocci_id/* drivers/phy/tegra/xusb-tegra186.c 666 */;
	struct device *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 665 */;
	struct tegra_xusb_usb3_port *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 663 */;
	struct tegra_xusb_usb2_port *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 604 */;
	struct tegra_xusb_usb3_lane *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 545 */;
	const struct tegra_xusb_port_ops cocci_id/* drivers/phy/tegra/xusb-tegra186.c 534 */;
	struct tegra_xusb_port *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 524 */;
	const struct tegra_xusb_pad_soc cocci_id/* drivers/phy/tegra/xusb-tegra186.c 512 */;
	const struct tegra_xusb_lane_soc cocci_id/* drivers/phy/tegra/xusb-tegra186.c 506 */[];
	const char *const cocci_id/* drivers/phy/tegra/xusb-tegra186.c 502 */[];
	const struct tegra_xusb_pad_ops cocci_id/* drivers/phy/tegra/xusb-tegra186.c 497 */;
	struct tegra_xusb_usb2_pad *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 451 */;
	struct tegra186_xusb_padctl *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 450 */;
	const struct tegra_xusb_pad_soc *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 447 */;
	struct tegra_xusb_padctl *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 446 */;
	const struct tegra_xusb_lane_ops cocci_id/* drivers/phy/tegra/xusb-tegra186.c 179 */;
	void cocci_id/* drivers/phy/tegra/xusb-tegra186.c 172 */;
	int cocci_id/* drivers/phy/tegra/xusb-tegra186.c 151 */;
	struct tegra_xusb_usb2_lane *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 150 */;
	unsigned int cocci_id/* drivers/phy/tegra/xusb-tegra186.c 148 */;
	struct tegra_xusb_pad *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 147 */;
	struct device_node *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 147 */;
	struct tegra_xusb_lane *cocci_id/* drivers/phy/tegra/xusb-tegra186.c 146 */;
	struct tegra186_xusb_padctl cocci_id/* drivers/phy/tegra/xusb-tegra186.c 142 */;
	struct tegra186_xusb_padctl {
		struct tegra_xusb_padctl base;
		struct tegra_xusb_fuse_calibration calib;
		struct clk *usb2_trk_clk;
		unsigned int bias_pad_enable;
	} cocci_id/* drivers/phy/tegra/xusb-tegra186.c 129 */;
	struct tegra_xusb_fuse_calibration {
		u32 *hs_curr_level;
		u32 hs_squelch;
		u32 hs_term_range_adj;
		u32 rpd_ctrl;
	} cocci_id/* drivers/phy/tegra/xusb-tegra186.c 122 */;
}
