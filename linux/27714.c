cocci_test_suite() {
	void cocci_id/* fs/splice.c 92 */;
	umode_t cocci_id/* fs/splice.c 913 */;
	splice_direct_actor *cocci_id/* fs/splice.c 909 */;
	ssize_t (*cocci_id/* fs/splice.c 873 */)(struct file *, loff_t *,
						 struct pipe_inode_info *,
						 size_t, unsigned int);
	ssize_t (*cocci_id/* fs/splice.c 855 */)(struct pipe_inode_info *,
						 struct file *, loff_t *,
						 size_t, unsigned int);
	void *cocci_id/* fs/splice.c 805 */;
	struct bio_vec cocci_id/* fs/splice.c 702 */;
	struct bio_vec *cocci_id/* fs/splice.c 702 */;
	int cocci_id/* fs/splice.c 629 */;
	splice_actor *cocci_id/* fs/splice.c 627 */;
	struct splice_desc *cocci_id/* fs/splice.c 626 */;
	struct pipe_inode_info *cocci_id/* fs/splice.c 626 */;
	ssize_t cocci_id/* fs/splice.c 626 */;
	struct address_space *cocci_id/* fs/splice.c 51 */;
	struct kvec cocci_id/* fs/splice.c 403 */;
	struct page **cocci_id/* fs/splice.c 377 */;
	struct iov_iter cocci_id/* fs/splice.c 376 */;
	struct kvec *cocci_id/* fs/splice.c 375 */;
	size_t cocci_id/* fs/splice.c 372 */;
	loff_t *cocci_id/* fs/splice.c 371 */;
	struct file *cocci_id/* fs/splice.c 371 */;
	const struct iovec __user *cocci_id/* fs/splice.c 365 */;
	mm_segment_t cocci_id/* fs/splice.c 358 */;
	unsigned long cocci_id/* fs/splice.c 356 */;
	const struct kvec *cocci_id/* fs/splice.c 355 */;
	const struct pipe_buf_operations cocci_id/* fs/splice.c 333 */;
	struct kiocb cocci_id/* fs/splice.c 305 */;
	struct partial_page cocci_id/* fs/splice.c 267 */;
	const struct pipe_inode_info *cocci_id/* fs/splice.c 258 */;
	struct splice_pipe_desc *cocci_id/* fs/splice.c 258 */;
	unsigned int cocci_id/* fs/splice.c 234 */;
	struct pipe_buffer *cocci_id/* fs/splice.c 232 */;
	struct fd cocci_id/* fs/splice.c 1431 */;
	struct iovec *cocci_id/* fs/splice.c 1379 */;
	struct iovec cocci_id/* fs/splice.c 1378 */[UIO_FASTIOV];
	const struct iovec *cocci_id/* fs/splice.c 1375 */;
	struct iov_iter *cocci_id/* fs/splice.c 1361 */;
	int *cocci_id/* fs/splice.c 1330 */;
	struct page *cocci_id/* fs/splice.c 1234 */[16];
	bool cocci_id/* fs/splice.c 1231 */;
	struct pipe_buffer cocci_id/* fs/splice.c 1225 */;
	unsigned cocci_id/* fs/splice.c 1223 */;
	loff_t cocci_id/* fs/splice.c 1118 */;
	loff_t __user *cocci_id/* fs/splice.c 1112 */;
	long cocci_id/* fs/splice.c 1112 */;
	int cocci_id/* fs/splice.c 1105 */(struct pipe_inode_info *ipipe,
					   struct pipe_inode_info *opipe,
					   size_t len, unsigned int flags);
	struct splice_desc cocci_id/* fs/splice.c 1060 */;
	struct page *cocci_id/* fs/splice.c 106 */;
}
