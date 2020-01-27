cocci_test_suite() {
	struct request *cocci_id/* block/blk-zoned.c 53 */;
	void cocci_id/* block/blk-zoned.c 53 */;
	struct blk_revalidate_zone_args cocci_id/* block/blk-zoned.c 438 */;
	struct gendisk *cocci_id/* block/blk-zoned.c 435 */;
	sector_t cocci_id/* block/blk-zoned.c 359 */;
	struct blk_revalidate_zone_args *cocci_id/* block/blk-zoned.c 356 */;
	void *cocci_id/* block/blk-zoned.c 354 */;
	struct blk_zone *cocci_id/* block/blk-zoned.c 353 */;
	struct blk_revalidate_zone_args {
		struct gendisk *disk;
		unsigned long *conv_zones_bitmap;
		unsigned long *seq_zones_wlock;
		unsigned int nr_zones;
		sector_t zone_sectors;
		sector_t sector;
	} cocci_id/* block/blk-zoned.c 341 */;
	bool cocci_id/* block/blk-zoned.c 34 */;
	struct request_queue *cocci_id/* block/blk-zoned.c 333 */;
	unsigned long cocci_id/* block/blk-zoned.c 329 */;
	unsigned int cocci_id/* block/blk-zoned.c 327 */;
	unsigned long *cocci_id/* block/blk-zoned.c 326 */;
	int cocci_id/* block/blk-zoned.c 326 */;
	struct blk_zone_range cocci_id/* block/blk-zoned.c 283 */;
	struct blk_zone_report cocci_id/* block/blk-zoned.c 240 */;
	struct zone_report_args cocci_id/* block/blk-zoned.c 238 */;
	void __user *cocci_id/* block/blk-zoned.c 237 */;
	fmode_t cocci_id/* block/blk-zoned.c 234 */;
	struct blk_zone cocci_id/* block/blk-zoned.c 225 */;
	struct zone_report_args *cocci_id/* block/blk-zoned.c 223 */;
	struct zone_report_args {
		struct blk_zone __user *zones;
	} cocci_id/* block/blk-zoned.c 216 */;
	struct bio *cocci_id/* block/blk-zoned.c 164 */;
	gfp_t cocci_id/* block/blk-zoned.c 158 */;
	enum req_opf cocci_id/* block/blk-zoned.c 156 */;
	struct block_device *cocci_id/* block/blk-zoned.c 126 */;
	report_zones_cb cocci_id/* block/blk-zoned.c 110 */;
}
