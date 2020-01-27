cocci_test_suite() {
	struct z_erofs_maprecorder {
		struct inode *inode;
		struct erofs_map_blocks *map;
		void *kaddr;
		unsigned long lcn;
		u8 type;
		u16 clusterofs;
		u16 delta[2];
		erofs_blk_t pblk;
	} cocci_id/* fs/erofs/zmap.c 96 */;
	unsigned long long cocci_id/* fs/erofs/zmap.c 387 */;
	struct z_erofs_maprecorder cocci_id/* fs/erofs/zmap.c 381 */;
	struct erofs_map_blocks *cocci_id/* fs/erofs/zmap.c 377 */;
	struct z_erofs_map_header *cocci_id/* fs/erofs/zmap.c 37 */;
	void *cocci_id/* fs/erofs/zmap.c 36 */;
	struct page *cocci_id/* fs/erofs/zmap.c 35 */;
	struct erofs_map_blocks *const cocci_id/* fs/erofs/zmap.c 332 */;
	struct super_block *const cocci_id/* fs/erofs/zmap.c 32 */;
	erofs_off_t cocci_id/* fs/erofs/zmap.c 271 */;
	unsigned int cocci_id/* fs/erofs/zmap.c 269 */;
	struct z_erofs_map_header cocci_id/* fs/erofs/zmap.c 267 */;
	const erofs_off_t cocci_id/* fs/erofs/zmap.c 265 */;
	const unsigned int cocci_id/* fs/erofs/zmap.c 264 */;
	struct erofs_inode *const cocci_id/* fs/erofs/zmap.c 263 */;
	struct inode *const cocci_id/* fs/erofs/zmap.c 262 */;
	unsigned long cocci_id/* fs/erofs/zmap.c 260 */;
	struct z_erofs_maprecorder *cocci_id/* fs/erofs/zmap.c 259 */;
	int cocci_id/* fs/erofs/zmap.c 259 */;
	__le32 *cocci_id/* fs/erofs/zmap.c 255 */;
	u8 *cocci_id/* fs/erofs/zmap.c 186 */;
	struct z_erofs_vle_decompressed_index *cocci_id/* fs/erofs/zmap.c 151 */;
	struct z_erofs_vle_decompressed_index cocci_id/* fs/erofs/zmap.c 150 */;
	erofs_blk_t cocci_id/* fs/erofs/zmap.c 110 */;
	struct inode *cocci_id/* fs/erofs/zmap.c 11 */;
}
