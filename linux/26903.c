cocci_test_suite() {
	enum afs_flock_operation cocci_id/* fs/afs/flock.c 817 */;
	long long cocci_id/* fs/afs/flock.c 784 */;
	struct key *cocci_id/* fs/afs/flock.c 736 */;
	struct file_lock *cocci_id/* fs/afs/flock.c 733 */;
	struct file *cocci_id/* fs/afs/flock.c 733 */;
	int cocci_id/* fs/afs/flock.c 733 */;
	struct afs_call *cocci_id/* fs/afs/flock.c 71 */;
	u64 cocci_id/* fs/afs/flock.c 54 */;
	ktime_t cocci_id/* fs/afs/flock.c 53 */;
	bool cocci_id/* fs/afs/flock.c 470 */;
	afs_lock_type_t cocci_id/* fs/afs/flock.c 468 */;
	enum afs_flock_mode cocci_id/* fs/afs/flock.c 467 */;
	struct inode *cocci_id/* fs/afs/flock.c 465 */;
	afs_access_t cocci_id/* fs/afs/flock.c 426 */;
	struct afs_vnode *cocci_id/* fs/afs/flock.c 404 */;
	void cocci_id/* fs/afs/flock.c 404 */;
	atomic_t cocci_id/* fs/afs/flock.c 31 */;
	struct afs_vnode cocci_id/* fs/afs/flock.c 295 */;
	struct work_struct *cocci_id/* fs/afs/flock.c 292 */;
	enum afs_lock_state cocci_id/* fs/afs/flock.c 25 */;
	struct afs_status_cb cocci_id/* fs/afs/flock.c 229 */;
	struct afs_fs_cursor cocci_id/* fs/afs/flock.c 219 */;
	struct afs_status_cb *cocci_id/* fs/afs/flock.c 218 */;
	const struct file_lock_operations cocci_id/* fs/afs/flock.c 20 */;
	void cocci_id/* fs/afs/flock.c 18 */(struct file_lock *fl);
	void cocci_id/* fs/afs/flock.c 17 */(struct file_lock *new,
					     struct file_lock *fl);
	struct file_lock cocci_id/* fs/afs/flock.c 165 */;
	void cocci_id/* fs/afs/flock.c 16 */(struct afs_vnode *vnode,
					     int error);
	struct workqueue_struct *cocci_id/* fs/afs/flock.c 14 */;
	unsigned int cocci_id/* fs/afs/flock.c 114 */;
	unsigned long cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 593 */;
}
