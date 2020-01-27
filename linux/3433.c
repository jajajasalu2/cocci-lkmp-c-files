cocci_test_suite() {
	struct adb_handler {
		void (*handler)(unsigned char *, int, int);
		int original_address;
		int handler_id;
		int busy;
	} cocci_id/* drivers/macintosh/adb.c 93 */[16];
	int cocci_id/* drivers/macintosh/adb.c 91 */(int, int);
	void cocci_id/* drivers/macintosh/adb.c 90 */(void);
	void __init cocci_id/* drivers/macintosh/adb.c 883 */;
	int cocci_id/* drivers/macintosh/adb.c 88 */(void);
	int __init cocci_id/* drivers/macintosh/adb.c 875 */;
	struct platform_device cocci_id/* drivers/macintosh/adb.c 871 */;
	struct platform_driver cocci_id/* drivers/macintosh/adb.c 862 */;
	int cocci_id/* drivers/macintosh/adb.c 86 */;
	const struct dev_pm_ops cocci_id/* drivers/macintosh/adb.c 851 */;
	const struct file_operations cocci_id/* drivers/macintosh/adb.c 841 */;
	struct adb_driver *cocci_id/* drivers/macintosh/adb.c 79 */;
	const char __user *cocci_id/* drivers/macintosh/adb.c 772 */;
	struct class *cocci_id/* drivers/macintosh/adb.c 77 */;
	struct adb_request *cocci_id/* drivers/macintosh/adb.c 719 */;
	loff_t *cocci_id/* drivers/macintosh/adb.c 715 */;
	size_t cocci_id/* drivers/macintosh/adb.c 715 */;
	char __user *cocci_id/* drivers/macintosh/adb.c 714 */;
	ssize_t cocci_id/* drivers/macintosh/adb.c 714 */;
	struct adbdev_state cocci_id/* drivers/macintosh/adb.c 675 */;
	struct adbdev_state *cocci_id/* drivers/macintosh/adb.c 667 */;
	struct inode *cocci_id/* drivers/macintosh/adb.c 665 */;
	struct file *cocci_id/* drivers/macintosh/adb.c 665 */;
	struct adb_request **cocci_id/* drivers/macintosh/adb.c 633 */;
	struct adbdev_state {
		spinlock_t lock;
		atomic_t n_pending;
		struct adb_request *completed;
		wait_queue_head_t wait_queue;
		int inuse;
	} cocci_id/* drivers/macintosh/adb.c 606 */;
	int *cocci_id/* drivers/macintosh/adb.c 589 */;
	struct adb_driver *cocci_id/* drivers/macintosh/adb.c 58 */[];
	struct adb_driver cocci_id/* drivers/macintosh/adb.c 53 */;
	void (*cocci_id/* drivers/macintosh/adb.c 526 */)(unsigned char *,
							  int, int);
	unsigned long cocci_id/* drivers/macintosh/adb.c 524 */;
	unsigned char *cocci_id/* drivers/macintosh/adb.c 520 */;
	struct adb_ids *cocci_id/* drivers/macintosh/adb.c 470 */;
	struct completion cocci_id/* drivers/macintosh/adb.c 426 */;
	va_list cocci_id/* drivers/macintosh/adb.c 423 */;
	void (*cocci_id/* drivers/macintosh/adb.c 420 */)(struct adb_request *);
	struct completion *cocci_id/* drivers/macintosh/adb.c 414 */;
	int __init cocci_id/* drivers/macintosh/adb.c 307 */;
	struct platform_device *cocci_id/* drivers/macintosh/adb.c 292 */;
	struct device *cocci_id/* drivers/macintosh/adb.c 279 */;
	pm_message_t cocci_id/* drivers/macintosh/adb.c 261 */;
	struct work_struct *cocci_id/* drivers/macintosh/adb.c 237 */;
	void cocci_id/* drivers/macintosh/adb.c 236 */;
	void *cocci_id/* drivers/macintosh/adb.c 225 */;
	struct adb_request cocci_id/* drivers/macintosh/adb.c 129 */;
}
