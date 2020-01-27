cocci_test_suite() {
	struct buffer_page **cocci_id/* kernel/trace/ring_buffer.c 999 */;
	struct ring_buffer_per_cpu cocci_id/* kernel/trace/ring_buffer.c 731 */;
	poll_table cocci_id/* kernel/trace/ring_buffer.c 703 */;
	poll_table *cocci_id/* kernel/trace/ring_buffer.c 688 */;
	struct file *cocci_id/* kernel/trace/ring_buffer.c 688 */;
	__poll_t cocci_id/* kernel/trace/ring_buffer.c 687 */;
	struct rb_irq_work cocci_id/* kernel/trace/ring_buffer.c 557 */;
	struct rb_irq_work *cocci_id/* kernel/trace/ring_buffer.c 557 */;
	struct irq_work *cocci_id/* kernel/trace/ring_buffer.c 555 */;
	struct task_struct *cocci_id/* kernel/trace/ring_buffer.c 5067 */;
	struct ring_buffer_iter {
		struct ring_buffer_per_cpu *cpu_buffer;
		unsigned long head;
		struct buffer_page *head_page;
		struct buffer_page *cache_reader_page;
		unsigned long cache_read;
		u64 read_stamp;
	} cocci_id/* kernel/trace/ring_buffer.c 505 */;
	struct rb_test_data *cocci_id/* kernel/trace/ring_buffer.c 5045 */;
	struct rb_item cocci_id/* kernel/trace/ring_buffer.c 4976 */;
	struct rb_item *cocci_id/* kernel/trace/ring_buffer.c 4963 */;
	struct rb_item {
		int size;
		char str[];
	} cocci_id/* kernel/trace/ring_buffer.c 4955 */;
	char cocci_id/* kernel/trace/ring_buffer.c 4948 */[]__initdata;
	struct rb_test_data cocci_id/* kernel/trace/ring_buffer.c 4943 */[NR_CPUS]__initdata;
	struct rb_test_data {
		struct ring_buffer *buffer;
		unsigned long events;
		unsigned long bytes_written;
		unsigned long bytes_alloc;
		unsigned long bytes_dropped;
		unsigned long events_nested;
		unsigned long bytes_written_nested;
		unsigned long bytes_alloc_nested;
		unsigned long bytes_dropped_nested;
		int min_size_nested;
		int max_size_nested;
		int max_size;
		int min_size;
		int cpu;
		int cnt;
	} cocci_id/* kernel/trace/ring_buffer.c 4925 */;
	struct task_struct *cocci_id/* kernel/trace/ring_buffer.c 4923 */[NR_CPUS]__initdata;
	struct ring_buffer cocci_id/* kernel/trace/ring_buffer.c 4876 */;
	struct hlist_node *cocci_id/* kernel/trace/ring_buffer.c 4869 */;
	struct ring_buffer {
		unsigned flags;
		int cpus;
		atomic_t record_disabled;
		atomic_t resize_disabled;
		cpumask_var_t cpumask;
		struct lock_class_key *reader_lock_key;
		struct mutex mutex;
		struct ring_buffer_per_cpu **buffers;
		struct hlist_node node;
		u64 (*clock)(void);
		struct rb_irq_work irq_work;
		bool time_stamp_abs;
	} cocci_id/* kernel/trace/ring_buffer.c 485 */;
	void **cocci_id/* kernel/trace/ring_buffer.c 4701 */;
	struct ring_buffer_per_cpu {
		int cpu;
		atomic_t record_disabled;
		struct ring_buffer *buffer;
		raw_spinlock_t reader_lock;
		arch_spinlock_t lock;
		struct lock_class_key lock_key;
		struct buffer_data_page *free_page;
		unsigned long nr_pages;
		unsigned int current_context;
		struct list_head *pages;
		struct buffer_page *head_page;
		struct buffer_page *tail_page;
		struct buffer_page *commit_page;
		struct buffer_page *reader_page;
		unsigned long lost_events;
		unsigned long last_overrun;
		unsigned long nest;
		local_t entries_bytes;
		local_t entries;
		local_t overrun;
		local_t commit_overrun;
		local_t dropped_events;
		local_t committing;
		local_t commits;
		local_t pages_touched;
		local_t pages_read;
		long last_pages_touch;
		size_t shortest_full;
		unsigned long read;
		unsigned long read_bytes;
		u64 write_stamp;
		u64 read_stamp;
		long nr_pages_to_update;
		struct list_head new_pages;
		struct work_struct update_pages_work;
		struct completion update_done;
		struct rb_irq_work irq_work;
	} cocci_id/* kernel/trace/ring_buffer.c 443 */;
	enum{RB_CTX_NMI, RB_CTX_IRQ, RB_CTX_SOFTIRQ, RB_CTX_NORMAL, RB_CTX_MAX,} cocci_id/* kernel/trace/ring_buffer.c 432 */;
	struct rb_event_info {
		u64 ts;
		u64 delta;
		unsigned long length;
		struct buffer_page *tail_page;
		int add_timestamp;
	} cocci_id/* kernel/trace/ring_buffer.c 415 */;
	struct rb_irq_work {
		struct irq_work work;
		wait_queue_head_t waiters;
		wait_queue_head_t full_waiters;
		bool waiters_pending;
		bool full_waiters_pending;
		bool wakeup_full;
	} cocci_id/* kernel/trace/ring_buffer.c 403 */;
	char cocci_id/* kernel/trace/ring_buffer.c 398 */;
	unsigned long *cocci_id/* kernel/trace/ring_buffer.c 3878 */;
	u64 *cocci_id/* kernel/trace/ring_buffer.c 3877 */;
	typeof(field) cocci_id/* kernel/trace/ring_buffer.c 384 */;
	struct ring_buffer_iter *cocci_id/* kernel/trace/ring_buffer.c 3829 */;
	unsigned int cocci_id/* kernel/trace/ring_buffer.c 379 */;
	struct buffer_data_page cocci_id/* kernel/trace/ring_buffer.c 375 */;
	struct trace_seq *cocci_id/* kernel/trace/ring_buffer.c 36 */;
	void cocci_id/* kernel/trace/ring_buffer.c 352 */;
	struct buffer_data_page *cocci_id/* kernel/trace/ring_buffer.c 343 */;
	struct buffer_page {
		struct list_head list;
		local_t write;
		unsigned read;
		local_t entries;
		unsigned long real_end;
		struct buffer_data_page *page;
	} cocci_id/* kernel/trace/ring_buffer.c 319 */;
	void cocci_id/* kernel/trace/ring_buffer.c 31 */(struct work_struct *work);
	struct rb_event_info cocci_id/* kernel/trace/ring_buffer.c 2876 */;
	unsigned long cocci_id/* kernel/trace/ring_buffer.c 2821 */;
	struct rb_event_info *cocci_id/* kernel/trace/ring_buffer.c 2817 */;
	struct ring_buffer_per_cpu *cocci_id/* kernel/trace/ring_buffer.c 2816 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/ring_buffer.c 2815 */;
	unsigned long long cocci_id/* kernel/trace/ring_buffer.c 2804 */;
	size_t cocci_id/* kernel/trace/ring_buffer.c 2614 */;
	struct ring_buffer_event cocci_id/* kernel/trace/ring_buffer.c 2377 */;
	bool cocci_id/* kernel/trace/ring_buffer.c 2328 */(struct ring_buffer_per_cpu *cpu_buffer,
							   struct ring_buffer_event *event);
	u64 cocci_id/* kernel/trace/ring_buffer.c 2308 */;
	void cocci_id/* kernel/trace/ring_buffer.c 2198 */(struct ring_buffer_per_cpu *cpu_buffer);
	void *cocci_id/* kernel/trace/ring_buffer.c 1905 */;
	unsigned cocci_id/* kernel/trace/ring_buffer.c 1905 */;
	struct work_struct *cocci_id/* kernel/trace/ring_buffer.c 1697 */;
	u64 (*cocci_id/* kernel/trace/ring_buffer.c 1467 */)(void);
	char *cocci_id/* kernel/trace/ring_buffer.c 143 */;
	struct lock_class_key *cocci_id/* kernel/trace/ring_buffer.c 1378 */;
	struct ring_buffer *cocci_id/* kernel/trace/ring_buffer.c 1377 */;
	enum{RB_LEN_TIME_EXTEND=8, RB_LEN_TIME_STAMP=8,} cocci_id/* kernel/trace/ring_buffer.c 137 */;
	struct buffer_page cocci_id/* kernel/trace/ring_buffer.c 1331 */;
	arch_spinlock_t cocci_id/* kernel/trace/ring_buffer.c 1302 */;
	struct page *cocci_id/* kernel/trace/ring_buffer.c 1226 */;
	gfp_t cocci_id/* kernel/trace/ring_buffer.c 1193 */;
	bool cocci_id/* kernel/trace/ring_buffer.c 1192 */;
	struct buffer_page *cocci_id/* kernel/trace/ring_buffer.c 1191 */;
	struct list_head *cocci_id/* kernel/trace/ring_buffer.c 1189 */;
	long cocci_id/* kernel/trace/ring_buffer.c 1189 */;
	int cocci_id/* kernel/trace/ring_buffer.c 1189 */;
}