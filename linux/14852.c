cocci_test_suite() {
	int cocci_id/* drivers/clk/clk-stm32f4.c 998 */;
	struct stm32_rgate *cocci_id/* drivers/clk/clk-stm32f4.c 966 */;
	unsigned int cocci_id/* drivers/clk/clk-stm32f4.c 924 */;
	struct clk_gate *cocci_id/* drivers/clk/clk-stm32f4.c 921 */;
	struct stm32_rgate {
		struct clk_gate gate;
		u8 bit_rdy_idx;
	} cocci_id/* drivers/clk/clk-stm32f4.c 912 */;
	struct stm32_rgate cocci_id/* drivers/clk/clk-stm32f4.c 889 */;
	struct of_phandle_args *cocci_id/* drivers/clk/clk-stm32f4.c 879 */;
	void *cocci_id/* drivers/clk/clk-stm32f4.c 879 */;
	u64 cocci_id/* drivers/clk/clk-stm32f4.c 853 */[MAX_GATE_MAP];
	const struct stm32f4_vco_data *cocci_id/* drivers/clk/clk-stm32f4.c 798 */;
	const struct stm32f4_pll_data *cocci_id/* drivers/clk/clk-stm32f4.c 790 */;
	struct stm32f4_pll_div *cocci_id/* drivers/clk/clk-stm32f4.c 751 */;
	spinlock_t *cocci_id/* drivers/clk/clk-stm32f4.c 749 */;
	const struct clk_div_table *cocci_id/* drivers/clk/clk-stm32f4.c 748 */;
	struct clk_divider *cocci_id/* drivers/clk/clk-stm32f4.c 723 */;
	struct stm32f4_pll_div cocci_id/* drivers/clk/clk-stm32f4.c 704 */;
	struct stm32f4_pll_div {
		struct clk_divider div;
		struct clk_hw *hw_pll;
	} cocci_id/* drivers/clk/clk-stm32f4.c 699 */;
	struct stm32f4_pll *cocci_id/* drivers/clk/clk-stm32f4.c 612 */;
	const struct stm32f4_pll_data cocci_id/* drivers/clk/clk-stm32f4.c 590 */[MAX_PLL_DIV];
	struct stm32f4_pll_data {
		u8 pll_num;
		u8 n_start;
		const char *div_name[MAX_PLL_DIV];
	} cocci_id/* drivers/clk/clk-stm32f4.c 584 */;
	const struct stm32f4_div_data cocci_id/* drivers/clk/clk-stm32f4.c 578 */[MAX_PLL_DIV];
	struct stm32f4_div_data {
		u8 shift;
		u8 width;
		u8 flag_div;
		const struct clk_div_table *div_table;
	} cocci_id/* drivers/clk/clk-stm32f4.c 570 */;
	const struct stm32f4_pll_post_div_data cocci_id/* drivers/clk/clk-stm32f4.c 559 */[MAX_POST_DIV];
	const struct stm32f4_gate_data cocci_id/* drivers/clk/clk-stm32f4.c 55 */[]__initconst;
	const struct stm32f4_vco_data cocci_id/* drivers/clk/clk-stm32f4.c 547 */[];
	struct stm32f4_vco_data {
		const char *vco_name;
		u8 offset;
		u8 bit_idx;
		u8 bit_rdy_idx;
	} cocci_id/* drivers/clk/clk-stm32f4.c 540 */;
	struct stm32f4_pll_post_div_data {
		int idx;
		u8 pll_num;
		const char *name;
		const char *parent;
		u8 flag;
		u8 offset;
		u8 shift;
		u8 width;
		u8 flag_div;
		const struct clk_div_table *div_table;
	} cocci_id/* drivers/clk/clk-stm32f4.c 527 */;
	struct stm32f4_pll cocci_id/* drivers/clk/clk-stm32f4.c 525 */;
	struct stm32f4_pll {
		spinlock_t *lock;
		struct clk_gate gate;
		u8 offset;
		u8 bit_rdy_idx;
		u8 status;
		u8 n_start;
	} cocci_id/* drivers/clk/clk-stm32f4.c 516 */;
	enum{PLL, PLL_I2S, PLL_SAI,} cocci_id/* drivers/clk/clk-stm32f4.c 495 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-stm32f4.c 471 */;
	struct stm32f4_gate_data {
		u8 offset;
		u8 bit_idx;
		const char *name;
		const char *parent_name;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-stm32f4.c 47 */;
	const char *cocci_id/* drivers/clk/clk-stm32f4.c 466 */;
	struct device *cocci_id/* drivers/clk/clk-stm32f4.c 466 */;
	struct clk *cocci_id/* drivers/clk/clk-stm32f4.c 466 */;
	unsigned long *cocci_id/* drivers/clk/clk-stm32f4.c 431 */;
	long cocci_id/* drivers/clk/clk-stm32f4.c 430 */;
	struct clk_apb_mul *cocci_id/* drivers/clk/clk-stm32f4.c 422 */;
	unsigned long cocci_id/* drivers/clk/clk-stm32f4.c 419 */;
	struct clk_apb_mul cocci_id/* drivers/clk/clk-stm32f4.c 417 */;
	struct clk_apb_mul {
		struct clk_hw hw;
		u8 bit_idx;
	} cocci_id/* drivers/clk/clk-stm32f4.c 412 */;
	struct regmap *cocci_id/* drivers/clk/clk-stm32f4.c 400 */;
	void __iomem *cocci_id/* drivers/clk/clk-stm32f4.c 398 */;
	struct clk_hw **cocci_id/* drivers/clk/clk-stm32f4.c 395 */;
	const u64 *cocci_id/* drivers/clk/clk-stm32f4.c 393 */;
	const u64 cocci_id/* drivers/clk/clk-stm32f4.c 377 */[MAX_GATE_MAP];
	const struct stm32_aux_clk *cocci_id/* drivers/clk/clk-stm32f4.c 1869 */;
	const struct stm32f4_gate_data *cocci_id/* drivers/clk/clk-stm32f4.c 1812 */;
	const struct stm32f4_pll_post_div_data *cocci_id/* drivers/clk/clk-stm32f4.c 1764 */;
	const struct stm32f4_clk_data *cocci_id/* drivers/clk/clk-stm32f4.c 1693 */;
	const struct of_device_id *cocci_id/* drivers/clk/clk-stm32f4.c 1692 */;
	struct device_node *cocci_id/* drivers/clk/clk-stm32f4.c 1688 */;
	void __init cocci_id/* drivers/clk/clk-stm32f4.c 1688 */;
	const struct clk_ops *cocci_id/* drivers/clk/clk-stm32f4.c 1636 */;
	struct clk_mux *cocci_id/* drivers/clk/clk-stm32f4.c 1634 */;
	const char *const *cocci_id/* drivers/clk/clk-stm32f4.c 1627 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-stm32f4.c 1606 */[];
	const struct stm32f4_clk_data cocci_id/* drivers/clk/clk-stm32f4.c 1566 */;
	const struct stm32_aux_clk cocci_id/* drivers/clk/clk-stm32f4.c 1177 */[];
	struct stm32f4_clk_data {
		const struct stm32f4_gate_data *gates_data;
		const u64 *gates_map;
		int gates_num;
		const struct stm32f4_pll_data *pll_data;
		const struct stm32_aux_clk *aux_clk;
		int aux_clk_num;
		int end_primary;
	} cocci_id/* drivers/clk/clk-stm32f4.c 1167 */;
	struct stm32_aux_clk {
		int idx;
		const char *name;
		const char *const *parent_names;
		int num_parents;
		int offset_mux;
		u8 shift;
		u8 mask;
		int offset_gate;
		u8 bit_idx;
		unsigned long flags;
	} cocci_id/* drivers/clk/clk-stm32f4.c 1154 */;
	const char *const cocci_id/* drivers/clk/clk-stm32f4.c 1152 */[];
	const char *cocci_id/* drivers/clk/clk-stm32f4.c 1149 */[4];
	const char *cocci_id/* drivers/clk/clk-stm32f4.c 1129 */[1];
	const char *cocci_id/* drivers/clk/clk-stm32f4.c 1127 */[2];
	const struct clk_div_table cocci_id/* drivers/clk/clk-stm32f4.c 1105 */[];
	const char *cocci_id/* drivers/clk/clk-stm32f4.c 1103 */[]__initdata;
	u8 cocci_id/* drivers/clk/clk-stm32f4.c 1031 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-stm32f4.c 1025 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-stm32f4.c 1011 */;
	void cocci_id/* drivers/clk/clk-stm32f4.c 1011 */;
}
