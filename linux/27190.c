cocci_test_suite() {
	void cocci_id/* fs/dlm/plock.c 507 */;
	struct miscdevice cocci_id/* fs/dlm/plock.c 485 */;
	const struct file_operations cocci_id/* fs/dlm/plock.c 477 */;
	__poll_t cocci_id/* fs/dlm/plock.c 463 */;
	poll_table *cocci_id/* fs/dlm/plock.c 463 */;
	struct file *cocci_id/* fs/dlm/plock.c 463 */;
	unsigned long long cocci_id/* fs/dlm/plock.c 459 */;
	struct dlm_plock_info *cocci_id/* fs/dlm/plock.c 44 */;
	int cocci_id/* fs/dlm/plock.c 44 */;
	struct plock_xop *cocci_id/* fs/dlm/plock.c 439 */;
	const char __user *cocci_id/* fs/dlm/plock.c 418 */;
	struct plock_op cocci_id/* fs/dlm/plock.c 392 */;
	struct plock_op *cocci_id/* fs/dlm/plock.c 385 */;
	struct dlm_plock_info cocci_id/* fs/dlm/plock.c 384 */;
	loff_t *cocci_id/* fs/dlm/plock.c 382 */;
	char __user *cocci_id/* fs/dlm/plock.c 381 */;
	ssize_t cocci_id/* fs/dlm/plock.c 381 */;
	size_t cocci_id/* fs/dlm/plock.c 381 */;
	long cocci_id/* fs/dlm/plock.c 342 */;
	__u64 cocci_id/* fs/dlm/plock.c 340 */;
	struct dlm_ls *cocci_id/* fs/dlm/plock.c 318 */;
	u64 cocci_id/* fs/dlm/plock.c 315 */;
	dlm_lockspace_t *cocci_id/* fs/dlm/plock.c 315 */;
	struct plock_xop {
		struct plock_op xop;
		int (*callback)(struct file_lock *fl, int result);
		void *fl;
		void *file;
		struct file_lock flc;
	} cocci_id/* fs/dlm/plock.c 28 */;
	unsigned char cocci_id/* fs/dlm/plock.c 247 */;
	struct plock_op {
		struct list_head list;
		int done;
		struct dlm_plock_info info;
	} cocci_id/* fs/dlm/plock.c 22 */;
	wait_queue_head_t cocci_id/* fs/dlm/plock.c 20 */;
	int (*cocci_id/* fs/dlm/plock.c 190 */)(struct file_lock *fl,
						int result);
	struct file_lock *cocci_id/* fs/dlm/plock.c 188 */;
	struct list_head cocci_id/* fs/dlm/plock.c 18 */;
	spinlock_t cocci_id/* fs/dlm/plock.c 16 */;
}
