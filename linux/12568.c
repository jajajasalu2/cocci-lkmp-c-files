cocci_test_suite() {
	struct dsi_pll_28nm cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 89 */;
	struct dsi_pll_28nm {
		struct msm_dsi_pll base;
		int id;
		struct platform_device *pdev;
		void __iomem *mmio;
		int vco_delay;
		struct clk *clks[NUM_DSI_CLOCKS_MAX];
		u32 num_clks;
		struct clk *provided_clks[NUM_PROVIDED_CLKS];
		struct clk_onecell_data clk_data;
		struct pll_28nm_cached_state cached_state;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 69 */;
	struct pll_28nm_cached_state {
		unsigned long vco_rate;
		u8 postdiv3;
		u8 postdiv1;
		u8 byte_mux;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 62 */;
	enum msm_dsi_phy_type cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 584 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 583 */;
	const char *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 513 */[];
	struct clk_init_data cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 512 */;
	char cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 511 */[32];
	void cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 493 */;
	const struct lpfr_cfg cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 49 */[LPFR_LUT_SIZE];
	struct clk **cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 479 */;
	struct pll_28nm_cached_state *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 456 */;
	struct lpfr_cfg {
		unsigned long vco_rate;
		u32 resistance;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 43 */;
	bool cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 319 */;
	const struct clk_ops cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 301 */;
	u32 cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 258 */;
	void __iomem *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 257 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 252 */;
	struct dsi_pll_28nm *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 246 */;
	struct msm_dsi_pll *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 245 */;
	struct clk_hw *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 243 */;
	int cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 243 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm.c 132 */;
}
