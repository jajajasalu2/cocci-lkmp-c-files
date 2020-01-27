cocci_test_suite() {
	struct block *cocci_id/* drivers/mtd/rfd_ftl.c 95 */;
	struct partition *cocci_id/* drivers/mtd/rfd_ftl.c 93 */;
	int cocci_id/* drivers/mtd/rfd_ftl.c 91 */(struct mtd_blktrans_dev *dev,
						   u_long sector, char *buf);
	void __exit cocci_id/* drivers/mtd/rfd_ftl.c 802 */;
	void cocci_id/* drivers/mtd/rfd_ftl.c 802 */;
	int __init cocci_id/* drivers/mtd/rfd_ftl.c 797 */;
	struct mtd_blktrans_ops cocci_id/* drivers/mtd/rfd_ftl.c 783 */;
	struct partition cocci_id/* drivers/mtd/rfd_ftl.c 729 */;
	struct mtd_info *cocci_id/* drivers/mtd/rfd_ftl.c 722 */;
	struct mtd_blktrans_ops *cocci_id/* drivers/mtd/rfd_ftl.c 722 */;
	struct hd_geometry *cocci_id/* drivers/mtd/rfd_ftl.c 711 */;
	struct partition {
		struct mtd_blktrans_dev mbd;
		u_int block_size;
		u_int total_blocks;
		u_int header_sectors_per_block;
		u_int data_sectors_per_block;
		u_int sector_count;
		u_int header_size;
		int reserved_block;
		int current_block;
		u16 *header_cache;
		int is_reclaiming;
		int cylinders;
		int errors;
		u_long *sector_map;
		struct block *blocks;
	} cocci_id/* drivers/mtd/rfd_ftl.c 71 */;
	u_char *cocci_id/* drivers/mtd/rfd_ftl.c 634 */;
	size_t cocci_id/* drivers/mtd/rfd_ftl.c 611 */;
	u_long cocci_id/* drivers/mtd/rfd_ftl.c 604 */;
	ulong *cocci_id/* drivers/mtd/rfd_ftl.c 604 */;
	struct mtd_blktrans_dev *cocci_id/* drivers/mtd/rfd_ftl.c 604 */;
	char *cocci_id/* drivers/mtd/rfd_ftl.c 604 */;
	const struct partition *cocci_id/* drivers/mtd/rfd_ftl.c 585 */;
	const struct block *cocci_id/* drivers/mtd/rfd_ftl.c 585 */;
	struct block {
		enum{BLOCK_OK, BLOCK_ERASING, BLOCK_ERASED, BLOCK_UNUSED, BLOCK_FAILED,} state;
		int free_sectors;
		int used_sectors;
		int erases;
		u_long offset;
	} cocci_id/* drivers/mtd/rfd_ftl.c 57 */;
	u_long *cocci_id/* drivers/mtd/rfd_ftl.c 506 */;
	u16 *cocci_id/* drivers/mtd/rfd_ftl.c 325 */;
	void *cocci_id/* drivers/mtd/rfd_ftl.c 324 */;
	unsigned long long cocci_id/* drivers/mtd/rfd_ftl.c 289 */;
	struct erase_info cocci_id/* drivers/mtd/rfd_ftl.c 276 */;
	struct erase_info *cocci_id/* drivers/mtd/rfd_ftl.c 273 */;
	int cocci_id/* drivers/mtd/rfd_ftl.c 26 */;
	struct block cocci_id/* drivers/mtd/rfd_ftl.c 188 */;
	u32 cocci_id/* drivers/mtd/rfd_ftl.c 159 */;
	u16 cocci_id/* drivers/mtd/rfd_ftl.c 108 */;
}
