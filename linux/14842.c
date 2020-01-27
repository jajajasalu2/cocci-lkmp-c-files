cocci_test_suite() {
	struct clk_hw *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 95 */;
	void cocci_id/* drivers/clk/ux500/clk-sysctrl.c 50 */;
	struct clk_sysctrl {
		struct clk_hw hw;
		struct device *dev;
		u8 parent_index;
		u16 reg_sel[SYSCTRL_MAX_NUM_PARENTS];
		u8 reg_mask[SYSCTRL_MAX_NUM_PARENTS];
		u8 reg_bits[SYSCTRL_MAX_NUM_PARENTS];
		unsigned long rate;
		unsigned long enable_delay_us;
	} cocci_id/* drivers/clk/ux500/clk-sysctrl.c 22 */;
	struct clk_sysctrl cocci_id/* drivers/clk/ux500/clk-sysctrl.c 20 */;
	u16 cocci_id/* drivers/clk/ux500/clk-sysctrl.c 180 */;
	int cocci_id/* drivers/clk/ux500/clk-sysctrl.c 132 */;
	struct clk_init_data cocci_id/* drivers/clk/ux500/clk-sysctrl.c 130 */;
	struct clk_sysctrl *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 129 */;
	const struct clk_ops *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 127 */;
	unsigned long cocci_id/* drivers/clk/ux500/clk-sysctrl.c 124 */;
	u8 *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 122 */;
	u16 *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 121 */;
	u8 cocci_id/* drivers/clk/ux500/clk-sysctrl.c 120 */;
	const char **cocci_id/* drivers/clk/ux500/clk-sysctrl.c 119 */;
	const char *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 118 */;
	struct device *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 117 */;
	struct clk *cocci_id/* drivers/clk/ux500/clk-sysctrl.c 117 */;
	const struct clk_ops cocci_id/* drivers/clk/ux500/clk-sysctrl.c 106 */;
}
