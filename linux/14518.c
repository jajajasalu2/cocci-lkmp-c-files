cocci_test_suite() {
	struct hsdk_pll_devdata {
		const struct hsdk_pll_cfg *pll_cfg;
		int (*update_rate)(struct hsdk_pll_clk *clk,
				   unsigned long rate,
				   const struct hsdk_pll_cfg *cfg);
	} cocci_id/* drivers/clk/clk-hsdk-pll.c 96 */;
	struct hsdk_pll_clk {
		struct clk_hw hw;
		void __iomem *regs;
		void __iomem *spec_regs;
		const struct hsdk_pll_devdata *pll_devdata;
		struct device *dev;
	} cocci_id/* drivers/clk/clk-hsdk-pll.c 88 */;
	const struct hsdk_pll_cfg cocci_id/* drivers/clk/clk-hsdk-pll.c 58 */[];
	struct hsdk_pll_cfg {
		u32 rate;
		u32 idiv;
		u32 fbdiv;
		u32 odiv;
		u32 band;
	} cocci_id/* drivers/clk/clk-hsdk-pll.c 50 */;
	struct platform_driver cocci_id/* drivers/clk/clk-hsdk-pll.c 424 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-hsdk-pll.c 418 */[];
	struct device_node *cocci_id/* drivers/clk/clk-hsdk-pll.c 354 */;
	void __init cocci_id/* drivers/clk/clk-hsdk-pll.c 354 */;
	struct device *cocci_id/* drivers/clk/clk-hsdk-pll.c 307 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-hsdk-pll.c 306 */;
	struct hsdk_pll_clk *cocci_id/* drivers/clk/clk-hsdk-pll.c 305 */;
	unsigned int cocci_id/* drivers/clk/clk-hsdk-pll.c 304 */;
	const char *cocci_id/* drivers/clk/clk-hsdk-pll.c 303 */;
	struct resource *cocci_id/* drivers/clk/clk-hsdk-pll.c 302 */;
	struct platform_device *cocci_id/* drivers/clk/clk-hsdk-pll.c 299 */;
	int cocci_id/* drivers/clk/clk-hsdk-pll.c 299 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-hsdk-pll.c 293 */;
	const struct hsdk_pll_cfg *cocci_id/* drivers/clk/clk-hsdk-pll.c 221 */;
	unsigned long cocci_id/* drivers/clk/clk-hsdk-pll.c 220 */;
	unsigned long *cocci_id/* drivers/clk/clk-hsdk-pll.c 197 */;
	long cocci_id/* drivers/clk/clk-hsdk-pll.c 196 */;
	u64 cocci_id/* drivers/clk/clk-hsdk-pll.c 167 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-hsdk-pll.c 163 */;
	struct hsdk_pll_clk cocci_id/* drivers/clk/clk-hsdk-pll.c 160 */;
	bool cocci_id/* drivers/clk/clk-hsdk-pll.c 153 */;
	void cocci_id/* drivers/clk/clk-hsdk-pll.c 132 */;
	u32 cocci_id/* drivers/clk/clk-hsdk-pll.c 127 */;
	const struct hsdk_pll_devdata cocci_id/* drivers/clk/clk-hsdk-pll.c 107 */;
	int cocci_id/* drivers/clk/clk-hsdk-pll.c 104 */(struct hsdk_pll_clk *,
							 unsigned long,
							 const struct hsdk_pll_cfg *);
}
