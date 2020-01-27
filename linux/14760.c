cocci_test_suite() {
	const struct clk_hw *cocci_id/* drivers/clk/meson/meson8b.c 931 */[];
	struct clk_init_data cocci_id/* drivers/clk/meson/meson8b.c 928 */;
	struct clk_regmap_gate_data cocci_id/* drivers/clk/meson/meson8b.c 923 */;
	struct clk_regmap cocci_id/* drivers/clk/meson/meson8b.c 922 */;
	struct clk_regmap_mux_data cocci_id/* drivers/clk/meson/meson8b.c 900 */;
	struct clk_fixed_factor cocci_id/* drivers/clk/meson/meson8b.c 807 */;
	struct clk_regmap_div_data cocci_id/* drivers/clk/meson/meson8b.c 685 */;
	const struct clk_div_table cocci_id/* drivers/clk/meson/meson8b.c 672 */[];
	struct meson_clk_pll_data cocci_id/* drivers/clk/meson/meson8b.c 65 */;
	struct clk_fixed_rate cocci_id/* drivers/clk/meson/meson8b.c 55 */;
	struct meson_clk_mpll_data cocci_id/* drivers/clk/meson/meson8b.c 429 */;
	struct device_node *cocci_id/* drivers/clk/meson/meson8b.c 3720 */;
	void __init cocci_id/* drivers/clk/meson/meson8b.c 3720 */;
	struct regmap *cocci_id/* drivers/clk/meson/meson8b.c 3645 */;
	void __iomem *cocci_id/* drivers/clk/meson/meson8b.c 3644 */;
	struct clk *cocci_id/* drivers/clk/meson/meson8b.c 3643 */;
	const char *cocci_id/* drivers/clk/meson/meson8b.c 3642 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/meson/meson8b.c 3639 */;
	const struct regmap_config cocci_id/* drivers/clk/meson/meson8b.c 3632 */;
	struct clk_hw *cocci_id/* drivers/clk/meson/meson8b.c 3597 */;
	struct clk_hw **cocci_id/* drivers/clk/meson/meson8b.c 3596 */;
	struct meson8b_nb_data cocci_id/* drivers/clk/meson/meson8b.c 3595 */;
	struct meson8b_nb_data *cocci_id/* drivers/clk/meson/meson8b.c 3594 */;
	void *cocci_id/* drivers/clk/meson/meson8b.c 3592 */;
	struct notifier_block *cocci_id/* drivers/clk/meson/meson8b.c 3591 */;
	struct meson8b_nb_data {
		struct notifier_block nb;
		struct clk_hw_onecell_data *onecell_data;
	} cocci_id/* drivers/clk/meson/meson8b.c 3586 */;
	const struct reset_control_ops cocci_id/* drivers/clk/meson/meson8b.c 3581 */;
	unsigned long cocci_id/* drivers/clk/meson/meson8b.c 3570 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/meson/meson8b.c 3569 */;
	int cocci_id/* drivers/clk/meson/meson8b.c 3569 */;
	const struct meson8b_clk_reset_line *cocci_id/* drivers/clk/meson/meson8b.c 3548 */;
	struct meson8b_clk_reset cocci_id/* drivers/clk/meson/meson8b.c 3546 */;
	struct meson8b_clk_reset *cocci_id/* drivers/clk/meson/meson8b.c 3545 */;
	bool cocci_id/* drivers/clk/meson/meson8b.c 3543 */;
	const struct meson8b_clk_reset_line {
		u32 reg;
		u8 bit_idx;
	} cocci_id/* drivers/clk/meson/meson8b.c 3488 */[];
	struct clk_regmap *const cocci_id/* drivers/clk/meson/meson8b.c 3295 */[];
	struct clk_hw_onecell_data cocci_id/* drivers/clk/meson/meson8b.c 2656 */;
	struct meson8b_clk_reset {
		struct reset_controller_dev reset;
		struct regmap *regmap;
	} cocci_id/* drivers/clk/meson/meson8b.c 26 */;
	u32 cocci_id/* drivers/clk/meson/meson8b.c 2434 */[];
	const struct clk_parent_data cocci_id/* drivers/clk/meson/meson8b.c 2025 */;
	const struct pll_params_table cocci_id/* drivers/clk/meson/meson8b.c 1910 */[];
}
