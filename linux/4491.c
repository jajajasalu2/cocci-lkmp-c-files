cocci_test_suite() {
	long cocci_id/* drivers/char/dtlk.c 98 */(struct file *file,
						  unsigned int cmd,
						  unsigned long arg);
	int cocci_id/* drivers/char/dtlk.c 96 */(struct inode *,
						 struct file *);
	__poll_t cocci_id/* drivers/char/dtlk.c 95 */(struct file *,
						      poll_table *);
	ssize_t cocci_id/* drivers/char/dtlk.c 93 */(struct file *,
						     const char __user *,
						     size_t nbytes,
						     loff_t *ppos);
	ssize_t cocci_id/* drivers/char/dtlk.c 91 */(struct file *,
						     char __user *,
						     size_t nbytes,
						     loff_t *ppos);
	wait_queue_head_t cocci_id/* drivers/char/dtlk.c 87 */;
	unsigned int cocci_id/* drivers/char/dtlk.c 85 */[];
	int cocci_id/* drivers/char/dtlk.c 83 */;
	void cocci_id/* drivers/char/dtlk.c 78 */(struct timer_list *unused);
	const char *cocci_id/* drivers/char/dtlk.c 621 */;
	struct dtlk_settings cocci_id/* drivers/char/dtlk.c 516 */;
	char cocci_id/* drivers/char/dtlk.c 514 */[sizeof(struct dtlk_settings) + 1];
	unsigned char *cocci_id/* drivers/char/dtlk.c 513 */;
	char cocci_id/* drivers/char/dtlk.c 443 */[1000];
	struct dtlk_settings *cocci_id/* drivers/char/dtlk.c 394 */;
	unsigned int cocci_id/* drivers/char/dtlk.c 392 */;
	int __init cocci_id/* drivers/char/dtlk.c 390 */;
	void __exit cocci_id/* drivers/char/dtlk.c 355 */;
	void cocci_id/* drivers/char/dtlk.c 355 */;
	struct inode *cocci_id/* drivers/char/dtlk.c 298 */;
	char cocci_id/* drivers/char/dtlk.c 275 */;
	char __user *cocci_id/* drivers/char/dtlk.c 273 */;
	unsigned long cocci_id/* drivers/char/dtlk.c 271 */;
	struct file *cocci_id/* drivers/char/dtlk.c 269 */;
	long cocci_id/* drivers/char/dtlk.c 269 */;
	struct timer_list *cocci_id/* drivers/char/dtlk.c 263 */;
	__poll_t cocci_id/* drivers/char/dtlk.c 232 */;
	poll_table *cocci_id/* drivers/char/dtlk.c 232 */;
	const char __user *cocci_id/* drivers/char/dtlk.c 159 */;
	loff_t *cocci_id/* drivers/char/dtlk.c 127 */;
	size_t cocci_id/* drivers/char/dtlk.c 127 */;
	ssize_t cocci_id/* drivers/char/dtlk.c 126 */;
	char cocci_id/* drivers/char/dtlk.c 121 */(char);
	char cocci_id/* drivers/char/dtlk.c 120 */(const char *buf, int n);
	char cocci_id/* drivers/char/dtlk.c 117 */(void);
	struct dtlk_settings *cocci_id/* drivers/char/dtlk.c 115 */(void);
	int cocci_id/* drivers/char/dtlk.c 114 */(void);
	const struct file_operations cocci_id/* drivers/char/dtlk.c 101 */;
}
