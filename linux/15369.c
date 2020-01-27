cocci_test_suite() {
	const struct watchdog_ops cocci_id/* drivers/watchdog/gpio_wdt.c 99 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/gpio_wdt.c 93 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/gpio_wdt.c 48 */;
	int cocci_id/* drivers/watchdog/gpio_wdt.c 48 */;
	struct gpio_wdt_priv *cocci_id/* drivers/watchdog/gpio_wdt.c 38 */;
	void cocci_id/* drivers/watchdog/gpio_wdt.c 38 */;
	struct gpio_wdt_priv {
		struct gpio_desc *gpiod;
		bool state;
		bool always_running;
		unsigned int hw_algo;
		struct watchdog_device wdd;
	} cocci_id/* drivers/watchdog/gpio_wdt.c 30 */;
	enum{HW_ALGO_TOGGLE, HW_ALGO_LEVEL,} cocci_id/* drivers/watchdog/gpio_wdt.c 25 */;
	int __init cocci_id/* drivers/watchdog/gpio_wdt.c 185 */;
	struct platform_driver cocci_id/* drivers/watchdog/gpio_wdt.c 176 */;
	const struct of_device_id cocci_id/* drivers/watchdog/gpio_wdt.c 170 */[];
	bool cocci_id/* drivers/watchdog/gpio_wdt.c 16 */;
	const char *cocci_id/* drivers/watchdog/gpio_wdt.c 113 */;
	unsigned int cocci_id/* drivers/watchdog/gpio_wdt.c 112 */;
	enum gpiod_flags cocci_id/* drivers/watchdog/gpio_wdt.c 111 */;
	struct device_node *cocci_id/* drivers/watchdog/gpio_wdt.c 109 */;
	struct device *cocci_id/* drivers/watchdog/gpio_wdt.c 108 */;
	struct platform_device *cocci_id/* drivers/watchdog/gpio_wdt.c 106 */;
}
