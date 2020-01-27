cocci_test_suite() {
	const uint8_t cocci_id/* drivers/mtd/ssfdc.c 98 */[];
	unsigned short *cocci_id/* drivers/mtd/ssfdc.c 74 */;
	unsigned char *cocci_id/* drivers/mtd/ssfdc.c 74 */;
	const chs_entry_t cocci_id/* drivers/mtd/ssfdc.c 62 */[];
	struct {
		unsigned long size;
		unsigned short cyl;
		unsigned char head;
		unsigned char sec;
	} cocci_id/* drivers/mtd/ssfdc.c 54 */;
	void __exit cocci_id/* drivers/mtd/ssfdc.c 445 */;
	void cocci_id/* drivers/mtd/ssfdc.c 445 */;
	int __init cocci_id/* drivers/mtd/ssfdc.c 438 */;
	struct mtd_blktrans_ops cocci_id/* drivers/mtd/ssfdc.c 426 */;
	struct mtd_blktrans_dev *cocci_id/* drivers/mtd/ssfdc.c 406 */;
	struct hd_geometry *cocci_id/* drivers/mtd/ssfdc.c 406 */;
	char *cocci_id/* drivers/mtd/ssfdc.c 368 */;
	long cocci_id/* drivers/mtd/ssfdc.c 321 */;
	u32 cocci_id/* drivers/mtd/ssfdc.c 310 */;
	struct ssfdcr_record cocci_id/* drivers/mtd/ssfdc.c 299 */;
	struct mtd_blktrans_ops *cocci_id/* drivers/mtd/ssfdc.c 284 */;
	unsigned short cocci_id/* drivers/mtd/ssfdc.c 274 */;
	struct mtd_info *cocci_id/* drivers/mtd/ssfdc.c 245 */;
	uint8_t cocci_id/* drivers/mtd/ssfdc.c 243 */[OOB_SIZE];
	unsigned long cocci_id/* drivers/mtd/ssfdc.c 242 */;
	struct ssfdcr_record *cocci_id/* drivers/mtd/ssfdc.c 240 */;
	int cocci_id/* drivers/mtd/ssfdc.c 240 */;
	int cocci_id/* drivers/mtd/ssfdc.c 200 */[2];
	uint8_t *cocci_id/* drivers/mtd/ssfdc.c 197 */;
	struct ssfdcr_record {
		struct mtd_blktrans_dev mbd;
		int usecount;
		unsigned char heads;
		unsigned char sectors;
		unsigned short cylinders;
		int cis_block;
		int erase_size;
		unsigned short *logic_block_map;
		int map_len;
	} cocci_id/* drivers/mtd/ssfdc.c 19 */;
	struct mtd_oob_ops cocci_id/* drivers/mtd/ssfdc.c 166 */;
	loff_t cocci_id/* drivers/mtd/ssfdc.c 107 */;
	size_t cocci_id/* drivers/mtd/ssfdc.c 106 */;
}
