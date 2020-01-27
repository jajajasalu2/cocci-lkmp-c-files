cocci_test_suite() {
	void *cocci_id/* drivers/md/dm-zoned-reclaim.c 98 */;
	unsigned long long cocci_id/* drivers/md/dm-zoned-reclaim.c 83 */;
	unsigned int cocci_id/* drivers/md/dm-zoned-reclaim.c 63 */;
	void cocci_id/* drivers/md/dm-zoned-reclaim.c 549 */;
	struct dmz_reclaim cocci_id/* drivers/md/dm-zoned-reclaim.c 509 */;
	struct dmz_reclaim *cocci_id/* drivers/md/dm-zoned-reclaim.c 506 */;
	struct dmz_reclaim **cocci_id/* drivers/md/dm-zoned-reclaim.c 504 */;
	struct dmz_metadata *cocci_id/* drivers/md/dm-zoned-reclaim.c 503 */;
	struct dmz_dev *cocci_id/* drivers/md/dm-zoned-reclaim.c 503 */;
	int cocci_id/* drivers/md/dm-zoned-reclaim.c 503 */;
	struct work_struct *cocci_id/* drivers/md/dm-zoned-reclaim.c 451 */;
	bool cocci_id/* drivers/md/dm-zoned-reclaim.c 426 */;
	sector_t cocci_id/* drivers/md/dm-zoned-reclaim.c 373 */;
	unsigned long cocci_id/* drivers/md/dm-zoned-reclaim.c 347 */;
	struct dm_zone *cocci_id/* drivers/md/dm-zoned-reclaim.c 345 */;
	enum{DMZ_RECLAIM_KCOPY,} cocci_id/* drivers/md/dm-zoned-reclaim.c 34 */;
	struct dmz_reclaim {
		struct dmz_metadata *metadata;
		struct dmz_dev *dev;
		struct delayed_work work;
		struct workqueue_struct *wq;
		struct dm_kcopyd_client *kc;
		struct dm_kcopyd_throttle kc_throttle;
		int kc_err;
		unsigned long flags;
		unsigned long atime;
	} cocci_id/* drivers/md/dm-zoned-reclaim.c 14 */;
	struct dm_io_region cocci_id/* drivers/md/dm-zoned-reclaim.c 120 */;
}
