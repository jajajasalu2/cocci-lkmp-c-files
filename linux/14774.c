cocci_test_suite() {
	struct bm1880_div_hw_clock {
		struct bm1880_div_clock div;
		void __iomem *base;
		spinlock_t *lock;
		struct clk_hw hw;
		struct clk_init_data init;
	} cocci_id/* drivers/clk/clk-bm1880.c 98 */;
	struct platform_driver cocci_id/* drivers/clk/clk-bm1880.c 958 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-bm1880.c 952 */[];
	struct resource *cocci_id/* drivers/clk/clk-bm1880.c 896 */;
	struct device *cocci_id/* drivers/clk/clk-bm1880.c 895 */;
	struct bm1880_clock_data *cocci_id/* drivers/clk/clk-bm1880.c 893 */;
	struct platform_device *cocci_id/* drivers/clk/clk-bm1880.c 891 */;
	struct bm1880_div_clock {
		unsigned int id;
		const char *name;
		u32 reg;
		u8 shift;
		u8 width;
		u32 initval;
		const struct clk_div_table *table;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-bm1880.c 87 */;
	const char *cocci_id/* drivers/clk/clk-bm1880.c 781 */;
	const char *const*cocci_id/* drivers/clk/clk-bm1880.c 780 */;
	const struct clk_ops *cocci_id/* drivers/clk/clk-bm1880.c 779 */;
	struct clk_gate *cocci_id/* drivers/clk/clk-bm1880.c 776 */;
	struct clk_mux *cocci_id/* drivers/clk/clk-bm1880.c 775 */;
	struct bm1880_composite_clock *cocci_id/* drivers/clk/clk-bm1880.c 771 */;
	struct bm1880_mux_clock {
		unsigned int id;
		const char *name;
		const char *const*parents;
		s8 num_parents;
		u32 reg;
		s8 shift;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-bm1880.c 77 */;
	const struct bm1880_gate_clock *cocci_id/* drivers/clk/clk-bm1880.c 738 */;
	void cocci_id/* drivers/clk/clk-bm1880.c 699 */;
	struct bm1880_gate_clock {
		unsigned int id;
		const char *name;
		const char *parent;
		u32 gate_reg;
		s8 gate_shift;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-bm1880.c 68 */;
	int cocci_id/* drivers/clk/clk-bm1880.c 642 */;
	u32 cocci_id/* drivers/clk/clk-bm1880.c 628 */;
	unsigned long *cocci_id/* drivers/clk/clk-bm1880.c 621 */;
	long cocci_id/* drivers/clk/clk-bm1880.c 620 */;
	struct bm1880_clock_data {
		void __iomem *pll_base;
		void __iomem *sys_base;
		struct clk_hw_onecell_data hw_data;
	} cocci_id/* drivers/clk/clk-bm1880.c 62 */;
	unsigned int cocci_id/* drivers/clk/clk-bm1880.c 604 */;
	void __iomem *cocci_id/* drivers/clk/clk-bm1880.c 603 */;
	struct bm1880_div_clock *cocci_id/* drivers/clk/clk-bm1880.c 602 */;
	struct bm1880_div_hw_clock *cocci_id/* drivers/clk/clk-bm1880.c 601 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-bm1880.c 598 */;
	unsigned long cocci_id/* drivers/clk/clk-bm1880.c 598 */;
	struct bm1880_div_hw_clock cocci_id/* drivers/clk/clk-bm1880.c 58 */;
	struct bm1880_pll_hw_clock cocci_id/* drivers/clk/clk-bm1880.c 57 */;
	const struct bm1880_mux_clock *cocci_id/* drivers/clk/clk-bm1880.c 564 */;
	struct bm1880_pll_hw_clock *cocci_id/* drivers/clk/clk-bm1880.c 510 */;
	u64 cocci_id/* drivers/clk/clk-bm1880.c 476 */;
	struct bm1880_composite_clock cocci_id/* drivers/clk/clk-bm1880.c 398 */[];
	struct bm1880_div_hw_clock cocci_id/* drivers/clk/clk-bm1880.c 371 */[];
	const struct clk_div_table cocci_id/* drivers/clk/clk-bm1880.c 306 */[];
	const struct bm1880_mux_clock cocci_id/* drivers/clk/clk-bm1880.c 299 */[];
	const char *constcocci_id/* drivers/clk/clk-bm1880.c 294 */[];
	const struct bm1880_gate_clock cocci_id/* drivers/clk/clk-bm1880.c 220 */[];
	struct bm1880_pll_hw_clock cocci_id/* drivers/clk/clk-bm1880.c 205 */[];
	struct clk_parent_data cocci_id/* drivers/clk/clk-bm1880.c 197 */[];
	const struct clk_ops cocci_id/* drivers/clk/clk-bm1880.c 141 */;
	struct bm1880_pll_hw_clock {
		struct bm1880_pll_clock pll;
		void __iomem *base;
		struct clk_hw hw;
		struct clk_init_data init;
	} cocci_id/* drivers/clk/clk-bm1880.c 133 */;
	struct bm1880_pll_clock {
		unsigned int id;
		const char *name;
		u32 reg;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-bm1880.c 126 */;
	struct bm1880_composite_clock {
		unsigned int id;
		const char *name;
		const char *parent;
		const char *const*parents;
		unsigned int num_parents;
		unsigned long flags;
		u32 gate_reg;
		u32 mux_reg;
		u32 div_reg;
		s8 gate_shift;
		s8 mux_shift;
		s8 div_shift;
		s8 div_width;
		s16 div_initval;
		const struct clk_div_table *table;
	} cocci_id/* drivers/clk/clk-bm1880.c 106 */;
}
