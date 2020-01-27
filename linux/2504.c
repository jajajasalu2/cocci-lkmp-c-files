cocci_test_suite() {
	struct scatterlist **cocci_id/* drivers/md/dm-integrity.c 882 */;
	struct crypto_async_request *cocci_id/* drivers/md/dm-integrity.c 844 */;
	struct journal_entry {
		union {
			struct {
				__u32 sector_lo;
				__u32 sector_hi;
			} s;
			__u64 sector;
		} u;
		commit_id_t last_bytes[0];
	} cocci_id/* drivers/md/dm-integrity.c 84 */;
	struct page *cocci_id/* drivers/md/dm-integrity.c 814 */;
	struct page *cocci_id/* drivers/md/dm-integrity.c 813 */[2];
	struct async_submit_ctl cocci_id/* drivers/md/dm-integrity.c 790 */;
	__u8 cocci_id/* drivers/md/dm-integrity.c 759 */[JOURNAL_MAC_SIZE];
	__u8 cocci_id/* drivers/md/dm-integrity.c 738 */[HASH_MAX_DIGESTSIZE];
	unsigned *cocci_id/* drivers/md/dm-integrity.c 660 */;
	struct page_list *cocci_id/* drivers/md/dm-integrity.c 659 */;
	unsigned long *cocci_id/* drivers/md/dm-integrity.c 616 */;
	struct superblock {
		__u8 magic[8];
		__u8 version;
		__u8 log2_interleave_sectors;
		__u16 integrity_tag_size;
		__u32 journal_sections;
		__u64 provided_data_sectors;
		__u32 flags;
		__u8 log2_sectors_per_block;
		__u8 log2_blocks_per_bitmap_bit;
		__u8 pad[2];
		__u64 recalc_sector;
	} cocci_id/* drivers/md/dm-integrity.c 60 */;
	int cocci_id/* drivers/md/dm-integrity.c 506 */;
	void __exit cocci_id/* drivers/md/dm-integrity.c 4235 */;
	struct journal_io cocci_id/* drivers/md/dm-integrity.c 4221 */;
	int __init cocci_id/* drivers/md/dm-integrity.c 4216 */;
	struct target_type cocci_id/* drivers/md/dm-integrity.c 4201 */;
	__u8 cocci_id/* drivers/md/dm-integrity.c 3970 */;
	unsigned char cocci_id/* drivers/md/dm-integrity.c 388 */;
	commit_id_t cocci_id/* drivers/md/dm-integrity.c 387 */;
	uint64_t cocci_id/* drivers/md/dm-integrity.c 3722 */;
	void cocci_id/* drivers/md/dm-integrity.c 372 */(struct dm_target *ti);
	void cocci_id/* drivers/md/dm-integrity.c 371 */(struct work_struct *w);
	void cocci_id/* drivers/md/dm-integrity.c 370 */(struct dm_integrity_io *dio,
							 bool from_map);
	const struct blk_integrity_profile cocci_id/* drivers/md/dm-integrity.c 362 */;
	__s8 cocci_id/* drivers/md/dm-integrity.c 3607 */;
	const struct dm_arg cocci_id/* drivers/md/dm-integrity.c 3600 */[];
	struct dm_arg_set cocci_id/* drivers/md/dm-integrity.c 3599 */;
	char cocci_id/* drivers/md/dm-integrity.c 3596 */;
	struct dm_target *cocci_id/* drivers/md/dm-integrity.c 3593 */;
	struct request *cocci_id/* drivers/md/dm-integrity.c 355 */;
	unsigned int cocci_id/* drivers/md/dm-integrity.c 355 */;
	__u32 cocci_id/* drivers/md/dm-integrity.c 3497 */;
	atomic_t cocci_id/* drivers/md/dm-integrity.c 3437 */;
	struct scatterlist cocci_id/* drivers/md/dm-integrity.c 3419 */;
	struct scatterlist *cocci_id/* drivers/md/dm-integrity.c 3395 */;
	struct journal_completion cocci_id/* drivers/md/dm-integrity.c 3363 */;
	struct page_list cocci_id/* drivers/md/dm-integrity.c 3347 */;
	struct skcipher_request *cocci_id/* drivers/md/dm-integrity.c 3338 */;
	unsigned char *cocci_id/* drivers/md/dm-integrity.c 3337 */;
	char **cocci_id/* drivers/md/dm-integrity.c 3332 */;
	va_list cocci_id/* drivers/md/dm-integrity.c 332 */;
	struct crypto_shash **cocci_id/* drivers/md/dm-integrity.c 3303 */;
	const char *cocci_id/* drivers/md/dm-integrity.c 330 */;
	__u8 *cocci_id/* drivers/md/dm-integrity.c 330 */;
	size_t cocci_id/* drivers/md/dm-integrity.c 330 */;
	void cocci_id/* drivers/md/dm-integrity.c 330 */;
	struct alg_spec *cocci_id/* drivers/md/dm-integrity.c 3262 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-integrity.c 324 */;
	struct blk_integrity cocci_id/* drivers/md/dm-integrity.c 3158 */;
	struct gendisk *cocci_id/* drivers/md/dm-integrity.c 3157 */;
	struct bitmap_block_status {
		struct work_struct work;
		struct dm_integrity_c *ic;
		unsigned idx;
		unsigned long *bitmap;
		struct bio_list bio_queue;
		spinlock_t bio_queue_lock;
	} cocci_id/* drivers/md/dm-integrity.c 314 */;
	struct journal_io {
		struct dm_integrity_range range;
		struct journal_completion *comp;
	} cocci_id/* drivers/md/dm-integrity.c 309 */;
	__u64 cocci_id/* drivers/md/dm-integrity.c 3042 */;
	struct journal_completion {
		struct dm_integrity_c *ic;
		atomic_t in_flight;
		struct completion comp;
	} cocci_id/* drivers/md/dm-integrity.c 303 */;
	struct journal_entry cocci_id/* drivers/md/dm-integrity.c 3029 */;
	struct queue_limits *cocci_id/* drivers/md/dm-integrity.c 3013 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-integrity.c 3003 */;
	status_type_t cocci_id/* drivers/md/dm-integrity.c 2930 */;
	long cocci_id/* drivers/md/dm-integrity.c 2910 */;
	struct dm_integrity_io {
		struct work_struct work;
		struct dm_integrity_c *ic;
		bool write;
		bool fua;
		struct dm_integrity_range range;
		sector_t metadata_block;
		unsigned metadata_offset;
		atomic_t in_flight;
		blk_status_t bi_status;
		struct completion *completion;
		struct gendisk *orig_bi_disk;
		u8 orig_bi_partno;
		bio_end_io_t *orig_bi_end_io;
		struct bio_integrity_payload *orig_bi_integrity;
		struct bvec_iter orig_bi_iter;
	} cocci_id/* drivers/md/dm-integrity.c 279 */;
	struct notifier_block *cocci_id/* drivers/md/dm-integrity.c 2787 */;
	struct dm_integrity_range {
		sector_t logical_sector;
		sector_t n_sectors;
		bool waiting;
		union {
			struct rb_node node;
			struct {
				struct task_struct *task;
				struct list_head wait_entry;
			};
		};
	} cocci_id/* drivers/md/dm-integrity.c 266 */;
	unsigned cocci_id/* drivers/md/dm-integrity.c 2617 */[N_COMMIT_IDS];
	bool cocci_id/* drivers/md/dm-integrity.c 2616 */[N_COMMIT_IDS];
	unsigned long cocci_id/* drivers/md/dm-integrity.c 2537 */;
	struct dm_integrity_c cocci_id/* drivers/md/dm-integrity.c 2535 */;
	struct dm_integrity_io cocci_id/* drivers/md/dm-integrity.c 2498 */;
	struct bio_list cocci_id/* drivers/md/dm-integrity.c 2485 */;
	struct bitmap_block_status cocci_id/* drivers/md/dm-integrity.c 2482 */;
	struct bitmap_block_status *cocci_id/* drivers/md/dm-integrity.c 2482 */;
	struct work_struct *cocci_id/* drivers/md/dm-integrity.c 2480 */;
	char cocci_id/* drivers/md/dm-integrity.c 2274 */[max_t(size_t,
								HASH_MAX_DIGESTSIZE,
								MAX_TAG_SIZE)];
	struct blk_plug cocci_id/* drivers/md/dm-integrity.c 2176 */;
	struct journal_completion *cocci_id/* drivers/md/dm-integrity.c 2152 */;
	struct journal_io *cocci_id/* drivers/md/dm-integrity.c 2151 */;
	void *cocci_id/* drivers/md/dm-integrity.c 2149 */;
	struct completion cocci_id/* drivers/md/dm-integrity.c 1863 */;
	char cocci_id/* drivers/md/dm-integrity.c 1806 */[HASH_MAX_DIGESTSIZE];
	struct bio_integrity_payload *cocci_id/* drivers/md/dm-integrity.c 1768 */;
	unsigned long long cocci_id/* drivers/md/dm-integrity.c 1761 */;
	char cocci_id/* drivers/md/dm-integrity.c 1756 */[max(HASH_MAX_DIGESTSIZE,
							      MAX_TAG_SIZE)];
	commit_id_t *cocci_id/* drivers/md/dm-integrity.c 1750 */;
	struct journal_sector *cocci_id/* drivers/md/dm-integrity.c 1732 */;
	struct journal_entry *cocci_id/* drivers/md/dm-integrity.c 1729 */;
	char *cocci_id/* drivers/md/dm-integrity.c 1717 */;
	struct bio_vec cocci_id/* drivers/md/dm-integrity.c 1716 */;
	sector_t cocci_id/* drivers/md/dm-integrity.c 1710 */;
	struct dm_integrity_c *cocci_id/* drivers/md/dm-integrity.c 1709 */;
	unsigned cocci_id/* drivers/md/dm-integrity.c 1707 */;
	bool cocci_id/* drivers/md/dm-integrity.c 1706 */;
	struct dm_integrity_io *cocci_id/* drivers/md/dm-integrity.c 1706 */;
	struct bio *cocci_id/* drivers/md/dm-integrity.c 1706 */;
	struct bvec_iter cocci_id/* drivers/md/dm-integrity.c 1663 */;
	struct dm_integrity_c {
		struct dm_dev *dev;
		struct dm_dev *meta_dev;
		unsigned tag_size;
		__s8 log2_tag_size;
		sector_t start;
		mempool_t journal_io_mempool;
		struct dm_io_client *io;
		struct dm_bufio_client *bufio;
		struct workqueue_struct *metadata_wq;
		struct superblock *sb;
		unsigned journal_pages;
		unsigned n_bitmap_blocks;
		struct page_list *journal;
		struct page_list *journal_io;
		struct page_list *journal_xor;
		struct page_list *recalc_bitmap;
		struct page_list *may_write_bitmap;
		struct bitmap_block_status *bbs;
		unsigned bitmap_flush_interval;
		int synchronous_mode;
		struct bio_list synchronous_bios;
		struct delayed_work bitmap_flush_work;
		struct crypto_skcipher *journal_crypt;
		struct scatterlist **journal_scatterlist;
		struct scatterlist **journal_io_scatterlist;
		struct skcipher_request **sk_requests;
		struct crypto_shash *journal_mac;
		struct journal_node *journal_tree;
		struct rb_root journal_tree_root;
		sector_t provided_data_sectors;
		unsigned short journal_entry_size;
		unsigned char journal_entries_per_sector;
		unsigned char journal_section_entries;
		unsigned short journal_section_sectors;
		unsigned journal_sections;
		unsigned journal_entries;
		sector_t data_device_sectors;
		sector_t meta_device_sectors;
		unsigned initial_sectors;
		unsigned metadata_run;
		__s8 log2_metadata_run;
		__u8 log2_buffer_sectors;
		__u8 sectors_per_block;
		__u8 log2_blocks_per_bitmap_bit;
		unsigned char mode;
		int suspending;
		int failed;
		struct crypto_shash *internal_hash;
		struct rb_root in_progress;
		struct list_head wait_list;
		wait_queue_head_t endio_wait;
		struct workqueue_struct *wait_wq;
		unsigned char commit_seq;
		commit_id_t commit_ids[N_COMMIT_IDS];
		unsigned committed_section;
		unsigned n_committed_sections;
		unsigned uncommitted_section;
		unsigned n_uncommitted_sections;
		unsigned free_section;
		unsigned char free_section_entry;
		unsigned free_sectors;
		unsigned free_sectors_threshold;
		struct workqueue_struct *commit_wq;
		struct work_struct commit_work;
		struct workqueue_struct *writer_wq;
		struct work_struct writer_work;
		struct workqueue_struct *recalc_wq;
		struct work_struct recalc_work;
		u8 *recalc_buffer;
		u8 *recalc_tags;
		struct bio_list flush_bio_list;
		unsigned long autocommit_jiffies;
		struct timer_list autocommit_timer;
		unsigned autocommit_msec;
		wait_queue_head_t copy_to_journal_wait;
		struct completion crypto_backoff;
		bool journal_uptodate;
		bool just_formatted;
		bool recalculate_flag;
		bool fix_padding;
		struct alg_spec internal_hash_alg;
		struct alg_spec journal_crypt_alg;
		struct alg_spec journal_mac_alg;
		atomic64_t number_of_mismatches;
		struct notifier_block reboot_notifier;
	} cocci_id/* drivers/md/dm-integrity.c 151 */;
	const __u8 *cocci_id/* drivers/md/dm-integrity.c 1484 */;
	struct alg_spec {
		char *alg_string;
		char *key_string;
		__u8 *key;
		unsigned key_size;
	} cocci_id/* drivers/md/dm-integrity.c 144 */;
	struct journal_node {
		struct rb_node node;
		sector_t sector;
	} cocci_id/* drivers/md/dm-integrity.c 139 */;
	struct timer_list *cocci_id/* drivers/md/dm-integrity.c 1370 */;
	struct dm_buffer *cocci_id/* drivers/md/dm-integrity.c 1304 */;
	sector_t *cocci_id/* drivers/md/dm-integrity.c 1299 */;
	struct journal_node cocci_id/* drivers/md/dm-integrity.c 1206 */;
	struct rb_node *cocci_id/* drivers/md/dm-integrity.c 1195 */;
	struct rb_node **cocci_id/* drivers/md/dm-integrity.c 1194 */;
	struct journal_node *cocci_id/* drivers/md/dm-integrity.c 1192 */;
	struct task_struct *cocci_id/* drivers/md/dm-integrity.c 1145 */;
	struct journal_sector {
		__u8 entries[JOURNAL_SECTOR_DATA - JOURNAL_MAC_PER_SECTOR];
		__u8 mac[JOURNAL_MAC_PER_SECTOR];
		commit_id_t commit_id;
	} cocci_id/* drivers/md/dm-integrity.c 113 */;
	struct dm_integrity_range cocci_id/* drivers/md/dm-integrity.c 1121 */;
	struct dm_integrity_range *cocci_id/* drivers/md/dm-integrity.c 1103 */;
	struct dm_io_region cocci_id/* drivers/md/dm-integrity.c 1062 */;
	struct dm_io_request cocci_id/* drivers/md/dm-integrity.c 1061 */;
	io_notify_fn cocci_id/* drivers/md/dm-integrity.c 1059 */;
}