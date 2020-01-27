cocci_test_suite() {
	union omap4_timeout *cocci_id/* drivers/clk/ti/clkctrl.c 95 */;
	const struct omap_clkctrl_data cocci_id/* drivers/clk/ti/clkctrl.c 68 */[]__initconst;
	union omap4_timeout {
		u32 cycles;
		ktime_t start;
	} cocci_id/* drivers/clk/ti/clkctrl.c 63 */;
	struct omap_clkctrl_clk {
		struct clk_hw *clk;
		u16 reg_offset;
		int bit_offset;
		struct list_head node;
	} cocci_id/* drivers/clk/ti/clkctrl.c 56 */;
	struct omap_clkctrl_provider {
		void __iomem *base;
		struct list_head clocks;
		char *clkdm_name;
	} cocci_id/* drivers/clk/ti/clkctrl.c 50 */;
	bool cocci_id/* drivers/clk/ti/clkctrl.c 48 */;
	char *cocci_id/* drivers/clk/ti/clkctrl.c 455 */;
	const __be32 *cocci_id/* drivers/clk/ti/clkctrl.c 452 */;
	const struct omap_clkctrl_data *cocci_id/* drivers/clk/ti/clkctrl.c 446 */;
	struct device_node *cocci_id/* drivers/clk/ti/clkctrl.c 438 */;
	void *cocci_id/* drivers/clk/ti/clkctrl.c 437 */;
	void __init cocci_id/* drivers/clk/ti/clkctrl.c 437 */;
	const struct omap_clkctrl_reg_data *cocci_id/* drivers/clk/ti/clkctrl.c 403 */;
	int *cocci_id/* drivers/clk/ti/clkctrl.c 385 */;
	const struct omap_clkctrl_div_data *cocci_id/* drivers/clk/ti/clkctrl.c 371 */;
	struct clk_omap_divider *cocci_id/* drivers/clk/ti/clkctrl.c 370 */;
	void __iomem *cocci_id/* drivers/clk/ti/clkctrl.c 368 */;
	const struct omap_clkctrl_bit_data *cocci_id/* drivers/clk/ti/clkctrl.c 367 */;
	void __init cocci_id/* drivers/clk/ti/clkctrl.c 364 */;
	struct clk_omap_mux *cocci_id/* drivers/clk/ti/clkctrl.c 335 */;
	struct omap_clkctrl_clk *cocci_id/* drivers/clk/ti/clkctrl.c 266 */;
	struct clk *cocci_id/* drivers/clk/ti/clkctrl.c 265 */;
	struct clk_init_data cocci_id/* drivers/clk/ti/clkctrl.c 264 */;
	const struct clk_ops *cocci_id/* drivers/clk/ti/clkctrl.c 262 */;
	const char *const*cocci_id/* drivers/clk/ti/clkctrl.c 261 */;
	u8 cocci_id/* drivers/clk/ti/clkctrl.c 261 */;
	u16 cocci_id/* drivers/clk/ti/clkctrl.c 261 */;
	struct omap_clkctrl_provider *cocci_id/* drivers/clk/ti/clkctrl.c 259 */;
	int __init cocci_id/* drivers/clk/ti/clkctrl.c 258 */;
	struct of_phandle_args *cocci_id/* drivers/clk/ti/clkctrl.c 231 */;
	const struct clk_ops cocci_id/* drivers/clk/ti/clkctrl.c 224 */;
	union omap4_timeout cocci_id/* drivers/clk/ti/clkctrl.c 183 */;
	u32 cocci_id/* drivers/clk/ti/clkctrl.c 182 */;
	struct clk_hw_omap *cocci_id/* drivers/clk/ti/clkctrl.c 181 */;
	struct clk_hw *cocci_id/* drivers/clk/ti/clkctrl.c 179 */;
	void cocci_id/* drivers/clk/ti/clkctrl.c 179 */;
	int cocci_id/* drivers/clk/ti/clkctrl.c 137 */;
	int __init cocci_id/* drivers/clk/ti/clkctrl.c 129 */;
}
