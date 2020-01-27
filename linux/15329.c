cocci_test_suite() {
	struct watchdog_core_data cocci_id/* drivers/watchdog/watchdog_dev.c 986 */;
	struct class cocci_id/* drivers/watchdog/watchdog_dev.c 966 */;
	struct miscdevice cocci_id/* drivers/watchdog/watchdog_dev.c 960 */;
	const struct file_operations cocci_id/* drivers/watchdog/watchdog_dev.c 951 */;
	unsigned cocci_id/* drivers/watchdog/watchdog_dev.c 86 */;
	bool cocci_id/* drivers/watchdog/watchdog_dev.c 83 */;
	struct inode *cocci_id/* drivers/watchdog/watchdog_dev.c 824 */;
	struct kthread_worker *cocci_id/* drivers/watchdog/watchdog_dev.c 81 */;
	dev_t cocci_id/* drivers/watchdog/watchdog_dev.c 77 */;
	struct watchdog_info cocci_id/* drivers/watchdog/watchdog_dev.c 736 */;
	int __user *cocci_id/* drivers/watchdog/watchdog_dev.c 717 */;
	void __user *cocci_id/* drivers/watchdog/watchdog_dev.c 715 */;
	unsigned long cocci_id/* drivers/watchdog/watchdog_dev.c 712 */;
	struct file *cocci_id/* drivers/watchdog/watchdog_dev.c 711 */;
	long cocci_id/* drivers/watchdog/watchdog_dev.c 711 */;
	char cocci_id/* drivers/watchdog/watchdog_dev.c 667 */;
	loff_t *cocci_id/* drivers/watchdog/watchdog_dev.c 661 */;
	const char __user *cocci_id/* drivers/watchdog/watchdog_dev.c 660 */;
	const struct attribute_group cocci_id/* drivers/watchdog/watchdog_dev.c 621 */;
	struct attribute *cocci_id/* drivers/watchdog/watchdog_dev.c 607 */[];
	struct watchdog_core_data {
		struct device dev;
		struct cdev cdev;
		struct watchdog_device *wdd;
		struct mutex lock;
		ktime_t last_keepalive;
		ktime_t last_hw_keepalive;
		ktime_t open_deadline;
		struct hrtimer timer;
		struct kthread_work work;
		unsigned long status;
#define _WDOG_DEV_OPEN 0
#define _WDOG_ALLOW_RELEASE 1
#define _WDOG_KEEPALIVE 2
	} cocci_id/* drivers/watchdog/watchdog_dev.c 60 */;
	struct device cocci_id/* drivers/watchdog/watchdog_dev.c 590 */;
	umode_t cocci_id/* drivers/watchdog/watchdog_dev.c 587 */;
	struct kobject *cocci_id/* drivers/watchdog/watchdog_dev.c 587 */;
	struct attribute *cocci_id/* drivers/watchdog/watchdog_dev.c 587 */;
	struct device_attribute *cocci_id/* drivers/watchdog/watchdog_dev.c 492 */;
	char *cocci_id/* drivers/watchdog/watchdog_dev.c 492 */;
	struct device *cocci_id/* drivers/watchdog/watchdog_dev.c 491 */;
	ssize_t cocci_id/* drivers/watchdog/watchdog_dev.c 491 */;
	unsigned int cocci_id/* drivers/watchdog/watchdog_dev.c 460 */;
	const char *cocci_id/* drivers/watchdog/watchdog_dev.c 457 */;
	size_t cocci_id/* drivers/watchdog/watchdog_dev.c 457 */;
	unsigned int *cocci_id/* drivers/watchdog/watchdog_dev.c 435 */;
	enum hrtimer_restart cocci_id/* drivers/watchdog/watchdog_dev.c 246 */;
	struct hrtimer *cocci_id/* drivers/watchdog/watchdog_dev.c 246 */;
	struct kthread_work *cocci_id/* drivers/watchdog/watchdog_dev.c 234 */;
	ktime_t cocci_id/* drivers/watchdog/watchdog_dev.c 170 */;
	struct watchdog_core_data *cocci_id/* drivers/watchdog/watchdog_dev.c 169 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/watchdog_dev.c 167 */;
	int cocci_id/* drivers/watchdog/watchdog_dev.c 167 */;
	void __exit cocci_id/* drivers/watchdog/watchdog_dev.c 1216 */;
	struct sched_param cocci_id/* drivers/watchdog/watchdog_dev.c 1180 */;
	int __init cocci_id/* drivers/watchdog/watchdog_dev.c 1177 */;
	struct watchdog_device cocci_id/* drivers/watchdog/watchdog_dev.c 1105 */;
	void *cocci_id/* drivers/watchdog/watchdog_dev.c 1101 */;
	struct notifier_block *cocci_id/* drivers/watchdog/watchdog_dev.c 1100 */;
	void cocci_id/* drivers/watchdog/watchdog_dev.c 1074 */;
}
