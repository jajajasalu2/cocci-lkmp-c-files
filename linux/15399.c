cocci_test_suite() {
	u8 cocci_id/* drivers/watchdog/rave-sp-wdt.c 91 */;
	u8 cocci_id/* drivers/watchdog/rave-sp-wdt.c 74 */[];
	size_t cocci_id/* drivers/watchdog/rave-sp-wdt.c 66 */;
	void *cocci_id/* drivers/watchdog/rave-sp-wdt.c 65 */;
	struct rave_sp_wdt {
		struct watchdog_device wdd;
		struct rave_sp *sp;
		const struct rave_sp_wdt_variant *variant;
		struct notifier_block reboot_notifier;
	} cocci_id/* drivers/watchdog/rave-sp-wdt.c 53 */;
	struct rave_sp_wdt_variant {
		unsigned int max_timeout;
		unsigned int min_timeout;
		int (*configure)(struct watchdog_device *, bool);
		int (*restart)(struct watchdog_device *);
	} cocci_id/* drivers/watchdog/rave-sp-wdt.c 37 */;
	struct platform_driver cocci_id/* drivers/watchdog/rave-sp-wdt.c 320 */;
	__le16 cocci_id/* drivers/watchdog/rave-sp-wdt.c 259 */;
	struct nvmem_cell *cocci_id/* drivers/watchdog/rave-sp-wdt.c 258 */;
	struct rave_sp_wdt *cocci_id/* drivers/watchdog/rave-sp-wdt.c 257 */;
	struct device *cocci_id/* drivers/watchdog/rave-sp-wdt.c 255 */;
	struct platform_device *cocci_id/* drivers/watchdog/rave-sp-wdt.c 253 */;
	const struct of_device_id cocci_id/* drivers/watchdog/rave-sp-wdt.c 241 */[];
	const struct rave_sp_wdt_variant cocci_id/* drivers/watchdog/rave-sp-wdt.c 227 */;
	enum{RAVE_SP_RESET_BYTE=1, RAVE_SP_RESET_REASON_NORMAL=0, RAVE_SP_RESET_DELAY_MS=500,} cocci_id/* drivers/watchdog/rave-sp-wdt.c 22 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/rave-sp-wdt.c 218 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/rave-sp-wdt.c 213 */;
	unsigned int cocci_id/* drivers/watchdog/rave-sp-wdt.c 196 */;
	const int cocci_id/* drivers/watchdog/rave-sp-wdt.c 154 */;
	struct rave_sp_wdt cocci_id/* drivers/watchdog/rave-sp-wdt.c 152 */;
	unsigned long cocci_id/* drivers/watchdog/rave-sp-wdt.c 141 */;
	struct notifier_block *cocci_id/* drivers/watchdog/rave-sp-wdt.c 140 */;
	bool cocci_id/* drivers/watchdog/rave-sp-wdt.c 112 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/rave-sp-wdt.c 112 */;
	int cocci_id/* drivers/watchdog/rave-sp-wdt.c 112 */;
}
