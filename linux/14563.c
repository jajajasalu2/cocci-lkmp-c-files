cocci_test_suite() {
	void __exit cocci_id/* drivers/clk/ti/adpll.c 970 */;
	int __init cocci_id/* drivers/clk/ti/adpll.c 964 */;
	struct platform_driver cocci_id/* drivers/clk/ti/adpll.c 955 */;
	struct ti_adpll_clock cocci_id/* drivers/clk/ti/adpll.c 915 */;
	struct resource *cocci_id/* drivers/clk/ti/adpll.c 875 */;
	const struct ti_adpll_platform_data *cocci_id/* drivers/clk/ti/adpll.c 873 */;
	const struct of_device_id *cocci_id/* drivers/clk/ti/adpll.c 872 */;
	struct device *cocci_id/* drivers/clk/ti/adpll.c 871 */;
	struct device_node *cocci_id/* drivers/clk/ti/adpll.c 870 */;
	struct platform_device *cocci_id/* drivers/clk/ti/adpll.c 868 */;
	const struct of_device_id cocci_id/* drivers/clk/ti/adpll.c 861 */[];
	const struct ti_adpll_platform_data cocci_id/* drivers/clk/ti/adpll.c 854 */;
	struct ti_adpll_clock *cocci_id/* drivers/clk/ti/adpll.c 773 */;
	const char *cocci_id/* drivers/clk/ti/adpll.c 588 */[2];
	struct clk_ops *cocci_id/* drivers/clk/ti/adpll.c 587 */;
	struct clk_init_data cocci_id/* drivers/clk/ti/adpll.c 586 */;
	struct clk *cocci_id/* drivers/clk/ti/adpll.c 582 */;
	char *cocci_id/* drivers/clk/ti/adpll.c 582 */;
	enum ti_adpll_clocks cocci_id/* drivers/clk/ti/adpll.c 580 */;
	u8 cocci_id/* drivers/clk/ti/adpll.c 571 */;
	struct ti_adpll_clkout_data *cocci_id/* drivers/clk/ti/adpll.c 553 */;
	struct clk_hw *cocci_id/* drivers/clk/ti/adpll.c 551 */;
	const struct clk_ops cocci_id/* drivers/clk/ti/adpll.c 483 */;
	u64 cocci_id/* drivers/clk/ti/adpll.c 450 */;
	struct ti_adpll_dco_data *cocci_id/* drivers/clk/ti/adpll.c 434 */;
	bool cocci_id/* drivers/clk/ti/adpll.c 378 */;
	u32 cocci_id/* drivers/clk/ti/adpll.c 369 */;
	unsigned long cocci_id/* drivers/clk/ti/adpll.c 368 */;
	struct ti_adpll_data *cocci_id/* drivers/clk/ti/adpll.c 366 */;
	void cocci_id/* drivers/clk/ti/adpll.c 366 */;
	unsigned int cocci_id/* drivers/clk/ti/adpll.c 333 */;
	void __iomem *cocci_id/* drivers/clk/ti/adpll.c 245 */;
	char cocci_id/* drivers/clk/ti/adpll.c 212 */[ADPLL_MAX_CON_ID];
	struct clk_lookup *cocci_id/* drivers/clk/ti/adpll.c 210 */;
	void (*cocci_id/* drivers/clk/ti/adpll.c 208 */)(struct clk *clk);
	int cocci_id/* drivers/clk/ti/adpll.c 183 */;
	const char *cocci_id/* drivers/clk/ti/adpll.c 182 */;
	struct ti_adpll_data {
		struct device *dev;
		const struct ti_adpll_platform_data *c;
		struct device_node *np;
		unsigned long pa;
		void __iomem *iobase;
		void __iomem *regs;
		spinlock_t lock;
		const char *parent_names[MAX_ADPLL_INPUTS];
		struct clk *parent_clocks[MAX_ADPLL_INPUTS];
		struct ti_adpll_clock *clocks;
		struct clk_onecell_data outputs;
		struct ti_adpll_dco_data dco;
	} cocci_id/* drivers/clk/ti/adpll.c 167 */;
	struct ti_adpll_clkout_data {
		struct ti_adpll_data *adpll;
		struct clk_gate gate;
		struct clk_hw hw;
	} cocci_id/* drivers/clk/ti/adpll.c 161 */;
	struct ti_adpll_dco_data {
		struct clk_hw hw;
	} cocci_id/* drivers/clk/ti/adpll.c 157 */;
	struct ti_adpll_clock {
		struct clk *clk;
		struct clk_lookup *cl;
		void (*unregister)(struct clk *clk);
	} cocci_id/* drivers/clk/ti/adpll.c 151 */;
	struct ti_adpll_platform_data {
		const bool is_type_s;
		const int nr_max_inputs;
		const int nr_max_outputs;
		const int output_index;
	} cocci_id/* drivers/clk/ti/adpll.c 144 */;
	enum ti_adpll_lj_outputs{TI_ADPLL_LJ_CLKDCOLDO, TI_ADPLL_LJ_CLKOUT, TI_ADPLL_LJ_CLKOUTLDO,} cocci_id/* drivers/clk/ti/adpll.c 138 */;
	enum ti_adpll_s_outputs{TI_ADPLL_S_DCOCLKLDO, TI_ADPLL_S_CLKOUT, TI_ADPLL_S_CLKOUTX2, TI_ADPLL_S_CLKOUTHIF,} cocci_id/* drivers/clk/ti/adpll.c 131 */;
	enum ti_adpll_inputs{TI_ADPLL_CLKINP, TI_ADPLL_CLKINPULOW, TI_ADPLL_CLKINPHIF,} cocci_id/* drivers/clk/ti/adpll.c 125 */;
	enum ti_adpll_clocks{TI_ADPLL_DCO, TI_ADPLL_DCO_GATE, TI_ADPLL_N2, TI_ADPLL_M2, TI_ADPLL_M2_GATE, TI_ADPLL_BYPASS, TI_ADPLL_HIF, TI_ADPLL_DIV2, TI_ADPLL_CLKOUT, TI_ADPLL_CLKOUT2, TI_ADPLL_M3,} cocci_id/* drivers/clk/ti/adpll.c 109 */;
	struct ti_adpll_clkout_data cocci_id/* drivers/clk/ti/adpll.c 107 */;
	struct ti_adpll_data cocci_id/* drivers/clk/ti/adpll.c 106 */;
	struct ti_adpll_dco_data cocci_id/* drivers/clk/ti/adpll.c 105 */;
}
