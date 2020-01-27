cocci_test_suite() {
	struct g12a_cpu_clk_postmux_nb_data *cocci_id/* drivers/clk/meson/g12a.c 936 */;
	struct g12a_cpu_clk_postmux_nb_data {
		struct notifier_block nb;
		struct clk_hw *xtal;
		struct clk_hw *cpu_clk_dyn;
		struct clk_hw *cpu_clk_postmux0;
		struct clk_hw *cpu_clk_postmux1;
		struct clk_hw *cpu_clk_premux1;
	} cocci_id/* drivers/clk/meson/g12a.c 924 */;
	struct notifier_block cocci_id/* drivers/clk/meson/g12a.c 920 */;
	void *cocci_id/* drivers/clk/meson/g12a.c 909 */;
	unsigned long cocci_id/* drivers/clk/meson/g12a.c 909 */;
	struct notifier_block *cocci_id/* drivers/clk/meson/g12a.c 908 */;
	int cocci_id/* drivers/clk/meson/g12a.c 908 */;
	struct platform_driver cocci_id/* drivers/clk/meson/g12a.c 5100 */;
	const struct of_device_id cocci_id/* drivers/clk/meson/g12a.c 5084 */[];
	const struct meson_g12a_data cocci_id/* drivers/clk/meson/g12a.c 5055 */;
	struct meson_g12a_data cocci_id/* drivers/clk/meson/g12a.c 5046 */;
	const struct meson_g12a_data *cocci_id/* drivers/clk/meson/g12a.c 5035 */;
	const struct meson_eeclkc_data *cocci_id/* drivers/clk/meson/g12a.c 5034 */;
	struct meson_g12a_data {
		const struct meson_eeclkc_data eeclkc_data;
		int (*dvfs_setup)(struct platform_device *pdev);
	} cocci_id/* drivers/clk/meson/g12a.c 5027 */;
	struct clk *cocci_id/* drivers/clk/meson/g12a.c 4999 */;
	const char *cocci_id/* drivers/clk/meson/g12a.c 4998 */;
	struct clk_hw **cocci_id/* drivers/clk/meson/g12a.c 4997 */;
	struct platform_device *cocci_id/* drivers/clk/meson/g12a.c 4995 */;
	struct clk_hw *cocci_id/* drivers/clk/meson/g12a.c 4890 */;
	struct clk_regmap_mux_data cocci_id/* drivers/clk/meson/g12a.c 486 */;
	struct clk_regmap *const cocci_id/* drivers/clk/meson/g12a.c 4651 */[];
	struct clk_hw_onecell_data cocci_id/* drivers/clk/meson/g12a.c 3947 */;
	struct meson_clk_cpu_dyndiv_data cocci_id/* drivers/clk/meson/g12a.c 384 */;
	struct meson_clk_pll_data cocci_id/* drivers/clk/meson/g12a.c 30 */;
	struct meson_vid_pll_div_data cocci_id/* drivers/clk/meson/g12a.c 2626 */;
	const struct clk_hw *cocci_id/* drivers/clk/meson/g12a.c 2454 */[];
	struct clk_init_data cocci_id/* drivers/clk/meson/g12a.c 2451 */;
	struct clk_regmap_gate_data cocci_id/* drivers/clk/meson/g12a.c 2447 */;
	struct clk_regmap cocci_id/* drivers/clk/meson/g12a.c 2446 */;
	const struct clk_parent_data cocci_id/* drivers/clk/meson/g12a.c 2404 */[];
	u32 cocci_id/* drivers/clk/meson/g12a.c 2403 */[];
	struct meson_clk_mpll_data cocci_id/* drivers/clk/meson/g12a.c 2192 */;
	const struct pll_params_table cocci_id/* drivers/clk/meson/g12a.c 1837 */[];
	const struct reg_sequence cocci_id/* drivers/clk/meson/g12a.c 1601 */[];
	const struct pll_mult_range cocci_id/* drivers/clk/meson/g12a.c 1593 */;
	const struct clk_parent_data cocci_id/* drivers/clk/meson/g12a.c 1295 */;
	struct clk_regmap_div_data cocci_id/* drivers/clk/meson/g12a.c 1184 */;
	struct clk_fixed_factor cocci_id/* drivers/clk/meson/g12a.c 1157 */;
	struct g12a_sys_pll_nb_data cocci_id/* drivers/clk/meson/g12a.c 1096 */;
	struct g12a_sys_pll_nb_data *cocci_id/* drivers/clk/meson/g12a.c 1039 */;
	struct g12a_sys_pll_nb_data {
		struct notifier_block nb;
		struct clk_hw *sys_pll;
		struct clk_hw *cpu_clk;
		struct clk_hw *cpu_clk_dyn;
	} cocci_id/* drivers/clk/meson/g12a.c 1029 */;
	struct g12a_cpu_clk_postmux_nb_data cocci_id/* drivers/clk/meson/g12a.c 1013 */;
}
