cocci_test_suite() {
	struct xfs_alloc_cur {
		struct xfs_btree_cur *cnt;
		struct xfs_btree_cur *bnolt;
		struct xfs_btree_cur *bnogt;
		xfs_extlen_t cur_len;
		xfs_agblock_t rec_bno;
		xfs_extlen_t rec_len;
		xfs_agblock_t bno;
		xfs_extlen_t len;
		xfs_extlen_t diff;
		unsigned int busy_gen;
		bool busy;
	} cocci_id/* fs/xfs/libxfs/xfs_alloc.c 735 */;
	xfs_buf_t **cocci_id/* fs/xfs/libxfs/xfs_alloc.c 692 */;
	struct xfs_agfl *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 591 */;
	struct xfs_agfl cocci_id/* fs/xfs/libxfs/xfs_alloc.c 55 */;
	struct xfs_btree_block *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 488 */;
	int cocci_id/* fs/xfs/libxfs/xfs_alloc.c 39 */(xfs_alloc_arg_t *);
	__be32 *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3410 */;
	void *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3408 */;
	xfs_agfl_walk_fn cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3407 */;
	union xfs_btree_irec cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3387 */;
	struct xfs_alloc_query_range_info cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3371 */;
	xfs_alloc_query_range_fn cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3368 */;
	struct xfs_alloc_rec_incore *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3346 */;
	struct xfs_alloc_rec_incore cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3335 */;
	struct xfs_alloc_query_range_info *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3334 */;
	struct xfs_alloc_query_range_info {
		xfs_alloc_query_range_fn fn;
		void *priv;
	} cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3322 */;
	unsigned int cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3282 */;
	xfs_agblock_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3280 */;
	xfs_agnumber_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3279 */;
	struct xfs_buf *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3278 */;
	struct xfs_mount *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3277 */;
	bool cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3275 */;
	enum xfs_ag_resv_type cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3274 */;
	const struct xfs_owner_info *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3273 */;
	xfs_extlen_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3272 */;
	xfs_fsblock_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3271 */;
	struct xfs_trans *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3270 */;
	int cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3268 */;
	struct workqueue_struct *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 32 */;
	xfs_alloctype_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 3047 */;
	kmem_zone_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 30 */;
	struct xfs_buf **cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2982 */;
	const struct xfs_buf_ops cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2935 */;
	struct xfs_buf_log_item *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2917 */;
	xfs_failaddr_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2900 */;
	void cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2895 */;
	struct xfs_agf *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2842 */;
	char *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2827 */;
	unsigned *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 277 */;
	uint cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2753 */;
	xfs_agf_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2726 */;
	const short cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2725 */[];
	xfs_perag_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2665 */;
	xfs_agf_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2658 */;
	xfs_buf_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2654 */;
	xfs_trans_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2653 */;
	struct xfs_alloc_arg cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2493 */;
	struct xfs_extent_free_item *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2464 */;
	struct xfs_owner_info *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2461 */;
	struct xfs_perag *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2422 */;
	uint32_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2374 */;
	union xfs_btree_rec *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 234 */;
	const uint8_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2262 */;
	const uint8_t cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2261 */[XFS_BTNUM_AGF];
	xfs_mount_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 2204 */;
	union xfs_btree_rec cocci_id/* fs/xfs/libxfs/xfs_alloc.c 215 */;
	struct xfs_alloc_cur cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1563 */;
	bool *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1501 */;
	xfs_extlen_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1500 */;
	xfs_agblock_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1499 */;
	struct xfs_alloc_cur *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1498 */;
	struct xfs_alloc_arg *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1497 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1375 */;
	int *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1373 */;
	unsigned cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1215 */;
	xfs_btree_cur_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1206 */;
	long cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1181 */;
	xfs_alloc_arg_t *cocci_id/* fs/xfs/libxfs/xfs_alloc.c 1133 */;
}