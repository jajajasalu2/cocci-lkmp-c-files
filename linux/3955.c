cocci_test_suite() {
	unsigned long cocci_id/* drivers/reset/reset-lpc18xx.c 91 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-lpc18xx.c 90 */;
	int cocci_id/* drivers/reset/reset-lpc18xx.c 90 */;
	bool cocci_id/* drivers/reset/reset-lpc18xx.c 67 */;
	struct lpc18xx_rgu_data cocci_id/* drivers/reset/reset-lpc18xx.c 47 */;
	void *cocci_id/* drivers/reset/reset-lpc18xx.c 45 */;
	struct notifier_block *cocci_id/* drivers/reset/reset-lpc18xx.c 44 */;
	struct lpc18xx_rgu_data {
		struct reset_controller_dev rcdev;
		struct notifier_block restart_nb;
		struct clk *clk_delay;
		struct clk *clk_reg;
		void __iomem *base;
		spinlock_t lock;
		u32 delay_us;
	} cocci_id/* drivers/reset/reset-lpc18xx.c 32 */;
	struct platform_driver cocci_id/* drivers/reset/reset-lpc18xx.c 222 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-lpc18xx.c 217 */[];
	u32 cocci_id/* drivers/reset/reset-lpc18xx.c 143 */;
	struct resource *cocci_id/* drivers/reset/reset-lpc18xx.c 142 */;
	struct lpc18xx_rgu_data *cocci_id/* drivers/reset/reset-lpc18xx.c 141 */;
	struct platform_device *cocci_id/* drivers/reset/reset-lpc18xx.c 139 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-lpc18xx.c 132 */;
}
