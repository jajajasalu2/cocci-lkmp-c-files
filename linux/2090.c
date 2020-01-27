cocci_test_suite() {
	u32 cocci_id/* drivers/power/reset/gpio-restart.c 55 */;
	bool cocci_id/* drivers/power/reset/gpio-restart.c 54 */;
	struct platform_device *cocci_id/* drivers/power/reset/gpio-restart.c 51 */;
	struct gpio_restart cocci_id/* drivers/power/reset/gpio-restart.c 30 */;
	struct gpio_restart *cocci_id/* drivers/power/reset/gpio-restart.c 29 */;
	void *cocci_id/* drivers/power/reset/gpio-restart.c 27 */;
	unsigned long cocci_id/* drivers/power/reset/gpio-restart.c 27 */;
	struct notifier_block *cocci_id/* drivers/power/reset/gpio-restart.c 26 */;
	int cocci_id/* drivers/power/reset/gpio-restart.c 26 */;
	struct gpio_restart {
		struct gpio_desc *reset_gpio;
		struct notifier_block restart_handler;
		u32 active_delay_ms;
		u32 inactive_delay_ms;
		u32 wait_delay_ms;
	} cocci_id/* drivers/power/reset/gpio-restart.c 18 */;
	struct platform_driver cocci_id/* drivers/power/reset/gpio-restart.c 127 */;
	const struct of_device_id cocci_id/* drivers/power/reset/gpio-restart.c 122 */[];
}
