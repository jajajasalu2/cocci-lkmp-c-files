cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/reset/reset-axs10x.c 73 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-axs10x.c 68 */[];
	struct resource *cocci_id/* drivers/reset/reset-axs10x.c 47 */;
	struct axs10x_rst *cocci_id/* drivers/reset/reset-axs10x.c 46 */;
	struct platform_device *cocci_id/* drivers/reset/reset-axs10x.c 44 */;
	int cocci_id/* drivers/reset/reset-axs10x.c 44 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-axs10x.c 40 */;
	unsigned long cocci_id/* drivers/reset/reset-axs10x.c 28 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-axs10x.c 27 */;
	struct axs10x_rst {
		void __iomem *regs_rst;
		spinlock_t lock;
		struct reset_controller_dev rcdev;
	} cocci_id/* drivers/reset/reset-axs10x.c 21 */;
	struct axs10x_rst cocci_id/* drivers/reset/reset-axs10x.c 17 */;
}
