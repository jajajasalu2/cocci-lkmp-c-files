cocci_test_suite() {
	unsigned long cocci_id/* drivers/md/dm.c 922 */;
	struct dm_io {
		unsigned magic;
		struct mapped_device *md;
		blk_status_t status;
		atomic_t io_count;
		struct bio *orig_bio;
		unsigned long start_time;
		spinlock_t endio_lock;
		struct dm_stats_aux stats_aux;
		struct dm_target_io tio;
	} cocci_id/* drivers/md/dm.c 92 */;
	struct table_device cocci_id/* drivers/md/dm.c 859 */;
	struct dm_dev **cocci_id/* drivers/md/dm.c 820 */;
	struct table_device *cocci_id/* drivers/md/dm.c 795 */;
	struct dm_target_io {
		unsigned magic;
		struct dm_io *io;
		struct dm_target *ti;
		unsigned target_bio_nr;
		unsigned *len_ptr;
		bool inside_dm_io;
		struct bio clone;
	} cocci_id/* drivers/md/dm.c 77 */;
	char *cocci_id/* drivers/md/dm.c 763 */;
	struct hd_struct *cocci_id/* drivers/md/dm.c 658 */;
	struct clone_info {
		struct dm_table *map;
		struct bio *bio;
		struct dm_io *io;
		sector_t sector;
		unsigned sector_count;
	} cocci_id/* drivers/md/dm.c 65 */;
	gfp_t cocci_id/* drivers/md/dm.c 624 */;
	struct dm_io cocci_id/* drivers/md/dm.c 605 */;
	void cocci_id/* drivers/md/dm.c 589 */(struct dm_io *io);
	atomic_t cocci_id/* drivers/md/dm.c 53 */;
	struct block_device **cocci_id/* drivers/md/dm.c 519 */;
	struct workqueue_struct *cocci_id/* drivers/md/dm.c 51 */;
	struct dm_report_zones_args cocci_id/* drivers/md/dm.c 480 */;
	report_zones_cb cocci_id/* drivers/md/dm.c 475 */;
	void cocci_id/* drivers/md/dm.c 47 */(struct work_struct *w);
	struct dm_report_zones_args *cocci_id/* drivers/md/dm.c 446 */;
	struct blk_zone *cocci_id/* drivers/md/dm.c 444 */;
	struct hd_geometry *cocci_id/* drivers/md/dm.c 436 */;
	struct block_device *cocci_id/* drivers/md/dm.c 436 */;
	struct dm_stats *cocci_id/* drivers/md/dm.c 431 */;
	unsigned int cocci_id/* drivers/md/dm.c 41 */;
	const char *cocci_id/* drivers/md/dm.c 38 */;
	fmode_t cocci_id/* drivers/md/dm.c 353 */;
	struct gendisk *cocci_id/* drivers/md/dm.c 353 */;
	const struct pr_ops cocci_id/* drivers/md/dm.c 3174 */;
	u64 cocci_id/* drivers/md/dm.c 3154 */;
	enum pr_type cocci_id/* drivers/md/dm.c 3134 */;
	void __exit cocci_id/* drivers/md/dm.c 308 */;
	struct dm_pr cocci_id/* drivers/md/dm.c 3071 */;
	u32 cocci_id/* drivers/md/dm.c 3069 */;
	const struct pr_ops *cocci_id/* drivers/md/dm.c 3061 */;
	struct dm_pr *cocci_id/* drivers/md/dm.c 3060 */;
	struct dm_dev *cocci_id/* drivers/md/dm.c 3057 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm.c 3027 */;
	struct dm_pr {
		u64 old_key;
		u64 new_key;
		u32 flags;
		bool fail_early;
	} cocci_id/* drivers/md/dm.c 3020 */;
	struct dm_rq_clone_bio_info cocci_id/* drivers/md/dm.c 2987 */;
	enum dm_queue_mode cocci_id/* drivers/md/dm.c 2960 */;
	struct mapped_device cocci_id/* drivers/md/dm.c 2919 */;
	struct kobject *cocci_id/* drivers/md/dm.c 2915 */;
	struct list_head *cocci_id/* drivers/md/dm.c 2891 */;
	const int cocci_id/* drivers/md/dm.c 289 */;
	uint32_t cocci_id/* drivers/md/dm.c 2880 */;
	int __init cocci_id/* drivers/md/dm.c 287 */;
	char *cocci_id/* drivers/md/dm.c 2863 */[];
	char cocci_id/* drivers/md/dm.c 2862 */[DM_COOKIE_LENGTH];
	enum kobject_action cocci_id/* drivers/md/dm.c 2859 */;
	void (*cocci_id/* drivers/md/dm.c 276 */[])(void);
	int (*cocci_id/* drivers/md/dm.c 265 */[])(void)__initdata;
	long cocci_id/* drivers/md/dm.c 2552 */;
	struct work_struct *cocci_id/* drivers/md/dm.c 2432 */;
	dev_t cocci_id/* drivers/md/dm.c 2285 */;
	struct queue_limits cocci_id/* drivers/md/dm.c 2252 */;
	struct target_type *cocci_id/* drivers/md/dm.c 2230 */;
	struct mapped_device **cocci_id/* drivers/md/dm.c 2186 */;
	void *cocci_id/* drivers/md/dm.c 2155 */;
	int cocci_id/* drivers/md/dm.c 2112 */;
	sector_t cocci_id/* drivers/md/dm.c 2111 */;
	bool cocci_id/* drivers/md/dm.c 2110 */;
	struct request_queue *cocci_id/* drivers/md/dm.c 2109 */;
	struct queue_limits *cocci_id/* drivers/md/dm.c 2106 */;
	struct mapped_device *cocci_id/* drivers/md/dm.c 2105 */;
	struct dm_table *cocci_id/* drivers/md/dm.c 2105 */;
	loff_t cocci_id/* drivers/md/dm.c 2099 */;
	struct dm_md_mempools *cocci_id/* drivers/md/dm.c 2030 */;
	void cocci_id/* drivers/md/dm.c 2010 */(struct mapped_device *md);
	unsigned cocci_id/* drivers/md/dm.c 188 */;
	void cocci_id/* drivers/md/dm.c 1855 */(struct work_struct *work);
	const struct dax_operations cocci_id/* drivers/md/dm.c 1853 */;
	const struct block_device_operations cocci_id/* drivers/md/dm.c 1852 */;
	struct bio **cocci_id/* drivers/md/dm.c 1700 */;
	struct bio cocci_id/* drivers/md/dm.c 1670 */;
	int *cocci_id/* drivers/md/dm.c 167 */;
	struct clone_info cocci_id/* drivers/md/dm.c 1663 */;
	struct table_device {
		struct list_head list;
		refcount_t count;
		struct dm_dev dm_dev;
	} cocci_id/* drivers/md/dm.c 155 */;
	struct dm_md_mempools {
		struct bio_set bs;
		struct bio_set io_bs;
	} cocci_id/* drivers/md/dm.c 150 */;
	unsigned (*cocci_id/* drivers/md/dm.c 1443 */)(struct dm_target *ti);
	void cocci_id/* drivers/md/dm.c 1438 */;
	struct dm_target_io *cocci_id/* drivers/md/dm.c 1428 */;
	struct bio *cocci_id/* drivers/md/dm.c 1427 */;
	unsigned *cocci_id/* drivers/md/dm.c 1425 */;
	struct dm_target *cocci_id/* drivers/md/dm.c 1424 */;
	struct clone_info *cocci_id/* drivers/md/dm.c 1424 */;
	struct dm_target_io cocci_id/* drivers/md/dm.c 1396 */;
	struct bio_list cocci_id/* drivers/md/dm.c 1389 */;
	blk_qc_t cocci_id/* drivers/md/dm.c 1372 */;
	struct bio_list *cocci_id/* drivers/md/dm.c 1332 */;
	struct dm_io *cocci_id/* drivers/md/dm.c 1247 */;
	const struct bio *cocci_id/* drivers/md/dm.c 124 */;
	struct iov_iter *cocci_id/* drivers/md/dm.c 1154 */;
	pgoff_t cocci_id/* drivers/md/dm.c 1153 */;
	struct dax_device *cocci_id/* drivers/md/dm.c 1153 */;
	size_t cocci_id/* drivers/md/dm.c 114 */;
	pfn_t *cocci_id/* drivers/md/dm.c 1108 */;
	void **cocci_id/* drivers/md/dm.c 1108 */;
	unsigned long long cocci_id/* drivers/md/dm.c 1078 */;
	dm_endio_fn cocci_id/* drivers/md/dm.c 1005 */;
	blk_status_t cocci_id/* drivers/md/dm.c 1001 */;
}