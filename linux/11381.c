cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 985 */;
	struct reset_control *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 983 */;
	struct device *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 982 */;
	const struct dw_mipi_dsi_plat_data *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 980 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 979 */;
	struct dw_mipi_dsi *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 978 */;
	const struct drm_bridge_funcs cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 943 */;
	enum drm_mode_status cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 913 */;
	const struct dw_mipi_dsi_phy_ops *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 902 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 889 */;
	void *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 849 */;
	unsigned int cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 831 */;
	unsigned long cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 543 */;
	const struct mipi_dsi_host_ops cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 508 */;
	struct mipi_dsi_packet cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 474 */;
	const struct mipi_dsi_msg *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 471 */;
	ssize_t cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 470 */;
	u8 *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 440 */;
	__le32 cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 405 */;
	const u8 *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 403 */;
	const struct mipi_dsi_packet *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 401 */;
	struct drm_panel *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 299 */;
	struct mipi_dsi_device *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 294 */;
	struct mipi_dsi_host *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 293 */;
	u32 cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 288 */;
	struct dw_mipi_dsi cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 280 */;
	struct drm_bridge *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 278 */;
	bool cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 255 */;
	struct dw_mipi_dsi {
		struct drm_bridge bridge;
		struct mipi_dsi_host dsi_host;
		struct drm_bridge *panel_bridge;
		struct device *dev;
		void __iomem *base;
		struct clk *pclk;
		unsigned int lane_mbps;
		u32 channel;
		u32 lanes;
		u32 format;
		unsigned long mode_flags;
#ifdef CONFIG_DEBUG_FS
		struct dentry *debugfs;
		bool vpg;
		bool vpg_horizontal;
#endif
		struct dw_mipi_dsi *master;
		struct dw_mipi_dsi *slave;
		const struct dw_mipi_dsi_plat_data *plat_data;
	} cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 224 */;
	struct drm_encoder *cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 1106 */;
	void cocci_id/* drivers/gpu/drm/bridge/synopsys/dw-mipi-dsi.c 1064 */;
}
