cocci_test_suite() {
	void cocci_id/* drivers/watchdog/mtx-1_wdt.c 79 */;
	struct timer_list *cocci_id/* drivers/watchdog/mtx-1_wdt.c 62 */;
	struct {
		struct completion stop;
		spinlock_t lock;
		int running;
		struct timer_list timer;
		int queue;
		int default_ticks;
		unsigned long inuse;
		struct gpio_desc *gpiod;
		unsigned int gstate;
	} cocci_id/* drivers/watchdog/mtx-1_wdt.c 50 */;
	struct platform_driver cocci_id/* drivers/watchdog/mtx-1_wdt.c 238 */;
	struct platform_device *cocci_id/* drivers/watchdog/mtx-1_wdt.c 198 */;
	struct miscdevice cocci_id/* drivers/watchdog/mtx-1_wdt.c 191 */;
	const struct file_operations cocci_id/* drivers/watchdog/mtx-1_wdt.c 180 */;
	loff_t *cocci_id/* drivers/watchdog/mtx-1_wdt.c 172 */;
	size_t cocci_id/* drivers/watchdog/mtx-1_wdt.c 172 */;
	const char *cocci_id/* drivers/watchdog/mtx-1_wdt.c 171 */;
	ssize_t cocci_id/* drivers/watchdog/mtx-1_wdt.c 171 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/mtx-1_wdt.c 137 */;
	int __user *cocci_id/* drivers/watchdog/mtx-1_wdt.c 135 */;
	void __user *cocci_id/* drivers/watchdog/mtx-1_wdt.c 134 */;
	unsigned long cocci_id/* drivers/watchdog/mtx-1_wdt.c 132 */;
	struct file *cocci_id/* drivers/watchdog/mtx-1_wdt.c 131 */;
	unsigned int cocci_id/* drivers/watchdog/mtx-1_wdt.c 131 */;
	long cocci_id/* drivers/watchdog/mtx-1_wdt.c 131 */;
	struct inode *cocci_id/* drivers/watchdog/mtx-1_wdt.c 117 */;
	int cocci_id/* drivers/watchdog/mtx-1_wdt.c 117 */;
}
