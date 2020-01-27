cocci_test_suite() {
	struct signalfd_siginfo cocci_id/* fs/signalfd.c 84 */;
	const kernel_siginfo_t *cocci_id/* fs/signalfd.c 82 */;
	struct signalfd_siginfo __user *cocci_id/* fs/signalfd.c 81 */;
	__poll_t cocci_id/* fs/signalfd.c 61 */;
	poll_table *cocci_id/* fs/signalfd.c 61 */;
	struct file *cocci_id/* fs/signalfd.c 61 */;
	struct inode *cocci_id/* fs/signalfd.c 55 */;
	struct signalfd_ctx {
		sigset_t sigmask;
	} cocci_id/* fs/signalfd.c 51 */;
	wait_queue_head_t *cocci_id/* fs/signalfd.c 38 */;
	struct sighand_struct *cocci_id/* fs/signalfd.c 36 */;
	void cocci_id/* fs/signalfd.c 36 */;
	compat_sigset_t cocci_id/* fs/signalfd.c 341 */;
	sigset_t cocci_id/* fs/signalfd.c 339 */;
	compat_size_t cocci_id/* fs/signalfd.c 337 */;
	const compat_sigset_t __user *cocci_id/* fs/signalfd.c 336 */;
	long cocci_id/* fs/signalfd.c 335 */;
	int cocci_id/* fs/signalfd.c 335 */;
	size_t cocci_id/* fs/signalfd.c 324 */;
	struct fd cocci_id/* fs/signalfd.c 293 */;
	struct signalfd_ctx *cocci_id/* fs/signalfd.c 265 */;
	sigset_t *cocci_id/* fs/signalfd.c 263 */;
	const struct file_operations cocci_id/* fs/signalfd.c 253 */;
	struct seq_file *cocci_id/* fs/signalfd.c 242 */;
	kernel_siginfo_t cocci_id/* fs/signalfd.c 219 */;
	loff_t *cocci_id/* fs/signalfd.c 213 */;
	char __user *cocci_id/* fs/signalfd.c 212 */;
	kernel_siginfo_t *cocci_id/* fs/signalfd.c 166 */;
	ssize_t cocci_id/* fs/signalfd.c 166 */;
	short cocci_id/* fs/signalfd.c 135 */;
	unsigned long cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 775 */;
}
