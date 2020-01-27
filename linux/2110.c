cocci_test_suite() {
	ktime_t cocci_id/* drivers/power/reset/ltc2952-poweroff.c 95 */;
	struct ltc2952_poweroff *cocci_id/* drivers/power/reset/ltc2952-poweroff.c 82 */;
	struct ltc2952_poweroff cocci_id/* drivers/power/reset/ltc2952-poweroff.c 76 */;
	struct ltc2952_poweroff {
		struct hrtimer timer_trigger;
		struct hrtimer timer_wde;
		ktime_t trigger_delay;
		ktime_t wde_interval;
		struct device *dev;
		struct gpio_desc *gpio_trigger;
		struct gpio_desc *gpio_watchdog;
		struct gpio_desc *gpio_kill;
		bool kernel_panic;
		struct notifier_block panic_notifier;
	} cocci_id/* drivers/power/reset/ltc2952-poweroff.c 59 */;
	struct platform_driver cocci_id/* drivers/power/reset/ltc2952-poweroff.c 301 */;
	const struct of_device_id cocci_id/* drivers/power/reset/ltc2952-poweroff.c 295 */[];
	unsigned long cocci_id/* drivers/power/reset/ltc2952-poweroff.c 242 */;
	struct notifier_block *cocci_id/* drivers/power/reset/ltc2952-poweroff.c 241 */;
	struct platform_device *cocci_id/* drivers/power/reset/ltc2952-poweroff.c 173 */;
	void cocci_id/* drivers/power/reset/ltc2952-poweroff.c 161 */;
	irqreturn_t cocci_id/* drivers/power/reset/ltc2952-poweroff.c 138 */;
	void *cocci_id/* drivers/power/reset/ltc2952-poweroff.c 138 */;
	int cocci_id/* drivers/power/reset/ltc2952-poweroff.c 138 */;
	struct hrtimer *cocci_id/* drivers/power/reset/ltc2952-poweroff.c 118 */;
	enum hrtimer_restart cocci_id/* drivers/power/reset/ltc2952-poweroff.c 117 */;
}
