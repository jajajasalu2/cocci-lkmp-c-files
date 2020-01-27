cocci_test_suite() {
	int cocci_id/* drivers/mtd/ubi/io.c 88 */(struct ubi_device *ubi,
						  const void *buf, int pnum,
						  int offset, int len);
	int cocci_id/* drivers/mtd/ubi/io.c 86 */(const struct ubi_device *ubi,
						  int pnum,
						  const struct ubi_vid_hdr *vid_hdr);
	int cocci_id/* drivers/mtd/ubi/io.c 83 */(const struct ubi_device *ubi,
						  int pnum,
						  const struct ubi_ec_hdr *ec_hdr);
	int cocci_id/* drivers/mtd/ubi/io.c 81 */(const struct ubi_device *ubi,
						  int pnum);
	long long cocci_id/* drivers/mtd/ubi/io.c 626 */;
	struct mtd_info *cocci_id/* drivers/mtd/ubi/io.c 567 */;
	void *cocci_id/* drivers/mtd/ubi/io.c 478 */;
	struct ubi_vid_hdr cocci_id/* drivers/mtd/ubi/io.c 465 */;
	struct ubi_vid_io_buf cocci_id/* drivers/mtd/ubi/io.c 456 */;
	struct ubi_ec_hdr cocci_id/* drivers/mtd/ubi/io.c 455 */;
	uint32_t cocci_id/* drivers/mtd/ubi/io.c 454 */;
	size_t cocci_id/* drivers/mtd/ubi/io.c 452 */;
	uint8_t cocci_id/* drivers/mtd/ubi/io.c 352 */[];
	loff_t cocci_id/* drivers/mtd/ubi/io.c 323 */;
	struct erase_info cocci_id/* drivers/mtd/ubi/io.c 310 */;
	struct ubi_device *cocci_id/* drivers/mtd/ubi/io.c 307 */;
	int cocci_id/* drivers/mtd/ubi/io.c 307 */;
	const char *cocci_id/* drivers/mtd/ubi/io.c 156 */;
	uint8_t cocci_id/* drivers/mtd/ubi/io.c 1311 */;
	uint8_t *cocci_id/* drivers/mtd/ubi/io.c 1311 */;
	const void *cocci_id/* drivers/mtd/ubi/io.c 1289 */;
	struct ubi_vid_hdr *cocci_id/* drivers/mtd/ubi/io.c 1241 */;
	struct ubi_vid_io_buf *cocci_id/* drivers/mtd/ubi/io.c 1240 */;
	const struct ubi_vid_hdr *cocci_id/* drivers/mtd/ubi/io.c 1197 */;
	struct ubi_ec_hdr *cocci_id/* drivers/mtd/ubi/io.c 1155 */;
	const struct ubi_ec_hdr *cocci_id/* drivers/mtd/ubi/io.c 1114 */;
	const struct ubi_device *cocci_id/* drivers/mtd/ubi/io.c 1113 */;
}
