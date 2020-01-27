cocci_test_suite() {
	struct clk_wzrd *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 78 */;
	struct clk_notifier_data *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 77 */;
	void *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 74 */;
	struct notifier_block *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 73 */;
	unsigned long cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 73 */;
	int cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 73 */;
	const unsigned long cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 67 */[];
	struct clk_wzrd cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 64 */;
	struct clk_wzrd {
		struct clk_onecell_data clk_data;
		struct notifier_block nb;
		void __iomem *base;
		struct clk *clk_in1;
		struct clk *axi_clk;
		struct clk *clks_internal[wzrd_clk_int_max];
		struct clk *clkout[WZRD_NUM_OUTPUTS];
		unsigned int speed_grade;
		bool suspended;
	} cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 52 */;
	enum clk_wzrd_int_clks{wzrd_clk_mul, wzrd_clk_mul_div, wzrd_clk_int_max,} cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 34 */;
	struct platform_driver cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 320 */;
	const struct of_device_id cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 314 */[];
	struct device_node *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 138 */;
	const char *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 136 */;
	u32 cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 134 */;
	struct platform_device *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 131 */;
	struct device *cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 112 */;
	int __maybe_unused cocci_id/* drivers/staging/clocking-wizard/clk-xlnx-clock-wizard.c 112 */;
}
