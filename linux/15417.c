cocci_test_suite() {
	bool cocci_id/* drivers/watchdog/kempld_wdt.c 98 */;
	struct kempld_wdt_data {
		struct kempld_device_data *pld;
		struct watchdog_device wdd;
		unsigned int pretimeout;
		struct kempld_wdt_stage stage[KEMPLD_WDT_MAX_STAGES];
#ifdef CONFIG_PM
		u8 pm_status_store;
#endif
	} cocci_id/* drivers/watchdog/kempld_wdt.c 73 */;
	struct kempld_wdt_stage {
		unsigned int id;
		u32 mask;
	} cocci_id/* drivers/watchdog/kempld_wdt.c 68 */;
	const u32 cocci_id/* drivers/watchdog/kempld_wdt.c 61 */[];
	enum{PRESCALER_21=0, PRESCALER_17, PRESCALER_12,} cocci_id/* drivers/watchdog/kempld_wdt.c 55 */;
	struct platform_driver cocci_id/* drivers/watchdog/kempld_wdt.c 539 */;
	pm_message_t cocci_id/* drivers/watchdog/kempld_wdt.c 501 */;
	enum{STAGE_TIMEOUT=0, STAGE_PRETIMEOUT,} cocci_id/* drivers/watchdog/kempld_wdt.c 50 */;
	struct device *cocci_id/* drivers/watchdog/kempld_wdt.c 440 */;
	struct platform_device *cocci_id/* drivers/watchdog/kempld_wdt.c 436 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/kempld_wdt.c 427 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/kempld_wdt.c 419 */;
	enum{ACTION_NONE=0, ACTION_RESET, ACTION_NMI, ACTION_SMI, ACTION_SCI, ACTION_DELAY,} cocci_id/* drivers/watchdog/kempld_wdt.c 41 */;
	int __user *cocci_id/* drivers/watchdog/kempld_wdt.c 344 */;
	int cocci_id/* drivers/watchdog/kempld_wdt.c 343 */;
	void __user *cocci_id/* drivers/watchdog/kempld_wdt.c 342 */;
	unsigned long cocci_id/* drivers/watchdog/kempld_wdt.c 339 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/kempld_wdt.c 338 */;
	long cocci_id/* drivers/watchdog/kempld_wdt.c 338 */;
	void cocci_id/* drivers/watchdog/kempld_wdt.c 258 */;
	u8 cocci_id/* drivers/watchdog/kempld_wdt.c 179 */;
	u32 cocci_id/* drivers/watchdog/kempld_wdt.c 177 */;
	u64 cocci_id/* drivers/watchdog/kempld_wdt.c 176 */;
	struct kempld_device_data *cocci_id/* drivers/watchdog/kempld_wdt.c 174 */;
	struct kempld_wdt_stage *cocci_id/* drivers/watchdog/kempld_wdt.c 172 */;
	struct kempld_wdt_data *cocci_id/* drivers/watchdog/kempld_wdt.c 171 */;
	unsigned int cocci_id/* drivers/watchdog/kempld_wdt.c 171 */;
}
