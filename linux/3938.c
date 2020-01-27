cocci_test_suite() {
	struct resource *cocci_id/* drivers/reset/reset-ath79.c 89 */;
	struct ath79_reset *cocci_id/* drivers/reset/reset-ath79.c 88 */;
	struct platform_device *cocci_id/* drivers/reset/reset-ath79.c 86 */;
	struct ath79_reset cocci_id/* drivers/reset/reset-ath79.c 79 */;
	void *cocci_id/* drivers/reset/reset-ath79.c 76 */;
	struct notifier_block *cocci_id/* drivers/reset/reset-ath79.c 75 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-ath79.c 69 */;
	u32 cocci_id/* drivers/reset/reset-ath79.c 62 */;
	unsigned long cocci_id/* drivers/reset/reset-ath79.c 46 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-ath79.c 45 */;
	int cocci_id/* drivers/reset/reset-ath79.c 45 */;
	bool cocci_id/* drivers/reset/reset-ath79.c 26 */;
	struct ath79_reset {
		struct reset_controller_dev rcdev;
		struct notifier_block restart_nb;
		void __iomem *base;
		spinlock_t lock;
	} cocci_id/* drivers/reset/reset-ath79.c 16 */;
	struct platform_driver cocci_id/* drivers/reset/reset-ath79.c 130 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-ath79.c 125 */[];
}
