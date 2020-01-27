cocci_test_suite() {
	struct dmz_map cocci_id/* drivers/md/dm-zoned-metadata.c 92 */;
	unsigned char *cocci_id/* drivers/md/dm-zoned-metadata.c 841 */;
	struct dmz_map {
		__le32 dzone_id;
		__le32 bzone_id;
	} cocci_id/* drivers/md/dm-zoned-metadata.c 84 */;
	u64 cocci_id/* drivers/md/dm-zoned-metadata.c 836 */;
	u32 cocci_id/* drivers/md/dm-zoned-metadata.c 835 */;
	struct dmz_dev *cocci_id/* drivers/md/dm-zoned-metadata.c 834 */;
	unsigned int cocci_id/* drivers/md/dm-zoned-metadata.c 833 */;
	struct dmz_super *cocci_id/* drivers/md/dm-zoned-metadata.c 831 */;
	struct list_head cocci_id/* drivers/md/dm-zoned-metadata.c 741 */;
	struct blk_plug cocci_id/* drivers/md/dm-zoned-metadata.c 676 */;
	struct page *cocci_id/* drivers/md/dm-zoned-metadata.c 610 */;
	struct shrink_control *cocci_id/* drivers/md/dm-zoned-metadata.c 482 */;
	struct shrinker *cocci_id/* drivers/md/dm-zoned-metadata.c 481 */;
	struct dmz_super {
		__le32 magic;
		__le32 version;
		__le64 gen;
		__le64 sb_block;
		__le32 nr_meta_blocks;
		__le32 nr_reserved_seq;
		__le32 nr_chunks;
		__le32 nr_map_blocks;
		__le32 nr_bitmap_blocks;
		__le32 crc;
		u8 reserved[464];
	} cocci_id/* drivers/md/dm-zoned-metadata.c 41 */;
	struct bio *cocci_id/* drivers/md/dm-zoned-metadata.c 404 */;
	struct rb_node *cocci_id/* drivers/md/dm-zoned-metadata.c 351 */;
	struct rb_node **cocci_id/* drivers/md/dm-zoned-metadata.c 328 */;
	struct dmz_mblock cocci_id/* drivers/md/dm-zoned-metadata.c 277 */;
	sector_t cocci_id/* drivers/md/dm-zoned-metadata.c 269 */;
	struct dmz_mblock *cocci_id/* drivers/md/dm-zoned-metadata.c 268 */;
	struct dmz_metadata cocci_id/* drivers/md/dm-zoned-metadata.c 2366 */;
	struct dmz_metadata **cocci_id/* drivers/md/dm-zoned-metadata.c 2359 */;
	struct rb_root *cocci_id/* drivers/md/dm-zoned-metadata.c 2301 */;
	void *cocci_id/* drivers/md/dm-zoned-metadata.c 2236 */;
	sector_t *cocci_id/* drivers/md/dm-zoned-metadata.c 2216 */;
	int cocci_id/* drivers/md/dm-zoned-metadata.c 2195 */;
	unsigned long *cocci_id/* drivers/md/dm-zoned-metadata.c 2049 */;
	unsigned long long cocci_id/* drivers/md/dm-zoned-metadata.c 2007 */;
	struct dm_zone cocci_id/* drivers/md/dm-zoned-metadata.c 1780 */;
	struct list_head *cocci_id/* drivers/md/dm-zoned-metadata.c 1762 */;
	unsigned long cocci_id/* drivers/md/dm-zoned-metadata.c 1760 */;
	struct dmz_map *cocci_id/* drivers/md/dm-zoned-metadata.c 1611 */;
	struct dmz_metadata *cocci_id/* drivers/md/dm-zoned-metadata.c 1451 */;
	struct dm_zone *cocci_id/* drivers/md/dm-zoned-metadata.c 1451 */;
	void cocci_id/* drivers/md/dm-zoned-metadata.c 1451 */;
	struct dmz_mblk *cocci_id/* drivers/md/dm-zoned-metadata.c 1323 */;
	struct dmz_metadata {
		struct dmz_dev *dev;
		sector_t zone_bitmap_size;
		unsigned int zone_nr_bitmap_blocks;
		unsigned int nr_bitmap_blocks;
		unsigned int nr_map_blocks;
		unsigned int nr_useable_zones;
		unsigned int nr_meta_blocks;
		unsigned int nr_meta_zones;
		unsigned int nr_data_zones;
		unsigned int nr_rnd_zones;
		unsigned int nr_reserved_seq;
		unsigned int nr_chunks;
		struct dm_zone *zones;
		struct dm_zone *sb_zone;
		struct dmz_sb sb[2];
		unsigned int mblk_primary;
		u64 sb_gen;
		unsigned int min_nr_mblks;
		unsigned int max_nr_mblks;
		atomic_t nr_mblks;
		struct rw_semaphore mblk_sem;
		struct mutex mblk_flush_lock;
		spinlock_t mblk_lock;
		struct rb_root mblk_rbtree;
		struct list_head mblk_lru_list;
		struct list_head mblk_dirty_list;
		struct shrinker mblk_shrinker;
		struct mutex map_lock;
		struct dmz_mblock **map_mblk;
		unsigned int nr_rnd;
		atomic_t unmap_nr_rnd;
		struct list_head unmap_rnd_list;
		struct list_head map_rnd_list;
		unsigned int nr_seq;
		atomic_t unmap_nr_seq;
		struct list_head unmap_seq_list;
		struct list_head map_seq_list;
		atomic_t nr_reserved_seq_zones;
		struct list_head reserved_seq_zones_list;
		wait_queue_head_t free_wq;
	} cocci_id/* drivers/md/dm-zoned-metadata.c 132 */;
	void cocci_id/* drivers/md/dm-zoned-metadata.c 1306 */(struct dmz_metadata *zmd,
							       struct dm_zone *zone);
	struct dmz_sb {
		sector_t block;
		struct dmz_mblock *mblk;
		struct dmz_super *sb;
	} cocci_id/* drivers/md/dm-zoned-metadata.c 123 */;
	enum{DMZ_META_DIRTY, DMZ_META_READING, DMZ_META_WRITING, DMZ_META_ERROR,} cocci_id/* drivers/md/dm-zoned-metadata.c 113 */;
	struct blk_zone *cocci_id/* drivers/md/dm-zoned-metadata.c 1091 */;
	u64 cocci_id/* drivers/md/dm-zoned-metadata.c 1022 */[2];
	bool cocci_id/* drivers/md/dm-zoned-metadata.c 1021 */[2];
	struct dmz_mblock {
		struct rb_node node;
		struct list_head link;
		sector_t no;
		unsigned int ref;
		unsigned long state;
		struct page *page;
		void *data;
	} cocci_id/* drivers/md/dm-zoned-metadata.c 100 */;
}
