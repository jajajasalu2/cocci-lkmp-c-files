cocci_test_suite() {
	bool cocci_id/* drivers/clk/ti/fapll.c 86 */;
	struct fapll_synth {
		struct clk_hw hw;
		struct fapll_data *fd;
		int index;
		void __iomem *freq;
		void __iomem *div;
		const char *name;
		struct clk *clk_pll;
	} cocci_id/* drivers/clk/ti/fapll.c 76 */;
	struct fapll_data {
		struct clk_hw hw;
		void __iomem *base;
		const char *name;
		struct clk *clk_ref;
		struct clk *clk_bypass;
		struct clk_onecell_data outputs;
		bool bypass_bit_inverted;
	} cocci_id/* drivers/clk/ti/fapll.c 66 */;
	void __iomem *cocci_id/* drivers/clk/ti/fapll.c 607 */;
	const char *cocci_id/* drivers/clk/ti/fapll.c 606 */;
	struct clk *cocci_id/* drivers/clk/ti/fapll.c 537 */;
	const char *cocci_id/* drivers/clk/ti/fapll.c 536 */[2];
	struct clk_init_data *cocci_id/* drivers/clk/ti/fapll.c 535 */;
	struct device_node *cocci_id/* drivers/clk/ti/fapll.c 532 */;
	void __init cocci_id/* drivers/clk/ti/fapll.c 532 */;
	struct clk *__initcocci_id/* drivers/clk/ti/fapll.c 491 */;
	struct fapll_synth cocci_id/* drivers/clk/ti/fapll.c 44 */;
	struct fapll_data cocci_id/* drivers/clk/ti/fapll.c 43 */;
	struct fapll_synth *cocci_id/* drivers/clk/ti/fapll.c 295 */;
	const struct clk_ops cocci_id/* drivers/clk/ti/fapll.c 272 */;
	unsigned long *cocci_id/* drivers/clk/ti/fapll.c 225 */;
	long cocci_id/* drivers/clk/ti/fapll.c 224 */;
	u32 *cocci_id/* drivers/clk/ti/fapll.c 203 */;
	u8 cocci_id/* drivers/clk/ti/fapll.c 191 */;
	u64 cocci_id/* drivers/clk/ti/fapll.c 172 */;
	unsigned long cocci_id/* drivers/clk/ti/fapll.c 167 */;
	struct clk_hw *cocci_id/* drivers/clk/ti/fapll.c 150 */;
	int cocci_id/* drivers/clk/ti/fapll.c 138 */;
	u32 cocci_id/* drivers/clk/ti/fapll.c 109 */;
	struct fapll_data *cocci_id/* drivers/clk/ti/fapll.c 107 */;
	void cocci_id/* drivers/clk/ti/fapll.c 107 */;
}
