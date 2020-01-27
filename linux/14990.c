cocci_test_suite() {
	struct clk_bcm63xx_table_entry {
		const char *const name;
		u8 bit;
		unsigned long flags;
	} cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 9 */;
	struct platform_driver cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 228 */;
	const struct clk_bcm63xx_table_entry cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 22 */[];
	const struct of_device_id cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 218 */[];
	struct clk_hw *cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 177 */;
	struct clk_bcm63xx_hw {
		void __iomem *regs;
		spinlock_t lock;
		struct clk_hw_onecell_data data;
	} cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 15 */;
	u8 cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 149 */;
	struct clk_bcm63xx_hw *cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 148 */;
	const struct clk_bcm63xx_table_entry *cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 147 */;
	struct platform_device *cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 145 */;
	int cocci_id/* drivers/clk/bcm/clk-bcm63xx-gate.c 145 */;
}
