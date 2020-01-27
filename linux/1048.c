cocci_test_suite() {
	struct mapleq *cocci_id/* drivers/mtd/maps/vmu-flash.c 89 */;
	void cocci_id/* drivers/mtd/maps/vmu-flash.c 89 */;
	void __exit cocci_id/* drivers/mtd/maps/vmu-flash.c 812 */;
	int __init cocci_id/* drivers/mtd/maps/vmu-flash.c 807 */;
	struct maple_driver cocci_id/* drivers/mtd/maps/vmu-flash.c 798 */;
	struct maple_driver *cocci_id/* drivers/mtd/maps/vmu-flash.c 777 */;
	struct device *cocci_id/* drivers/mtd/maps/vmu-flash.c 773 */;
	struct vmu_block cocci_id/* drivers/mtd/maps/vmu-flash.c 76 */;
	enum maple_file_errors cocci_id/* drivers/mtd/maps/vmu-flash.c 732 */;
	int *cocci_id/* drivers/mtd/maps/vmu-flash.c 732 */;
	void *cocci_id/* drivers/mtd/maps/vmu-flash.c 730 */;
	struct mtd_info cocci_id/* drivers/mtd/maps/vmu-flash.c 637 */;
	struct vmupart cocci_id/* drivers/mtd/maps/vmu-flash.c 630 */;
	struct memcard cocci_id/* drivers/mtd/maps/vmu-flash.c 612 */;
	u32 cocci_id/* drivers/mtd/maps/vmu-flash.c 602 */;
	struct vmu_block *cocci_id/* drivers/mtd/maps/vmu-flash.c 56 */;
	unsigned long cocci_id/* drivers/mtd/maps/vmu-flash.c 56 */;
	struct vmu_cache cocci_id/* drivers/mtd/maps/vmu-flash.c 551 */;
	struct mdev_part cocci_id/* drivers/mtd/maps/vmu-flash.c 542 */;
	struct vmu_block {
		unsigned int num;
		unsigned int ofs;
	} cocci_id/* drivers/mtd/maps/vmu-flash.c 51 */;
	struct vmupart *cocci_id/* drivers/mtd/maps/vmu-flash.c 508 */;
	unsigned short *cocci_id/* drivers/mtd/maps/vmu-flash.c 502 */;
	const u_char *cocci_id/* drivers/mtd/maps/vmu-flash.c 417 */;
	struct memcard {
		u16 tempA;
		u16 tempB;
		u32 partitions;
		u32 blocklen;
		u32 writecnt;
		u32 readcnt;
		u32 removeable;
		int partition;
		int read;
		unsigned char *blockread;
		struct vmupart *parts;
		struct mtd_info *mtd;
	} cocci_id/* drivers/mtd/maps/vmu-flash.c 36 */;
	unsigned char cocci_id/* drivers/mtd/maps/vmu-flash.c 359 */;
	u_char *cocci_id/* drivers/mtd/maps/vmu-flash.c 351 */;
	size_t *cocci_id/* drivers/mtd/maps/vmu-flash.c 351 */;
	loff_t cocci_id/* drivers/mtd/maps/vmu-flash.c 350 */;
	size_t cocci_id/* drivers/mtd/maps/vmu-flash.c 350 */;
	struct vmupart {
		u16 user_blocks;
		u16 root_block;
		u16 numblocks;
		char *name;
		struct vmu_cache *pcache;
	} cocci_id/* drivers/mtd/maps/vmu-flash.c 28 */;
	__be32 *cocci_id/* drivers/mtd/maps/vmu-flash.c 233 */;
	struct mdev_part {
		struct maple_device *mdev;
		int partition;
	} cocci_id/* drivers/mtd/maps/vmu-flash.c 23 */;
	const unsigned char *cocci_id/* drivers/mtd/maps/vmu-flash.c 226 */;
	struct vmu_cache {
		unsigned char *buffer;
		unsigned int block;
		unsigned long jiffies_atc;
		int valid;
	} cocci_id/* drivers/mtd/maps/vmu-flash.c 16 */;
	__be32 cocci_id/* drivers/mtd/maps/vmu-flash.c 118 */;
	struct vmu_cache *cocci_id/* drivers/mtd/maps/vmu-flash.c 117 */;
	struct maple_device *cocci_id/* drivers/mtd/maps/vmu-flash.c 114 */;
	struct mdev_part *cocci_id/* drivers/mtd/maps/vmu-flash.c 113 */;
	struct memcard *cocci_id/* drivers/mtd/maps/vmu-flash.c 112 */;
	struct mtd_info *cocci_id/* drivers/mtd/maps/vmu-flash.c 110 */;
	unsigned char *cocci_id/* drivers/mtd/maps/vmu-flash.c 109 */;
	unsigned int cocci_id/* drivers/mtd/maps/vmu-flash.c 109 */;
	int cocci_id/* drivers/mtd/maps/vmu-flash.c 109 */;
}
