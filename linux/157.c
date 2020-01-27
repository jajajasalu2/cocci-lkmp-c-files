cocci_test_suite() {
	unsigned long cocci_id/* kernel/locking/test-ww_mutex.c 70 */;
	void __exit cocci_id/* kernel/locking/test-ww_mutex.c 625 */;
	int __init cocci_id/* kernel/locking/test-ww_mutex.c 581 */;
	void (*cocci_id/* kernel/locking/test-ww_mutex.c 538 */)(struct work_struct *work);
	struct ww_mutex *cocci_id/* kernel/locking/test-ww_mutex.c 526 */;
	struct ww_acquire_ctx cocci_id/* kernel/locking/test-ww_mutex.c 52 */;
	struct test_mutex cocci_id/* kernel/locking/test-ww_mutex.c 51 */;
	struct reorder_lock *cocci_id/* kernel/locking/test-ww_mutex.c 442 */;
	struct reorder_lock {
		struct list_head link;
		struct ww_mutex *lock;
	} cocci_id/* kernel/locking/test-ww_mutex.c 432 */;
	const int cocci_id/* kernel/locking/test-ww_mutex.c 381 */;
	typeof(*stress) cocci_id/* kernel/locking/test-ww_mutex.c 380 */;
	struct work_struct *cocci_id/* kernel/locking/test-ww_mutex.c 378 */;
	struct stress *cocci_id/* kernel/locking/test-ww_mutex.c 373 */;
	void cocci_id/* kernel/locking/test-ww_mutex.c 373 */;
	int *cocci_id/* kernel/locking/test-ww_mutex.c 349 */;
	struct stress {
		struct work_struct work;
		struct ww_mutex *locks;
		unsigned long timeout;
		int nlocks;
	} cocci_id/* kernel/locking/test-ww_mutex.c 342 */;
	typeof(*mtx) cocci_id/* kernel/locking/test-ww_mutex.c 33 */;
	struct test_mutex *cocci_id/* kernel/locking/test-ww_mutex.c 33 */;
	struct test_cycle *cocci_id/* kernel/locking/test-ww_mutex.c 277 */;
	unsigned int cocci_id/* kernel/locking/test-ww_mutex.c 275 */;
	int cocci_id/* kernel/locking/test-ww_mutex.c 275 */;
	typeof(*cycle) cocci_id/* kernel/locking/test-ww_mutex.c 248 */;
	struct test_cycle {
		struct work_struct work;
		struct ww_mutex a_mutex;
		struct ww_mutex *b_mutex;
		struct completion *a_signal;
		struct completion b_signal;
		int result;
	} cocci_id/* kernel/locking/test-ww_mutex.c 237 */;
	struct test_mutex {
		struct work_struct work;
		struct ww_mutex mutex;
		struct completion ready,go,done;
		unsigned int flags;
	} cocci_id/* kernel/locking/test-ww_mutex.c 19 */;
	struct test_abba cocci_id/* kernel/locking/test-ww_mutex.c 186 */;
	bool cocci_id/* kernel/locking/test-ww_mutex.c 184 */;
	struct workqueue_struct *cocci_id/* kernel/locking/test-ww_mutex.c 17 */;
	typeof(*abba) cocci_id/* kernel/locking/test-ww_mutex.c 159 */;
	struct test_abba *cocci_id/* kernel/locking/test-ww_mutex.c 159 */;
	struct test_abba {
		struct work_struct work;
		struct ww_mutex a_mutex;
		struct ww_mutex b_mutex;
		struct completion a_ready;
		struct completion b_ready;
		bool resolve;
		int result;
	} cocci_id/* kernel/locking/test-ww_mutex.c 147 */;
	struct ww_mutex cocci_id/* kernel/locking/test-ww_mutex.c 114 */;
}
