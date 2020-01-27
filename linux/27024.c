cocci_test_suite() {
	xfs_daddr_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 969 */;
	xfs_extlen_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 852 */;
	const struct xfs_buf_ops *cocci_id/* fs/xfs/libxfs/xfs_btree.c 824 */;
	struct xfs_trans *cocci_id/* fs/xfs/libxfs/xfs_btree.c 820 */;
	const short *cocci_id/* fs/xfs/libxfs/xfs_btree.c 784 */;
	xfs_agnumber_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 706 */;
	struct xfs_buf **cocci_id/* fs/xfs/libxfs/xfs_btree.c 669 */;
	struct xfs_ifork *cocci_id/* fs/xfs/libxfs/xfs_btree.c 655 */;
	xfs_btnum_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 64 */;
	struct xfs_mount *cocci_id/* fs/xfs/libxfs/xfs_btree.c 63 */;
	char *cocci_id/* fs/xfs/libxfs/xfs_btree.c 625 */;
	struct xfs_buf *cocci_id/* fs/xfs/libxfs/xfs_btree.c 61 */;
	int cocci_id/* fs/xfs/libxfs/xfs_btree.c 60 */;
	struct xfs_btree_block *cocci_id/* fs/xfs/libxfs/xfs_btree.c 59 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/libxfs/xfs_btree.c 58 */;
	xfs_failaddr_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 56 */;
	size_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 518 */;
	bool *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4916 */;
	union xfs_btree_irec *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4914 */;
	const union xfs_btree_ptr *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4892 */;
	int64_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 4889 */;
	xfs_extlen_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4881 */;
	uint *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4848 */;
	unsigned long long cocci_id/* fs/xfs/libxfs/xfs_btree.c 4846 */;
	xfs_btree_query_range_fn cocci_id/* fs/xfs/libxfs/xfs_btree.c 4656 */;
	unsigned long cocci_id/* fs/xfs/libxfs/xfs_btree.c 4544 */;
	uint cocci_id/* fs/xfs/libxfs/xfs_btree.c 4541 */;
	struct xfs_perag *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4493 */;
	struct xfs_btree_block_change_owner_info cocci_id/* fs/xfs/libxfs/xfs_btree.c 4427 */;
	struct list_head *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4425 */;
	uint64_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 4424 */;
	struct xfs_btree_block_change_owner_info *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4380 */;
	void *cocci_id/* fs/xfs/libxfs/xfs_btree.c 4378 */;
	struct xfs_btree_block_change_owner_info {
		uint64_t new_owner;
		struct list_head *buffer_list;
	} cocci_id/* fs/xfs/libxfs/xfs_btree.c 4369 */;
	xfs_btree_visit_blocks_fn cocci_id/* fs/xfs/libxfs/xfs_btree.c 4269 */;
	union xfs_btree_rec **cocci_id/* fs/xfs/libxfs/xfs_btree.c 4229 */;
	xfs_trans_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 402 */;
	xfs_mount_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 400 */;
	uint32_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 40 */;
	xfs_btree_cur_t **cocci_id/* fs/xfs/libxfs/xfs_btree.c 395 */;
	xfs_btree_cur_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 355 */;
	struct xfs_inode *cocci_id/* fs/xfs/libxfs/xfs_btree.c 3498 */;
	union xfs_btree_rec cocci_id/* fs/xfs/libxfs/xfs_btree.c 3422 */;
	const uint32_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 32 */[2][XFS_BTNUM_MAX];
	struct xfs_btree_split_args cocci_id/* fs/xfs/libxfs/xfs_btree.c 2877 */;
	struct xfs_btree_split_args *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2840 */;
	struct work_struct *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2838 */;
	struct xfs_btree_split_args {
		struct xfs_btree_cur *cur;
		int level;
		union xfs_btree_ptr *ptrp;
		union xfs_btree_key *key;
		struct xfs_btree_cur **curp;
		int *stat;
		int result;
		bool kswapd;
		struct completion *done;
		struct work_struct work;
	} cocci_id/* fs/xfs/libxfs/xfs_btree.c 2820 */;
	union xfs_btree_rec *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2744 */;
	struct xfs_buf_log_item *cocci_id/* fs/xfs/libxfs/xfs_btree.c 272 */;
	kmem_zone_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 27 */;
	union xfs_btree_ptr cocci_id/* fs/xfs/libxfs/xfs_btree.c 2648 */;
	int *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2646 */;
	struct xfs_btree_cur **cocci_id/* fs/xfs/libxfs/xfs_btree.c 2645 */;
	union xfs_btree_key *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2644 */;
	union xfs_btree_ptr *cocci_id/* fs/xfs/libxfs/xfs_btree.c 2643 */;
	xfs_agblock_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 212 */;
	union xfs_btree_key cocci_id/* fs/xfs/libxfs/xfs_btree.c 2107 */;
	bool cocci_id/* fs/xfs/libxfs/xfs_btree.c 2105 */;
	xfs_fsblock_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 200 */;
	xfs_lookup_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 1836 */;
	xfs_buf_t *cocci_id/* fs/xfs/libxfs/xfs_btree.c 1663 */;
	struct xfs_btree_block cocci_id/* fs/xfs/libxfs/xfs_btree.c 1494 */;
	const short cocci_id/* fs/xfs/libxfs/xfs_btree.c 1493 */[];
	xfs_daddr_t cocci_id/* fs/xfs/libxfs/xfs_btree.c 1267 */;
	struct xfs_btree_block **cocci_id/* fs/xfs/libxfs/xfs_btree.c 1263 */;
	void cocci_id/* fs/xfs/libxfs/xfs_btree.c 1216 */;
	__u64 cocci_id/* fs/xfs/libxfs/xfs_btree.c 1161 */;
	__u16 cocci_id/* fs/xfs/libxfs/xfs_btree.c 1159 */;
	__u32 cocci_id/* fs/xfs/libxfs/xfs_btree.c 1123 */;
	unsigned int cocci_id/* fs/xfs/libxfs/xfs_btree.c 1120 */;
}
