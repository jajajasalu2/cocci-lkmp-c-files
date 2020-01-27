cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/power/reset/syscon-reboot-mode.c 75 */;
	const struct of_device_id cocci_id/* drivers/power/reset/syscon-reboot-mode.c 69 */[];
	struct syscon_reboot_mode *cocci_id/* drivers/power/reset/syscon-reboot-mode.c 42 */;
	struct platform_device *cocci_id/* drivers/power/reset/syscon-reboot-mode.c 39 */;
	int cocci_id/* drivers/power/reset/syscon-reboot-mode.c 39 */;
	struct syscon_reboot_mode cocci_id/* drivers/power/reset/syscon-reboot-mode.c 29 */;
	unsigned int cocci_id/* drivers/power/reset/syscon-reboot-mode.c 24 */;
	struct reboot_mode_driver *cocci_id/* drivers/power/reset/syscon-reboot-mode.c 23 */;
	struct syscon_reboot_mode {
		struct regmap *map;
		struct reboot_mode_driver reboot;
		u32 offset;
		u32 mask;
	} cocci_id/* drivers/power/reset/syscon-reboot-mode.c 16 */;
}
