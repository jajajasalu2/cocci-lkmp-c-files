cocci_test_suite() {
	struct eventfd_ctx cocci_id/* fs/eventfd.c 84 */;
	struct kref *cocci_id/* fs/eventfd.c 82 */;
	struct eventfd_ctx *cocci_id/* fs/eventfd.c 393 */;
	unsigned int cocci_id/* fs/eventfd.c 391 */;
	int cocci_id/* fs/eventfd.c 391 */;
	struct file *cocci_id/* fs/eventfd.c 378 */;
	struct fd cocci_id/* fs/eventfd.c 360 */;
	const struct file_operations cocci_id/* fs/eventfd.c 311 */;
	unsigned long long cocci_id/* fs/eventfd.c 305 */;
	struct seq_file *cocci_id/* fs/eventfd.c 299 */;
	struct eventfd_ctx {
		struct kref kref;
		wait_queue_head_t wqh;
		__u64 count;
		unsigned int flags;
		int id;
	} cocci_id/* fs/eventfd.c 29 */;
	const char __user *cocci_id/* fs/eventfd.c 251 */;
	__u64 __user *cocci_id/* fs/eventfd.c 245 */;
	__u64 cocci_id/* fs/eventfd.c 209 */;
	loff_t *cocci_id/* fs/eventfd.c 205 */;
	char __user *cocci_id/* fs/eventfd.c 204 */;
	ssize_t cocci_id/* fs/eventfd.c 204 */;
	size_t cocci_id/* fs/eventfd.c 204 */;
	unsigned long cocci_id/* fs/eventfd.c 191 */;
	wait_queue_entry_t *cocci_id/* fs/eventfd.c 188 */;
	__u64 *cocci_id/* fs/eventfd.c 169 */;
	void cocci_id/* fs/eventfd.c 169 */;
	u64 cocci_id/* fs/eventfd.c 115 */;
	__poll_t cocci_id/* fs/eventfd.c 111 */;
	poll_table *cocci_id/* fs/eventfd.c 111 */;
	struct inode *cocci_id/* fs/eventfd.c 102 */;
}
