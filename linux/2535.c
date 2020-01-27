cocci_test_suite() {
	struct dm_arg_set *cocci_id/* drivers/md/dm-raid.c 819 */;
	struct gendisk *cocci_id/* drivers/md/dm-raid.c 700 */;
	const int cocci_id/* drivers/md/dm-raid.c 634 */;
	bool cocci_id/* drivers/md/dm-raid.c 634 */;
	struct raid_type *cocci_id/* drivers/md/dm-raid.c 634 */;
	int cocci_id/* drivers/md/dm-raid.c 551 */;
	unsigned int cocci_id/* drivers/md/dm-raid.c 533 */;
	unsigned long cocci_id/* drivers/md/dm-raid.c 489 */;
	bool cocci_id/* drivers/md/dm-raid.c 428 */(int layout);
	void __exit cocci_id/* drivers/md/dm-raid.c 4055 */;
	int __init cocci_id/* drivers/md/dm-raid.c 4046 */;
	struct target_type cocci_id/* drivers/md/dm-raid.c 4030 */;
	struct raid_dev {
		struct dm_dev *meta_dev;
		struct dm_dev *data_dev;
		struct md_rdev rdev;
	} cocci_id/* drivers/md/dm-raid.c 40 */;
	struct md_personality *cocci_id/* drivers/md/dm-raid.c 3891 */;
	struct raid_set *cocci_id/* drivers/md/dm-raid.c 3853 */;
	void *cocci_id/* drivers/md/dm-raid.c 3828 */;
	struct dm_raid_superblock *cocci_id/* drivers/md/dm-raid.c 3776 */;
	uint64_t cocci_id/* drivers/md/dm-raid.c 3773 */[DISKS_ARRAY_ELEMS];
	struct queue_limits *cocci_id/* drivers/md/dm-raid.c 3737 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-raid.c 3720 */;
	char *cocci_id/* drivers/md/dm-raid.c 3669 */;
	unsigned cocci_id/* drivers/md/dm-raid.c 3669 */;
	struct {
		const int mode;
		const char *param;
	} cocci_id/* drivers/md/dm-raid.c 360 */[];
	unsigned long long cocci_id/* drivers/md/dm-raid.c 3553 */;
	struct r5conf *cocci_id/* drivers/md/dm-raid.c 3506 */;
	status_type_t cocci_id/* drivers/md/dm-raid.c 3501 */;
	const char *cocci_id/* drivers/md/dm-raid.c 3496 */;
	struct dm_dev *cocci_id/* drivers/md/dm-raid.c 3496 */;
	struct arg_name_flag *cocci_id/* drivers/md/dm-raid.c 347 */;
	const uint32_t cocci_id/* drivers/md/dm-raid.c 344 */;
	struct md_rdev *cocci_id/* drivers/md/dm-raid.c 3397 */;
	enum sync_state cocci_id/* drivers/md/dm-raid.c 3357 */;
	const char *cocci_id/* drivers/md/dm-raid.c 3343 */[];
	enum sync_state{st_frozen, st_reshape, st_resync, st_check, st_repair, st_recover, st_idle,} cocci_id/* drivers/md/dm-raid.c 3339 */;
	struct bio *cocci_id/* drivers/md/dm-raid.c 3317 */;
	struct arg_name_flag {
		const unsigned long flag;
		const char *name;
	} cocci_id/* drivers/md/dm-raid.c 320 */[];
	long cocci_id/* drivers/md/dm-raid.c 314 */;
	struct dm_arg cocci_id/* drivers/md/dm-raid.c 2999 */[];
	struct dm_arg_set cocci_id/* drivers/md/dm-raid.c 2998 */;
	struct rs_layout cocci_id/* drivers/md/dm-raid.c 2997 */;
	char **cocci_id/* drivers/md/dm-raid.c 2988 */;
	struct request_queue *cocci_id/* drivers/md/dm-raid.c 2954 */;
	struct raid_type {
		const char *name;
		const char *descr;
		const unsigned int parity_devs;
		const unsigned int minimal_devs;
		const unsigned int level;
		const unsigned int algorithm;
	} cocci_id/* drivers/md/dm-raid.c 283 */[];
	void cocci_id/* drivers/md/dm-raid.c 2692 */;
	struct rs_layout *cocci_id/* drivers/md/dm-raid.c 258 */;
	struct dm_raid_superblock cocci_id/* drivers/md/dm-raid.c 2520 */;
	struct mddev *cocci_id/* drivers/md/dm-raid.c 2507 */;
	struct dm_target *cocci_id/* drivers/md/dm-raid.c 2503 */;
	struct raid_set {
		struct dm_target *ti;
		uint32_t stripe_cache_entries;
		unsigned long ctr_flags;
		unsigned long runtime_flags;
		uint64_t rebuild_disks[DISKS_ARRAY_ELEMS];
		int raid_disks;
		int delta_disks;
		int data_offset;
		int raid10_copies;
		int requested_bitmap_chunk_sectors;
		struct mddev md;
		struct raid_type *raid_type;
		struct dm_target_callbacks callbacks;
		sector_t array_sectors;
		sector_t dev_sectors;
		struct journal_dev {
			struct dm_dev *dev;
			struct md_rdev rdev;
			int mode;
		} journal_dev;
		struct raid_dev dev[0];
	} cocci_id/* drivers/md/dm-raid.c 226 */;
	struct rs_layout {
		int new_level;
		int new_layout;
		int new_chunk_sectors;
	} cocci_id/* drivers/md/dm-raid.c 220 */;
	uint64_t cocci_id/* drivers/md/dm-raid.c 215 */;
	uint64_t *cocci_id/* drivers/md/dm-raid.c 2052 */;
	struct dm_raid_superblock {
		__le32 magic;
		__le32 compat_features;
		__le32 num_devices;
		__le32 array_position;
		__le64 events;
		__le64 failed_devices;
		__le64 disk_recovery_offset;
		__le64 array_resync_offset;
		__le32 level;
		__le32 layout;
		__le32 stripe_sectors;
		__le32 flags;
		__le64 reshape_position;
		__le32 new_level;
		__le32 new_layout;
		__le32 new_stripe_sectors;
		__le32 delta_disks;
		__le64 array_sectors;
		__le64 data_offset;
		__le64 new_data_offset;
		__le64 sectors;
		__le64 extended_failed_devices[DISKS_ARRAY_ELEMS - 1];
		__le32 incompat_features;
	}__packed cocci_id/* drivers/md/dm-raid.c 1923 */;
	struct dm_target_callbacks *cocci_id/* drivers/md/dm-raid.c 1706 */;
	struct raid_set cocci_id/* drivers/md/dm-raid.c 1695 */;
	struct work_struct *cocci_id/* drivers/md/dm-raid.c 1693 */;
	sector_t cocci_id/* drivers/md/dm-raid.c 1587 */;
	uint32_t cocci_id/* drivers/md/dm-raid.c 1537 */;
	struct raid_dev *cocci_id/* drivers/md/dm-raid.c 1130 */;
}
