cocci_test_suite() {
	u32 cocci_id/* drivers/watchdog/meson_wdt.c 90 */;
	struct meson_wdt_dev *cocci_id/* drivers/watchdog/meson_wdt.c 89 */;
	unsigned int cocci_id/* drivers/watchdog/meson_wdt.c 87 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/meson_wdt.c 86 */;
	void cocci_id/* drivers/watchdog/meson_wdt.c 86 */;
	int cocci_id/* drivers/watchdog/meson_wdt.c 77 */;
	void *cocci_id/* drivers/watchdog/meson_wdt.c 62 */;
	unsigned long cocci_id/* drivers/watchdog/meson_wdt.c 62 */;
	struct meson_wdt_dev {
		struct watchdog_device wdt_dev;
		void __iomem *wdt_base;
		const struct meson_wdt_data *data;
	} cocci_id/* drivers/watchdog/meson_wdt.c 55 */;
	struct meson_wdt_data cocci_id/* drivers/watchdog/meson_wdt.c 43 */;
	struct meson_wdt_data {
		unsigned int enable;
		unsigned int terminal_count_mask;
		unsigned int count_unit;
	} cocci_id/* drivers/watchdog/meson_wdt.c 37 */;
	bool cocci_id/* drivers/watchdog/meson_wdt.c 34 */;
	struct platform_driver cocci_id/* drivers/watchdog/meson_wdt.c 212 */;
	const struct of_device_id *cocci_id/* drivers/watchdog/meson_wdt.c 165 */;
	struct device *cocci_id/* drivers/watchdog/meson_wdt.c 163 */;
	struct platform_device *cocci_id/* drivers/watchdog/meson_wdt.c 161 */;
	const struct of_device_id cocci_id/* drivers/watchdog/meson_wdt.c 152 */[];
	const struct watchdog_ops cocci_id/* drivers/watchdog/meson_wdt.c 143 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/meson_wdt.c 136 */;
}
