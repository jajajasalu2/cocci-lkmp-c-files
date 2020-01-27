cocci_test_suite() {
	struct ecryptfs_open_req *cocci_id/* fs/ecryptfs/kthread.c 91 */;
	void cocci_id/* fs/ecryptfs/kthread.c 89 */;
	int cocci_id/* fs/ecryptfs/kthread.c 74 */;
	int __init cocci_id/* fs/ecryptfs/kthread.c 72 */;
	void *cocci_id/* fs/ecryptfs/kthread.c 42 */;
	struct task_struct *cocci_id/* fs/ecryptfs/kthread.c 31 */;
	struct ecryptfs_kthread_ctl {
#define ECRYPTFS_KTHREAD_ZOMBIE 0x00000001
		u32 flags;
		struct mutex mux;
		struct list_head req_list;
		wait_queue_head_t wait;
	} cocci_id/* fs/ecryptfs/kthread.c 23 */;
	struct ecryptfs_open_req {
		struct file **lower_file;
		struct path path;
		struct completion done;
		struct list_head kthread_ctl_list;
	} cocci_id/* fs/ecryptfs/kthread.c 16 */;
	struct ecryptfs_open_req cocci_id/* fs/ecryptfs/kthread.c 121 */;
	const struct cred *cocci_id/* fs/ecryptfs/kthread.c 119 */;
	struct vfsmount *cocci_id/* fs/ecryptfs/kthread.c 118 */;
	struct dentry *cocci_id/* fs/ecryptfs/kthread.c 117 */;
	struct file **cocci_id/* fs/ecryptfs/kthread.c 116 */;
}
