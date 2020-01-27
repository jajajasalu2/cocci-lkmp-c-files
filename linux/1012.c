cocci_test_suite() {
	struct mtd_partition cocci_id/* drivers/mtd/parsers/parser_trx.c 61 */;
	uint8_t cocci_id/* drivers/mtd/parsers/parser_trx.c 58 */;
	struct trx_header cocci_id/* drivers/mtd/parsers/parser_trx.c 56 */;
	struct mtd_partition *cocci_id/* drivers/mtd/parsers/parser_trx.c 54 */;
	struct mtd_part_parser_data *cocci_id/* drivers/mtd/parsers/parser_trx.c 52 */;
	const struct mtd_partition **cocci_id/* drivers/mtd/parsers/parser_trx.c 51 */;
	uint8_t *cocci_id/* drivers/mtd/parsers/parser_trx.c 36 */;
	int cocci_id/* drivers/mtd/parsers/parser_trx.c 33 */;
	uint32_t cocci_id/* drivers/mtd/parsers/parser_trx.c 31 */;
	size_t cocci_id/* drivers/mtd/parsers/parser_trx.c 29 */;
	const char *cocci_id/* drivers/mtd/parsers/parser_trx.c 28 */;
	struct mtd_info *cocci_id/* drivers/mtd/parsers/parser_trx.c 28 */;
	struct trx_header {
		uint32_t magic;
		uint32_t length;
		uint32_t crc32;
		uint16_t flags;
		uint16_t version;
		uint32_t offset[3];
	}__packed cocci_id/* drivers/mtd/parsers/parser_trx.c 19 */;
	struct mtd_part_parser cocci_id/* drivers/mtd/parsers/parser_trx.c 121 */;
	const struct of_device_id cocci_id/* drivers/mtd/parsers/parser_trx.c 115 */[];
	u64 cocci_id/* drivers/mtd/parsers/parser_trx.c 105 */;
}
