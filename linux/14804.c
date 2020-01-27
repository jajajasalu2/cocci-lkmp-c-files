cocci_test_suite() {
	struct cpg_z_clk {
		struct clk_hw hw;
		void __iomem *reg;
		void __iomem *kick_reg;
		unsigned long mask;
		unsigned int fixed_div;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 93 */;
	uintptr_t cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 723 */;
	const struct soc_device_attribute *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 716 */;
	int __init cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 713 */;
	struct cpg_simple_notifier cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 59 */;
	struct cpg_simple_notifier *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 58 */;
	const struct clk *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 550 */;
	struct notifier_block *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 55 */;
	struct clk **cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 547 */;
	const struct cpg_mssr_info *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 546 */;
	const struct cpg_core_clk *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 546 */;
	struct device *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 545 */;
	void *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 524 */;
	const struct soc_device_attribute cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 521 */[]__initconst;
	u32 cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 519 */;
	unsigned int cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 518 */;
	const struct rcar_gen3_cpg_pll_config *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 517 */;
	struct rpcd2_clock *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 492 */;
	struct cpg_simple_notifier {
		struct notifier_block nb;
		void __iomem *reg;
		u32 saved;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 49 */;
	struct rpcd2_clock {
		struct clk_fixed_factor fixed;
		struct clk_gate gate;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 483 */;
	struct clk *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 453 */;
	struct rpc_clock *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 452 */;
	struct raw_notifier_head *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 450 */;
	const char *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 448 */;
	struct clk *__initcocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 448 */;
	const struct clk_div_table cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 444 */[];
	struct rpc_clock {
		struct clk_divider div;
		struct clk_gate gate;
		struct cpg_simple_notifier csn;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 430 */;
	struct sd_clock *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 390 */;
	struct clk_init_data cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 389 */;
	unsigned long cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 38 */;
	const struct clk_ops cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 370 */;
	void __iomem *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 36 */;
	void cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 36 */;
	spinlock_t cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 34 */;
	struct clk_rate_request *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 319 */;
	struct clk_hw *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 318 */;
	int cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 318 */;
	struct sd_clock cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 282 */;
	const struct sd_div_table cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 268 */[];
	struct sd_clock {
		struct clk_hw hw;
		const struct sd_div_table *div_table;
		struct cpg_simple_notifier csn;
		unsigned int div_num;
		unsigned int cur_div_idx;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 241 */;
	struct sd_div_table {
		u32 val;
		unsigned int div;
	} cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 236 */;
	u64 cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 133 */;
	struct cpg_z_clk *cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 120 */;
	struct cpg_z_clk cocci_id/* drivers/clk/renesas/rcar-gen3-cpg.c 101 */;
}
