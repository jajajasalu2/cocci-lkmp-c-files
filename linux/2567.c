cocci_test_suite() {
	char **cocci_id/* drivers/md/dm-writecache.c 967 */;
	__le64 cocci_id/* drivers/md/dm-writecache.c 879 */;
	struct rb_node *cocci_id/* drivers/md/dm-writecache.c 794 */;
	struct timer_list *cocci_id/* drivers/md/dm-writecache.c 771 */;
	struct wc_entry {
		struct rb_node rb_node;
		struct list_head lru;
		unsigned short wc_list_contiguous;
		bool write_in_progress

#if BITS_PER_LONG == 64
:1

#endif
;
		unsigned long index

#if BITS_PER_LONG == 64
:47

#endif
;

#ifdef DM_WRITECACHE_HANDLE_HARDWARE_ERRORS

		uint64_t original_sector;
		uint64_t seq_count;

#endif

	} cocci_id/* drivers/md/dm-writecache.c 77 */;
	struct work_struct *cocci_id/* drivers/md/dm-writecache.c 762 */;
	struct wc_memory_superblock {
		union {
			struct {
				__le32 magic;
				__le32 version;
				__le32 block_size;
				__le32 pad;
				__le64 n_blocks;
				__le64 seq_count;
			};
			__le64 padding[8];
		};
		struct wc_memory_entry entries[0];
	} cocci_id/* drivers/md/dm-writecache.c 62 */;
	struct rb_node **cocci_id/* drivers/md/dm-writecache.c 607 */;
	struct wc_memory_entry {
		__le64 original_sector;
		__le64 seq_count;
	} cocci_id/* drivers/md/dm-writecache.c 57 */;
	struct dm_dev *cocci_id/* drivers/md/dm-writecache.c 504 */;
	struct io_notify cocci_id/* drivers/md/dm-writecache.c 449 */;
	struct dm_io_request cocci_id/* drivers/md/dm-writecache.c 448 */;
	struct io_notify *cocci_id/* drivers/md/dm-writecache.c 436 */;
	typeof(dest) cocci_id/* drivers/md/dm-writecache.c 43 */;
	struct io_notify {
		struct dm_writecache *wc;
		struct completion c;
		atomic_t count;
	} cocci_id/* drivers/md/dm-writecache.c 428 */;
	void cocci_id/* drivers/md/dm-writecache.c 426 */(struct dm_writecache *wc,
							  struct dm_dev *dev);
	sector_t cocci_id/* drivers/md/dm-writecache.c 359 */;
	struct wc_memory_entry *cocci_id/* drivers/md/dm-writecache.c 349 */;
	struct wc_memory_superblock *cocci_id/* drivers/md/dm-writecache.c 344 */;
	struct page *cocci_id/* drivers/md/dm-writecache.c 261 */;
	void __exit cocci_id/* drivers/md/dm-writecache.c 2321 */;
	int __init cocci_id/* drivers/md/dm-writecache.c 2308 */;
	struct target_type cocci_id/* drivers/md/dm-writecache.c 2292 */;
	struct page **cocci_id/* drivers/md/dm-writecache.c 226 */;
	pfn_t cocci_id/* drivers/md/dm-writecache.c 224 */;
	status_type_t cocci_id/* drivers/md/dm-writecache.c 2232 */;
	long cocci_id/* drivers/md/dm-writecache.c 223 */;
	loff_t cocci_id/* drivers/md/dm-writecache.c 222 */;
	unsigned long long cocci_id/* drivers/md/dm-writecache.c 1991 */;
	struct copy_struct {
		struct list_head endio_entry;
		struct dm_writecache *wc;
		struct wc_entry *e;
		unsigned n_entries;
		int error;
	} cocci_id/* drivers/md/dm-writecache.c 197 */;
	struct writeback_struct {
		struct list_head endio_entry;
		struct dm_writecache *wc;
		struct wc_entry **wc_list;
		unsigned wc_list_n;
		struct wc_entry *wc_list_inline[WB_LIST_INLINE];
		struct bio bio;
	} cocci_id/* drivers/md/dm-writecache.c 188 */;
	struct dm_writecache cocci_id/* drivers/md/dm-writecache.c 1846 */;
	struct dm_arg cocci_id/* drivers/md/dm-writecache.c 1839 */[];
	char cocci_id/* drivers/md/dm-writecache.c 1833 */;
	const char *cocci_id/* drivers/md/dm-writecache.c 1829 */;
	struct dm_arg_set cocci_id/* drivers/md/dm-writecache.c 1828 */;
	struct dm_target *cocci_id/* drivers/md/dm-writecache.c 1825 */;
	struct wc_memory_superblock cocci_id/* drivers/md/dm-writecache.c 1723 */;
	size_t cocci_id/* drivers/md/dm-writecache.c 1723 */;
	struct wc_memory_entry cocci_id/* drivers/md/dm-writecache.c 1717 */;
	size_t *cocci_id/* drivers/md/dm-writecache.c 1711 */;
	uint64_t cocci_id/* drivers/md/dm-writecache.c 1710 */;
	struct writeback_list cocci_id/* drivers/md/dm-writecache.c 1568 */;
	struct blk_plug cocci_id/* drivers/md/dm-writecache.c 1564 */;
	struct dm_io_region cocci_id/* drivers/md/dm-writecache.c 1523 */;
	struct wc_entry cocci_id/* drivers/md/dm-writecache.c 1472 */;
	struct bio *cocci_id/* drivers/md/dm-writecache.c 1466 */;
	struct writeback_list *cocci_id/* drivers/md/dm-writecache.c 1450 */;
	struct dm_writecache *cocci_id/* drivers/md/dm-writecache.c 1450 */;
	void cocci_id/* drivers/md/dm-writecache.c 1450 */;
	struct writeback_list {
		struct list_head list;
		size_t size;
	} cocci_id/* drivers/md/dm-writecache.c 1445 */;
	gfp_t cocci_id/* drivers/md/dm-writecache.c 1434 */;
	bool cocci_id/* drivers/md/dm-writecache.c 1434 */;
	struct list_head cocci_id/* drivers/md/dm-writecache.c 1391 */;
	struct copy_struct cocci_id/* drivers/md/dm-writecache.c 1364 */;
	struct copy_struct *cocci_id/* drivers/md/dm-writecache.c 1360 */;
	struct writeback_struct cocci_id/* drivers/md/dm-writecache.c 1327 */;
	unsigned long cocci_id/* drivers/md/dm-writecache.c 1324 */;
	struct wc_entry *cocci_id/* drivers/md/dm-writecache.c 1323 */;
	struct writeback_struct *cocci_id/* drivers/md/dm-writecache.c 1322 */;
	unsigned cocci_id/* drivers/md/dm-writecache.c 1321 */;
	struct list_head *cocci_id/* drivers/md/dm-writecache.c 1319 */;
	struct queue_limits *cocci_id/* drivers/md/dm-writecache.c 1277 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-writecache.c 1270 */;
	blk_status_t *cocci_id/* drivers/md/dm-writecache.c 1256 */;
	struct dm_writecache {
		struct mutex lock;
		struct list_head lru;
		union {
			struct list_head freelist;
			struct {
				struct rb_root freetree;
				struct wc_entry *current_free;
			};
		};
		struct rb_root tree;
		size_t freelist_size;
		size_t writeback_size;
		size_t freelist_high_watermark;
		size_t freelist_low_watermark;
		unsigned uncommitted_blocks;
		unsigned autocommit_blocks;
		unsigned max_writeback_jobs;
		int error;
		unsigned long autocommit_jiffies;
		struct timer_list autocommit_timer;
		struct wait_queue_head freelist_wait;
		atomic_t bio_in_progress[2];
		struct wait_queue_head bio_in_progress_wait[2];
		struct dm_target *ti;
		struct dm_dev *dev;
		struct dm_dev *ssd_dev;
		sector_t start_sector;
		void *memory_map;
		uint64_t memory_map_size;
		size_t metadata_sectors;
		size_t n_blocks;
		uint64_t seq_count;
		void *block_start;
		struct wc_entry *entries;
		unsigned block_size;
		unsigned char block_size_bits;
		bool pmem_mode:1;
		bool writeback_fua:1;
		bool overwrote_committed:1;
		bool memory_vmapped:1;
		bool high_wm_percent_set:1;
		bool low_wm_percent_set:1;
		bool max_writeback_jobs_set:1;
		bool autocommit_blocks_set:1;
		bool autocommit_time_set:1;
		bool writeback_fua_set:1;
		bool flush_on_suspend:1;
		unsigned writeback_all;
		struct workqueue_struct *writeback_wq;
		struct work_struct writeback_work;
		struct work_struct flush_work;
		struct dm_io_client *dm_io;
		raw_spinlock_t endio_list_lock;
		struct list_head endio_list;
		struct task_struct *endio_thread;
		struct task_struct *flush_thread;
		struct bio_list flush_list;
		struct dm_kcopyd_client *dm_kcopyd;
		unsigned long *dirty_bitmap;
		unsigned dirty_bitmap_size;
		struct bio_set bio_set;
		mempool_t copy_pool;
	} cocci_id/* drivers/md/dm-writecache.c 106 */;
	char *cocci_id/* drivers/md/dm-writecache.c 1058 */;
	struct bio_vec cocci_id/* drivers/md/dm-writecache.c 1037 */;
	int cocci_id/* drivers/md/dm-writecache.c 1033 */;
	void *cocci_id/* drivers/md/dm-writecache.c 1028 */;
}
