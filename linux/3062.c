cocci_test_suite() {
	struct request *cocci_id/* drivers/block/ataflop.c 84 */;
	struct request_queue *cocci_id/* drivers/block/ataflop.c 726 */;
	struct atari_format_descr *cocci_id/* drivers/block/ataflop.c 724 */;
	void (*cocci_id/* drivers/block/ataflop.c 666 */)(int);
	irqreturn_t cocci_id/* drivers/block/ataflop.c 663 */;
	void (*cocci_id/* drivers/block/ataflop.c 661 */)(int status);
	ulong *cocci_id/* drivers/block/ataflop.c 649 */;
	void *cocci_id/* drivers/block/ataflop.c 647 */;
	unsigned char cocci_id/* drivers/block/ataflop.c 602 */;
	struct timer_list *cocci_id/* drivers/block/ataflop.c 597 */;
	void cocci_id/* drivers/block/ataflop.c 448 */(struct gendisk *disk,
						       fmode_t mode);
	int cocci_id/* drivers/block/ataflop.c 447 */(struct block_device *bdev,
						      fmode_t mode);
	void cocci_id/* drivers/block/ataflop.c 446 */(void);
	int cocci_id/* drivers/block/ataflop.c 445 */(int drive);
	int cocci_id/* drivers/block/ataflop.c 442 */(struct block_device *bdev,
						      fmode_t mode,
						      unsigned int cmd,
						      unsigned long param);
	void cocci_id/* drivers/block/ataflop.c 440 */(int dummy);
	void cocci_id/* drivers/block/ataflop.c 429 */(int status);
	void cocci_id/* drivers/block/ataflop.c 427 */(int drive);
	int cocci_id/* drivers/block/ataflop.c 426 */(int drive, int type,
						      struct atari_format_descr *desc);
	irqreturn_t cocci_id/* drivers/block/ataflop.c 424 */(int irq,
							      void *dummy);
	void cocci_id/* drivers/block/ataflop.c 423 */(struct timer_list *unused);
	void cocci_id/* drivers/block/ataflop.c 419 */(int side);
	int cocci_id/* drivers/block/ataflop.c 380 */[FD_MAX_UNITS];
	unsigned long cocci_id/* drivers/block/ataflop.c 353 */;
	unsigned char *cocci_id/* drivers/block/ataflop.c 352 */;
	int cocci_id/* drivers/block/ataflop.c 346 */[];
	struct atari_floppy_struct {
		int connected;
		int autoprobe;
		struct atari_disk_type *disktype;
		int track;
		unsigned int steprate;
		unsigned int wpstat;
		int flags;
		struct gendisk *disk;
		int ref;
		int type;
		struct blk_mq_tag_set tag_set;
	} cocci_id/* drivers/block/ataflop.c 288 */[FD_MAX_UNITS];
	struct atari_disk_type cocci_id/* drivers/block/ataflop.c 285 */[FD_MAX_UNITS];
	struct {
		int index;
		unsigned drive_types;
	} cocci_id/* drivers/block/ataflop.c 227 */[];
	int cocci_id/* drivers/block/ataflop.c 222 */;
	void __exit cocci_id/* drivers/block/ataflop.c 2101 */;
	int cocci_id/* drivers/block/ataflop.c 2065 */[3 + FD_MAX_UNITS];
	char *cocci_id/* drivers/block/ataflop.c 2063 */;
	struct gendisk *cocci_id/* drivers/block/ataflop.c 2051 */;
	int __init cocci_id/* drivers/block/ataflop.c 1974 */;
	dev_t cocci_id/* drivers/block/ataflop.c 1964 */;
	struct kobject *cocci_id/* drivers/block/ataflop.c 1964 */;
	int *cocci_id/* drivers/block/ataflop.c 1964 */;
	const struct blk_mq_ops cocci_id/* drivers/block/ataflop.c 1959 */;
	const struct block_device_operations cocci_id/* drivers/block/ataflop.c 1950 */;
	void __init cocci_id/* drivers/block/ataflop.c 1846 */;
	unsigned int cocci_id/* drivers/block/ataflop.c 1743 */;
	fmode_t cocci_id/* drivers/block/ataflop.c 1742 */;
	struct block_device *cocci_id/* drivers/block/ataflop.c 1742 */;
	struct atari_disk_type {
		const char *name;
		unsigned spt;
		unsigned blocks;
		unsigned fdc_speed;
		unsigned stretch;
	} cocci_id/* drivers/block/ataflop.c 168 */[];
	struct atari_format_descr {
		int track;
		int head;
		int sect_offset;
	} cocci_id/* drivers/block/ataflop.c 161 */;
	void __user *cocci_id/* drivers/block/ataflop.c 1571 */;
	struct floppy_struct cocci_id/* drivers/block/ataflop.c 1568 */;
	struct atari_disk_type *cocci_id/* drivers/block/ataflop.c 1567 */;
	struct atari_format_descr cocci_id/* drivers/block/ataflop.c 1566 */;
	struct atari_floppy_struct *cocci_id/* drivers/block/ataflop.c 1487 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/ataflop.c 1485 */;
	blk_status_t cocci_id/* drivers/block/ataflop.c 1484 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/ataflop.c 1475 */;
	void cocci_id/* drivers/block/ataflop.c 1475 */;
	unsigned short cocci_id/* drivers/block/ataflop.c 1003 */;
}
