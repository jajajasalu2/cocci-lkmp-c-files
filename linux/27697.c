cocci_test_suite() {
	struct dentry *cocci_id/* fs/exportfs/expfs.c 91 */;
	void cocci_id/* fs/exportfs/expfs.c 91 */;
	bool cocci_id/* fs/exportfs/expfs.c 74 */;
	int (*cocci_id/* fs/exportfs/expfs.c 44 */)(void *context,
						    struct dentry *dentry);
	char cocci_id/* fs/exportfs/expfs.c 426 */[NAME_MAX + 1];
	const struct export_operations *cocci_id/* fs/exportfs/expfs.c 424 */;
	int (*cocci_id/* fs/exportfs/expfs.c 422 */)(void *, struct dentry *);
	void *cocci_id/* fs/exportfs/expfs.c 422 */;
	struct vfsmount *cocci_id/* fs/exportfs/expfs.c 420 */;
	int *cocci_id/* fs/exportfs/expfs.c 359 */;
	struct inode *cocci_id/* fs/exportfs/expfs.c 358 */;
	struct fid *cocci_id/* fs/exportfs/expfs.c 358 */;
	int cocci_id/* fs/exportfs/expfs.c 358 */;
	struct path cocci_id/* fs/exportfs/expfs.c 31 */;
	struct kstat cocci_id/* fs/exportfs/expfs.c 283 */;
	struct file *cocci_id/* fs/exportfs/expfs.c 282 */;
	char *cocci_id/* fs/exportfs/expfs.c 28 */;
	const struct cred *cocci_id/* fs/exportfs/expfs.c 279 */;
	const struct path *cocci_id/* fs/exportfs/expfs.c 277 */;
	struct getdents_callback cocci_id/* fs/exportfs/expfs.c 255 */;
	struct getdents_callback *cocci_id/* fs/exportfs/expfs.c 254 */;
	u64 cocci_id/* fs/exportfs/expfs.c 252 */;
	loff_t cocci_id/* fs/exportfs/expfs.c 252 */;
	unsigned int cocci_id/* fs/exportfs/expfs.c 252 */;
	const char *cocci_id/* fs/exportfs/expfs.c 251 */;
	struct dir_context *cocci_id/* fs/exportfs/expfs.c 251 */;
	int cocci_id/* fs/exportfs/expfs.c 24 */(const struct path *path,
						 char *name,
						 struct dentry *child);
	struct getdents_callback {
		struct dir_context ctx;
		char *name;
		u64 ino;
		int found;
		int sequence;
	} cocci_id/* fs/exportfs/expfs.c 238 */;
}
