cocci_test_suite() {
	int cocci_id/* drivers/xen/manage.c 99 */;
	struct suspend_info *cocci_id/* drivers/xen/manage.c 64 */;
	struct suspend_info {
		int cancelled;
	} cocci_id/* drivers/xen/manage.c 43 */;
	enum shutdown_state cocci_id/* drivers/xen/manage.c 41 */;
	char cocci_id/* drivers/xen/manage.c 333 */[FEATURE_PATH_SIZE];
	struct notifier_block cocci_id/* drivers/xen/manage.c 324 */;
	struct xenbus_watch cocci_id/* drivers/xen/manage.c 319 */;
	enum shutdown_state{SHUTDOWN_INVALID=-1, SHUTDOWN_POWEROFF=0, SHUTDOWN_SUSPEND=2, SHUTDOWN_HALT=4,} cocci_id/* drivers/xen/manage.c 29 */;
	char cocci_id/* drivers/xen/manage.c 271 */;
	struct xenbus_transaction cocci_id/* drivers/xen/manage.c 223 */;
	char *cocci_id/* drivers/xen/manage.c 222 */;
	const char *cocci_id/* drivers/xen/manage.c 220 */;
	struct xenbus_watch *cocci_id/* drivers/xen/manage.c 219 */;
	struct shutdown_handler cocci_id/* drivers/xen/manage.c 210 */[];
	void cocci_id/* drivers/xen/manage.c 187 */;
	struct notifier_block *cocci_id/* drivers/xen/manage.c 175 */;
	void *cocci_id/* drivers/xen/manage.c 175 */;
	unsigned long cocci_id/* drivers/xen/manage.c 175 */;
	struct shutdown_handler {
#define SHUTDOWN_CMD_SIZE 11
		const char command[SHUTDOWN_CMD_SIZE];
		bool flag;
		void (*cb)(void);
	} cocci_id/* drivers/xen/manage.c 168 */;
	struct suspend_info cocci_id/* drivers/xen/manage.c 100 */;
}
