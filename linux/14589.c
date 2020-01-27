cocci_test_suite() {
	struct pic32_sec_osc cocci_id/* drivers/clk/microchip/clk-core.c 958 */;
	struct pic32_periph_clk cocci_id/* drivers/clk/microchip/clk-core.c 95 */;
	struct pic32_sec_osc {
		struct clk_hw hw;
		void __iomem *enable_reg;
		void __iomem *status_reg;
		u32 enable_mask;
		u32 status_mask;
		unsigned long fixed_rate;
		struct pic32_clk_common *core;
	} cocci_id/* drivers/clk/microchip/clk-core.c 948 */;
	struct pic32_sys_clk *cocci_id/* drivers/clk/microchip/clk-core.c 926 */;
	const struct pic32_sys_clk_data *cocci_id/* drivers/clk/microchip/clk-core.c 923 */;
	struct pic32_periph_clk {
		struct clk_hw hw;
		void __iomem *ctrl_reg;
		struct pic32_clk_common *core;
	} cocci_id/* drivers/clk/microchip/clk-core.c 89 */;
	struct pic32_sys_clk cocci_id/* drivers/clk/microchip/clk-core.c 768 */;
	struct pic32_sys_clk {
		struct clk_hw hw;
		void __iomem *mux_reg;
		void __iomem *slew_reg;
		u32 slew_div;
		const u32 *parent_map;
		struct pic32_clk_common *core;
	} cocci_id/* drivers/clk/microchip/clk-core.c 759 */;
	struct pic32_sys_pll *cocci_id/* drivers/clk/microchip/clk-core.c 733 */;
	const struct pic32_sys_pll_data *cocci_id/* drivers/clk/microchip/clk-core.c 730 */;
	struct pic32_sys_pll cocci_id/* drivers/clk/microchip/clk-core.c 587 */;
	struct pic32_sys_pll {
		struct clk_hw hw;
		void __iomem *ctrl_reg;
		void __iomem *status_reg;
		u32 lock_mask;
		u32 idiv;
		struct pic32_clk_common *core;
	} cocci_id/* drivers/clk/microchip/clk-core.c 578 */;
	struct pic32_ref_osc *cocci_id/* drivers/clk/microchip/clk-core.c 559 */;
	const struct pic32_ref_osc_data *cocci_id/* drivers/clk/microchip/clk-core.c 556 */;
	unsigned int cocci_id/* drivers/clk/microchip/clk-core.c 389 */;
	struct clk_rate_request *cocci_id/* drivers/clk/microchip/clk-core.c 386 */;
	u64 cocci_id/* drivers/clk/microchip/clk-core.c 320 */;
	u32 *cocci_id/* drivers/clk/microchip/clk-core.c 317 */;
	u8 cocci_id/* drivers/clk/microchip/clk-core.c 275 */;
	struct pic32_ref_osc cocci_id/* drivers/clk/microchip/clk-core.c 245 */;
	struct pic32_ref_osc {
		struct clk_hw hw;
		void __iomem *ctrl_reg;
		const u32 *parent_map;
		struct pic32_clk_common *core;
	} cocci_id/* drivers/clk/microchip/clk-core.c 238 */;
	struct pic32_clk_common *cocci_id/* drivers/clk/microchip/clk-core.c 215 */;
	const struct pic32_periph_clk_data *cocci_id/* drivers/clk/microchip/clk-core.c 214 */;
	struct clk *cocci_id/* drivers/clk/microchip/clk-core.c 214 */;
	const struct clk_ops cocci_id/* drivers/clk/microchip/clk-core.c 205 */;
	unsigned long *cocci_id/* drivers/clk/microchip/clk-core.c 159 */;
	long cocci_id/* drivers/clk/microchip/clk-core.c 158 */;
	u32 cocci_id/* drivers/clk/microchip/clk-core.c 121 */;
	unsigned long cocci_id/* drivers/clk/microchip/clk-core.c 119 */;
	struct pic32_periph_clk *cocci_id/* drivers/clk/microchip/clk-core.c 114 */;
	struct clk_hw *cocci_id/* drivers/clk/microchip/clk-core.c 112 */;
	void cocci_id/* drivers/clk/microchip/clk-core.c 112 */;
	int cocci_id/* drivers/clk/microchip/clk-core.c 104 */;
	struct pic32_sec_osc *cocci_id/* drivers/clk/microchip/clk-core.c 1009 */;
	const struct pic32_sec_osc_data *cocci_id/* drivers/clk/microchip/clk-core.c 1006 */;
}
