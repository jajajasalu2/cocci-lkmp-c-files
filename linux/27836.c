cocci_test_suite() {
	void cocci_id/* fs/ocfs2/dlmglue.c 99 */(struct ocfs2_super *osb,
						 struct ocfs2_lock_res *lockres);
	int cocci_id/* fs/ocfs2/dlmglue.c 93 */(struct ocfs2_lock_res *lockres,
						int blocking);
	int cocci_id/* fs/ocfs2/dlmglue.c 89 */(struct ocfs2_lock_res *lockres,
						int new_level);
	struct lock_class_key cocci_id/* fs/ocfs2/dlmglue.c 86 */[OCFS2_NUM_LOCK_TYPES];
	struct ocfs2_lock_holder *cocci_id/* fs/ocfs2/dlmglue.c 795 */;
	struct ocfs2_unblock_ctl {
		int requeue;
		enum ocfs2_unblock_action unblock_action;
	} cocci_id/* fs/ocfs2/dlmglue.c 79 */;
	enum ocfs2_unblock_action{UNBLOCK_CONTINUE=0, UNBLOCK_CONTINUE_POST=1, UNBLOCK_STOP_POST=2,} cocci_id/* fs/ocfs2/dlmglue.c 71 */;
	__be64 cocci_id/* fs/ocfs2/dlmglue.c 623 */;
	__u64 cocci_id/* fs/ocfs2/dlmglue.c 601 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/dlmglue.c 59 */(struct ocfs2_lock_res *lockres);
	struct ocfs2_mem_dqinfo *cocci_id/* fs/ocfs2/dlmglue.c 589 */;
	struct ocfs2_lock_res_ops *cocci_id/* fs/ocfs2/dlmglue.c 557 */;
	struct ocfs2_mask_waiter {
		struct list_head mw_item;
		int mw_status;
		struct completion mw_complete;
		unsigned long mw_mask;
		unsigned long mw_goal;
#ifdef CONFIG_OCFS2_FS_STATS
		ktime_t mw_lock_start;
#endif
	} cocci_id/* fs/ocfs2/dlmglue.c 48 */;
	struct ocfs2_lock_stats *cocci_id/* fs/ocfs2/dlmglue.c 439 */;
	ktime_t cocci_id/* fs/ocfs2/dlmglue.c 438 */;
	struct ocfs2_lock_res cocci_id/* fs/ocfs2/dlmglue.c 4354 */;
	struct ocfs2_lock_stats cocci_id/* fs/ocfs2/dlmglue.c 430 */;
	struct ocfs2_unblock_ctl cocci_id/* fs/ocfs2/dlmglue.c 4265 */;
	struct ocfs2_global_disk_dqinfo *cocci_id/* fs/ocfs2/dlmglue.c 4160 */;
	struct ocfs2_qinfo_lvb *cocci_id/* fs/ocfs2/dlmglue.c 4158 */;
	struct mem_dqinfo *cocci_id/* fs/ocfs2/dlmglue.c 4155 */;
	struct ocfs2_refcount_tree *cocci_id/* fs/ocfs2/dlmglue.c 4109 */;
	struct ocfs2_dlm_debug *cocci_id/* fs/ocfs2/dlmglue.c 408 */;
	struct dentry *cocci_id/* fs/ocfs2/dlmglue.c 4018 */;
	struct ocfs2_dentry_lock *cocci_id/* fs/ocfs2/dlmglue.c 4016 */;
	long long cocci_id/* fs/ocfs2/dlmglue.c 398 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/dlmglue.c 3951 */;
	struct address_space *cocci_id/* fs/ocfs2/dlmglue.c 3904 */;
	char *cocci_id/* fs/ocfs2/dlmglue.c 390 */;
	u64 cocci_id/* fs/ocfs2/dlmglue.c 388 */;
	enum ocfs2_lock_type cocci_id/* fs/ocfs2/dlmglue.c 387 */;
	int cocci_id/* fs/ocfs2/dlmglue.c 383 */(struct ocfs2_super *osb,
						 struct ocfs2_lock_res *lockres);
	int cocci_id/* fs/ocfs2/dlmglue.c 376 */(struct ocfs2_super *osb,
						 struct ocfs2_lock_res *lockres,
						 int new_level, int lvb,
						 unsigned int generation);
	unsigned int cocci_id/* fs/ocfs2/dlmglue.c 374 */(struct ocfs2_lock_res *lockres,
							  int new_level);
	int cocci_id/* fs/ocfs2/dlmglue.c 373 */(int level);
	void cocci_id/* fs/ocfs2/dlmglue.c 372 */(struct ocfs2_super *osb);
	struct ocfs2_unblock_ctl *cocci_id/* fs/ocfs2/dlmglue.c 3705 */;
	int cocci_id/* fs/ocfs2/dlmglue.c 370 */(struct inode *inode,
						 struct buffer_head **bh);
	int cocci_id/* fs/ocfs2/dlmglue.c 367 */(void *arg);
	void cocci_id/* fs/ocfs2/dlmglue.c 356 */(struct ocfs2_lock_res *lockres,
						  int convert);
	int cocci_id/* fs/ocfs2/dlmglue.c 353 */(struct ocfs2_lock_res *lockres,
						 int level);
	void cocci_id/* fs/ocfs2/dlmglue.c 352 */(struct ocfs2_lock_res *lockres);
	void cocci_id/* fs/ocfs2/dlmglue.c 340 */(struct ocfs2_super *osb,
						  struct ocfs2_lock_res *lockres,
						  int level,
						  unsigned long caller_ip);
	int cocci_id/* fs/ocfs2/dlmglue.c 338 */(struct ocfs2_lock_res *lockres,
						 int wanted);
	int cocci_id/* fs/ocfs2/dlmglue.c 334 */(struct ocfs2_super *osb,
						 struct ocfs2_lock_res *lockres,
						 int level, u32 dlm_flags);
	struct ocfs2_cluster_connection *cocci_id/* fs/ocfs2/dlmglue.c 3298 */;
	const struct file_operations cocci_id/* fs/ocfs2/dlmglue.c 3269 */;
	struct ocfs2_dlm_seq_priv *cocci_id/* fs/ocfs2/dlmglue.c 3249 */;
	struct file *cocci_id/* fs/ocfs2/dlmglue.c 3247 */;
	struct seq_file *cocci_id/* fs/ocfs2/dlmglue.c 3238 */;
	struct ocfs2_refcount_tree cocci_id/* fs/ocfs2/dlmglue.c 323 */;
	const struct seq_operations cocci_id/* fs/ocfs2/dlmglue.c 3229 */;
	loff_t *cocci_id/* fs/ocfs2/dlmglue.c 3077 */;
	void *cocci_id/* fs/ocfs2/dlmglue.c 3077 */;
	struct ocfs2_dlm_seq_priv {
		struct ocfs2_dlm_debug *p_dlm_debug;
		struct ocfs2_lock_res p_iter_res;
		struct ocfs2_lock_res p_tmp_res;
	} cocci_id/* fs/ocfs2/dlmglue.c 3018 */;
	struct ocfs2_dlm_debug cocci_id/* fs/ocfs2/dlmglue.c 2984 */;
	struct kref *cocci_id/* fs/ocfs2/dlmglue.c 2980 */;
	struct ocfs2_trim_fs_lvb *cocci_id/* fs/ocfs2/dlmglue.c 2882 */;
	struct ocfs2_trim_fs_info *cocci_id/* fs/ocfs2/dlmglue.c 2879 */;
	struct ocfs2_orphan_scan_lvb *cocci_id/* fs/ocfs2/dlmglue.c 2737 */;
	u32 *cocci_id/* fs/ocfs2/dlmglue.c 2734 */;
	struct pid *cocci_id/* fs/ocfs2/dlmglue.c 2666 */;
	struct ocfs2_lock_res_ops cocci_id/* fs/ocfs2/dlmglue.c 258 */;
	int *cocci_id/* fs/ocfs2/dlmglue.c 2558 */;
	struct vfsmount *cocci_id/* fs/ocfs2/dlmglue.c 2557 */;
	struct page *cocci_id/* fs/ocfs2/dlmglue.c 2534 */;
	struct buffer_head *cocci_id/* fs/ocfs2/dlmglue.c 2386 */;
	struct buffer_head **cocci_id/* fs/ocfs2/dlmglue.c 2385 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/dlmglue.c 2310 */;
	struct ocfs2_meta_lvb *cocci_id/* fs/ocfs2/dlmglue.c 2159 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/dlmglue.c 2157 */;
	struct inode *cocci_id/* fs/ocfs2/dlmglue.c 2155 */;
	struct timespec64 *cocci_id/* fs/ocfs2/dlmglue.c 2141 */;
	struct ocfs2_file_private *cocci_id/* fs/ocfs2/dlmglue.c 1973 */;
	unsigned long long cocci_id/* fs/ocfs2/dlmglue.c 1724 */;
	struct ocfs2_lock_res_ops {
		struct ocfs2_super *(*get_osb)(struct ocfs2_lock_res *);
		void (*post_unlock)(struct ocfs2_super *,
				    struct ocfs2_lock_res *);
		int (*check_downconvert)(struct ocfs2_lock_res *, int);
		void (*set_lvb)(struct ocfs2_lock_res *);
		int (*downconvert_worker)(struct ocfs2_lock_res *, int);
		int flags;
	} cocci_id/* fs/ocfs2/dlmglue.c 150 */;
	struct ocfs2_mask_waiter cocci_id/* fs/ocfs2/dlmglue.c 1471 */;
	unsigned long cocci_id/* fs/ocfs2/dlmglue.c 1469 */;
	u32 cocci_id/* fs/ocfs2/dlmglue.c 1466 */;
	struct ocfs2_mask_waiter *cocci_id/* fs/ocfs2/dlmglue.c 1417 */;
	int cocci_id/* fs/ocfs2/dlmglue.c 1416 */;
	struct ocfs2_locking_protocol cocci_id/* fs/ocfs2/dlmglue.c 1267 */;
	const char *cocci_id/* fs/ocfs2/dlmglue.c 113 */;
	struct ocfs2_dlm_lksb *cocci_id/* fs/ocfs2/dlmglue.c 1108 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/dlmglue.c 1063 */;
	unsigned int cocci_id/* fs/ocfs2/dlmglue.c 1062 */;
	struct ocfs2_lock_res *cocci_id/* fs/ocfs2/dlmglue.c 1061 */;
	void cocci_id/* fs/ocfs2/dlmglue.c 1061 */;
}
