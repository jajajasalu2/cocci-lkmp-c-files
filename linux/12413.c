cocci_test_suite() {
	enum dss_clk_source cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 91 */;
	enum dss_model cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 680 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 679 */;
	struct dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 679 */;
	struct regulator *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 658 */;
	const struct soc_device_attribute cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 650 */[];
	u32 cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 605 */;
	struct device_node *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 602 */;
	const struct omap_dss_device_ops cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 591 */;
	enum omap_channel cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 545 */;
	struct dss_pll *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 520 */;
	struct dpi_data cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 48 */;
	struct dpi_clk_calc_ctx cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 470 */;
	struct dpi_data *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 466 */;
	struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 464 */;
	struct omap_dss_device *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 463 */;
	const struct drm_display_mode *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 450 */;
	void cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 355 */;
	unsigned long *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 314 */;
	int *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 314 */;
	struct dpi_data {
		struct platform_device *pdev;
		enum dss_model dss_model;
		struct dss_device *dss;
		unsigned int id;
		struct regulator *vdds_dsi_reg;
		enum dss_clk_source clk_src;
		struct dss_pll *pll;
		struct mutex lock;
		struct dss_lcd_mgr_config mgr_config;
		unsigned long pixelclock;
		int data_lines;
		struct omap_dss_device output;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 27 */;
	struct dpi_clk_calc_ctx *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 152 */;
	void *cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 150 */;
	bool cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 149 */;
	unsigned long cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 149 */;
	int cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 149 */;
	struct dpi_clk_calc_ctx {
		struct dpi_data *dpi;
		unsigned int clkout_idx;
		unsigned long pck_min,pck_max;
		struct dss_pll_clock_info pll_cinfo;
		unsigned long fck;
		struct dispc_clock_info dispc_cinfo;
	} cocci_id/* drivers/gpu/drm/omapdrm/dss/dpi.c 134 */;
}
