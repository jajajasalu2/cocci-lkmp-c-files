cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/reset/syscon-reboot.c 90 */;
	const struct of_device_id cocci_id/* drivers/power/reset/syscon-reboot.c 85 */[];
	struct device *cocci_id/* drivers/power/reset/syscon-reboot.c 45 */;
	struct syscon_reboot_context *cocci_id/* drivers/power/reset/syscon-reboot.c 44 */;
	struct platform_device *cocci_id/* drivers/power/reset/syscon-reboot.c 42 */;
	int cocci_id/* drivers/power/reset/syscon-reboot.c 42 */;
	struct syscon_reboot_context cocci_id/* drivers/power/reset/syscon-reboot.c 30 */;
	void *cocci_id/* drivers/power/reset/syscon-reboot.c 27 */;
	unsigned long cocci_id/* drivers/power/reset/syscon-reboot.c 27 */;
	struct notifier_block *cocci_id/* drivers/power/reset/syscon-reboot.c 26 */;
	struct syscon_reboot_context {
		struct regmap *map;
		u32 offset;
		u32 value;
		u32 mask;
		struct notifier_block restart_handler;
	} cocci_id/* drivers/power/reset/syscon-reboot.c 18 */;
}
