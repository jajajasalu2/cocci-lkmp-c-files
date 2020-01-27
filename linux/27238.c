cocci_test_suite() {
	struct new_pmap *cocci_id/* fs/hfs/part_tbl.c 92 */;
	struct old_pmap_entry *cocci_id/* fs/hfs/part_tbl.c 74 */;
	struct old_pmap *cocci_id/* fs/hfs/part_tbl.c 73 */;
	__be16 *cocci_id/* fs/hfs/part_tbl.c 62 */;
	struct buffer_head *cocci_id/* fs/hfs/part_tbl.c 61 */;
	sector_t *cocci_id/* fs/hfs/part_tbl.c 59 */;
	struct super_block *cocci_id/* fs/hfs/part_tbl.c 58 */;
	int cocci_id/* fs/hfs/part_tbl.c 58 */;
	struct old_pmap {
		__be16 pdSig;
		struct old_pmap_entry {
			__be32 pdStart;
			__be32 pdSize;
			__be32 pdFSID;
		} pdEntry[42];
	}__packed cocci_id/* fs/hfs/part_tbl.c 43 */;
	struct new_pmap {
		__be16 pmSig;
		__be16 reSigPad;
		__be32 pmMapBlkCnt;
		__be32 pmPyPartStart;
		__be32 pmPartBlkCnt;
		u8 pmPartName[32];
		u8 pmPartType[32];
	}__packed cocci_id/* fs/hfs/part_tbl.c 21 */;
}
