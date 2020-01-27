cocci_test_suite() {
	struct watchdog_device *cocci_id/* drivers/watchdog/mena21_wdt.c 71 */;
	int cocci_id/* drivers/watchdog/mena21_wdt.c 44 */;
	struct a21_wdt_drv *cocci_id/* drivers/watchdog/mena21_wdt.c 42 */;
	unsigned int cocci_id/* drivers/watchdog/mena21_wdt.c 42 */;
	bool cocci_id/* drivers/watchdog/mena21_wdt.c 37 */;
	struct a21_wdt_drv {
		struct watchdog_device wdt;
		struct gpio_desc *gpios[NUM_GPIOS];
	} cocci_id/* drivers/watchdog/mena21_wdt.c 32 */;
	enum a21_wdt_gpios{GPIO_WD_ENAB, GPIO_WD_FAST, GPIO_WD_TRIG, GPIO_WD_RST0, GPIO_WD_RST1, GPIO_WD_RST2,} cocci_id/* drivers/watchdog/mena21_wdt.c 23 */;
	struct platform_driver cocci_id/* drivers/watchdog/mena21_wdt.c 214 */;
	const struct of_device_id cocci_id/* drivers/watchdog/mena21_wdt.c 208 */[];
	void cocci_id/* drivers/watchdog/mena21_wdt.c 201 */;
	enum gpiod_flags cocci_id/* drivers/watchdog/mena21_wdt.c 150 */;
	struct a21_wdt_drv cocci_id/* drivers/watchdog/mena21_wdt.c 137 */;
	struct device *cocci_id/* drivers/watchdog/mena21_wdt.c 130 */;
	struct platform_device *cocci_id/* drivers/watchdog/mena21_wdt.c 128 */;
	struct watchdog_device cocci_id/* drivers/watchdog/mena21_wdt.c 121 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/mena21_wdt.c 113 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/mena21_wdt.c 108 */;
}
