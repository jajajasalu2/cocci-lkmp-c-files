cocci_test_suite() {
	unsigned int cocci_id/* drivers/watchdog/da9052_wdt.c 50 */;
	const struct {
		u8 reg_val;
		int time;
	} cocci_id/* drivers/watchdog/da9052_wdt.c 33 */[];
	struct da9052_wdt_data {
		struct watchdog_device wdt;
		struct da9052 *da9052;
		unsigned long jpast;
	} cocci_id/* drivers/watchdog/da9052_wdt.c 27 */;
	struct platform_driver cocci_id/* drivers/watchdog/da9052_wdt.c 182 */;
	struct device *cocci_id/* drivers/watchdog/da9052_wdt.c 153 */;
	struct platform_device *cocci_id/* drivers/watchdog/da9052_wdt.c 151 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/da9052_wdt.c 142 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/da9052_wdt.c 137 */;
	unsigned long cocci_id/* drivers/watchdog/da9052_wdt.c 112 */;
	struct da9052 *cocci_id/* drivers/watchdog/da9052_wdt.c 111 */;
	struct da9052_wdt_data *cocci_id/* drivers/watchdog/da9052_wdt.c 110 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/da9052_wdt.c 108 */;
	int cocci_id/* drivers/watchdog/da9052_wdt.c 108 */;
}
