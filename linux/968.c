cocci_test_suite() {
	unsigned long cocci_id/* drivers/mtd/ftl.c 970 */;
	struct mtd_blktrans_dev *cocci_id/* drivers/mtd/ftl.c 969 */;
	char *cocci_id/* drivers/mtd/ftl.c 958 */;
	u_long cocci_id/* drivers/mtd/ftl.c 945 */;
	struct hd_geometry *cocci_id/* drivers/mtd/ftl.c 942 */;
	caddr_t cocci_id/* drivers/mtd/ftl.c 748 */;
	size_t cocci_id/* drivers/mtd/ftl.c 691 */;
	u_char *cocci_id/* drivers/mtd/ftl.c 454 */;
	struct xfer_info_t *cocci_id/* drivers/mtd/ftl.c 433 */;
	struct eun_info_t *cocci_id/* drivers/mtd/ftl.c 432 */;
	u_char cocci_id/* drivers/mtd/ftl.c 431 */[SECTOR_SIZE];
	struct erase_info cocci_id/* drivers/mtd/ftl.c 342 */;
	struct erase_info *cocci_id/* drivers/mtd/ftl.c 333 */;
	uint32_t cocci_id/* drivers/mtd/ftl.c 266 */;
	unsigned char *cocci_id/* drivers/mtd/ftl.c 222 */;
	struct xfer_info_t cocci_id/* drivers/mtd/ftl.c 212 */;
	struct eun_info_t cocci_id/* drivers/mtd/ftl.c 204 */;
	loff_t cocci_id/* drivers/mtd/ftl.c 199 */;
	ssize_t cocci_id/* drivers/mtd/ftl.c 198 */;
	unsigned cocci_id/* drivers/mtd/ftl.c 196 */;
	uint16_t cocci_id/* drivers/mtd/ftl.c 195 */;
	erase_unit_header_t cocci_id/* drivers/mtd/ftl.c 194 */;
	partition_t *cocci_id/* drivers/mtd/ftl.c 192 */;
	int cocci_id/* drivers/mtd/ftl.c 192 */;
	struct partition_t {
		struct mtd_blktrans_dev mbd;
		uint32_t state;
		uint32_t *VirtualBlockMap;
		uint32_t FreeTotal;
		struct eun_info_t {
			uint32_t Offset;
			uint32_t EraseCount;
			uint32_t Free;
			uint32_t Deleted;
		} *EUNInfo;
		struct xfer_info_t {
			uint32_t Offset;
			uint32_t EraseCount;
			uint16_t state;
		} *XferInfo;
		uint16_t bam_index;
		uint32_t *bam_cache;
		uint16_t DataUnits;
		uint32_t BlocksPerUnit;
		erase_unit_header_t header;
	} cocci_id/* drivers/mtd/ftl.c 110 */;
	void __exit cocci_id/* drivers/mtd/ftl.c 1064 */;
	void cocci_id/* drivers/mtd/ftl.c 1064 */;
	int __init cocci_id/* drivers/mtd/ftl.c 1059 */;
	struct mtd_blktrans_ops cocci_id/* drivers/mtd/ftl.c 1045 */;
	void *cocci_id/* drivers/mtd/ftl.c 1032 */;
	partition_t cocci_id/* drivers/mtd/ftl.c 1010 */;
	struct mtd_info *cocci_id/* drivers/mtd/ftl.c 1006 */;
	struct mtd_blktrans_ops *cocci_id/* drivers/mtd/ftl.c 1006 */;
}
