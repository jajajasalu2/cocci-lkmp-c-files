cocci_test_suite() {
	unsigned int cocci_id/* drivers/clk/renesas/clk-mstp.c 81 */;
	unsigned long cocci_id/* drivers/clk/renesas/clk-mstp.c 80 */;
	struct mstp_clock_group *cocci_id/* drivers/clk/renesas/clk-mstp.c 78 */;
	struct mstp_clock *cocci_id/* drivers/clk/renesas/clk-mstp.c 77 */;
	bool cocci_id/* drivers/clk/renesas/clk-mstp.c 75 */;
	u32 __iomem *cocci_id/* drivers/clk/renesas/clk-mstp.c 64 */;
	struct mstp_clock cocci_id/* drivers/clk/renesas/clk-mstp.c 61 */;
	struct mstp_clock {
		struct clk_hw hw;
		u32 bit_index;
		struct mstp_clock_group *group;
	} cocci_id/* drivers/clk/renesas/clk-mstp.c 55 */;
	struct mstp_clock_group {
		struct clk_onecell_data data;
		void __iomem *smstpcr;
		void __iomem *mstpsr;
		spinlock_t lock;
		bool width_8bit;
		struct clk *clks[];
	} cocci_id/* drivers/clk/renesas/clk-mstp.c 40 */;
	u32 cocci_id/* drivers/clk/renesas/clk-mstp.c 323 */;
	struct generic_pm_domain *cocci_id/* drivers/clk/renesas/clk-mstp.c 322 */;
	struct device_node *cocci_id/* drivers/clk/renesas/clk-mstp.c 320 */;
	void __init cocci_id/* drivers/clk/renesas/clk-mstp.c 320 */;
	struct clk *cocci_id/* drivers/clk/renesas/clk-mstp.c 270 */;
	struct of_phandle_args cocci_id/* drivers/clk/renesas/clk-mstp.c 269 */;
	struct device *cocci_id/* drivers/clk/renesas/clk-mstp.c 266 */;
	int cocci_id/* drivers/clk/renesas/clk-mstp.c 266 */;
	struct clk **cocci_id/* drivers/clk/renesas/clk-mstp.c 188 */;
	struct clk_init_data cocci_id/* drivers/clk/renesas/clk-mstp.c 153 */;
	const char *cocci_id/* drivers/clk/renesas/clk-mstp.c 149 */;
	struct clk *__initcocci_id/* drivers/clk/renesas/clk-mstp.c 149 */;
	const struct clk_ops cocci_id/* drivers/clk/renesas/clk-mstp.c 143 */;
	struct clk_hw *cocci_id/* drivers/clk/renesas/clk-mstp.c 124 */;
	void cocci_id/* drivers/clk/renesas/clk-mstp.c 124 */;
}
