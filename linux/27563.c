cocci_test_suite() {
	u64 cocci_id/* fs/btrfs/raid56.c 975 */;
	struct btrfs_bio *cocci_id/* fs/btrfs/raid56.c 974 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/raid56.c 973 */;
	int cocci_id/* fs/btrfs/raid56.c 835 */;
	struct btrfs_raid_bio *cocci_id/* fs/btrfs/raid56.c 833 */;
	void cocci_id/* fs/btrfs/raid56.c 833 */;
	struct btrfs_raid_bio {
		struct btrfs_fs_info *fs_info;
		struct btrfs_bio *bbio;
		struct list_head hash_list;
		struct list_head stripe_cache;
		struct btrfs_work work;
		struct bio_list bio_list;
		spinlock_t bio_list_lock;
		struct list_head plug_list;
		unsigned long flags;
		int stripe_len;
		int nr_data;
		int real_stripes;
		int stripe_npages;
		enum btrfs_rbio_ops operation;
		int faila;
		int failb;
		int scrubp;
		int nr_pages;
		int bio_list_bytes;
		int generic_bio_cnt;
		refcount_t refs;
		atomic_t stripes_pending;
		atomic_t error;
		struct page **stripe_pages;
		struct page **bio_pages;
		unsigned long *dbitmap;
		void **finish_pointers;
		unsigned long *finish_pbitmap;
	} cocci_id/* fs/btrfs/raid56.c 61 */;
	enum btrfs_rbio_ops{BTRFS_RBIO_WRITE, BTRFS_RBIO_READ_REBUILD, BTRFS_RBIO_PARITY_SCRUB, BTRFS_RBIO_REBUILD_MISSING,} cocci_id/* fs/btrfs/raid56.c 54 */;
	ssize_t cocci_id/* fs/btrfs/raid56.c 510 */;
	struct btrfs_stripe_hash_table {
		struct list_head stripe_cache;
		spinlock_t cache_lock;
		int cache_size;
		struct btrfs_stripe_hash table[];
	} cocci_id/* fs/btrfs/raid56.c 47 */;
	struct btrfs_raid_bio cocci_id/* fs/btrfs/raid56.c 434 */;
	unsigned long cocci_id/* fs/btrfs/raid56.c 426 */;
	struct btrfs_stripe_hash {
		struct list_head hash_list;
		spinlock_t lock;
	} cocci_id/* fs/btrfs/raid56.c 41 */;
	struct btrfs_stripe_hash *cocci_id/* fs/btrfs/raid56.c 349 */;
	struct btrfs_stripe_hash_table *cocci_id/* fs/btrfs/raid56.c 348 */;
	char *cocci_id/* fs/btrfs/raid56.c 255 */;
	unsigned long *cocci_id/* fs/btrfs/raid56.c 2352 */;
	struct btrfs_device *cocci_id/* fs/btrfs/raid56.c 2262 */;
	struct btrfs_work *cocci_id/* fs/btrfs/raid56.c 2241 */;
	struct page *cocci_id/* fs/btrfs/raid56.c 2083 */;
	struct bio *cocci_id/* fs/btrfs/raid56.c 2061 */;
	struct bio_list cocci_id/* fs/btrfs/raid56.c 2057 */;
	btrfs_func_t cocci_id/* fs/btrfs/raid56.c 191 */;
	void cocci_id/* fs/btrfs/raid56.c 187 */(struct btrfs_raid_bio *rbio,
						 int need_check);
	void cocci_id/* fs/btrfs/raid56.c 183 */(struct btrfs_raid_bio *rbio);
	int cocci_id/* fs/btrfs/raid56.c 182 */(struct btrfs_raid_bio *rbio,
						int failed);
	void *cocci_id/* fs/btrfs/raid56.c 1817 */;
	blk_status_t cocci_id/* fs/btrfs/raid56.c 1814 */;
	void **cocci_id/* fs/btrfs/raid56.c 1811 */;
	int cocci_id/* fs/btrfs/raid56.c 181 */(struct btrfs_raid_bio *rbio,
						struct bio *bio);
	void cocci_id/* fs/btrfs/raid56.c 180 */(struct btrfs_work *work);
	int cocci_id/* fs/btrfs/raid56.c 177 */(struct btrfs_raid_bio *rbio);
	struct btrfs_plug_cb cocci_id/* fs/btrfs/raid56.c 1741 */;
	struct btrfs_plug_cb *cocci_id/* fs/btrfs/raid56.c 1740 */;
	bool cocci_id/* fs/btrfs/raid56.c 1738 */;
	struct blk_plug_cb *cocci_id/* fs/btrfs/raid56.c 1738 */;
	struct list_head *cocci_id/* fs/btrfs/raid56.c 1670 */;
	struct btrfs_plug_cb {
		struct blk_plug_cb cb;
		struct btrfs_fs_info *info;
		struct list_head rbio_list;
		struct btrfs_work work;
	} cocci_id/* fs/btrfs/raid56.c 1660 */;
	struct bvec_iter_all cocci_id/* fs/btrfs/raid56.c 1459 */;
	struct bio_vec *cocci_id/* fs/btrfs/raid56.c 1458 */;
	struct btrfs_bio_stripe *cocci_id/* fs/btrfs/raid56.c 1364 */;
	struct bvec_iter cocci_id/* fs/btrfs/raid56.c 1166 */;
	struct bio_vec cocci_id/* fs/btrfs/raid56.c 1165 */;
	struct bio_list *cocci_id/* fs/btrfs/raid56.c 1081 */;
}
