cocci_test_suite() {
	struct afs_lookup_cookie {
		struct dir_context ctx;
		struct qstr name;
		bool found;
		bool one_only;
		unsigned short nr_fids;
		struct inode **inodes;
		struct afs_status_cb *statuses;
		struct afs_fid fids[50];
	} cocci_id/* fs/afs/dir.c 96 */;
	struct afs_lookup_one_cookie {
		struct dir_context ctx;
		struct qstr name;
		bool found;
		struct afs_fid fid;
	} cocci_id/* fs/afs/dir.c 89 */;
	char *cocci_id/* fs/afs/dir.c 857 */;
	struct afs_net *cocci_id/* fs/afs/dir.c 855 */;
	struct afs_sysnames *cocci_id/* fs/afs/dir.c 854 */;
	const struct dentry_operations cocci_id/* fs/afs/dir.c 81 */;
	const struct address_space_operations cocci_id/* fs/afs/dir.c 75 */;
	struct afs_lookup_cookie cocci_id/* fs/afs/dir.c 655 */;
	struct afs_server *cocci_id/* fs/afs/dir.c 647 */;
	struct afs_super_info *cocci_id/* fs/afs/dir.c 643 */;
	struct afs_cb_interest *cocci_id/* fs/afs/dir.c 642 */;
	struct afs_lookup_cookie *cocci_id/* fs/afs/dir.c 641 */;
	unsigned long long cocci_id/* fs/afs/dir.c 607 */;
	const struct inode_operations cocci_id/* fs/afs/dir.c 60 */;
	u64 cocci_id/* fs/afs/dir.c 599 */;
	const char *cocci_id/* fs/afs/dir.c 598 */;
	struct afs_lookup_one_cookie cocci_id/* fs/afs/dir.c 566 */;
	struct afs_fid *cocci_id/* fs/afs/dir.c 562 */;
	struct afs_lookup_one_cookie *cocci_id/* fs/afs/dir.c 532 */;
	const struct file_operations cocci_id/* fs/afs/dir.c 52 */;
	union afs_xdr_dirent cocci_id/* fs/afs/dir.c 466 */;
	unsigned cocci_id/* fs/afs/dir.c 450 */;
	afs_dataversion_t *cocci_id/* fs/afs/dir.c 443 */;
	struct dir_context *cocci_id/* fs/afs/dir.c 442 */;
	void cocci_id/* fs/afs/dir.c 44 */(struct page *page,
					   unsigned int offset,
					   unsigned int length);
	int cocci_id/* fs/afs/dir.c 43 */(struct page *page, gfp_t gfp_flags);
	int cocci_id/* fs/afs/dir.c 40 */(struct inode *old_dir,
					  struct dentry *old_dentry,
					  struct inode *new_dir,
					  struct dentry *new_dentry,
					  unsigned int flags);
	int cocci_id/* fs/afs/dir.c 38 */(struct inode *dir,
					  struct dentry *dentry,
					  const char *content);
	int cocci_id/* fs/afs/dir.c 36 */(struct dentry *from,
					  struct inode *dir,
					  struct dentry *dentry);
	size_t cocci_id/* fs/afs/dir.c 357 */;
	union afs_xdr_dirent *cocci_id/* fs/afs/dir.c 355 */;
	int cocci_id/* fs/afs/dir.c 34 */(struct inode *dir,
					  struct dentry *dentry);
	int cocci_id/* fs/afs/dir.c 33 */(struct inode *dir,
					  struct dentry *dentry, umode_t mode);
	int cocci_id/* fs/afs/dir.c 31 */(struct inode *dir,
					  struct dentry *dentry, umode_t mode,
					  bool excl);
	int cocci_id/* fs/afs/dir.c 29 */(struct dir_context *ctx,
					  const char *name, int nlen,
					  loff_t fpos, u64 ino,
					  unsigned dtype);
	void cocci_id/* fs/afs/dir.c 26 */(struct dentry *dentry,
					   struct inode *inode);
	int cocci_id/* fs/afs/dir.c 25 */(const struct dentry *dentry);
	int cocci_id/* fs/afs/dir.c 24 */(struct dentry *dentry,
					  unsigned int flags);
	int cocci_id/* fs/afs/dir.c 23 */(struct file *file,
					  struct dir_context *ctx);
	int cocci_id/* fs/afs/dir.c 22 */(struct inode *inode,
					  struct file *file);
	struct dentry *cocci_id/* fs/afs/dir.c 20 */(struct inode *dir,
						     struct dentry *dentry,
						     unsigned int flags);
	gfp_t cocci_id/* fs/afs/dir.c 1993 */;
	struct file *cocci_id/* fs/afs/dir.c 196 */;
	union afs_xdr_dir_block *cocci_id/* fs/afs/dir.c 184 */;
	struct afs_read *cocci_id/* fs/afs/dir.c 164 */;
	afs_dataversion_t cocci_id/* fs/afs/dir.c 1602 */;
	struct afs_status_cb cocci_id/* fs/afs/dir.c 1596 */;
	struct key *cocci_id/* fs/afs/dir.c 1577 */;
	struct afs_vnode *cocci_id/* fs/afs/dir.c 1576 */;
	struct afs_status_cb *cocci_id/* fs/afs/dir.c 1575 */;
	struct afs_fs_cursor cocci_id/* fs/afs/dir.c 1574 */;
	struct afs_iget_data cocci_id/* fs/afs/dir.c 1573 */;
	bool cocci_id/* fs/afs/dir.c 1571 */;
	umode_t cocci_id/* fs/afs/dir.c 1570 */;
	struct inode *cocci_id/* fs/afs/dir.c 1570 */;
	struct dentry *cocci_id/* fs/afs/dir.c 1570 */;
	int cocci_id/* fs/afs/dir.c 1570 */;
	u8 *cocci_id/* fs/afs/dir.c 148 */;
	union afs_xdr_dir_block cocci_id/* fs/afs/dir.c 129 */;
	struct afs_iget_data *cocci_id/* fs/afs/dir.c 1249 */;
	struct afs_fs_cursor *cocci_id/* fs/afs/dir.c 1248 */;
	void cocci_id/* fs/afs/dir.c 1202 */;
	const struct dentry *cocci_id/* fs/afs/dir.c 1179 */;
	void *cocci_id/* fs/afs/dir.c 1150 */;
	unsigned long cocci_id/* fs/afs/dir.c 1150 */;
	struct afs_xdr_dir_page *cocci_id/* fs/afs/dir.c 113 */;
	loff_t cocci_id/* fs/afs/dir.c 111 */;
	struct page *cocci_id/* fs/afs/dir.c 110 */;
	long cocci_id/* fs/afs/dir.c 1038 */;
	struct afs_fid cocci_id/* fs/afs/dir.c 1033 */;
	unsigned int cocci_id/* fs/afs/dir.c 1030 */;
}
