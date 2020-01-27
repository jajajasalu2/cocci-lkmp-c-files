cocci_test_suite() {
	struct meson_sclk_div_data cocci_id/* drivers/clk/meson/axg-audio.c 84 */;
	struct clk_hw_onecell_data cocci_id/* drivers/clk/meson/axg-audio.c 779 */;
	struct clk_regmap_mux_data cocci_id/* drivers/clk/meson/axg-audio.c 690 */;
	const struct clk_hw *cocci_id/* drivers/clk/meson/axg-audio.c 684 */[];
	struct clk_regmap_div_data cocci_id/* drivers/clk/meson/axg-audio.c 619 */;
	struct clk_regmap_gate_data cocci_id/* drivers/clk/meson/axg-audio.c 604 */;
	const struct clk_parent_data cocci_id/* drivers/clk/meson/axg-audio.c 530 */;
	const struct clk_ops cocci_id/* drivers/clk/meson/axg-audio.c 529 */;
	struct clk_init_data cocci_id/* drivers/clk/meson/axg-audio.c 526 */;
	struct clk_hw cocci_id/* drivers/clk/meson/axg-audio.c 525 */;
	const char *cocci_id/* drivers/clk/meson/axg-audio.c 31 */[];
	struct clk_regmap cocci_id/* drivers/clk/meson/axg-audio.c 297 */;
	const struct clk_parent_data cocci_id/* drivers/clk/meson/axg-audio.c 283 */[];
	struct platform_driver cocci_id/* drivers/clk/meson/axg-audio.c 1745 */;
	const struct of_device_id cocci_id/* drivers/clk/meson/axg-audio.c 1731 */[];
	const struct audioclk_data cocci_id/* drivers/clk/meson/axg-audio.c 1709 */;
	const char *cocci_id/* drivers/clk/meson/axg-audio.c 1670 */;
	struct clk_hw *cocci_id/* drivers/clk/meson/axg-audio.c 1636 */;
	void __iomem *cocci_id/* drivers/clk/meson/axg-audio.c 1635 */;
	struct regmap *cocci_id/* drivers/clk/meson/axg-audio.c 1634 */;
	struct axg_audio_reset_data *cocci_id/* drivers/clk/meson/axg-audio.c 1633 */;
	const struct audioclk_data *cocci_id/* drivers/clk/meson/axg-audio.c 1632 */;
	struct device *cocci_id/* drivers/clk/meson/axg-audio.c 1631 */;
	struct platform_device *cocci_id/* drivers/clk/meson/axg-audio.c 1629 */;
	int cocci_id/* drivers/clk/meson/axg-audio.c 1629 */;
	struct audioclk_data {
		struct clk_regmap *const *regmap_clks;
		unsigned int regmap_clk_num;
		struct clk_hw_onecell_data *hw_onecell_data;
		unsigned int reset_offset;
		unsigned int reset_num;
	} cocci_id/* drivers/clk/meson/axg-audio.c 1621 */;
	const struct regmap_config cocci_id/* drivers/clk/meson/axg-audio.c 1614 */;
	const struct reset_control_ops cocci_id/* drivers/clk/meson/axg-audio.c 1607 */;
	unsigned long cocci_id/* drivers/clk/meson/axg-audio.c 1584 */;
	struct reset_controller_dev *cocci_id/* drivers/clk/meson/axg-audio.c 1583 */;
	struct axg_audio_reset_data cocci_id/* drivers/clk/meson/axg-audio.c 1573 */;
	bool cocci_id/* drivers/clk/meson/axg-audio.c 1555 */;
	unsigned int cocci_id/* drivers/clk/meson/axg-audio.c 1547 */;
	unsigned int *cocci_id/* drivers/clk/meson/axg-audio.c 1544 */;
	void cocci_id/* drivers/clk/meson/axg-audio.c 1542 */;
	struct axg_audio_reset_data {
		struct reset_controller_dev rstc;
		struct regmap *map;
		unsigned int offset;
	} cocci_id/* drivers/clk/meson/axg-audio.c 1536 */;
	void (*cocci_id/* drivers/clk/meson/axg-audio.c 1526 */)(void *);
	struct clk *cocci_id/* drivers/clk/meson/axg-audio.c 1508 */;
	char *cocci_id/* drivers/clk/meson/axg-audio.c 1506 */;
	struct meson_clk_phase_data cocci_id/* drivers/clk/meson/axg-audio.c 134 */;
	struct clk_regmap *const cocci_id/* drivers/clk/meson/axg-audio.c 1218 */[];
	struct meson_clk_triphase_data cocci_id/* drivers/clk/meson/axg-audio.c 107 */;
}