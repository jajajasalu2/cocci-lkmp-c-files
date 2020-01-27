cocci_test_suite() {
	bool cocci_id/* fs/locks.c 797 */(struct file_lock *,
					  struct file_lock *);
	void cocci_id/* fs/locks.c 724 */;
	const struct lock_manager_operations cocci_id/* fs/locks.c 606 */;
	struct flock64 cocci_id/* fs/locks.c 571 */;
	long cocci_id/* fs/locks.c 504 */;
	struct file_lock_list_struct *cocci_id/* fs/locks.c 2982 */;
	struct file_lock_context cocci_id/* fs/locks.c 2976 */;
	int __init cocci_id/* fs/locks.c 2971 */;
	struct locks_iterator cocci_id/* fs/locks.c 2965 */;
	const struct seq_operations cocci_id/* fs/locks.c 2955 */;
	struct locks_iterator *cocci_id/* fs/locks.c 2942 */;
	loff_t *cocci_id/* fs/locks.c 2940 */;
	struct files_struct *cocci_id/* fs/locks.c 2893 */;
	struct file *cocci_id/* fs/locks.c 2893 */;
	struct list_head *cocci_id/* fs/locks.c 2892 */;
	int *cocci_id/* fs/locks.c 2892 */;
	struct seq_file *cocci_id/* fs/locks.c 2891 */;
	struct pid_namespace *cocci_id/* fs/locks.c 2798 */;
	loff_t cocci_id/* fs/locks.c 2794 */;
	char *cocci_id/* fs/locks.c 2794 */;
	struct locks_iterator {
		int li_cpu;
		loff_t li_pos;
	} cocci_id/* fs/locks.c 2788 */;
	fl_owner_t cocci_id/* fs/locks.c 2664 */;
	struct flock64 *cocci_id/* fs/locks.c 2532 */;
	struct kmem_cache *cocci_id/* fs/locks.c 246 */;
	struct flock *cocci_id/* fs/locks.c 2320 */;
	struct pid *cocci_id/* fs/locks.c 2263 */;
	pid_t cocci_id/* fs/locks.c 2260 */;
	struct fd cocci_id/* fs/locks.c 2190 */;
	void **cocci_id/* fs/locks.c 2099 */;
	struct fasync_struct *cocci_id/* fs/locks.c 2085 */;
	struct file_lock_list_struct {
		spinlock_t lock;
		struct hlist_head hlist;
	} cocci_id/* fs/locks.c 208 */;
	struct notifier_block *cocci_id/* fs/locks.c 2017 */;
	struct srcu_notifier_head cocci_id/* fs/locks.c 2002 */;
	void *cocci_id/* fs/locks.c 1921 */;
	struct file_lock **cocci_id/* fs/locks.c 1806 */;
	const long cocci_id/* fs/locks.c 1774 */;
	struct timespec64 *cocci_id/* fs/locks.c 1691 */;
	struct file_lock cocci_id/* fs/locks.c 1642 */;
	unsigned long cocci_id/* fs/locks.c 1583 */;
	struct file_lock *cocci_id/* fs/locks.c 1582 */;
	struct file_lock_context *cocci_id/* fs/locks.c 1581 */;
	struct inode *cocci_id/* fs/locks.c 1578 */;
	unsigned int cocci_id/* fs/locks.c 1578 */;
	int cocci_id/* fs/locks.c 1578 */;
	bool cocci_id/* fs/locks.c 1550 */;
	unsigned char cocci_id/* fs/locks.c 1421 */;
	__typeof__(struct file_lock_list_struct) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
