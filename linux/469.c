cocci_test_suite() {
	struct ultrix_disklabel *cocci_id/* block/partitions/ultrix.c 34 */;
	struct ultrix_disklabel {
		s32 pt_magic;
		s32 pt_valid;
		struct pt_info {
			s32 pi_nblocks;
			u32 pi_blkoff;
		} pt_part[8];
	} *cocci_id/* block/partitions/ultrix.c 18 */;
	unsigned char *cocci_id/* block/partitions/ultrix.c 17 */;
	Sector cocci_id/* block/partitions/ultrix.c 16 */;
	struct parsed_partitions *cocci_id/* block/partitions/ultrix.c 13 */;
	int cocci_id/* block/partitions/ultrix.c 13 */;
}
