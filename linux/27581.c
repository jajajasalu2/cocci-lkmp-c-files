cocci_test_suite() {
	bool cocci_id/* fs/btrfs/scrub.c 836 */;
	struct scrub_recover *cocci_id/* fs/btrfs/scrub.c 798 */;
	struct btrfs_extent_item cocci_id/* fs/btrfs/scrub.c 767 */;
	u8 cocci_id/* fs/btrfs/scrub.c 742 */;
	struct scrub_warning cocci_id/* fs/btrfs/scrub.c 736 */;
	struct btrfs_extent_item *cocci_id/* fs/btrfs/scrub.c 735 */;
	const char *cocci_id/* fs/btrfs/scrub.c 728 */;
	char *cocci_id/* fs/btrfs/scrub.c 711 */;
	struct btrfs_inode_item cocci_id/* fs/btrfs/scrub.c 676 */;
	struct inode_fs_paths *cocci_id/* fs/btrfs/scrub.c 647 */;
	struct scrub_warning *cocci_id/* fs/btrfs/scrub.c 645 */;
	struct btrfs_inode_item *cocci_id/* fs/btrfs/scrub.c 644 */;
	unsigned cocci_id/* fs/btrfs/scrub.c 642 */;
	struct scrub_page {
		struct scrub_block *sblock;
		struct page *page;
		struct btrfs_device *dev;
		struct list_head list;
		u64 flags;
		u64 generation;
		u64 logical;
		u64 physical;
		u64 physical_for_dev_replace;
		atomic_t refs;
		struct {
			unsigned int mirror_num:8;
			unsigned int have_csum:1;
			unsigned int io_error:1;
		};
		u8 csum[BTRFS_CSUM_SIZE];
		struct scrub_recover *recover;
	} cocci_id/* fs/btrfs/scrub.c 62 */;
	struct scrub_recover {
		refcount_t refs;
		struct btrfs_bio *bbio;
		u64 map_length;
	} cocci_id/* fs/btrfs/scrub.c 56 */;
	bool *cocci_id/* fs/btrfs/scrub.c 423 */;
	int *cocci_id/* fs/btrfs/scrub.c 4035 */;
	struct btrfs_device **cocci_id/* fs/btrfs/scrub.c 4034 */;
	struct scrub_ctx *cocci_id/* fs/btrfs/scrub.c 3994 */;
	struct btrfs_device *cocci_id/* fs/btrfs/scrub.c 3991 */;
	struct btrfs_block_group *cocci_id/* fs/btrfs/scrub.c 392 */;
	struct btrfs_workqueue *cocci_id/* fs/btrfs/scrub.c 3778 */;
	unsigned int cocci_id/* fs/btrfs/scrub.c 3777 */;
	struct btrfs_scrub_progress *cocci_id/* fs/btrfs/scrub.c 3771 */;
	struct scrub_ctx cocci_id/* fs/btrfs/scrub.c 37 */;
	struct btrfs_dev_extent cocci_id/* fs/btrfs/scrub.c 3534 */;
	struct btrfs_dev_replace *cocci_id/* fs/btrfs/scrub.c 3484 */;
	struct btrfs_key cocci_id/* fs/btrfs/scrub.c 3481 */;
	struct extent_buffer *cocci_id/* fs/btrfs/scrub.c 3480 */;
	struct btrfs_root *cocci_id/* fs/btrfs/scrub.c 3474 */;
	struct btrfs_path *cocci_id/* fs/btrfs/scrub.c 3472 */;
	struct btrfs_dev_extent *cocci_id/* fs/btrfs/scrub.c 3471 */;
	struct extent_map *cocci_id/* fs/btrfs/scrub.c 3424 */;
	struct extent_map_tree *cocci_id/* fs/btrfs/scrub.c 3422 */;
	struct full_stripe_lock cocci_id/* fs/btrfs/scrub.c 333 */;
	struct rb_node *cocci_id/* fs/btrfs/scrub.c 324 */;
	struct rb_node **cocci_id/* fs/btrfs/scrub.c 323 */;
	struct btrfs_full_stripe_locks_tree *cocci_id/* fs/btrfs/scrub.c 320 */;
	struct full_stripe_lock *cocci_id/* fs/btrfs/scrub.c 319 */;
	struct reada_control *cocci_id/* fs/btrfs/scrub.c 3064 */;
	struct blk_plug cocci_id/* fs/btrfs/scrub.c 3052 */;
	long cocci_id/* fs/btrfs/scrub.c 2801 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/scrub.c 277 */;
	void cocci_id/* fs/btrfs/scrub.c 277 */;
	struct scrub_parity cocci_id/* fs/btrfs/scrub.c 2723 */;
	const int cocci_id/* fs/btrfs/scrub.c 2672 */;
	u64 *cocci_id/* fs/btrfs/scrub.c 2663 */;
	struct map_lookup *cocci_id/* fs/btrfs/scrub.c 2663 */;
	void cocci_id/* fs/btrfs/scrub.c 254 */(struct btrfs_fs_info *fs_info);
	struct btrfs_ordered_sum cocci_id/* fs/btrfs/scrub.c 2442 */;
	void cocci_id/* fs/btrfs/scrub.c 244 */(struct btrfs_fs_info *fs_info,
						u64 extent_logical,
						u64 extent_len,
						u64 *extent_physical,
						struct btrfs_device **extent_dev,
						int *extent_mirror_num);
	unsigned long cocci_id/* fs/btrfs/scrub.c 2437 */;
	struct btrfs_ordered_sum *cocci_id/* fs/btrfs/scrub.c 2436 */;
	void cocci_id/* fs/btrfs/scrub.c 243 */(struct scrub_block *sblock);
	void cocci_id/* fs/btrfs/scrub.c 242 */(struct btrfs_work *work);
	void cocci_id/* fs/btrfs/scrub.c 241 */(struct bio *bio);
	int cocci_id/* fs/btrfs/scrub.c 2370 */;
	int cocci_id/* fs/btrfs/scrub.c 237 */(struct scrub_ctx *sctx,
					       u64 logical, u64 len,
					       u64 physical,
					       struct btrfs_device *dev,
					       u64 flags, u64 gen,
					       int mirror_num, u8 *csum,
					       int force,
					       u64 physical_for_dev_replace);
	u32 cocci_id/* fs/btrfs/scrub.c 2369 */;
	u64 cocci_id/* fs/btrfs/scrub.c 2365 */;
	unsigned long *cocci_id/* fs/btrfs/scrub.c 2364 */;
	struct scrub_parity *cocci_id/* fs/btrfs/scrub.c 2363 */;
	int cocci_id/* fs/btrfs/scrub.c 235 */(struct scrub_ctx *sctx,
					       struct scrub_page *spage);
	void cocci_id/* fs/btrfs/scrub.c 233 */(struct scrub_parity *sparity);
	struct scrub_bio cocci_id/* fs/btrfs/scrub.c 2323 */;
	struct btrfs_work *cocci_id/* fs/btrfs/scrub.c 2321 */;
	void cocci_id/* fs/btrfs/scrub.c 231 */(struct scrub_page *spage);
	int cocci_id/* fs/btrfs/scrub.c 226 */(struct scrub_block *sblock);
	int cocci_id/* fs/btrfs/scrub.c 224 */(struct scrub_block *sblock,
					       int page_num);
	int cocci_id/* fs/btrfs/scrub.c 220 */(struct scrub_block *sblock_bad,
					       struct scrub_block *sblock_good,
					       int page_num, int force_write);
	int cocci_id/* fs/btrfs/scrub.c 218 */(struct scrub_block *sblock_bad,
					       struct scrub_block *sblock_good);
	struct btrfs_raid_bio *cocci_id/* fs/btrfs/scrub.c 2168 */;
	struct btrfs_bio *cocci_id/* fs/btrfs/scrub.c 2166 */;
	void cocci_id/* fs/btrfs/scrub.c 214 */(struct btrfs_fs_info *fs_info,
						struct scrub_block *sblock,
						int retry_failed_mirror);
	struct scrub_block cocci_id/* fs/btrfs/scrub.c 2120 */;
	int cocci_id/* fs/btrfs/scrub.c 212 */(struct scrub_block *original_sblock,
					       struct scrub_block *sblocks_for_recheck);
	int cocci_id/* fs/btrfs/scrub.c 211 */(struct scrub_block *sblock_to_check);
	void cocci_id/* fs/btrfs/scrub.c 210 */(struct scrub_ctx *sctx);
	struct bio *cocci_id/* fs/btrfs/scrub.c 2058 */;
	struct scrub_bio *cocci_id/* fs/btrfs/scrub.c 2036 */;
	struct scrub_block *cocci_id/* fs/btrfs/scrub.c 2035 */;
	struct scrub_page *cocci_id/* fs/btrfs/scrub.c 2033 */;
	struct full_stripe_lock {
		struct rb_node node;
		u64 logical;
		u64 refs;
		struct mutex mutex;
	} cocci_id/* fs/btrfs/scrub.c 202 */;
	struct scrub_warning {
		struct btrfs_path *path;
		u64 extent_item_size;
		const char *errstr;
		u64 physical;
		u64 logical;
		struct btrfs_device *dev;
	} cocci_id/* fs/btrfs/scrub.c 193 */;
	struct btrfs_super_block *cocci_id/* fs/btrfs/scrub.c 1908 */;
	struct btrfs_header *cocci_id/* fs/btrfs/scrub.c 1837 */;
	void *cocci_id/* fs/btrfs/scrub.c 1795 */;
	struct page *cocci_id/* fs/btrfs/scrub.c 1794 */;
	u8 *cocci_id/* fs/btrfs/scrub.c 1793 */;
	u8 cocci_id/* fs/btrfs/scrub.c 1792 */[BTRFS_CSUM_SIZE];
	struct scrub_ctx {
		struct scrub_bio *bios[SCRUB_BIOS_PER_SCTX];
		struct btrfs_fs_info *fs_info;
		int first_free;
		int curr;
		atomic_t bios_in_flight;
		atomic_t workers_pending;
		spinlock_t list_lock;
		wait_queue_head_t list_wait;
		u16 csum_size;
		struct list_head csum_list;
		atomic_t cancel_req;
		int readonly;
		int pages_per_rd_bio;
		int is_dev_replace;
		struct scrub_bio *wr_curr_bio;
		struct mutex wr_lock;
		int pages_per_wr_bio;
		struct btrfs_device *wr_tgtdev;
		bool flush_all_writes;
		struct btrfs_scrub_progress stat;
		spinlock_t stat_lock;
		refcount_t refs;
	} cocci_id/* fs/btrfs/scrub.c 154 */;
	struct btrfs_fs_devices *cocci_id/* fs/btrfs/scrub.c 1509 */;
	u8 cocci_id/* fs/btrfs/scrub.c 1506 */[];
	struct scrub_recover cocci_id/* fs/btrfs/scrub.c 1310 */;
	struct scrub_parity {
		struct scrub_ctx *sctx;
		struct btrfs_device *scrub_dev;
		u64 logic_start;
		u64 logic_end;
		int nsectors;
		u64 stripe_len;
		refcount_t refs;
		struct list_head spages;
		struct btrfs_work work;
		unsigned long *dbitmap;
		unsigned long *ebitmap;
		unsigned long bitmap[0];
	} cocci_id/* fs/btrfs/scrub.c 122 */;
	struct scrub_block {
		struct scrub_page *pagev[SCRUB_MAX_PAGES_PER_BLOCK];
		int page_count;
		atomic_t outstanding_pages;
		refcount_t refs;
		struct scrub_ctx *sctx;
		struct scrub_parity *sparity;
		struct {
			unsigned int header_error:1;
			unsigned int checksum_error:1;
			unsigned int no_io_error_seen:1;
			unsigned int generation_error:1;
			unsigned int data_corrected:1;
		};
		struct btrfs_work work;
	} cocci_id/* fs/btrfs/scrub.c 101 */;
	struct scrub_bio {
		int index;
		struct scrub_ctx *sctx;
		struct btrfs_device *dev;
		struct bio *bio;
		blk_status_t status;
		u64 logical;
		u64 physical;
#if SCRUB_PAGES_PER_WR_BIO >= SCRUB_PAGES_PER_RD_BIO
		struct scrub_page *pagev[SCRUB_PAGES_PER_WR_BIO];
#else
		struct scrub_page *pagev[SCRUB_PAGES_PER_RD_BIO];
#endif
		int page_count;
		int next_free;
		struct btrfs_work work;
	} cocci_id/*  1 */;
}
