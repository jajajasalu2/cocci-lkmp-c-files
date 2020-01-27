cocci_test_suite() {
	struct kiocb *cocci_id/* fs/iomap/direct-io.c 76 */;
	const struct iomap_dio_ops *cocci_id/* fs/iomap/direct-io.c 75 */;
	ssize_t cocci_id/* fs/iomap/direct-io.c 73 */;
	struct request_queue *cocci_id/* fs/iomap/direct-io.c 53 */;
	struct blk_plug cocci_id/* fs/iomap/direct-io.c 411 */;
	struct address_space *cocci_id/* fs/iomap/direct-io.c 405 */;
	const struct iomap_ops *cocci_id/* fs/iomap/direct-io.c 402 */;
	struct iomap_dio *cocci_id/* fs/iomap/direct-io.c 370 */;
	struct iomap *cocci_id/* fs/iomap/direct-io.c 368 */;
	void *cocci_id/* fs/iomap/direct-io.c 368 */;
	struct inode *cocci_id/* fs/iomap/direct-io.c 367 */;
	loff_t cocci_id/* fs/iomap/direct-io.c 366 */;
	struct iov_iter *cocci_id/* fs/iomap/direct-io.c 343 */;
	struct iomap_dio {
		struct kiocb *iocb;
		const struct iomap_dio_ops *dops;
		loff_t i_size;
		loff_t size;
		atomic_t ref;
		unsigned flags;
		int error;
		bool wait_for_completion;
		union {
			struct {
				struct iov_iter *iter;
				struct task_struct *waiter;
				struct request_queue *last_queue;
				blk_qc_t cookie;
			} submit;
			struct {
				struct work_struct work;
			} aio;
		};
	} cocci_id/* fs/iomap/direct-io.c 25 */;
	size_t cocci_id/* fs/iomap/direct-io.c 208 */;
	int cocci_id/* fs/iomap/direct-io.c 207 */;
	bool cocci_id/* fs/iomap/direct-io.c 205 */;
	struct bio *cocci_id/* fs/iomap/direct-io.c 204 */;
	unsigned int cocci_id/* fs/iomap/direct-io.c 201 */;
	struct page *cocci_id/* fs/iomap/direct-io.c 181 */;
	unsigned cocci_id/* fs/iomap/direct-io.c 179 */;
	struct task_struct *cocci_id/* fs/iomap/direct-io.c 156 */;
	void cocci_id/* fs/iomap/direct-io.c 146 */;
	struct iomap_dio cocci_id/* fs/iomap/direct-io.c 130 */;
	struct work_struct *cocci_id/* fs/iomap/direct-io.c 128 */;
}
