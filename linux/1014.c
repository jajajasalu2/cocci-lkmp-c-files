cocci_test_suite() {
	char cocci_id/* drivers/mtd/parsers/redboot.c 83 */[];
	unsigned long cocci_id/* drivers/mtd/parsers/redboot.c 81 */;
	char *cocci_id/* drivers/mtd/parsers/redboot.c 76 */;
	size_t cocci_id/* drivers/mtd/parsers/redboot.c 75 */;
	struct fis_list *cocci_id/* drivers/mtd/parsers/redboot.c 73 */;
	struct mtd_partition *cocci_id/* drivers/mtd/parsers/redboot.c 72 */;
	struct fis_image_desc *cocci_id/* drivers/mtd/parsers/redboot.c 71 */;
	struct mtd_part_parser_data *cocci_id/* drivers/mtd/parsers/redboot.c 68 */;
	const struct mtd_partition **cocci_id/* drivers/mtd/parsers/redboot.c 67 */;
	u32 cocci_id/* drivers/mtd/parsers/redboot.c 48 */;
	struct device_node *cocci_id/* drivers/mtd/parsers/redboot.c 47 */;
	struct mtd_info *cocci_id/* drivers/mtd/parsers/redboot.c 45 */;
	void cocci_id/* drivers/mtd/parsers/redboot.c 45 */;
	int cocci_id/* drivers/mtd/parsers/redboot.c 36 */;
	struct fis_list {
		struct fis_image_desc *img;
		struct fis_list *next;
	} cocci_id/* drivers/mtd/parsers/redboot.c 31 */;
	struct mtd_part_parser cocci_id/* drivers/mtd/parsers/redboot.c 307 */;
	const struct of_device_id cocci_id/* drivers/mtd/parsers/redboot.c 301 */[];
	struct fis_list cocci_id/* drivers/mtd/parsers/redboot.c 201 */;
	struct fis_image_desc {
		unsigned char name[16];
		uint32_t flash_base;
		uint32_t mem_base;
		uint32_t size;
		uint32_t entry_point;
		uint32_t data_length;
		unsigned char _pad[256 - (16 + 7 * sizeof(uint32_t))];
		uint32_t desc_cksum;
		uint32_t file_cksum;
	} cocci_id/* drivers/mtd/parsers/redboot.c 19 */;
	struct fis_image_desc cocci_id/* drivers/mtd/parsers/redboot.c 125 */;
	void *cocci_id/* drivers/mtd/parsers/redboot.c 115 */;
}
