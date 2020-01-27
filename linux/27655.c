cocci_test_suite() {
	struct kioctx {
		struct percpu_ref users;
		atomic_t dead;
		struct percpu_ref reqs;
		unsigned long user_id;
		struct __percpu kioctx_cpu *cpu;
		unsigned req_batch;
		unsigned max_reqs;
		unsigned nr_events;
		unsigned long mmap_base;
		unsigned long mmap_size;
		struct page **ring_pages;
		long nr_pages;
		struct rcu_work free_rwork;
		struct ctx_rq_wait *rq_wait;
		struct {
			atomic_t reqs_available;
		}____cacheline_aligned_in_smp;
		struct {
			spinlock_t ctx_lock;
			struct list_head active_reqs;
		}____cacheline_aligned_in_smp;
		struct {
			struct mutex ring_lock;
			wait_queue_head_t wait;
		}____cacheline_aligned_in_smp;
		struct {
			unsigned tail;
			unsigned completed_events;
			spinlock_t completion_lock;
		}____cacheline_aligned_in_smp;
		struct page *internal_pages[AIO_RING_PAGES];
		struct file *aio_ring_file;
		unsigned id;
	} cocci_id/* fs/aio.c 97 */;
	int cocci_id/* fs/aio.c 928 */;
	unsigned long cocci_id/* fs/aio.c 923 */;
	struct kioctx_cpu *cocci_id/* fs/aio.c 921 */;
	struct ctx_rq_wait {
		struct completion comp;
		atomic_t count;
	} cocci_id/* fs/aio.c 92 */;
	bool cocci_id/* fs/aio.c 919 */;
	struct kioctx *cocci_id/* fs/aio.c 919 */;
	struct kioctx_cpu {
		unsigned reqs_available;
	} cocci_id/* fs/aio.c 88 */;
	struct ctx_rq_wait cocci_id/* fs/aio.c 863 */;
	struct kioctx_table {
		struct rcu_head rcu;
		unsigned nr;
		struct kioctx __rcu *table[];
	} cocci_id/* fs/aio.c 82 */;
	struct ctx_rq_wait *cocci_id/* fs/aio.c 817 */;
	struct kioctx_cpu cocci_id/* fs/aio.c 756 */;
	struct percpu_ref *cocci_id/* fs/aio.c 595 */;
	struct kioctx cocci_id/* fs/aio.c 584 */;
	struct aio_ring {
		unsigned id;
		unsigned nr;
		unsigned head;
		unsigned tail;
		unsigned magic;
		unsigned compat_features;
		unsigned incompat_features;
		unsigned header_length;
		struct io_event io_events[0];
	} cocci_id/* fs/aio.c 58 */;
	kiocb_cancel_fn *cocci_id/* fs/aio.c 561 */;
	struct io_event cocci_id/* fs/aio.c 473 */;
	struct aio_ring cocci_id/* fs/aio.c 472 */;
	unsigned int cocci_id/* fs/aio.c 460 */;
	pgoff_t cocci_id/* fs/aio.c 381 */;
	enum migrate_mode cocci_id/* fs/aio.c 377 */;
	struct address_space *cocci_id/* fs/aio.c 376 */;
	struct vm_area_struct *cocci_id/* fs/aio.c 364 */;
	const struct vm_operations_struct cocci_id/* fs/aio.c 355 */;
	struct kioctx_table *cocci_id/* fs/aio.c 331 */;
	struct mm_struct *cocci_id/* fs/aio.c 330 */;
	struct page *cocci_id/* fs/aio.c 311 */;
	struct file_system_type cocci_id/* fs/aio.c 267 */;
	int __init cocci_id/* fs/aio.c 265 */;
	struct fs_context *cocci_id/* fs/aio.c 253 */;
	loff_t cocci_id/* fs/aio.c 235 */;
	const struct address_space_operations cocci_id/* fs/aio.c 233 */;
	const struct file_operations cocci_id/* fs/aio.c 232 */;
	struct vfsmount *cocci_id/* fs/aio.c 230 */;
	struct kmem_cache *cocci_id/* fs/aio.c 227 */;
	struct __compat_aio_sigset {
		compat_uptr_t sigmask;
		compat_size_t sigsetsize;
	} cocci_id/* fs/aio.c 2181 */;
	struct old_timespec32 *cocci_id/* fs/aio.c 2163 */;
	__s32 cocci_id/* fs/aio.c 2160 */;
	__u32 cocci_id/* fs/aio.c 2159 */;
	struct __aio_sigset cocci_id/* fs/aio.c 2094 */;
	const struct __aio_sigset *cocci_id/* fs/aio.c 2092 */;
	struct __aio_sigset {
		const sigset_t __user *sigmask;
		size_t sigsetsize;
	} cocci_id/* fs/aio.c 2081 */;
	struct timespec64 cocci_id/* fs/aio.c 2067 */;
	struct __kernel_timespec *cocci_id/* fs/aio.c 2065 */;
	ktime_t cocci_id/* fs/aio.c 2034 */;
	struct timespec64 *cocci_id/* fs/aio.c 2032 */;
	aio_context_t cocci_id/* fs/aio.c 2028 */;
	u32 cocci_id/* fs/aio.c 1991 */;
	struct iocb *cocci_id/* fs/aio.c 1985 */;
	struct aio_kiocb {
		union {
			struct file *ki_filp;
			struct kiocb rw;
			struct fsync_iocb fsync;
			struct poll_iocb poll;
		};
		struct kioctx *ki_ctx;
		kiocb_cancel_fn *ki_cancel;
		struct io_event ki_res;
		struct list_head ki_list;
		refcount_t ki_refcnt;
		struct eventfd_ctx *ki_eventfd;
	} cocci_id/* fs/aio.c 197 */;
	struct blk_plug cocci_id/* fs/aio.c 1897 */;
	struct iocb **cocci_id/* fs/aio.c 1892 */;
	struct iocb cocci_id/* fs/aio.c 1836 */;
	struct poll_iocb {
		struct file *file;
		struct wait_queue_head *head;
		__poll_t events;
		bool done;
		bool cancelled;
		struct wait_queue_entry wait;
		struct work_struct work;
	} cocci_id/* fs/aio.c 181 */;
	u64 cocci_id/* fs/aio.c 1806 */;
	struct eventfd_ctx *cocci_id/* fs/aio.c 1787 */;
	struct iocb __user *cocci_id/* fs/aio.c 1779 */;
	struct aio_kiocb *cocci_id/* fs/aio.c 1779 */;
	const struct iocb *cocci_id/* fs/aio.c 1778 */;
	struct fsync_iocb {
		struct file *file;
		struct work_struct work;
		bool datasync;
	} cocci_id/* fs/aio.c 175 */;
	u16 cocci_id/* fs/aio.c 1726 */;
	__poll_t cocci_id/* fs/aio.c 1723 */;
	struct aio_poll_table cocci_id/* fs/aio.c 1721 */;
	struct poll_iocb *cocci_id/* fs/aio.c 1720 */;
	struct aio_poll_table *cocci_id/* fs/aio.c 1704 */;
	struct poll_table_struct *cocci_id/* fs/aio.c 1702 */;
	struct wait_queue_head *cocci_id/* fs/aio.c 1701 */;
	struct file *cocci_id/* fs/aio.c 1701 */;
	struct aio_poll_table {
		struct poll_table_struct pt;
		struct aio_kiocb *iocb;
		int error;
	} cocci_id/* fs/aio.c 1694 */;
	void *cocci_id/* fs/aio.c 1663 */;
	struct wait_queue_entry *cocci_id/* fs/aio.c 1662 */;
	struct poll_table_struct cocci_id/* fs/aio.c 1617 */;
	struct poll_iocb cocci_id/* fs/aio.c 1615 */;
	struct fsync_iocb *cocci_id/* fs/aio.c 1597 */;
	struct work_struct *cocci_id/* fs/aio.c 1589 */;
	struct iov_iter cocci_id/* fs/aio.c 1524 */;
	struct iovec cocci_id/* fs/aio.c 1523 */[UIO_FASTIOV];
	ssize_t cocci_id/* fs/aio.c 1500 */;
	size_t cocci_id/* fs/aio.c 1485 */;
	uintptr_t cocci_id/* fs/aio.c 1484 */;
	struct iov_iter *cocci_id/* fs/aio.c 1482 */;
	struct iovec **cocci_id/* fs/aio.c 1481 */;
	struct inode *cocci_id/* fs/aio.c 1429 */;
	struct aio_kiocb cocci_id/* fs/aio.c 1423 */;
	struct kiocb *cocci_id/* fs/aio.c 1421 */;
	long cocci_id/* fs/aio.c 1421 */;
	aio_context_t *cocci_id/* fs/aio.c 1312 */;
	struct io_event __user *cocci_id/* fs/aio.c 1254 */;
	long *cocci_id/* fs/aio.c 1254 */;
	void __user *cocci_id/* fs/aio.c 1118 */;
	unsigned cocci_id/* fs/aio.c 1093 */;
	struct io_event *cocci_id/* fs/aio.c 1092 */;
	struct aio_ring *cocci_id/* fs/aio.c 1091 */;
	void cocci_id/* fs/aio.c 1088 */;
	struct aio_ring __user *cocci_id/* fs/aio.c 1049 */;
}
