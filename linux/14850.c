cocci_test_suite() {
	bool cocci_id/* drivers/clk/versatile/clk-sp810.c 91 */;
	struct clk_init_data cocci_id/* drivers/clk/versatile/clk-sp810.c 88 */;
	char cocci_id/* drivers/clk/versatile/clk-sp810.c 87 */[12];
	int cocci_id/* drivers/clk/versatile/clk-sp810.c 86 */;
	const char *cocci_id/* drivers/clk/versatile/clk-sp810.c 85 */[2];
	struct clk_sp810 *cocci_id/* drivers/clk/versatile/clk-sp810.c 84 */;
	struct device_node *cocci_id/* drivers/clk/versatile/clk-sp810.c 82 */;
	void __init cocci_id/* drivers/clk/versatile/clk-sp810.c 82 */;
	void *cocci_id/* drivers/clk/versatile/clk-sp810.c 71 */;
	struct of_phandle_args *cocci_id/* drivers/clk/versatile/clk-sp810.c 70 */;
	struct clk *cocci_id/* drivers/clk/versatile/clk-sp810.c 70 */;
	const struct clk_ops cocci_id/* drivers/clk/versatile/clk-sp810.c 65 */;
	unsigned long cocci_id/* drivers/clk/versatile/clk-sp810.c 48 */;
	u32 cocci_id/* drivers/clk/versatile/clk-sp810.c 38 */;
	struct clk_sp810_timerclken *cocci_id/* drivers/clk/versatile/clk-sp810.c 37 */;
	u8 cocci_id/* drivers/clk/versatile/clk-sp810.c 35 */;
	struct clk_hw *cocci_id/* drivers/clk/versatile/clk-sp810.c 35 */;
	struct clk_sp810 {
		struct device_node *node;
		void __iomem *base;
		spinlock_t lock;
		struct clk_sp810_timerclken timerclken[4];
	} cocci_id/* drivers/clk/versatile/clk-sp810.c 28 */;
	struct clk_sp810_timerclken {
		struct clk_hw hw;
		struct clk *clk;
		struct clk_sp810 *sp810;
		int channel;
	} cocci_id/* drivers/clk/versatile/clk-sp810.c 21 */;
	struct clk_sp810 cocci_id/* drivers/clk/versatile/clk-sp810.c 19 */;
	struct clk_sp810_timerclken cocci_id/* drivers/clk/versatile/clk-sp810.c 17 */;
}
