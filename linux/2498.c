cocci_test_suite() {
	struct ppl_conf {
		struct mddev *mddev;
		struct ppl_log *child_logs;
		int count;
		int block_size;
		u32 signature;
		atomic64_t seq;
		struct kmem_cache *io_kc;
		mempool_t io_pool;
		struct bio_set bs;
		struct bio_set flush_bs;
		int recovered_entries;
		int mismatch_count;
		struct list_head no_mem_stripes;
		spinlock_t no_mem_stripes_lock;
		unsigned short write_hint;
	} cocci_id/* drivers/md/raid5-ppl.c 87 */;
	unsigned int cocci_id/* drivers/md/raid5-ppl.c 811 */;
	struct page *cocci_id/* drivers/md/raid5-ppl.c 720 */[];
	struct r5l_log *cocci_id/* drivers/md/raid5-ppl.c 691 */;
	struct ppl_io_unit cocci_id/* drivers/md/raid5-ppl.c 667 */;
	char cocci_id/* drivers/md/raid5-ppl.c 638 */[BDEVNAME_SIZE];
	struct bio *cocci_id/* drivers/md/raid5-ppl.c 637 */;
	struct block_device *cocci_id/* drivers/md/raid5-ppl.c 628 */;
	struct md_rdev *cocci_id/* drivers/md/raid5-ppl.c 627 */;
	struct r5conf *cocci_id/* drivers/md/raid5-ppl.c 619 */;
	struct ppl_log *cocci_id/* drivers/md/raid5-ppl.c 617 */;
	struct ppl_io_unit *cocci_id/* drivers/md/raid5-ppl.c 615 */;
	struct stripe_head cocci_id/* drivers/md/raid5-ppl.c 575 */;
	unsigned long cocci_id/* drivers/md/raid5-ppl.c 558 */;
	u64 cocci_id/* drivers/md/raid5-ppl.c 319 */;
	struct ppl_header_entry *cocci_id/* drivers/md/raid5-ppl.c 269 */;
	struct kmem_cache *cocci_id/* drivers/md/raid5-ppl.c 207 */;
	gfp_t cocci_id/* drivers/md/raid5-ppl.c 205 */;
	void *cocci_id/* drivers/md/raid5-ppl.c 193 */;
	struct r5dev *cocci_id/* drivers/md/raid5-ppl.c 184 */;
	unsigned long long cocci_id/* drivers/md/raid5-ppl.c 166 */;
	struct async_submit_ctl cocci_id/* drivers/md/raid5-ppl.c 164 */;
	struct page **cocci_id/* drivers/md/raid5-ppl.c 162 */;
	int cocci_id/* drivers/md/raid5-ppl.c 161 */;
	struct stripe_head *cocci_id/* drivers/md/raid5-ppl.c 158 */;
	struct raid5_percpu *cocci_id/* drivers/md/raid5-ppl.c 158 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/md/raid5-ppl.c 157 */;
	struct md_sysfs_entry cocci_id/* drivers/md/raid5-ppl.c 1555 */;
	unsigned short cocci_id/* drivers/md/raid5-ppl.c 1526 */;
	const char *cocci_id/* drivers/md/raid5-ppl.c 1521 */;
	size_t cocci_id/* drivers/md/raid5-ppl.c 1506 */;
	char *cocci_id/* drivers/md/raid5-ppl.c 1504 */;
	ssize_t cocci_id/* drivers/md/raid5-ppl.c 1503 */;
	struct ppl_conf cocci_id/* drivers/md/raid5-ppl.c 1371 */;
	struct ppl_log cocci_id/* drivers/md/raid5-ppl.c 1363 */;
	struct ppl_io_unit {
		struct ppl_log *log;
		struct page *header_page;
		unsigned int entries_count;
		unsigned int pp_size;
		u64 seq;
		struct list_head log_sibling;
		struct list_head stripe_list;
		atomic_t pending_stripes;
		atomic_t pending_flushes;
		bool submitted;
		struct bio bio;
		struct bio_vec biovec[PPL_IO_INLINE_BVECS];
	} cocci_id/* drivers/md/raid5-ppl.c 135 */;
	struct mddev *cocci_id/* drivers/md/raid5-ppl.c 1334 */;
	struct request_queue *cocci_id/* drivers/md/raid5-ppl.c 1311 */;
	struct ppl_conf *cocci_id/* drivers/md/raid5-ppl.c 1237 */;
	void cocci_id/* drivers/md/raid5-ppl.c 1237 */;
	bool cocci_id/* drivers/md/raid5-ppl.c 1199 */;
	u32 cocci_id/* drivers/md/raid5-ppl.c 1198 */;
	struct ppl_log {
		struct ppl_conf *ppl_conf;
		struct md_rdev *rdev;
		struct mutex io_mutex;
		struct ppl_io_unit *current_io;
		spinlock_t io_list_lock;
		struct list_head io_list;
		sector_t next_io_sector;
		unsigned int entry_space;
		bool use_multippl;
		bool wb_cache_on;
		unsigned long disk_flush_bitmap;
	} cocci_id/* drivers/md/raid5-ppl.c 115 */;
	sector_t cocci_id/* drivers/md/raid5-ppl.c 1089 */;
	struct ppl_header *cocci_id/* drivers/md/raid5-ppl.c 1085 */;
	struct page *cocci_id/* drivers/md/raid5-ppl.c 1084 */;
}
