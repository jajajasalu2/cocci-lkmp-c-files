cocci_test_suite() {
	char *cocci_id/* fs/ecryptfs/file.c 63 */;
	size_t cocci_id/* fs/ecryptfs/file.c 62 */;
	struct ecryptfs_getdents_callback cocci_id/* fs/ecryptfs/file.c 61 */;
	struct ecryptfs_getdents_callback *cocci_id/* fs/ecryptfs/file.c 60 */;
	u64 cocci_id/* fs/ecryptfs/file.c 58 */;
	const char *cocci_id/* fs/ecryptfs/file.c 57 */;
	struct dir_context *cocci_id/* fs/ecryptfs/file.c 57 */;
	struct ecryptfs_getdents_callback {
		struct dir_context ctx;
		struct dir_context *caller;
		struct super_block *sb;
		int filldir_called;
		int entries_written;
	} cocci_id/* fs/ecryptfs/file.c 47 */;
	const struct file_operations cocci_id/* fs/ecryptfs/file.c 396 */;
	struct file *cocci_id/* fs/ecryptfs/file.c 372 */;
	unsigned long cocci_id/* fs/ecryptfs/file.c 372 */;
	unsigned int cocci_id/* fs/ecryptfs/file.c 372 */;
	long cocci_id/* fs/ecryptfs/file.c 371 */;
	struct path *cocci_id/* fs/ecryptfs/file.c 36 */;
	struct iov_iter *cocci_id/* fs/ecryptfs/file.c 33 */;
	struct kiocb *cocci_id/* fs/ecryptfs/file.c 32 */;
	ssize_t cocci_id/* fs/ecryptfs/file.c 32 */;
	loff_t cocci_id/* fs/ecryptfs/file.c 318 */;
	int cocci_id/* fs/ecryptfs/file.c 318 */;
	fl_owner_t cocci_id/* fs/ecryptfs/file.c 290 */;
	struct ecryptfs_file_info *cocci_id/* fs/ecryptfs/file.c 265 */;
	struct dentry *cocci_id/* fs/ecryptfs/file.c 262 */;
	struct inode *cocci_id/* fs/ecryptfs/file.c 260 */;
	unsigned long long cocci_id/* fs/ecryptfs/file.c 240 */;
	struct ecryptfs_crypt_stat *cocci_id/* fs/ecryptfs/file.c 194 */;
	struct vm_area_struct *cocci_id/* fs/ecryptfs/file.c 169 */;
	struct ecryptfs_mount_crypt_stat *cocci_id/* fs/ecryptfs/file.c 130 */;
	struct kmem_cache *cocci_id/* fs/ecryptfs/file.c 125 */;
}
