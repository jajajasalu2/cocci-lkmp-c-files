cocci_test_suite() {
	struct riscix_record *cocci_id/* block/partitions/acorn.c 76 */;
	struct riscix_record {
		__le32 magic;
#define RISCIX_MAGIC cpu_to_le32(0x4a657320)
			__le32 date;
		struct riscix_part part[8];
	} cocci_id/* block/partitions/acorn.c 62 */;
	struct riscix_part {
		__le32 start;
		__le32 length;
		__le32 one;
		char name[16];
	} cocci_id/* block/partitions/acorn.c 55 */;
	sector_t cocci_id/* block/partitions/acorn.c 514 */;
	struct eesox_part *cocci_id/* block/partitions/acorn.c 513 */;
	unsigned char cocci_id/* block/partitions/acorn.c 512 */[256];
	const unsigned char *cocci_id/* block/partitions/acorn.c 511 */;
	const char cocci_id/* block/partitions/acorn.c 493 */[];
	struct eesox_part {
		char magic[6];
		char name[10];
		__le32 start;
		__le32 unused6;
		__le32 unused7;
		__le32 unused8;
	} cocci_id/* block/partitions/acorn.c 481 */;
	const struct ptec_part *cocci_id/* block/partitions/acorn.c 451 */;
	struct ptec_part {
		__le32 unused1;
		__le32 unused2;
		__le32 start;
		__le32 size;
		__le32 unused5;
		char type[8];
	} cocci_id/* block/partitions/acorn.c 410 */;
	s32 cocci_id/* block/partitions/acorn.c 374 */;
	u32 cocci_id/* block/partitions/acorn.c 373 */;
	const struct ics_part *cocci_id/* block/partitions/acorn.c 354 */;
	__le32 *cocci_id/* block/partitions/acorn.c 336 */;
	struct ics_part {
		__le32 start;
		__le32 size;
	} cocci_id/* block/partitions/acorn.c 304 */;
	unsigned int cocci_id/* block/partitions/acorn.c 30 */;
	unsigned long cocci_id/* block/partitions/acorn.c 27 */;
	int cocci_id/* block/partitions/acorn.c 27 */;
	struct parsed_partitions *cocci_id/* block/partitions/acorn.c 26 */;
	char *cocci_id/* block/partitions/acorn.c 26 */;
	unsigned char cocci_id/* block/partitions/acorn.c 257 */;
	unsigned char *cocci_id/* block/partitions/acorn.c 255 */;
	Sector cocci_id/* block/partitions/acorn.c 254 */;
	struct adfs_discrecord *cocci_id/* block/partitions/acorn.c 25 */;
	struct linux_part *cocci_id/* block/partitions/acorn.c 131 */;
	struct linux_part {
		__le32 magic;
		__le32 start_sect;
		__le32 nr_sects;
	} cocci_id/* block/partitions/acorn.c 118 */;
}
