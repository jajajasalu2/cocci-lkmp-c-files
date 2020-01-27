cocci_test_suite() {
	void *cocci_id/* fs/xfs/scrub/refcount.c 95 */;
	struct xfs_rmap_irec *cocci_id/* fs/xfs/scrub/refcount.c 94 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/scrub/refcount.c 93 */;
	struct xchk_refcnt_check {
		struct xfs_scrub *sc;
		struct list_head fragments;
		xfs_agblock_t bno;
		xfs_extlen_t len;
		xfs_nlink_t refcount;
		xfs_nlink_t seen;
	} cocci_id/* fs/xfs/scrub/refcount.c 71 */;
	struct xchk_refcnt_frag {
		struct list_head list;
		struct xfs_rmap_irec rm;
	} cocci_id/* fs/xfs/scrub/refcount.c 66 */;
	struct xfs_refcount_irec cocci_id/* fs/xfs/scrub/refcount.c 429 */;
	xfs_agblock_t cocci_id/* fs/xfs/scrub/refcount.c 409 */;
	int cocci_id/* fs/xfs/scrub/refcount.c 379 */;
	xfs_extlen_t cocci_id/* fs/xfs/scrub/refcount.c 377 */;
	xfs_filblks_t cocci_id/* fs/xfs/scrub/refcount.c 375 */;
	struct xfs_scrub *cocci_id/* fs/xfs/scrub/refcount.c 374 */;
	void cocci_id/* fs/xfs/scrub/refcount.c 372 */;
	bool cocci_id/* fs/xfs/scrub/refcount.c 343 */;
	xfs_agnumber_t cocci_id/* fs/xfs/scrub/refcount.c 339 */;
	xfs_agblock_t *cocci_id/* fs/xfs/scrub/refcount.c 338 */;
	struct xfs_mount *cocci_id/* fs/xfs/scrub/refcount.c 337 */;
	union xfs_btree_rec *cocci_id/* fs/xfs/scrub/refcount.c 335 */;
	struct xchk_btree *cocci_id/* fs/xfs/scrub/refcount.c 334 */;
	struct xfs_rmap_irec cocci_id/* fs/xfs/scrub/refcount.c 283 */;
	struct xchk_refcnt_check cocci_id/* fs/xfs/scrub/refcount.c 276 */;
	struct xfs_inode *cocci_id/* fs/xfs/scrub/refcount.c 23 */;
	xfs_nlink_t cocci_id/* fs/xfs/scrub/refcount.c 156 */;
	struct xchk_refcnt_frag *cocci_id/* fs/xfs/scrub/refcount.c 151 */;
	struct list_head cocci_id/* fs/xfs/scrub/refcount.c 150 */;
	struct xchk_refcnt_check *cocci_id/* fs/xfs/scrub/refcount.c 148 */;
	struct xchk_refcnt_frag cocci_id/* fs/xfs/scrub/refcount.c 128 */;
}
