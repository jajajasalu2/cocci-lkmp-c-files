cocci_test_suite() {
	unsigned int cocci_id/* fs/btrfs/async-thread.c 82 */;
	int cocci_id/* fs/btrfs/async-thread.c 82 */;
	const char *cocci_id/* fs/btrfs/async-thread.c 81 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/async-thread.c 81 */;
	struct __btrfs_workqueue *cocci_id/* fs/btrfs/async-thread.c 80 */;
	bool cocci_id/* fs/btrfs/async-thread.c 66 */;
	const struct btrfs_workqueue *cocci_id/* fs/btrfs/async-thread.c 66 */;
	const struct btrfs_work *cocci_id/* fs/btrfs/async-thread.c 61 */;
	struct btrfs_fs_info *__pure cocci_id/* fs/btrfs/async-thread.c 61 */;
	const struct __btrfs_workqueue *cocci_id/* fs/btrfs/async-thread.c 56 */;
	struct btrfs_workqueue {
		struct __btrfs_workqueue *normal;
		struct __btrfs_workqueue *high;
	} cocci_id/* fs/btrfs/async-thread.c 51 */;
	void cocci_id/* fs/btrfs/async-thread.c 367 */;
	unsigned long cocci_id/* fs/btrfs/async-thread.c 342 */;
	struct btrfs_work *cocci_id/* fs/btrfs/async-thread.c 340 */;
	btrfs_func_t cocci_id/* fs/btrfs/async-thread.c 328 */;
	struct btrfs_work cocci_id/* fs/btrfs/async-thread.c 299 */;
	struct work_struct *cocci_id/* fs/btrfs/async-thread.c 297 */;
	struct __btrfs_workqueue {
		struct workqueue_struct *normal_wq;
		struct btrfs_fs_info *fs_info;
		struct list_head ordered_list;
		spinlock_t list_lock;
		atomic_t pending;
		int limit_active;
		int current_active;
		int thresh;
		unsigned int count;
		spinlock_t thres_lock;
	} cocci_id/* fs/btrfs/async-thread.c 24 */;
	spinlock_t *cocci_id/* fs/btrfs/async-thread.c 225 */;
	struct list_head *cocci_id/* fs/btrfs/async-thread.c 223 */;
	long cocci_id/* fs/btrfs/async-thread.c 180 */;
	enum{WORK_DONE_BIT, WORK_ORDER_DONE_BIT, WORK_HIGH_PRIO_BIT,} cocci_id/* fs/btrfs/async-thread.c 15 */;
	struct btrfs_workqueue *cocci_id/* fs/btrfs/async-thread.c 129 */;
	void cocci_id/* fs/btrfs/async-thread.c 126 */(struct __btrfs_workqueue *wq);
}
