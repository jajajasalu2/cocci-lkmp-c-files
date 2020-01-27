cocci_test_suite() {
	struct iproc_pll_vco_param *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 93 */;
	struct iproc_clk {
		struct clk_hw hw;
		struct iproc_pll *pll;
		const struct iproc_clk_ctrl *ctrl;
	} cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 83 */;
	struct iproc_clk cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 752 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 738 */;
	const char *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 736 */;
	struct clk_init_data cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 735 */;
	const struct iproc_pll_vco_param *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 727 */;
	struct device_node *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 725 */;
	struct iproc_pll {
		void __iomem *status_base;
		void __iomem *control_base;
		void __iomem *pwr_base;
		void __iomem *asiu_base;
		const struct iproc_pll_ctrl *ctrl;
		const struct iproc_pll_vco_param *vco_param;
		unsigned int num_vco_entries;
	} cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 72 */;
	const struct clk_ops cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 699 */;
	struct clk_rate_request *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 647 */;
	struct clk_hw *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 646 */;
	enum vco_freq_range{VCO_LOW=700000000U, VCO_MID=1200000000U, VCO_HIGH=2200000000U, VCO_HIGH_HIGH=3100000000U, VCO_MAX=4000000000U,} cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 64 */;
	const struct iproc_clk_ctrl *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 608 */;
	struct iproc_clk *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 607 */;
	const unsigned long cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 53 */[NUM_FREQ_BANDS][2];
	struct iproc_pll_vco_param cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 521 */;
	const unsigned int cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 47 */[NUM_KP_BANDS][NUM_FREQ_BANDS];
	u64 cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 464 */;
	enum kp_band{KP_BAND_MID=0, KP_BAND_HIGH, KP_BAND_HIGH_HIGH,} cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 41 */;
	bool cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 286 */;
	const struct iproc_pll_dig_filter_ctrl *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 263 */;
	const struct iproc_pll_reset_ctrl *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 262 */;
	const struct iproc_pll_ctrl *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 261 */;
	u32 cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 260 */;
	struct iproc_pll *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 257 */;
	unsigned int cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 257 */;
	void cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 257 */;
	int cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 214 */;
	const u32 cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 174 */;
	const struct iproc_pll *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 173 */;
	void __iomem *cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 173 */;
	enum kp_band cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 142 */;
	unsigned long cocci_id/* drivers/clk/bcm/clk-iproc-pll.c 142 */;
}
