cocci_test_suite() {
	const struct {
		u8 reg_val;
		unsigned int time;
	} cocci_id/* drivers/watchdog/rn5t618_wdt.c 37 */[];
	struct rn5t618_wdt {
		struct watchdog_device wdt_dev;
		struct rn5t618 *rn5t618;
	} cocci_id/* drivers/watchdog/rn5t618_wdt.c 26 */;
	struct platform_driver cocci_id/* drivers/watchdog/rn5t618_wdt.c 181 */;
	bool cocci_id/* drivers/watchdog/rn5t618_wdt.c 16 */;
	struct rn5t618_wdt cocci_id/* drivers/watchdog/rn5t618_wdt.c 148 */;
	struct rn5t618 *cocci_id/* drivers/watchdog/rn5t618_wdt.c 144 */;
	struct device *cocci_id/* drivers/watchdog/rn5t618_wdt.c 143 */;
	struct platform_device *cocci_id/* drivers/watchdog/rn5t618_wdt.c 141 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/rn5t618_wdt.c 133 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/rn5t618_wdt.c 127 */;
	unsigned int cocci_id/* drivers/watchdog/rn5t618_wdt.c 110 */;
	struct rn5t618_wdt *cocci_id/* drivers/watchdog/rn5t618_wdt.c 109 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/rn5t618_wdt.c 107 */;
	int cocci_id/* drivers/watchdog/rn5t618_wdt.c 107 */;
}
