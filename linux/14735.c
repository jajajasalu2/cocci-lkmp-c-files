cocci_test_suite() {
	struct clk_periph_data {
		const char *name;
		const char *const*parent_names;
		int num_parents;
		struct clk_hw *mux_hw;
		struct clk_hw *rate_hw;
		struct clk_hw *gate_hw;
		struct clk_hw *muxrate_hw;
		bool is_double_div;
	} cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 92 */;
	struct clk_pm_cpu cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 90 */;
	struct clk_double_div cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 89 */;
	struct platform_driver cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 790 */;
	struct clk_pm_cpu {
		struct clk_hw hw;
		void __iomem *reg_mux;
		u8 shift_mux;
		u32 mask_mux;
		void __iomem *reg_div;
		u8 shift_div;
		struct regmap *nb_pm_base;
	} cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 79 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 779 */;
	struct resource *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 728 */;
	struct device_node *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 724 */;
	struct clk_periph_driver_data *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 723 */;
	struct platform_device *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 721 */;
	const struct dev_pm_ops cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 716 */;
	struct clk_double_div {
		struct clk_hw hw;
		void __iomem *reg1;
		u8 shift1;
		void __iomem *reg2;
		u8 shift2;
	} cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 71 */;
	int __maybe_unused cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 701 */;
	struct regmap *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 663 */;
	struct clk_pm_cpu *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 661 */;
	const struct clk_div_table *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 649 */;
	struct clk_divider *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 648 */;
	struct clk_double_div *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 642 */;
	struct clk_gate *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 628 */;
	u64 cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 624 */;
	struct clk_mux *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 618 */;
	struct clk_hw *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 615 */;
	const struct clk_ops *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 613 */;
	struct device *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 611 */;
	struct clk_hw **cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 611 */;
	spinlock_t *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 610 */;
	void __iomem *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 610 */;
	const struct clk_periph_data *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 609 */;
	int cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 609 */;
	const struct of_device_id cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 601 */[];
	struct clk_periph_driver_data {
		struct clk_hw_onecell_data *hw_data;
		spinlock_t lock;
		void __iomem *reg;
		u32 tbg_sel;
		u32 div_sel0;
		u32 div_sel1;
		u32 div_sel2;
		u32 clk_sel;
		u32 clk_dis;
	} cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 57 */;
	unsigned long *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 484 */;
	long cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 483 */;
	u32 cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 431 */;
	u8 cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 428 */;
	unsigned int cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 378 */;
	bool cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 366 */;
	unsigned int *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 353 */;
	void cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 352 */;
	unsigned long cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 336 */;
	struct clk_periph_data cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 271 */[];
	const char *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 200 */[];
	struct clk_divider cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 159 */;
	struct clk_mux cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 138 */;
	struct clk_init_data cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 132 */;
	void *cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 130 */;
	struct clk_gate cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 129 */;
	const struct clk_ops cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 125 */;
	const struct clk_div_table cocci_id/* drivers/clk/mvebu/armada-37xx-periph.c 113 */[];
}
