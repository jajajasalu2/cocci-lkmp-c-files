cocci_test_suite() {
	struct lock_torture_cxt cocci_id/* kernel/locking/locktorture.c 98 */;
	struct lock_torture_cxt {
		int nrealwriters_stress;
		int nrealreaders_stress;
		bool debug_lock;
		atomic_t n_lock_torture_errors;
		struct lock_torture_ops *cur_ops;
		struct lock_stress_stats *lwsa;
		struct lock_stress_stats *lrsa;
	} cocci_id/* kernel/locking/locktorture.c 89 */;
	struct lock_torture_ops *cocci_id/* kernel/locking/locktorture.c 843 */[];
	int __init cocci_id/* kernel/locking/locktorture.c 839 */;
	const char *cocci_id/* kernel/locking/locktorture.c 775 */;
	struct lock_torture_ops *cocci_id/* kernel/locking/locktorture.c 774 */;
	struct lock_torture_ops {
		void (*init)(void);
		int (*writelock)(void);
		void (*write_delay)(struct torture_random_state *trsp);
		void (*task_boost)(struct torture_random_state *trsp);
		void (*writeunlock)(void);
		int (*readlock)(void);
		void (*read_delay)(struct torture_random_state *trsp);
		void (*readunlock)(void);
		unsigned long flags;
		const char *name;
	} cocci_id/* kernel/locking/locktorture.c 75 */;
	void cocci_id/* kernel/locking/locktorture.c 70 */(void);
	long long cocci_id/* kernel/locking/locktorture.c 692 */;
	long cocci_id/* kernel/locking/locktorture.c 691 */;
	int cocci_id/* kernel/locking/locktorture.c 690 */;
	bool cocci_id/* kernel/locking/locktorture.c 687 */;
	struct lock_stress_stats *cocci_id/* kernel/locking/locktorture.c 687 */;
	char *cocci_id/* kernel/locking/locktorture.c 686 */;
	void cocci_id/* kernel/locking/locktorture.c 686 */;
	void *cocci_id/* kernel/locking/locktorture.c 655 */;
	struct lock_stress_stats {
		long n_lock_fail;
		long n_lock_acquired;
	} cocci_id/* kernel/locking/locktorture.c 64 */;
	struct task_struct **cocci_id/* kernel/locking/locktorture.c 59 */;
	struct percpu_rw_semaphore cocci_id/* kernel/locking/locktorture.c 573 */;
	struct task_struct *cocci_id/* kernel/locking/locktorture.c 57 */;
	const unsigned int cocci_id/* kernel/locking/locktorture.c 441 */;
	struct sched_param cocci_id/* kernel/locking/locktorture.c 440 */;
	struct ww_acquire_ctx cocci_id/* kernel/locking/locktorture.c 372 */;
	struct reorder_lock {
		struct list_head link;
		struct ww_mutex *lock;
	} cocci_id/* kernel/locking/locktorture.c 368 */[3];
	unsigned long cocci_id/* kernel/locking/locktorture.c 294 */;
	struct lock_torture_ops cocci_id/* kernel/locking/locktorture.c 132 */;
	struct torture_random_state *cocci_id/* kernel/locking/locktorture.c 127 */;
	const unsigned long cocci_id/* kernel/locking/locktorture.c 112 */;
}
