cocci_test_suite() {
	struct xfs_attr3_leaf_hdr *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 97 */;
	struct xfs_attr_sf_entry cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 969 */;
	struct xfs_attr_sf_hdr cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 958 */;
	struct xfs_da_geometry *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 93 */;
	struct xfs_attr_sf_entry *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 842 */;
	struct xfs_attr_shortform *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 841 */;
	xfs_attr_sf_hdr_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 745 */;
	int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 73 */(xfs_attr_leafblock_t *leaf,
							   int index);
	void cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 67 */(struct xfs_da_args *args,
							    struct xfs_attr_leafblock *src_leaf,
							    struct xfs_attr3_icleaf_hdr *src_ichdr,
							    int src_start,
							    struct xfs_attr_leafblock *dst_leaf,
							    struct xfs_attr3_icleaf_hdr *dst_ichdr,
							    int dst_start,
							    int move_count);
	struct xfs_ifork *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 668 */;
	xfs_inode_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 667 */;
	xfs_mount_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 666 */;
	xfs_attr_sf_entry_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 664 */;
	xfs_attr_shortform_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 663 */;
	xfs_da_args_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 661 */;
	xfs_attr_sf_hdr_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 631 */;
	xfs_trans_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 611 */;
	int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 56 */(xfs_da_state_t *state,
							   xfs_da_state_blk_t *leaf_blk_1,
							   struct xfs_attr3_icleaf_hdr *ichdr1,
							   xfs_da_state_blk_t *leaf_blk_2,
							   struct xfs_attr3_icleaf_hdr *ichdr2,
							   int *number_entries_in_blk1,
							   int *number_usedbytes_in_blk1);
	void cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 53 */(xfs_da_state_t *state,
							    xfs_da_state_blk_t *blk1,
							    xfs_da_state_blk_t *blk2);
	int64_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 523 */;
	void cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 50 */(struct xfs_da_args *args,
							    struct xfs_attr3_icleaf_hdr *ichdr,
							    struct xfs_buf *leaf_buffer);
	int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 47 */(struct xfs_buf *leaf_buffer,
							   struct xfs_attr3_icleaf_hdr *ichdr,
							   struct xfs_da_args *args,
							   int freemap_index);
	unsigned char *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 461 */;
	int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 45 */(struct xfs_da_args *args,
							   xfs_dablk_t which_block,
							   struct xfs_buf **bpp);
	const struct xfs_buf_ops cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 419 */;
	xfs_failaddr_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 407 */;
	struct xfs_buf_log_item *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 377 */;
	__u32 cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 301 */;
	xfs_attr_leaf_name_local_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 2725 */;
	xfs_attr_leaf_name_remote_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 2667 */;
	unsigned int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 248 */;
	__u32 *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 243 */;
	xfs_dahash_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 2339 */;
	int *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1828 */;
	struct xfs_da_state_blk *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1824 */;
	struct xfs_da_state *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1823 */;
	xfs_attr_leafblock_t *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1541 */;
	struct xfs_trans *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1533 */;
	void cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1524 */;
	char *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1479 */;
	struct xfs_mount *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1413 */;
	struct xfs_attr_leaf_name_remote *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1412 */;
	struct xfs_attr_leaf_name_local *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1411 */;
	struct xfs_attr_leaf_entry *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1410 */;
	struct xfs_attr3_icleaf_hdr *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1405 */;
	struct xfs_attr3_icleaf_hdr cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1329 */;
	struct xfs_attr_leafblock *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1328 */;
	struct xfs_da_args *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1326 */;
	struct xfs_buf *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1325 */;
	int cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1323 */;
	struct xfs_attr_leaf_hdr cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1250 */;
	uint32_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 125 */;
	struct xfs_attr3_leaf_hdr cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1247 */;
	struct xfs_da3_blkinfo *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1239 */;
	struct xfs_inode *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1219 */;
	struct xfs_buf **cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1215 */;
	xfs_dablk_t cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1214 */;
	struct xfs_da_intnode *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1148 */;
	struct xfs_da3_icnode_hdr cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1147 */;
	struct xfs_da_args cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1067 */;
	void *cocci_id/* fs/xfs/libxfs/xfs_attr_leaf.c 1048 */;
}
