cocci_test_suite() {
	struct badblock cocci_id/* drivers/md/dm-dust.c 62 */;
	struct rb_node **cocci_id/* drivers/md/dm-dust.c 57 */;
	void __exit cocci_id/* drivers/md/dm-dust.c 549 */;
	void cocci_id/* drivers/md/dm-dust.c 549 */;
	int __init cocci_id/* drivers/md/dm-dust.c 539 */;
	struct target_type cocci_id/* drivers/md/dm-dust.c 526 */;
	void *cocci_id/* drivers/md/dm-dust.c 519 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-dust.c 518 */;
	struct dm_dev *cocci_id/* drivers/md/dm-dust.c 504 */;
	struct block_device **cocci_id/* drivers/md/dm-dust.c 501 */;
	status_type_t cocci_id/* drivers/md/dm-dust.c 481 */;
	char *cocci_id/* drivers/md/dm-dust.c 386 */;
	struct dust_device cocci_id/* drivers/md/dm-dust.c 334 */;
	char cocci_id/* drivers/md/dm-dust.c 296 */;
	struct dm_target *cocci_id/* drivers/md/dm-dust.c 292 */;
	char **cocci_id/* drivers/md/dm-dust.c 292 */;
	unsigned int cocci_id/* drivers/md/dm-dust.c 292 */;
	struct rb_root cocci_id/* drivers/md/dm-dust.c 265 */;
	struct rb_node *cocci_id/* drivers/md/dm-dust.c 241 */;
	unsigned long long cocci_id/* drivers/md/dm-dust.c 239 */;
	bool cocci_id/* drivers/md/dm-dust.c 238 */;
	struct rb_root *cocci_id/* drivers/md/dm-dust.c 238 */;
	struct dust_device {
		struct dm_dev *dev;
		struct rb_root badblocklist;
		unsigned long long badblock_count;
		spinlock_t dust_lock;
		unsigned int blksz;
		int sect_per_block_shift;
		unsigned int sect_per_block;
		sector_t start;
		bool fail_read_on_bb:1;
		bool quiet_mode:1;
	} cocci_id/* drivers/md/dm-dust.c 23 */;
	struct bio *cocci_id/* drivers/md/dm-dust.c 222 */;
	struct badblock {
		struct rb_node node;
		sector_t bb;
		unsigned char wr_fail_cnt;
	} cocci_id/* drivers/md/dm-dust.c 17 */;
	struct badblock *cocci_id/* drivers/md/dm-dust.c 159 */;
	sector_t cocci_id/* drivers/md/dm-dust.c 157 */;
	struct dust_device *cocci_id/* drivers/md/dm-dust.c 157 */;
	int cocci_id/* drivers/md/dm-dust.c 157 */;
	unsigned long cocci_id/* drivers/md/dm-dust.c 109 */;
	unsigned char cocci_id/* drivers/md/dm-dust.c 106 */;
}
