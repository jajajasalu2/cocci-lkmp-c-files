cocci_test_suite() {
	unsigned long *cocci_id/* fs/io_uring.c 948 */;
	unsigned long cocci_id/* fs/io_uring.c 936 */;
	struct io_uring {
		u32 head ____cacheline_aligned_in_smp;
		u32 tail ____cacheline_aligned_in_smp;
	} cocci_id/* fs/io_uring.c 93 */;
	void **cocci_id/* fs/io_uring.c 918 */;
	int *cocci_id/* fs/io_uring.c 918 */;
	gfp_t cocci_id/* fs/io_uring.c 863 */;
	struct io_uring_cqe *cocci_id/* fs/io_uring.c 806 */;
	struct io_rings *cocci_id/* fs/io_uring.c 607 */;
	struct io_ring_ctx *cocci_id/* fs/io_uring.c 605 */;
	void cocci_id/* fs/io_uring.c 605 */;
	int __init cocci_id/* fs/io_uring.c 5521 */;
	void __user *cocci_id/* fs/io_uring.c 5422 */;
	struct io_uring_params cocci_id/* fs/io_uring.c 5390 */;
	struct io_uring_params __user *cocci_id/* fs/io_uring.c 5388 */;
	struct io_rings cocci_id/* fs/io_uring.c 5350 */;
	struct hlist_head cocci_id/* fs/io_uring.c 525 */;
	struct io_uring_sqe cocci_id/* fs/io_uring.c 5223 */;
	u32 *cocci_id/* fs/io_uring.c 5213 */;
	char *cocci_id/* fs/io_uring.c 5213 */;
	size_t cocci_id/* fs/io_uring.c 5202 */;
	struct io_uring_params *cocci_id/* fs/io_uring.c 5199 */;
	struct fd cocci_id/* fs/io_uring.c 5123 */;
	struct completion cocci_id/* fs/io_uring.c 512 */;
	const sigset_t *cocci_id/* fs/io_uring.c 5117 */;
	struct files_struct *cocci_id/* fs/io_uring.c 5000 */;
	struct inode *cocci_id/* fs/io_uring.c 4990 */;
	poll_table *cocci_id/* fs/io_uring.c 4943 */;
	struct io_ring_ctx cocci_id/* fs/io_uring.c 494 */;
	struct percpu_ref *cocci_id/* fs/io_uring.c 492 */;
	__s32 __user *cocci_id/* fs/io_uring.c 4880 */;
	struct bio_vec cocci_id/* fs/io_uring.c 4807 */;
	struct vm_area_struct *cocci_id/* fs/io_uring.c 4796 */;
	const struct file_operations cocci_id/* fs/io_uring.c 477 */;
	struct kmem_cache *cocci_id/* fs/io_uring.c 475 */;
	struct io_mapped_ubuf cocci_id/* fs/io_uring.c 4749 */;
	struct page **cocci_id/* fs/io_uring.c 4740 */;
	struct vm_area_struct **cocci_id/* fs/io_uring.c 4739 */;
	u64 cocci_id/* fs/io_uring.c 4725 */;
	struct io_kiocb *cocci_id/* fs/io_uring.c 472 */(struct io_kiocb *req);
	struct compat_iovec cocci_id/* fs/io_uring.c 4719 */;
	struct compat_iovec __user *cocci_id/* fs/io_uring.c 4718 */;
	struct iovec __user *cocci_id/* fs/io_uring.c 4714 */;
	struct iovec *cocci_id/* fs/io_uring.c 4711 */;
	void cocci_id/* fs/io_uring.c 471 */(struct io_kiocb *req);
	void cocci_id/* fs/io_uring.c 467 */(struct io_kiocb *req, long res);
	void cocci_id/* fs/io_uring.c 466 */(struct io_wq_work **workptr);
	size_t *cocci_id/* fs/io_uring.c 4646 */;
	struct page *cocci_id/* fs/io_uring.c 4627 */;
	struct user_struct *cocci_id/* fs/io_uring.c 4607 */;
	struct io_wq_data cocci_id/* fs/io_uring.c 4534 */;
	struct io_submit_state {
		struct blk_plug plug;
		void *reqs[IO_IOPOLL_BATCH];
		unsigned int free_reqs;
		unsigned int cur_req;
		struct file *file;
		unsigned int fd;
		unsigned int has_refs;
		unsigned int used_refs;
		unsigned int ios_left;
	} cocci_id/* fs/io_uring.c 446 */;
	__u32 cocci_id/* fs/io_uring.c 4452 */;
	struct io_uring_files_update cocci_id/* fs/io_uring.c 4449 */;
	struct sk_buff_head *cocci_id/* fs/io_uring.c 4408 */;
	struct sk_buff_head cocci_id/* fs/io_uring.c 4345 */;
	struct fixed_file_table cocci_id/* fs/io_uring.c 4271 */;
	struct file *cocci_id/* fs/io_uring.c 4159 */;
	struct sk_buff *cocci_id/* fs/io_uring.c 4134 */;
	struct scm_fp_list *cocci_id/* fs/io_uring.c 4133 */;
	struct sock *cocci_id/* fs/io_uring.c 4132 */;
	const compat_sigset_t __user *cocci_id/* fs/io_uring.c 4019 */;
	struct io_wait_queue cocci_id/* fs/io_uring.c 4001 */;
	const sigset_t __user *cocci_id/* fs/io_uring.c 3999 */;
	struct io_wait_queue *cocci_id/* fs/io_uring.c 3968 */;
	struct io_wait_queue {
		struct wait_queue_entry wq;
		struct io_ring_ctx *ctx;
		unsigned to_wait;
		unsigned nr_timeouts;
	} cocci_id/* fs/io_uring.c 3961 */;
	struct io_kiocb {
		union {
			struct file *file;
			struct io_rw rw;
			struct io_poll_iocb poll;
			struct io_accept accept;
			struct io_sync sync;
			struct io_cancel cancel;
			struct io_timeout timeout;
			struct io_connect connect;
			struct io_sr_msg sr_msg;
		};
		struct io_async_ctx *io;
		struct file *ring_file;
		int ring_fd;
		bool has_user;
		bool in_async;
		bool needs_fixed_file;
		u8 opcode;
		struct io_ring_ctx *ctx;
		union {
			struct list_head list;
			struct hlist_node hash_node;
		};
		struct list_head link_list;
		unsigned int flags;
		refcount_t refs;
#define REQ_F_NOWAIT 1
#define REQ_F_IOPOLL_COMPLETED 2
#define REQ_F_FIXED_FILE 4
#define REQ_F_LINK_NEXT 8
#define REQ_F_IO_DRAIN 16
#define REQ_F_IO_DRAINED 32
#define REQ_F_LINK 64
#define REQ_F_LINK_TIMEOUT 128
#define REQ_F_FAIL_LINK 256
#define REQ_F_DRAIN_LINK 512
#define REQ_F_TIMEOUT 1024
#define REQ_F_ISREG 2048
#define REQ_F_MUST_PUNT 4096
#define REQ_F_TIMEOUT_NOSEQ 8192
#define REQ_F_INFLIGHT 16384
#define REQ_F_COMP_LOCKED 32768
#define REQ_F_HARDLINK 65536
		u64 user_data;
		u32 result;
		u32 sequence;
		struct list_head inflight_entry;
		struct io_wq_work work;
	} cocci_id/* fs/io_uring.c 388 */;
	mm_segment_t cocci_id/* fs/io_uring.c 3835 */;
	const struct cred *cocci_id/* fs/io_uring.c 3834 */;
	struct mm_struct *cocci_id/* fs/io_uring.c 3833 */;
	struct io_submit_state cocci_id/* fs/io_uring.c 3759 */;
	struct mm_struct **cocci_id/* fs/io_uring.c 3757 */;
	struct io_async_ctx {
		union {
			struct io_async_rw rw;
			struct io_async_msghdr msg;
			struct io_async_connect connect;
			struct io_timeout_data timeout;
		};
	} cocci_id/* fs/io_uring.c 373 */;
	const struct io_uring_sqe **cocci_id/* fs/io_uring.c 3714 */;
	struct io_async_rw {
		struct iovec fast_iov[UIO_FASTIOV];
		struct iovec *iov;
		ssize_t nr_segs;
		ssize_t size;
	} cocci_id/* fs/io_uring.c 366 */;
	struct io_async_msghdr {
		struct iovec fast_iov[UIO_FASTIOV];
		struct iovec *iov;
		struct sockaddr __user *uaddr;
		struct msghdr msg;
	} cocci_id/* fs/io_uring.c 359 */;
	struct io_async_connect {
		struct sockaddr_storage address;
	} cocci_id/* fs/io_uring.c 355 */;
	const struct io_uring_sqe *cocci_id/* fs/io_uring.c 3512 */;
	struct io_sr_msg {
		struct file *file;
		struct user_msghdr __user *msg;
		int msg_flags;
	} cocci_id/* fs/io_uring.c 349 */;
	struct io_timeout_data cocci_id/* fs/io_uring.c 3438 */;
	struct io_timeout_data *cocci_id/* fs/io_uring.c 3437 */;
	enum hrtimer_restart cocci_id/* fs/io_uring.c 3435 */;
	struct hrtimer *cocci_id/* fs/io_uring.c 3435 */;
	struct io_connect {
		struct file *file;
		struct sockaddr __user *addr;
		int addr_len;
	} cocci_id/* fs/io_uring.c 343 */;
	struct fixed_file_table *cocci_id/* fs/io_uring.c 3366 */;
	struct io_rw {
		struct kiocb kiocb;
		u64 addr;
		u64 len;
	} cocci_id/* fs/io_uring.c 336 */;
	struct io_timeout {
		struct file *file;
		u64 addr;
		int flags;
		unsigned count;
	} cocci_id/* fs/io_uring.c 329 */;
	struct io_cancel {
		struct file *file;
		u64 addr;
	} cocci_id/* fs/io_uring.c 324 */;
	struct io_sync {
		struct file *file;
		loff_t len;
		loff_t off;
		int flags;
	} cocci_id/* fs/io_uring.c 317 */;
	struct io_accept {
		struct file *file;
		struct sockaddr __user *addr;
		int __user *addr_len;
		int flags;
	} cocci_id/* fs/io_uring.c 310 */;
	struct io_timeout_data {
		struct io_kiocb *req;
		struct hrtimer timer;
		struct timespec64 ts;
		enum hrtimer_mode mode;
		u32 seq_offset;
	} cocci_id/* fs/io_uring.c 302 */;
	__u64 cocci_id/* fs/io_uring.c 3008 */;
	enum io_wq_cancel cocci_id/* fs/io_uring.c 2988 */;
	void *cocci_id/* fs/io_uring.c 2986 */;
	struct io_wq_work *cocci_id/* fs/io_uring.c 2979 */;
	u32 cocci_id/* fs/io_uring.c 2940 */;
	long long cocci_id/* fs/io_uring.c 2939 */;
	struct io_poll_iocb {
		struct file *file;
		union {
			struct wait_queue_head *head;
			u64 addr;
		};
		__poll_t events;
		bool done;
		bool canceled;
		struct wait_queue_entry wait;
	} cocci_id/* fs/io_uring.c 290 */;
	__poll_t cocci_id/* fs/io_uring.c 2712 */;
	struct io_poll_table cocci_id/* fs/io_uring.c 2710 */;
	struct io_poll_iocb *cocci_id/* fs/io_uring.c 2708 */;
	u16 cocci_id/* fs/io_uring.c 2692 */;
	struct io_poll_table *cocci_id/* fs/io_uring.c 2668 */;
	struct poll_table_struct *cocci_id/* fs/io_uring.c 2666 */;
	struct wait_queue_head *cocci_id/* fs/io_uring.c 2665 */;
	struct io_poll_table {
		struct poll_table_struct pt;
		struct io_kiocb *req;
		int error;
	} cocci_id/* fs/io_uring.c 2659 */;
	struct wait_queue_entry *cocci_id/* fs/io_uring.c 2623 */;
	struct poll_table_struct cocci_id/* fs/io_uring.c 2581 */;
	struct hlist_head *cocci_id/* fs/io_uring.c 2515 */;
	struct hlist_node *cocci_id/* fs/io_uring.c 2498 */;
	struct io_async_ctx cocci_id/* fs/io_uring.c 2440 */;
	struct io_async_ctx *cocci_id/* fs/io_uring.c 2416 */;
	struct io_connect *cocci_id/* fs/io_uring.c 2415 */;
	struct io_wq_work **cocci_id/* fs/io_uring.c 2380 */;
	unsigned cocci_id/* fs/io_uring.c 2363 */;
	struct io_accept *cocci_id/* fs/io_uring.c 2362 */;
	bool cocci_id/* fs/io_uring.c 2360 */;
	struct io_kiocb *cocci_id/* fs/io_uring.c 2359 */;
	struct io_kiocb **cocci_id/* fs/io_uring.c 2359 */;
	int cocci_id/* fs/io_uring.c 2359 */;
	struct io_sr_msg *cocci_id/* fs/io_uring.c 2293 */;
	struct sockaddr_storage cocci_id/* fs/io_uring.c 2282 */;
	struct socket *cocci_id/* fs/io_uring.c 2273 */;
	struct io_async_msghdr *cocci_id/* fs/io_uring.c 2272 */;
	loff_t cocci_id/* fs/io_uring.c 2052 */;
	struct iov_iter cocci_id/* fs/io_uring.c 1831 */;
	struct iovec cocci_id/* fs/io_uring.c 1829 */[UIO_FASTIOV];
	struct iovec cocci_id/* fs/io_uring.c 1764 */;
	struct fixed_file_table {
		struct file **files;
	} cocci_id/* fs/io_uring.c 176 */;
	struct io_mapped_ubuf {
		u64 ubuf;
		size_t len;
		struct bio_vec *bvec;
		unsigned int nr_bvecs;
	} cocci_id/* fs/io_uring.c 169 */;
	struct io_async_rw *cocci_id/* fs/io_uring.c 1675 */;
	u8 cocci_id/* fs/io_uring.c 1662 */;
	struct iovec **cocci_id/* fs/io_uring.c 1658 */;
	const struct bio_vec *cocci_id/* fs/io_uring.c 1636 */;
	struct io_mapped_ubuf *cocci_id/* fs/io_uring.c 1588 */;
	struct iov_iter *cocci_id/* fs/io_uring.c 1584 */;
	ssize_t cocci_id/* fs/io_uring.c 1583 */;
	umode_t cocci_id/* fs/io_uring.c 1481 */;
	struct io_submit_state *cocci_id/* fs/io_uring.c 1450 */;
	struct io_kiocb cocci_id/* fs/io_uring.c 1375 */;
	struct kiocb *cocci_id/* fs/io_uring.c 1373 */;
	long cocci_id/* fs/io_uring.c 1373 */;
	unsigned *cocci_id/* fs/io_uring.c 1274 */;
	unsigned int cocci_id/* fs/io_uring.c 1261 */;
	unsigned int *cocci_id/* fs/io_uring.c 1184 */;
	void *cocci_id/* fs/io_uring.c 1150 */[IO_IOPOLL_BATCH];
	struct list_head *cocci_id/* fs/io_uring.c 1148 */;
	struct io_rings {
		struct io_uring sq,cq;
		u32 sq_ring_mask,cq_ring_mask;
		u32 sq_ring_entries,cq_ring_entries;
		u32 sq_dropped;
		u32 sq_flags;
		u32 cq_overflow;
		struct io_uring_cqe cqes[]____cacheline_aligned_in_smp;
	} cocci_id/* fs/io_uring.c 105 */;
	struct io_ring_ctx {
		struct {
			struct percpu_ref refs;
		}____cacheline_aligned_in_smp;
		struct {
			unsigned int flags;
			bool compat;
			bool account_mem;
			bool cq_overflow_flushed;
			bool drain_next;
			u32 *sq_array;
			unsigned cached_sq_head;
			unsigned sq_entries;
			unsigned sq_mask;
			unsigned sq_thread_idle;
			unsigned cached_sq_dropped;
			atomic_t cached_cq_overflow;
			struct io_uring_sqe *sq_sqes;
			struct list_head defer_list;
			struct list_head timeout_list;
			struct list_head cq_overflow_list;
			wait_queue_head_t inflight_wait;
		}____cacheline_aligned_in_smp;
		struct io_rings *rings;
		struct io_wq *io_wq;
		struct task_struct *sqo_thread;
		struct mm_struct *sqo_mm;
		wait_queue_head_t sqo_wait;
		struct fixed_file_table *file_table;
		unsigned nr_user_files;
		unsigned nr_user_bufs;
		struct io_mapped_ubuf *user_bufs;
		struct user_struct *user;
		const struct cred *creds;
		struct completion *completions;
		struct io_kiocb *fallback_req;
#if defined(CONFIG_UNIX)
		struct socket *ring_sock;
#endif
		struct {
			unsigned cached_cq_tail;
			unsigned cq_entries;
			unsigned cq_mask;
			atomic_t cq_timeouts;
			struct wait_queue_head cq_wait;
			struct fasync_struct *cq_fasync;
			struct eventfd_ctx *cq_ev_fd;
		}____cacheline_aligned_in_smp;
		struct {
			struct mutex uring_lock;
			wait_queue_head_t wait;
		}____cacheline_aligned_in_smp;
		struct {
			spinlock_t completion_lock;
			bool poll_multi_file;
			struct list_head poll_list;
			struct hlist_head *cancel_hash;
			unsigned cancel_hash_bits;
			spinlock_t inflight_lock;
			struct list_head inflight_list;
		}____cacheline_aligned_in_smp;
	} cocci_id/*  1 */;
}
