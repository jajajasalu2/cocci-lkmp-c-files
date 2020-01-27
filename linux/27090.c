cocci_test_suite() {
	struct xfs_fsmap cocci_id/* fs/xfs/xfs_fsmap.c 888 */;
	struct xfs_getfsmap_dev cocci_id/* fs/xfs/xfs_fsmap.c 858 */;
	bool cocci_id/* fs/xfs/xfs_fsmap.c 826 */;
	struct xfs_getfsmap_info cocci_id/* fs/xfs/xfs_fsmap.c 825 */;
	struct xfs_getfsmap_dev cocci_id/* fs/xfs/xfs_fsmap.c 824 */[XFS_GETFSMAP_DEVS];
	struct xfs_fsmap cocci_id/* fs/xfs/xfs_fsmap.c 823 */[2];
	xfs_fsmap_format_t cocci_id/* fs/xfs/xfs_fsmap.c 819 */;
	struct xfs_fsmap_head *cocci_id/* fs/xfs/xfs_fsmap.c 818 */;
	struct xfs_alloc_rec_incore cocci_id/* fs/xfs/xfs_fsmap.c 731 */[2];
	struct xfs_btree_cur **cocci_id/* fs/xfs/xfs_fsmap.c 706 */;
	xfs_daddr_t cocci_id/* fs/xfs/xfs_fsmap.c 570 */;
	xfs_agnumber_t cocci_id/* fs/xfs/xfs_fsmap.c 568 */;
	xfs_fsblock_t cocci_id/* fs/xfs/xfs_fsmap.c 566 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/xfs_fsmap.c 565 */;
	struct xfs_mount *cocci_id/* fs/xfs/xfs_fsmap.c 564 */;
	void *cocci_id/* fs/xfs/xfs_fsmap.c 562 */;
	int (*cocci_id/* fs/xfs/xfs_fsmap.c 558 */)(struct xfs_trans *,
						    struct xfs_getfsmap_info *,
						    struct xfs_btree_cur **,
						    void *);
	struct xfs_getfsmap_info *cocci_id/* fs/xfs/xfs_fsmap.c 557 */;
	struct xfs_fsmap *cocci_id/* fs/xfs/xfs_fsmap.c 556 */;
	struct xfs_trans *cocci_id/* fs/xfs/xfs_fsmap.c 555 */;
	int cocci_id/* fs/xfs/xfs_fsmap.c 553 */;
	struct xfs_rtalloc_rec cocci_id/* fs/xfs/xfs_fsmap.c 513 */;
	int (*cocci_id/* fs/xfs/xfs_fsmap.c 466 */)(struct xfs_trans *,
						    struct xfs_getfsmap_info *);
	struct xfs_rtalloc_rec *cocci_id/* fs/xfs/xfs_fsmap.c 443 */;
	struct xfs_rmap_irec cocci_id/* fs/xfs/xfs_fsmap.c 362 */;
	struct xfs_alloc_rec_incore *cocci_id/* fs/xfs/xfs_fsmap.c 357 */;
	struct fsmap *cocci_id/* fs/xfs/xfs_fsmap.c 31 */;
	void cocci_id/* fs/xfs/xfs_fsmap.c 29 */;
	xfs_extlen_t cocci_id/* fs/xfs/xfs_fsmap.c 201 */;
	xfs_agblock_t cocci_id/* fs/xfs/xfs_fsmap.c 200 */;
	bool *cocci_id/* fs/xfs/xfs_fsmap.c 196 */;
	const struct xfs_getfsmap_dev *cocci_id/* fs/xfs/xfs_fsmap.c 184 */;
	const void *cocci_id/* fs/xfs/xfs_fsmap.c 181 */;
	struct xfs_getfsmap_dev {
		u32 dev;
		int (*fn)(struct xfs_trans *tp, struct xfs_fsmap *keys,
			  struct xfs_getfsmap_info *info);
	} cocci_id/* fs/xfs/xfs_fsmap.c 171 */;
	struct xfs_getfsmap_info {
		struct xfs_fsmap_head *head;
		xfs_fsmap_format_t formatter;
		void *format_arg;
		struct xfs_buf *agf_bp;
		xfs_daddr_t next_daddr;
		u64 missing_owner;
		u32 dev;
		xfs_agnumber_t agno;
		struct xfs_rmap_irec low;
		struct xfs_rmap_irec high;
		bool last;
	} cocci_id/* fs/xfs/xfs_fsmap.c 156 */;
	struct xfs_rmap_irec *cocci_id/* fs/xfs/xfs_fsmap.c 114 */;
}
