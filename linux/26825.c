cocci_test_suite() {
	struct orangefs_readdir_response_s *cocci_id/* fs/orangefs/dir.c 65 */;
	struct orangefs_kernel_op_s *cocci_id/* fs/orangefs/dir.c 63 */;
	struct orangefs_dir *cocci_id/* fs/orangefs/dir.c 62 */;
	struct dentry *cocci_id/* fs/orangefs/dir.c 62 */;
	struct orangefs_inode_s *cocci_id/* fs/orangefs/dir.c 61 */;
	int cocci_id/* fs/orangefs/dir.c 61 */;
	const struct file_operations cocci_id/* fs/orangefs/dir.c 398 */;
	struct orangefs_dir cocci_id/* fs/orangefs/dir.c 373 */;
	struct inode *cocci_id/* fs/orangefs/dir.c 370 */;
	struct file *cocci_id/* fs/orangefs/dir.c 304 */;
	size_t cocci_id/* fs/orangefs/dir.c 246 */;
	void *cocci_id/* fs/orangefs/dir.c 213 */;
	char *cocci_id/* fs/orangefs/dir.c 196 */;
	loff_t cocci_id/* fs/orangefs/dir.c 195 */;
	__u32 *cocci_id/* fs/orangefs/dir.c 194 */;
	struct orangefs_khandle *cocci_id/* fs/orangefs/dir.c 193 */;
	const int cocci_id/* fs/orangefs/dir.c 192 */;
	struct orangefs_readdir_response_s cocci_id/* fs/orangefs/dir.c 192 */;
	struct dir_context *cocci_id/* fs/orangefs/dir.c 190 */;
	struct orangefs_dir_part *cocci_id/* fs/orangefs/dir.c 189 */;
	struct orangefs_dir {
		__u64 token;
		struct orangefs_dir_part *part;
		loff_t end;
		int error;
	} cocci_id/* fs/orangefs/dir.c 15 */;
	struct orangefs_dir_part {
		struct orangefs_dir_part *next;
		size_t len;
	} cocci_id/* fs/orangefs/dir.c 10 */;
}
