cocci_test_suite() {
	const struct pclk_t cocci_id/* drivers/clk/clk-stm32h7.c 998 */[];
	struct pclk_t {
		u32 gate_offset;
		u8 bit_idx;
		const char *name;
		const char *parent;
		u32 flags;
	} cocci_id/* drivers/clk/clk-stm32h7.c 978 */;
	const struct composite_clk_cfg cocci_id/* drivers/clk/clk-stm32h7.c 955 */[3][3];
	struct gate_cfg cocci_id/* drivers/clk/clk-stm32h7.c 943 */;
	struct muxdiv_cfg cocci_id/* drivers/clk/clk-stm32h7.c 942 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-stm32h7.c 876 */;
	unsigned long *cocci_id/* drivers/clk/clk-stm32h7.c 849 */;
	long cocci_id/* drivers/clk/clk-stm32h7.c 848 */;
	struct stm32_fractional_divider *cocci_id/* drivers/clk/clk-stm32h7.c 793 */;
	struct stm32_pll_obj *cocci_id/* drivers/clk/clk-stm32h7.c 789 */;
	const struct st32h7_pll_cfg *cocci_id/* drivers/clk/clk-stm32h7.c 786 */;
	u64 cocci_id/* drivers/clk/clk-stm32h7.c 750 */;
	struct stm32_pll_obj cocci_id/* drivers/clk/clk-stm32h7.c 694 */;
	struct stm32_pll_obj {
		spinlock_t *lock;
		struct stm32_fractional_divider div;
		struct stm32_ready_gate rgate;
		struct clk_hw hw;
	} cocci_id/* drivers/clk/clk-stm32h7.c 687 */;
	struct stm32_fractional_divider {
		void __iomem *mreg;
		u8 mshift;
		u8 mwidth;
		u32 mmask;
		void __iomem *nreg;
		u8 nshift;
		u8 nwidth;
		void __iomem *freg_status;
		u8 freg_bit;
		void __iomem *freg_value;
		u8 fshift;
		u8 fwidth;
		u8 flags;
		struct clk_hw hw;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/clk-stm32h7.c 666 */;
	const struct stm32_pll_data cocci_id/* drivers/clk/clk-stm32h7.c 660 */[];
	const struct st32h7_pll_cfg cocci_id/* drivers/clk/clk-stm32h7.c 636 */;
	struct stm32_pll_data {
		const char *name;
		const char *parent_name;
		unsigned long flags;
		const struct st32h7_pll_cfg *cfg;
	} cocci_id/* drivers/clk/clk-stm32h7.c 629 */;
	struct st32h7_pll_cfg {
		u8 bit_idx;
		u32 offset_divr;
		u8 bit_frac_en;
		u32 offset_frac;
		u8 divm;
	} cocci_id/* drivers/clk/clk-stm32h7.c 621 */;
	const struct stm32_osc_clk cocci_id/* drivers/clk/clk-stm32h7.c 611 */[]__initconst;
	struct stm32_osc_clk {
		const char *name;
		const char *parent;
		u32 gate_offset;
		u8 bit_idx;
		u8 bit_rdy;
		u32 flags;
	} cocci_id/* drivers/clk/clk-stm32h7.c 589 */;
	const struct stm32_mux_clk cocci_id/* drivers/clk/clk-stm32h7.c 581 */[]__initconst;
	struct stm32_mux_clk {
		const char *name;
		const char *const*parents;
		u8 num_parents;
		u32 offset;
		u8 shift;
		u8 width;
		u32 flags;
	} cocci_id/* drivers/clk/clk-stm32h7.c 557 */;
	struct clk_hw **cocci_id/* drivers/clk/clk-stm32h7.c 53 */;
	const struct clk_div_table cocci_id/* drivers/clk/clk-stm32h7.c 495 */[];
	struct timer_ker *cocci_id/* drivers/clk/clk-stm32h7.c 465 */;
	struct timer_ker cocci_id/* drivers/clk/clk-stm32h7.c 429 */;
	struct timer_ker {
		u8 dppre_shift;
		struct clk_hw hw;
		spinlock_t *lock;
	} cocci_id/* drivers/clk/clk-stm32h7.c 423 */;
	const struct clk_ops *cocci_id/* drivers/clk/clk-stm32h7.c 366 */;
	struct composite_cfg *cocci_id/* drivers/clk/clk-stm32h7.c 361 */;
	const struct composite_clk_cfg *cocci_id/* drivers/clk/clk-stm32h7.c 360 */;
	const struct composite_clk_gcfg *cocci_id/* drivers/clk/clk-stm32h7.c 359 */;
	void cocci_id/* drivers/clk/clk-stm32h7.c 359 */;
	struct composite_cfg {
		struct clk_hw *mux_hw;
		struct clk_hw *div_hw;
		struct clk_hw *gate_hw;
		const struct clk_ops *mux_ops;
		const struct clk_ops *div_ops;
		const struct clk_ops *gate_ops;
	} cocci_id/* drivers/clk/clk-stm32h7.c 349 */;
	struct clk_gate *cocci_id/* drivers/clk/clk-stm32h7.c 332 */;
	u32 cocci_id/* drivers/clk/clk-stm32h7.c 314 */;
	spinlock_t *cocci_id/* drivers/clk/clk-stm32h7.c 314 */;
	u8 cocci_id/* drivers/clk/clk-stm32h7.c 313 */;
	struct clk_divider *cocci_id/* drivers/clk/clk-stm32h7.c 313 */;
	void __iomem *cocci_id/* drivers/clk/clk-stm32h7.c 313 */;
	struct clk_mux *cocci_id/* drivers/clk/clk-stm32h7.c 295 */;
	struct composite_clk_gcfg {
		struct composite_clk_gcfg_t *mux;
		struct composite_clk_gcfg_t *div;
		struct composite_clk_gcfg_t *gate;
	} cocci_id/* drivers/clk/clk-stm32h7.c 280 */;
	struct composite_clk_gcfg_t {
		u8 flags;
		const struct clk_ops *ops;
	} cocci_id/* drivers/clk/clk-stm32h7.c 272 */;
	struct composite_clk_cfg {
		struct gate_cfg *gate;
		struct muxdiv_cfg *mux;
		struct muxdiv_cfg *div;
		const char *name;
		const char *const*parent_name;
		int num_parents;
		u32 flags;
	} cocci_id/* drivers/clk/clk-stm32h7.c 262 */;
	struct muxdiv_cfg {
		u32 offset;
		u8 shift;
		u8 width;
	} cocci_id/* drivers/clk/clk-stm32h7.c 256 */;
	struct gate_cfg {
		u32 offset;
		u8 bit_idx;
	} cocci_id/* drivers/clk/clk-stm32h7.c 251 */;
	int cocci_id/* drivers/clk/clk-stm32h7.c 223 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-stm32h7.c 221 */;
	struct stm32_ready_gate *cocci_id/* drivers/clk/clk-stm32h7.c 220 */;
	unsigned long cocci_id/* drivers/clk/clk-stm32h7.c 218 */;
	const char *cocci_id/* drivers/clk/clk-stm32h7.c 216 */;
	struct device *cocci_id/* drivers/clk/clk-stm32h7.c 215 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-stm32h7.c 215 */;
	unsigned int cocci_id/* drivers/clk/clk-stm32h7.c 193 */;
	struct stm32_ready_gate cocci_id/* drivers/clk/clk-stm32h7.c 155 */;
	struct stm32_ready_gate {
		struct clk_gate gate;
		u8 bit_rdy;
	} cocci_id/* drivers/clk/clk-stm32h7.c 150 */;
	const char *constcocci_id/* drivers/clk/clk-stm32h7.c 128 */[];
	const char *cocci_id/* drivers/clk/clk-stm32h7.c 125 */[5];
	struct regmap *cocci_id/* drivers/clk/clk-stm32h7.c 1202 */;
	struct composite_cfg cocci_id/* drivers/clk/clk-stm32h7.c 1199 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk-stm32h7.c 1198 */;
	struct device_node *cocci_id/* drivers/clk/clk-stm32h7.c 1196 */;
	void __init cocci_id/* drivers/clk/clk-stm32h7.c 1196 */;
	const struct composite_clk_cfg cocci_id/* drivers/clk/clk-stm32h7.c 1169 */;
	struct composite_clk_gcfg cocci_id/* drivers/clk/clk-stm32h7.c 1149 */;
	const struct composite_clk_cfg cocci_id/* drivers/clk/clk-stm32h7.c 1094 */[];
}
