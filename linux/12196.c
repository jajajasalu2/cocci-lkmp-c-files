cocci_test_suite() {
	struct tegra_dc *cocci_id/* drivers/gpu/drm/tegra/dsi.c 951 */;
	struct drm_crtc_state *cocci_id/* drivers/gpu/drm/tegra/dsi.c 946 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/tegra/dsi.c 945 */;
	int cocci_id/* drivers/gpu/drm/tegra/dsi.c 944 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/tegra/dsi.c 91 */;
	struct tegra_dsi cocci_id/* drivers/gpu/drm/tegra/dsi.c 88 */;
	struct host1x_client *cocci_id/* drivers/gpu/drm/tegra/dsi.c 86 */;
	struct tegra_dsi *cocci_id/* drivers/gpu/drm/tegra/dsi.c 85 */;
	const struct drm_encoder_funcs cocci_id/* drivers/gpu/drm/tegra/dsi.c 827 */;
	const struct drm_connector_helper_funcs cocci_id/* drivers/gpu/drm/tegra/dsi.c 822 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/tegra/dsi.c 817 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/tegra/dsi.c 815 */;
	const struct drm_connector_funcs cocci_id/* drivers/gpu/drm/tegra/dsi.c 804 */;
	struct drm_connector *cocci_id/* drivers/gpu/drm/tegra/dsi.c 789 */;
	struct drm_connector_state *cocci_id/* drivers/gpu/drm/tegra/dsi.c 788 */;
	unsigned long cocci_id/* drivers/gpu/drm/tegra/dsi.c 599 */;
	u16 cocci_id/* drivers/gpu/drm/tegra/dsi.c 576 */;
	struct tegra_dsi {
		struct host1x_client client;
		struct tegra_output output;
		struct device *dev;
		void __iomem *regs;
		struct reset_control *rst;
		struct clk *clk_parent;
		struct clk *clk_lp;
		struct clk *clk;
		struct drm_info_list *debugfs_files;
		unsigned long flags;
		enum mipi_dsi_pixel_format format;
		unsigned int lanes;
		struct tegra_mipi_device *mipi;
		struct mipi_dsi_host host;
		struct regulator *vdd;
		unsigned int video_fifo_depth;
		unsigned int host_fifo_depth;
		struct tegra_dsi *master;
		struct tegra_dsi *slave;
	} cocci_id/* drivers/gpu/drm/tegra/dsi.c 54 */;
	struct tegra_dsi_state cocci_id/* drivers/gpu/drm/tegra/dsi.c 51 */;
	u32 cocci_id/* drivers/gpu/drm/tegra/dsi.c 492 */;
	const u32 *cocci_id/* drivers/gpu/drm/tegra/dsi.c 491 */;
	struct tegra_dsi_state *cocci_id/* drivers/gpu/drm/tegra/dsi.c 490 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/tegra/dsi.c 487 */;
	unsigned int cocci_id/* drivers/gpu/drm/tegra/dsi.c 486 */;
	void cocci_id/* drivers/gpu/drm/tegra/dsi.c 486 */;
	enum tegra_dsi_format *cocci_id/* drivers/gpu/drm/tegra/dsi.c 425 */;
	enum mipi_dsi_pixel_format cocci_id/* drivers/gpu/drm/tegra/dsi.c 424 */;
	unsigned int *cocci_id/* drivers/gpu/drm/tegra/dsi.c 398 */;
	const struct mipi_dphy_timing *cocci_id/* drivers/gpu/drm/tegra/dsi.c 367 */;
	const u32 cocci_id/* drivers/gpu/drm/tegra/dsi.c 350 */[NUM_PKT_SEQ];
	struct tegra_dsi_state {
		struct drm_connector_state base;
		struct mipi_dphy_timing timing;
		unsigned long period;
		unsigned int vrefresh;
		unsigned int lanes;
		unsigned long pclk;
		unsigned long bclk;
		enum tegra_dsi_format format;
		unsigned int mul;
		unsigned int div;
	} cocci_id/* drivers/gpu/drm/tegra/dsi.c 32 */;
	struct tegra_output *cocci_id/* drivers/gpu/drm/tegra/dsi.c 262 */;
	struct dentry *cocci_id/* drivers/gpu/drm/tegra/dsi.c 235 */;
	struct drm_minor *cocci_id/* drivers/gpu/drm/tegra/dsi.c 234 */;
	struct drm_info_list cocci_id/* drivers/gpu/drm/tegra/dsi.c 226 */[];
	struct drm_crtc *cocci_id/* drivers/gpu/drm/tegra/dsi.c 202 */;
	struct drm_info_node *cocci_id/* drivers/gpu/drm/tegra/dsi.c 200 */;
	struct seq_file *cocci_id/* drivers/gpu/drm/tegra/dsi.c 198 */;
	void *cocci_id/* drivers/gpu/drm/tegra/dsi.c 198 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/tegra/dsi.c 1681 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/tegra/dsi.c 1672 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/tegra/dsi.c 1668 */;
	struct device *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1623 */;
	struct resource *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1470 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1453 */;
	struct device_node *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1449 */;
	const struct mipi_dsi_host_ops cocci_id/* drivers/gpu/drm/tegra/dsi.c 1441 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1383 */;
	struct clk *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1367 */;
	size_t cocci_id/* drivers/gpu/drm/tegra/dsi.c 1243 */;
	const u8 *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1242 */;
	struct mipi_dsi_packet cocci_id/* drivers/gpu/drm/tegra/dsi.c 1241 */;
	const struct debugfs_reg32 cocci_id/* drivers/gpu/drm/tegra/dsi.c 124 */[];
	const struct mipi_dsi_msg *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1238 */;
	ssize_t cocci_id/* drivers/gpu/drm/tegra/dsi.c 1237 */;
	const void *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1221 */;
	u8 cocci_id/* drivers/gpu/drm/tegra/dsi.c 1208 */;
	u8 *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1122 */;
	const char *constcocci_id/* drivers/gpu/drm/tegra/dsi.c 1099 */[16];
	const struct host1x_client_ops cocci_id/* drivers/gpu/drm/tegra/dsi.c 1078 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/tegra/dsi.c 1033 */;
	const struct drm_encoder_helper_funcs cocci_id/* drivers/gpu/drm/tegra/dsi.c 1025 */;
}
