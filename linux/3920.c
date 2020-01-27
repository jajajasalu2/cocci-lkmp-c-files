cocci_test_suite() {
	struct gb_svc_watchdog cocci_id/* drivers/greybus/svc_watchdog.c 69 */;
	int cocci_id/* drivers/greybus/svc_watchdog.c 67 */;
	struct gb_svc *cocci_id/* drivers/greybus/svc_watchdog.c 66 */;
	struct gb_svc_watchdog *cocci_id/* drivers/greybus/svc_watchdog.c 65 */;
	struct work_struct *cocci_id/* drivers/greybus/svc_watchdog.c 63 */;
	void cocci_id/* drivers/greybus/svc_watchdog.c 63 */;
	char *cocci_id/* drivers/greybus/svc_watchdog.c 53 */;
	char *cocci_id/* drivers/greybus/svc_watchdog.c 47 */[];
	const char cocci_id/* drivers/greybus/svc_watchdog.c 46 */[];
	void *cocci_id/* drivers/greybus/svc_watchdog.c 25 */;
	unsigned long cocci_id/* drivers/greybus/svc_watchdog.c 25 */;
	struct notifier_block *cocci_id/* drivers/greybus/svc_watchdog.c 24 */;
	struct delayed_work cocci_id/* drivers/greybus/svc_watchdog.c 22 */;
	bool cocci_id/* drivers/greybus/svc_watchdog.c 160 */;
	struct gb_svc_watchdog {
		struct delayed_work work;
		struct gb_svc *svc;
		bool enabled;
		struct notifier_block pm_notifier;
	} cocci_id/* drivers/greybus/svc_watchdog.c 15 */;
}
