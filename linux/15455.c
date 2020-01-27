cocci_test_suite() {
	struct wm831x_wdt_drvdata *cocci_id/* drivers/watchdog/wm831x_wdt.c 99 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/wm831x_wdt.c 97 */;
	int cocci_id/* drivers/watchdog/wm831x_wdt.c 97 */;
	struct {
		unsigned int time;
		u16 val;
	} cocci_id/* drivers/watchdog/wm831x_wdt.c 38 */[];
	struct wm831x_wdt_drvdata {
		struct watchdog_device wdt;
		struct wm831x *wm831x;
		struct mutex lock;
		int update_gpio;
		int update_state;
	} cocci_id/* drivers/watchdog/wm831x_wdt.c 28 */;
	struct platform_driver cocci_id/* drivers/watchdog/wm831x_wdt.c 273 */;
	bool cocci_id/* drivers/watchdog/wm831x_wdt.c 22 */;
	struct wm831x_watchdog_pdata *cocci_id/* drivers/watchdog/wm831x_wdt.c 186 */;
	struct wm831x_pdata *cocci_id/* drivers/watchdog/wm831x_wdt.c 185 */;
	struct device *cocci_id/* drivers/watchdog/wm831x_wdt.c 183 */;
	struct platform_device *cocci_id/* drivers/watchdog/wm831x_wdt.c 181 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/wm831x_wdt.c 173 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/wm831x_wdt.c 168 */;
	unsigned int cocci_id/* drivers/watchdog/wm831x_wdt.c 140 */;
	u16 cocci_id/* drivers/watchdog/wm831x_wdt.c 102 */;
	struct wm831x *cocci_id/* drivers/watchdog/wm831x_wdt.c 100 */;
}
