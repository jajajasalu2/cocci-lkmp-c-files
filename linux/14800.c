cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 964 */;
	const struct cpg_mssr_info *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 893 */;
	const struct dev_pm_ops cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 882 */;
	void cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 797 */;
	const struct of_device_id cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 669 */[];
	const struct reset_control_ops cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 629 */;
	u32 cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 596 */;
	struct cpg_mssr_priv *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 593 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 591 */;
	unsigned long cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 591 */;
	int cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 591 */;
	struct cpg_mssr_priv cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 567 */;
	const u16 cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 55 */[];
	size_t cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 543 */;
	struct cpg_mssr_clk_domain *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 542 */;
	struct generic_pm_domain *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 541 */;
	struct device_node *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 540 */;
	const unsigned int *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 537 */;
	struct device *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 536 */;
	int __init cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 536 */;
	struct clk *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 486 */;
	struct of_phandle_args cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 485 */;
	bool cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 458 */;
	const struct of_phandle_args *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 458 */;
	struct cpg_mssr_clk_domain {
		struct generic_pm_domain genpd;
		unsigned int num_core_pm_clks;
		unsigned int core_pm_clks[];
	} cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 450 */;
	struct clk_init_data cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 389 */;
	struct mstp_clock *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 386 */;
	const struct mssr_mod_clk *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 382 */;
	const struct cpg_core_clk *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 305 */;
	const char *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 258 */;
	void *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 252 */;
	struct of_phandle_args *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 251 */;
	const struct clk_ops cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 244 */;
	struct clk_hw *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 225 */;
	struct mstp_clock cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 162 */;
	struct mstp_clock {
		struct clk_hw hw;
		u32 index;
		struct cpg_mssr_priv *priv;
	} cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 156 */;
	struct cpg_mssr_priv {
#ifdef CONFIG_RESET_CONTROLLER
		struct reset_controller_dev rcdev;
#endif
		struct device *dev;
		void __iomem *base;
		spinlock_t rmw_lock;
		struct device_node *np;
		unsigned int num_core_clks;
		unsigned int num_mod_clks;
		unsigned int last_dt_core_clk;
		bool stbyctrl;
		struct raw_notifier_head notifiers;
		struct {
			u32 mask;
			u32 val;
		} smstpcr_saved[ARRAY_SIZE(smstpcr)];
		struct clk *clks[];
	} cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 125 */;
	const struct mssr_mod_reparent *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1056 */;
	struct mssr_mod_clk *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1041 */;
	unsigned int cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1029 */;
	struct cpg_core_clk *cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1028 */;
	void __init cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1028 */;
	struct platform_driver cocci_id/* drivers/clk/renesas/renesas-cpg-mssr.c 1013 */;
}
