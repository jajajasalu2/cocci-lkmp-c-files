cocci_test_suite() {
	const struct meson_reset_param cocci_id/* drivers/reset/reset-meson.c 90 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-meson.c 84 */;
	unsigned long cocci_id/* drivers/reset/reset-meson.c 73 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-meson.c 72 */;
	int cocci_id/* drivers/reset/reset-meson.c 72 */;
	u32 cocci_id/* drivers/reset/reset-meson.c 55 */;
	void __iomem *cocci_id/* drivers/reset/reset-meson.c 53 */;
	unsigned int cocci_id/* drivers/reset/reset-meson.c 51 */;
	struct meson_reset cocci_id/* drivers/reset/reset-meson.c 50 */;
	struct meson_reset *cocci_id/* drivers/reset/reset-meson.c 49 */;
	bool cocci_id/* drivers/reset/reset-meson.c 47 */;
	struct meson_reset {
		void __iomem *reg_base;
		const struct meson_reset_param *param;
		struct reset_controller_dev rcdev;
		spinlock_t lock;
	} cocci_id/* drivers/reset/reset-meson.c 25 */;
	struct meson_reset_param {
		int reg_count;
		int level_offset;
	} cocci_id/* drivers/reset/reset-meson.c 20 */;
	struct platform_driver cocci_id/* drivers/reset/reset-meson.c 138 */;
	struct resource *cocci_id/* drivers/reset/reset-meson.c 111 */;
	struct platform_device *cocci_id/* drivers/reset/reset-meson.c 108 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-meson.c 100 */[];
}
