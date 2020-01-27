cocci_test_suite() {
	struct erase_info cocci_id/* drivers/mtd/mtdblock.c 47 */;
	void __exit cocci_id/* drivers/mtd/mtdblock.c 350 */;
	void cocci_id/* drivers/mtd/mtdblock.c 350 */;
	int __init cocci_id/* drivers/mtd/mtdblock.c 345 */;
	struct mtd_blktrans_ops cocci_id/* drivers/mtd/mtdblock.c 330 */;
	struct mtd_blktrans_ops *cocci_id/* drivers/mtd/mtdblock.c 305 */;
	struct mtdblk_dev cocci_id/* drivers/mtd/mtdblock.c 296 */;
	struct mtd_blktrans_dev *cocci_id/* drivers/mtd/mtdblock.c 294 */;
	struct mtdblk_dev {
		struct mtd_blktrans_dev mbd;
		int count;
		struct mutex cache_mutex;
		unsigned char *cache_data;
		unsigned long cache_offset;
		unsigned int cache_size;
		enum{STATE_EMPTY, STATE_CLEAN, STATE_DIRTY,} cache_state;
	} cocci_id/* drivers/mtd/mtdblock.c 24 */;
	size_t cocci_id/* drivers/mtd/mtdblock.c 182 */;
	unsigned int cocci_id/* drivers/mtd/mtdblock.c 181 */;
	struct mtd_info *cocci_id/* drivers/mtd/mtdblock.c 180 */;
	char *cocci_id/* drivers/mtd/mtdblock.c 178 */;
	struct mtdblk_dev *cocci_id/* drivers/mtd/mtdblock.c 177 */;
	unsigned long cocci_id/* drivers/mtd/mtdblock.c 177 */;
	int cocci_id/* drivers/mtd/mtdblock.c 177 */;
	const char *cocci_id/* drivers/mtd/mtdblock.c 108 */;
}
