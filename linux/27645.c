cocci_test_suite() {
	struct io_wq_flush_data cocci_id/* fs/io-wq.c 991 */;
	struct io_wq_flush_data *cocci_id/* fs/io-wq.c 979 */;
	struct io_wq_work **cocci_id/* fs/io-wq.c 976 */;
	struct io_wq_flush_data {
		struct io_wq_work work;
		struct completion done;
	} cocci_id/* fs/io-wq.c 971 */;
	enum io_wq_cancel cocci_id/* fs/io-wq.c 874 */;
	work_cancel_fn *cocci_id/* fs/io-wq.c 874 */;
	struct io_cb_cancel_data cocci_id/* fs/io-wq.c 840 */;
	struct io_wqe {
		struct {
			spinlock_t lock;
			struct io_wq_work_list work_list;
			unsigned long hash_map;
			unsigned flags;
		}____cacheline_aligned_in_smp;
		int node;
		struct io_wqe_acct acct[2];
		struct hlist_nulls_head free_list;
		struct list_head all_list;
		struct io_wq *wq;
	} cocci_id/* fs/io-wq.c 83 */;
	unsigned long cocci_id/* fs/io-wq.c 818 */;
	struct io_cb_cancel_data *cocci_id/* fs/io-wq.c 817 */;
	void *cocci_id/* fs/io-wq.c 815 */;
	struct io_cb_cancel_data {
		struct io_wqe *wqe;
		work_cancel_fn *cancel;
		void *caller_data;
	} cocci_id/* fs/io-wq.c 809 */;
	bool (*cocci_id/* fs/io-wq.c 776 */)(struct io_worker *, void *);
	enum{IO_WQ_ACCT_BOUND, IO_WQ_ACCT_UNBOUND,} cocci_id/* fs/io-wq.c 75 */;
	struct io_wqe_acct {
		unsigned nr_workers;
		unsigned max_workers;
		atomic_t nr_running;
	} cocci_id/* fs/io-wq.c 69 */;
	bool cocci_id/* fs/io-wq.c 667 */[2];
	struct io_wqe_acct *cocci_id/* fs/io-wq.c 597 */;
	struct io_wq *cocci_id/* fs/io-wq.c 595 */;
	int cocci_id/* fs/io-wq.c 595 */;
	struct task_struct *cocci_id/* fs/io-wq.c 560 */;
	struct io_worker {
		refcount_t ref;
		unsigned flags;
		struct hlist_nulls_node nulls_node;
		struct list_head all_list;
		struct task_struct *task;
		struct io_wqe *wqe;
		struct io_wq_work *cur_work;
		spinlock_t lock;
		struct rcu_head rcu;
		struct mm_struct *mm;
		const struct cred *creds;
		struct files_struct *restore_files;
	} cocci_id/* fs/io-wq.c 46 */;
	enum{IO_WQE_FLAG_STALLED=1,} cocci_id/* fs/io-wq.c 39 */;
	struct io_wq_work cocci_id/* fs/io-wq.c 379 */;
	struct io_wq_work_node *cocci_id/* fs/io-wq.c 375 */;
	unsigned *cocci_id/* fs/io-wq.c 372 */;
	enum{IO_WQ_BIT_EXIT=0, IO_WQ_BIT_CANCEL=1, IO_WQ_BIT_ERROR=2,} cocci_id/* fs/io-wq.c 33 */;
	bool cocci_id/* fs/io-wq.c 324 */;
	struct io_wq_work *cocci_id/* fs/io-wq.c 321 */;
	struct io_wqe *cocci_id/* fs/io-wq.c 320 */;
	struct io_worker *cocci_id/* fs/io-wq.c 320 */;
	void cocci_id/* fs/io-wq.c 320 */;
	struct io_worker cocci_id/* fs/io-wq.c 257 */;
	struct hlist_nulls_node *cocci_id/* fs/io-wq.c 250 */;
	enum{IO_WORKER_F_UP=1, IO_WORKER_F_RUNNING=2, IO_WORKER_F_FREE=4, IO_WORKER_F_EXITING=8, IO_WORKER_F_FIXED=16, IO_WORKER_F_BOUND=32,} cocci_id/* fs/io-wq.c 24 */;
	unsigned cocci_id/* fs/io-wq.c 195 */;
	struct io_wqe cocci_id/* fs/io-wq.c 1030 */;
	struct io_wq {
		struct io_wqe **wqes;
		unsigned long state;
		get_work_fn *get_work;
		put_work_fn *put_work;
		struct task_struct *manager;
		struct user_struct *user;
		const struct cred *creds;
		struct mm_struct *mm;
		refcount_t refs;
		struct completion done;
	} cocci_id/* fs/io-wq.c 103 */;
	struct io_wq_data *cocci_id/* fs/io-wq.c 1005 */;
}
