cocci_test_suite() {
	struct erofs_xattr_ibody_header cocci_id/* fs/erofs/xattr.c 69 */;
	char *cocci_id/* fs/erofs/xattr.c 675 */;
	struct posix_acl *cocci_id/* fs/erofs/xattr.c 671 */;
	struct inode *cocci_id/* fs/erofs/xattr.c 671 */;
	int cocci_id/* fs/erofs/xattr.c 671 */;
	struct listxattr_iter cocci_id/* fs/erofs/xattr.c 649 */;
	struct dentry *cocci_id/* fs/erofs/xattr.c 645 */;
	ssize_t cocci_id/* fs/erofs/xattr.c 645 */;
	struct inode *const cocci_id/* fs/erofs/xattr.c 611 */;
	struct listxattr_iter *cocci_id/* fs/erofs/xattr.c 590 */;
	struct erofs_xattr_entry *cocci_id/* fs/erofs/xattr.c 532 */;
	struct listxattr_iter {
		struct xattr_iter it;
		struct dentry *dentry;
		char *buffer;
		int buffer_size,buffer_ofs;
	} cocci_id/* fs/erofs/xattr.c 523 */;
	const struct xattr_handler *cocci_id/* fs/erofs/xattr.c 510 */[];
	const struct xattr_handler __maybe_unused cocci_id/* fs/erofs/xattr.c 503 */;
	const struct xattr_handler cocci_id/* fs/erofs/xattr.c 495 */;
	struct erofs_sb_info *const cocci_id/* fs/erofs/xattr.c 468 */;
	const struct xattr_handler *cocci_id/* fs/erofs/xattr.c 464 */;
	struct erofs_sb_info *cocci_id/* fs/erofs/xattr.c 46 */;
	struct super_block *cocci_id/* fs/erofs/xattr.c 45 */;
	struct erofs_xattr_ibody_header *cocci_id/* fs/erofs/xattr.c 44 */;
	struct getxattr_iter cocci_id/* fs/erofs/xattr.c 438 */;
	void *cocci_id/* fs/erofs/xattr.c 435 */;
	size_t cocci_id/* fs/erofs/xattr.c 435 */;
	const char *cocci_id/* fs/erofs/xattr.c 434 */;
	unsigned int cocci_id/* fs/erofs/xattr.c 43 */;
	bool cocci_id/* fs/erofs/xattr.c 428 */;
	struct xattr_iter cocci_id/* fs/erofs/xattr.c 42 */;
	struct erofs_inode *const cocci_id/* fs/erofs/xattr.c 41 */;
	erofs_blk_t cocci_id/* fs/erofs/xattr.c 396 */;
	struct super_block *const cocci_id/* fs/erofs/xattr.c 390 */;
	struct getxattr_iter *cocci_id/* fs/erofs/xattr.c 367 */;
	const struct xattr_iter_handlers cocci_id/* fs/erofs/xattr.c 360 */;
	void cocci_id/* fs/erofs/xattr.c 351 */;
	struct getxattr_iter {
		struct xattr_iter it;
		char *buffer;
		int buffer_size,index;
		struct qstr name;
	} cocci_id/* fs/erofs/xattr.c 316 */;
	struct erofs_xattr_entry cocci_id/* fs/erofs/xattr.c 219 */;
	unsigned int *cocci_id/* fs/erofs/xattr.c 217 */;
	const struct xattr_iter_handlers *cocci_id/* fs/erofs/xattr.c 216 */;
	struct xattr_iter *cocci_id/* fs/erofs/xattr.c 185 */;
	struct xattr_iter_handlers {
		int (*entry)(struct xattr_iter *_it,
			     struct erofs_xattr_entry *entry);
		int (*name)(struct xattr_iter *_it, unsigned int processed,
			    char *buf, unsigned int len);
		int (*alloc_buffer)(struct xattr_iter *_it,
				    unsigned int value_sz);
		void (*value)(struct xattr_iter *_it, unsigned int processed,
			      char *buf, unsigned int len);
	} cocci_id/* fs/erofs/xattr.c 154 */;
	__le32 cocci_id/* fs/erofs/xattr.c 136 */;
	__le32 *cocci_id/* fs/erofs/xattr.c 135 */;
	struct xattr_iter {
		struct super_block *sb;
		struct page *page;
		void *kaddr;
		erofs_blk_t blkaddr;
		unsigned int ofs;
	} cocci_id/* fs/erofs/xattr.c 10 */;
}
