cocci_test_suite() {
	volatile int cocci_id/* tools/io_uring/io_uring-bench.c 94 */;
	struct submitter cocci_id/* tools/io_uring/io_uring-bench.c 93 */[1];
	struct submitter {
		pthread_t thread;
		int ring_fd;
		struct drand48_data rand;
		struct io_sq_ring sq_ring;
		struct io_uring_sqe *sqes;
		struct iovec iovecs[DEPTH];
		struct io_cq_ring cq_ring;
		int inflight;
		unsigned long reaps;
		unsigned long done;
		unsigned long calls;
		volatile int finish;
		__s32 *fds;
		struct file files[MAX_FDS];
		unsigned nr_files;
		unsigned cur_file;
	} cocci_id/* tools/io_uring/io_uring-bench.c 72 */;
	struct file {
		unsigned long max_blocks;
		unsigned pending_ios;
		int real_fd;
		int fixed_fd;
	} cocci_id/* tools/io_uring/io_uring-bench.c 65 */;
	struct rlimit cocci_id/* tools/io_uring/io_uring-bench.c 529 */;
	void *cocci_id/* tools/io_uring/io_uring-bench.c 486 */;
	char *cocci_id/* tools/io_uring/io_uring-bench.c 480 */[];
	struct file *cocci_id/* tools/io_uring/io_uring-bench.c 471 */;
	char *cocci_id/* tools/io_uring/io_uring-bench.c 462 */;
	struct io_cq_ring {
		unsigned *head;
		unsigned *tail;
		unsigned *ring_mask;
		unsigned *ring_entries;
		struct io_uring_cqe *cqes;
	} cocci_id/* tools/io_uring/io_uring-bench.c 46 */;
	struct io_uring_cqe cocci_id/* tools/io_uring/io_uring-bench.c 449 */;
	struct io_uring_sqe cocci_id/* tools/io_uring/io_uring-bench.c 444 */;
	struct io_uring_params cocci_id/* tools/io_uring/io_uring-bench.c 393 */;
	struct sigaction cocci_id/* tools/io_uring/io_uring-bench.c 381 */;
	void cocci_id/* tools/io_uring/io_uring-bench.c 379 */;
	struct io_sq_ring {
		unsigned *head;
		unsigned *tail;
		unsigned *ring_mask;
		unsigned *ring_entries;
		unsigned *flags;
		unsigned *array;
	} cocci_id/* tools/io_uring/io_uring-bench.c 37 */;
	uintptr_t cocci_id/* tools/io_uring/io_uring-bench.c 259 */;
	struct io_uring_cqe *cocci_id/* tools/io_uring/io_uring-bench.c 247 */;
	struct io_cq_ring *cocci_id/* tools/io_uring/io_uring-bench.c 246 */;
	unsigned long long cocci_id/* tools/io_uring/io_uring-bench.c 229 */;
	struct stat cocci_id/* tools/io_uring/io_uring-bench.c 224 */;
	struct io_sq_ring *cocci_id/* tools/io_uring/io_uring-bench.c 196 */;
	long cocci_id/* tools/io_uring/io_uring-bench.c 148 */;
	unsigned long cocci_id/* tools/io_uring/io_uring-bench.c 146 */;
	struct io_uring_sqe *cocci_id/* tools/io_uring/io_uring-bench.c 145 */;
	struct submitter *cocci_id/* tools/io_uring/io_uring-bench.c 138 */;
	unsigned cocci_id/* tools/io_uring/io_uring-bench.c 138 */;
	__s32 cocci_id/* tools/io_uring/io_uring-bench.c 123 */;
	int cocci_id/* tools/io_uring/io_uring-bench.c 102 */;
}
