cocci_test_suite() {
	union xfs_btree_rec *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 93 */;
	bool cocci_id/* fs/xfs/libxfs/xfs_refcount.c 782 */;
	unsigned long long cocci_id/* fs/xfs/libxfs/xfs_refcount.c 407 */;
	int cocci_id/* fs/xfs/libxfs/xfs_refcount.c 34 */(struct xfs_btree_cur *rcur,
							  xfs_agblock_t agbno,
							  xfs_extlen_t aglen);
	struct xfs_refcount_irec *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 333 */;
	enum xfs_refc_adjust_op{XFS_REFCOUNT_ADJUST_INCREASE=1, XFS_REFCOUNT_ADJUST_DECREASE=-1, XFS_REFCOUNT_ADJUST_COW_ALLOC=0, XFS_REFCOUNT_ADJUST_COW_FREE=-1,} cocci_id/* fs/xfs/libxfs/xfs_refcount.c 27 */;
	int *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 224 */;
	union xfs_btree_irec cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1786 */;
	bool *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1784 */;
	struct list_head cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1692 */;
	struct xfs_refcount_recovery *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1691 */;
	union xfs_btree_rec cocci_id/* fs/xfs/libxfs/xfs_refcount.c 169 */;
	struct xfs_refcount_recovery cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1675 */;
	struct list_head *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1668 */;
	void *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1666 */;
	struct xfs_refcount_recovery {
		struct list_head rr_list;
		struct xfs_refcount_irec rr_rrec;
	} cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1656 */;
	struct xfs_mount *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1626 */;
	xfs_agblock_t cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1591 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1590 */;
	int cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1588 */;
	struct xfs_refcount_irec cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1456 */;
	struct xfs_bmbt_irec *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1277 */;
	struct xfs_refcount_intent cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1246 */;
	struct xfs_refcount_intent *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1239 */;
	xfs_extlen_t cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1237 */;
	xfs_fsblock_t cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1236 */;
	enum xfs_refcount_intent_type cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1235 */;
	struct xfs_trans *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1234 */;
	void cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1232 */;
	unsigned long cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1148 */;
	xfs_agnumber_t cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1145 */;
	struct xfs_buf *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1143 */;
	struct xfs_btree_cur **cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1139 */;
	xfs_fsblock_t *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1137 */;
	struct xfs_owner_info *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1051 */;
	enum xfs_refc_adjust_op cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1050 */;
	xfs_extlen_t *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1049 */;
	xfs_agblock_t *cocci_id/* fs/xfs/libxfs/xfs_refcount.c 1048 */;
}
