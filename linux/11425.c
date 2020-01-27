cocci_test_suite() {
	struct dw_mipi_dsi_stm {
		void __iomem *base;
		struct clk *pllref_clk;
		struct dw_mipi_dsi *dsi;
		u32 hw_version;
		int lane_min_kbps;
		int lane_max_kbps;
		struct regulator *vdd_supply;
	} cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 77 */;
	enum dsi_color{DSI_RGB565_CONF1, DSI_RGB565_CONF2, DSI_RGB565_CONF3, DSI_RGB666_CONF1, DSI_RGB666_CONF2, DSI_RGB888,} cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 61 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 472 */;
	const struct dev_pm_ops cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 467 */;
	int __maybe_unused cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 444 */;
	struct resource *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 335 */;
	struct clk *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 334 */;
	struct device *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 332 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 330 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 324 */[];
	struct dw_mipi_dsi_plat_data cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 319 */;
	const struct dw_mipi_dsi_phy_ops cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 312 */;
	unsigned int cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 246 */;
	unsigned int *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 243 */;
	unsigned long cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 242 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 241 */;
	void *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 241 */;
	int *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 143 */;
	int cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 130 */;
	enum mipi_dsi_pixel_format cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 113 */;
	enum dsi_color cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 113 */;
	u32 cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 102 */;
	struct dw_mipi_dsi_stm *cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 102 */;
	void cocci_id/* drivers/gpu/drm/stm/dw_mipi_dsi-stm.c 102 */;
}
