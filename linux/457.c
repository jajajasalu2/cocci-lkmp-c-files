cocci_test_suite() {
	struct disklabel *cocci_id/* block/partitions/karma.c 38 */;
	struct d_partition *cocci_id/* block/partitions/karma.c 32 */;
	struct disklabel {
		u8 d_reserved[270];
		struct d_partition {
			__le32 p_res;
			u8 p_fstype;
			u8 p_res2[3];
			__le32 p_offset;
			__le32 p_size;
		} d_partitions[2];
		u8 d_blank[208];
		__le16 d_magic;
	}__packed *cocci_id/* block/partitions/karma.c 20 */;
	unsigned char *cocci_id/* block/partitions/karma.c 19 */;
	Sector cocci_id/* block/partitions/karma.c 18 */;
	struct parsed_partitions *cocci_id/* block/partitions/karma.c 14 */;
	int cocci_id/* block/partitions/karma.c 14 */;
}
