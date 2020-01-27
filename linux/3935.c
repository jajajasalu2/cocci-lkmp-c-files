cocci_test_suite() {
	struct resource *cocci_id/* drivers/reset/reset-hsdk.c 95 */;
	struct platform_device *cocci_id/* drivers/reset/reset-hsdk.c 92 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-hsdk.c 87 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-hsdk.c 72 */;
	u32 cocci_id/* drivers/reset/reset-hsdk.c 59 */;
	int cocci_id/* drivers/reset/reset-hsdk.c 57 */;
	struct hsdk_rst *cocci_id/* drivers/reset/reset-hsdk.c 52 */;
	unsigned long cocci_id/* drivers/reset/reset-hsdk.c 52 */;
	void cocci_id/* drivers/reset/reset-hsdk.c 52 */;
	const u32 cocci_id/* drivers/reset/reset-hsdk.c 30 */[];
	struct hsdk_rst {
		void __iomem *regs_ctl;
		void __iomem *regs_rst;
		spinlock_t lock;
		struct reset_controller_dev rcdev;
	} cocci_id/* drivers/reset/reset-hsdk.c 23 */;
	struct hsdk_rst cocci_id/* drivers/reset/reset-hsdk.c 21 */;
	struct platform_driver cocci_id/* drivers/reset/reset-hsdk.c 127 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-hsdk.c 122 */[];
}
