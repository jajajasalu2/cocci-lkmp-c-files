cocci_test_suite() {
	xfs_agblock_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 80 */;
	struct xfs_btree_block *cocci_id/* fs/xfs/libxfs/xfs_ag.c 73 */;
	struct xfs_alloc_rec *cocci_id/* fs/xfs/libxfs/xfs_ag.c 72 */;
	unsigned int cocci_id/* fs/xfs/libxfs/xfs_ag.c 550 */;
	struct xfs_perag *cocci_id/* fs/xfs/libxfs/xfs_ag.c 549 */;
	struct xfs_ag_geometry *cocci_id/* fs/xfs/libxfs/xfs_ag.c 543 */;
	xfs_agnumber_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 542 */;
	struct xfs_agf *cocci_id/* fs/xfs/libxfs/xfs_ag.c 492 */;
	struct xfs_agi *cocci_id/* fs/xfs/libxfs/xfs_ag.c 491 */;
	struct xfs_buf *cocci_id/* fs/xfs/libxfs/xfs_ag.c 490 */;
	xfs_extlen_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 488 */;
	struct xfs_trans *cocci_id/* fs/xfs/libxfs/xfs_ag.c 486 */;
	int cocci_id/* fs/xfs/libxfs/xfs_ag.c 483 */;
	bool cocci_id/* fs/xfs/libxfs/xfs_ag.c 47 */;
	struct xfs_mount *cocci_id/* fs/xfs/libxfs/xfs_ag.c 47 */;
	struct aghdr_init_data *cocci_id/* fs/xfs/libxfs/xfs_ag.c 47 */;
	struct xfs_aghdr_grow_data *cocci_id/* fs/xfs/libxfs/xfs_ag.c 461 */;
	struct xfs_aghdr_grow_data cocci_id/* fs/xfs/libxfs/xfs_ag.c 383 */[];
	struct xfs_aghdr_grow_data {
		xfs_daddr_t daddr;
		size_t numblks;
		const struct xfs_buf_ops *ops;
		aghdr_init_work_f work;
		xfs_btnum_t type;
		bool need_init;
	} cocci_id/* fs/xfs/libxfs/xfs_ag.c 358 */;
	const struct xfs_buf_ops *cocci_id/* fs/xfs/libxfs/xfs_ag.c 342 */;
	aghdr_init_work_f cocci_id/* fs/xfs/libxfs/xfs_ag.c 341 */;
	void (*cocci_id/* fs/xfs/libxfs/xfs_ag.c 335 */)(struct xfs_mount *mp,
							 struct xfs_buf *bp,
							 struct aghdr_init_data *id);
	size_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 30 */;
	__be32 *cocci_id/* fs/xfs/libxfs/xfs_ag.c 292 */;
	struct xfs_agfl *cocci_id/* fs/xfs/libxfs/xfs_ag.c 291 */;
	xfs_daddr_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 29 */;
	int64_t cocci_id/* fs/xfs/libxfs/xfs_ag.c 277 */;
	void cocci_id/* fs/xfs/libxfs/xfs_ag.c 237 */;
	struct xfs_dsb *cocci_id/* fs/xfs/libxfs/xfs_ag.c 231 */;
	struct xfs_rmap_rec *cocci_id/* fs/xfs/libxfs/xfs_ag.c 153 */;
}
