cocci_test_suite() {
	struct crashtype {
		const char *name;
		void (*func)(void);
	} cocci_id/* drivers/misc/lkdtm/core.c 91 */;
	struct crashpoint cocci_id/* drivers/misc/lkdtm/core.c 75 */[];
	struct crashpoint {
		const char *name;
		const struct file_operations fops;
		struct kprobe kprobe;
	} cocci_id/* drivers/misc/lkdtm/core.c 56 */;
	void __exit cocci_id/* drivers/misc/lkdtm/core.c 471 */;
	int __init cocci_id/* drivers/misc/lkdtm/core.c 395 */;
	struct dentry *cocci_id/* drivers/misc/lkdtm/core.c 393 */;
	int cocci_id/* drivers/misc/lkdtm/core.c 39 */(struct kprobe *kp,
						       struct pt_regs *regs);
	unsigned long cocci_id/* drivers/misc/lkdtm/core.c 374 */;
	const struct crashtype *cocci_id/* drivers/misc/lkdtm/core.c 362 */;
	loff_t *cocci_id/* drivers/misc/lkdtm/core.c 360 */;
	size_t cocci_id/* drivers/misc/lkdtm/core.c 360 */;
	const char __user *cocci_id/* drivers/misc/lkdtm/core.c 359 */;
	struct file *cocci_id/* drivers/misc/lkdtm/core.c 359 */;
	ssize_t cocci_id/* drivers/misc/lkdtm/core.c 359 */;
	struct inode *cocci_id/* drivers/misc/lkdtm/core.c 353 */;
	ssize_t cocci_id/* drivers/misc/lkdtm/core.c 35 */(struct file *f,
							   const char __user *user_buf,
							   size_t count,
							   loff_t *off);
	ssize_t cocci_id/* drivers/misc/lkdtm/core.c 33 */(struct file *f,
							   char __user *user_buf,
							   size_t count,
							   loff_t *off);
	char __user *cocci_id/* drivers/misc/lkdtm/core.c 329 */;
	int cocci_id/* drivers/misc/lkdtm/core.c 32 */(struct inode *inode,
						       struct file *file);
	bool cocci_id/* drivers/misc/lkdtm/core.c 267 */;
	struct pt_regs *cocci_id/* drivers/misc/lkdtm/core.c 264 */;
	void cocci_id/* drivers/misc/lkdtm/core.c 222 */;
	const char *cocci_id/* drivers/misc/lkdtm/core.c 206 */;
	int cocci_id/* drivers/misc/lkdtm/core.c 199 */;
	char *cocci_id/* drivers/misc/lkdtm/core.c 190 */;
	struct crashpoint *cocci_id/* drivers/misc/lkdtm/core.c 182 */;
	struct kprobe *cocci_id/* drivers/misc/lkdtm/core.c 181 */;
	const struct crashtype cocci_id/* drivers/misc/lkdtm/core.c 103 */[];
}
