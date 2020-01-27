cocci_test_suite() {
	int __init cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 828 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 819 */;
	const struct component_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 803 */;
	struct dpi_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 779 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 778 */;
	struct device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 776 */;
	void *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 776 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 776 */;
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 738 */;
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 733 */;
	const struct omapdss_dpi_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 694 */;
	struct dss_pll *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 61 */;
	struct regulator *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 563 */;
	struct dpi_data cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 52 */;
	struct dpi_clk_calc_ctx cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 502 */;
	struct omap_overlay_manager *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 498 */;
	struct omap_video_timings *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 495 */;
	struct omap_dss_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 494 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 356 */;
	struct dpi_data {
		struct platform_device *pdev;
		struct regulator *vdds_dsi_reg;
		struct dss_pll *pll;
		struct mutex lock;
		struct omap_video_timings timings;
		struct dss_lcd_mgr_config mgr_config;
		int data_lines;
		struct omap_dss_device output;
		bool port_initialized;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 33 */;
	unsigned long *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 300 */;
	int *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 300 */;
	struct dpi_clk_calc_ctx *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 148 */;
	bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 145 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 145 */;
	struct dpi_clk_calc_ctx {
		struct dss_pll *pll;
		unsigned long pck_min,pck_max;
		struct dss_pll_clock_info dsi_cinfo;
		unsigned long fck;
		struct dispc_clock_info dispc_cinfo;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 131 */;
	enum omap_dss_clk_source cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 115 */;
	enum omap_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dpi.c 115 */;
}
