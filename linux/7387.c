cocci_test_suite() {
	const char *constcocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 97 */[];
	struct device_node *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 917 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 913 */(struct platform_device *pdev);
	const struct dss_features *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 880 */;
	const struct dss_features cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 862 */;
	const enum omap_display_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 807 */[];
	struct seq_file *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 787 */;
	struct clk *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 733 */;
	struct {
		struct platform_device *pdev;
		void __iomem *base;
		struct regmap *syscon_pll_ctrl;
		u32 syscon_pll_ctrl_offset;
		struct clk *parent_clk;
		struct clk *dss_clk;
		unsigned long dss_clk_rate;
		unsigned long cache_req_pck;
		unsigned long cache_prate;
		struct dispc_clock_info cache_dispc_cinfo;
		enum omap_dss_clk_source dsi_clk_source[MAX_NUM_DSI];
		enum omap_dss_clk_source dispc_clk_source;
		enum omap_dss_clk_source lcd_clk_source[MAX_DSS_LCD_MANAGERS];
		bool ctx_valid;
		u32 ctx[DSS_SZ_REGS / sizeof(u32)];
		const struct dss_features *feat;
		struct dss_pll *video1_pll;
		struct dss_pll *video2_pll;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 70 */;
	enum omap_display_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 640 */;
	enum dss_hdmi_venc_clk_source_select cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 638 */;
	struct dss_features {
		u8 fck_div_max;
		u8 dss_fck_multiplier;
		const char *parent_clk_name;
		const enum omap_display_type *ports;
		int num_ports;
		int (*dpi_select_source)(int port, enum omap_channel channel);
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 61 */;
	enum omap_dss_venc_type cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 604 */;
	dss_div_calc_func cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 511 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 510 */;
	enum omap_dss_clk_source cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 487 */;
	struct dss_reg {
		u16 idx;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 41 */;
	u8 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 398 */;
	const char *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 353 */;
	enum omap_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 196 */;
	unsigned cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 168 */;
	bool cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 166 */;
	enum dss_pll_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 166 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 166 */;
	int __init cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1296 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1285 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1274 */[];
	const struct dev_pm_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1269 */;
	struct component_match *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1219 */;
	struct component_match **cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1201 */;
	struct device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1199 */;
	void *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1199 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1199 */;
	const struct component_master_ops cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1188 */;
	const struct dss_reg cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 118 */;
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1071 */;
	struct resource *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1070 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1069 */;
	struct regulator *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dss.c 1008 */;
}
