cocci_test_suite() {
	struct dsi_pll_28nm cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 84 */;
	struct dsi_pll_28nm {
		struct msm_dsi_pll base;
		int id;
		struct platform_device *pdev;
		void __iomem *mmio;
		struct clk_bytediv *bytediv;
		struct clk *clks[NUM_DSI_CLOCKS_MAX];
		u32 num_clks;
		struct clk *provided_clks[NUM_PROVIDED_CLKS];
		struct clk_onecell_data clk_data;
		struct pll_28nm_cached_state cached_state;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 63 */;
	struct clk_bytediv {
		struct clk_hw hw;
		void __iomem *reg;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 58 */;
	struct pll_28nm_cached_state {
		unsigned long vco_rate;
		u8 postdiv3;
		u8 postdiv2;
		u8 postdiv1;
	} cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 51 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 484 */;
	const char *const*cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 454 */;
	const char *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 405 */[];
	struct clk_init_data cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 404 */;
	char *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 403 */;
	void cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 393 */;
	struct clk **cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 379 */;
	struct pll_28nm_cached_state *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 356 */;
	bool cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 292 */;
	struct device *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 290 */;
	const struct clk_ops cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 278 */;
	u32 cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 265 */;
	int cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 261 */;
	unsigned long *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 248 */;
	long cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 247 */;
	unsigned int cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 222 */;
	struct clk_bytediv *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 221 */;
	struct clk_hw *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 218 */;
	unsigned long cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 218 */;
	struct clk_bytediv cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 216 */;
	void __iomem *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 165 */;
	struct dsi_pll_28nm *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 154 */;
	struct msm_dsi_pll *cocci_id/* drivers/gpu/drm/msm/dsi/pll/dsi_pll_28nm_8960.c 153 */;
}
