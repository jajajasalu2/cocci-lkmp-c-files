cocci_test_suite() {
	struct hfsplus_sb_info *cocci_id/* fs/hfsplus/part_tbl.c 94 */;
	sector_t *cocci_id/* fs/hfsplus/part_tbl.c 92 */;
	struct new_pmap *cocci_id/* fs/hfsplus/part_tbl.c 92 */;
	struct super_block *cocci_id/* fs/hfsplus/part_tbl.c 91 */;
	void *cocci_id/* fs/hfsplus/part_tbl.c 91 */;
	int cocci_id/* fs/hfsplus/part_tbl.c 91 */;
	struct old_pmap_entry *cocci_id/* fs/hfsplus/part_tbl.c 77 */;
	struct old_pmap *cocci_id/* fs/hfsplus/part_tbl.c 70 */;
	struct old_pmap {
		__be16 pdSig;
		struct old_pmap_entry {
			__be32 pdStart;
			__be32 pdSize;
			__be32 pdFSID;
		} pdEntry[42];
	}__packed cocci_id/* fs/hfsplus/part_tbl.c 61 */;
	struct new_pmap {
		__be16 pmSig;
		__be16 reSigPad;
		__be32 pmMapBlkCnt;
		__be32 pmPyPartStart;
		__be32 pmPartBlkCnt;
		u8 pmPartName[32];
		u8 pmPartType[32];
	}__packed cocci_id/* fs/hfsplus/part_tbl.c 39 */;
	__be16 *cocci_id/* fs/hfsplus/part_tbl.c 144 */;
	void **cocci_id/* fs/hfsplus/part_tbl.c 115 */;
	u8 *cocci_id/* fs/hfsplus/part_tbl.c 111 */;
}
