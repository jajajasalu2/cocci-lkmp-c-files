cocci_test_suite() {
	void *cocci_id/* fs/xfs/scrub/agheader_repair.c 92 */;
	struct xfs_agi *cocci_id/* fs/xfs/scrub/agheader_repair.c 881 */;
	struct xfs_agi cocci_id/* fs/xfs/scrub/agheader_repair.c 878 */;
	struct xrep_find_ag_btree cocci_id/* fs/xfs/scrub/agheader_repair.c 865 */[XREP_AGI_MAX];
	xfs_agino_t cocci_id/* fs/xfs/scrub/agheader_repair.c 816 */;
	struct xrep_agf_allocbt *cocci_id/* fs/xfs/scrub/agheader_repair.c 75 */;
	struct xfs_alloc_rec_incore *cocci_id/* fs/xfs/scrub/agheader_repair.c 72 */;
	enum{XREP_AGI_INOBT=0, XREP_AGI_FINOBT, XREP_AGI_END, XREP_AGI_MAX,} cocci_id/* fs/xfs/scrub/agheader_repair.c 714 */;
	struct xfs_bitmap cocci_id/* fs/xfs/scrub/agheader_repair.c 640 */;
	struct xrep_agf_allocbt {
		struct xfs_scrub *sc;
		xfs_agblock_t freeblks;
		xfs_agblock_t longest;
	} cocci_id/* fs/xfs/scrub/agheader_repair.c 62 */;
	unsigned int cocci_id/* fs/xfs/scrub/agheader_repair.c 585 */;
	struct xfs_agfl *cocci_id/* fs/xfs/scrub/agheader_repair.c 583 */;
	__be32 *cocci_id/* fs/xfs/scrub/agheader_repair.c 580 */;
	struct xfs_bitmap_range *cocci_id/* fs/xfs/scrub/agheader_repair.c 485 */;
	struct xrep_agfl cocci_id/* fs/xfs/scrub/agheader_repair.c 482 */;
	xfs_agblock_t *cocci_id/* fs/xfs/scrub/agheader_repair.c 480 */;
	struct xfs_bitmap *cocci_id/* fs/xfs/scrub/agheader_repair.c 479 */;
	xfs_fsblock_t cocci_id/* fs/xfs/scrub/agheader_repair.c 448 */;
	struct xrep_agfl *cocci_id/* fs/xfs/scrub/agheader_repair.c 447 */;
	struct xfs_rmap_irec *cocci_id/* fs/xfs/scrub/agheader_repair.c 444 */;
	struct xrep_agfl {
		struct xfs_bitmap agmetablocks;
		struct xfs_bitmap *freesp;
		struct xfs_scrub *sc;
	} cocci_id/* fs/xfs/scrub/agheader_repair.c 430 */;
	struct xfs_agf *cocci_id/* fs/xfs/scrub/agheader_repair.c 361 */;
	struct xfs_buf *cocci_id/* fs/xfs/scrub/agheader_repair.c 359 */;
	struct xfs_mount *cocci_id/* fs/xfs/scrub/agheader_repair.c 358 */;
	struct xfs_agf cocci_id/* fs/xfs/scrub/agheader_repair.c 357 */;
	struct xrep_find_ag_btree cocci_id/* fs/xfs/scrub/agheader_repair.c 336 */[XREP_AGF_MAX];
	struct xfs_scrub *cocci_id/* fs/xfs/scrub/agheader_repair.c 334 */;
	int cocci_id/* fs/xfs/scrub/agheader_repair.c 332 */;
	struct xfs_perag *cocci_id/* fs/xfs/scrub/agheader_repair.c 304 */;
	xfs_agblock_t cocci_id/* fs/xfs/scrub/agheader_repair.c 243 */;
	struct xfs_btree_cur *cocci_id/* fs/xfs/scrub/agheader_repair.c 240 */;
	struct xrep_agf_allocbt cocci_id/* fs/xfs/scrub/agheader_repair.c 239 */;
	void cocci_id/* fs/xfs/scrub/agheader_repair.c 177 */;
	struct xrep_find_ag_btree *cocci_id/* fs/xfs/scrub/agheader_repair.c 140 */;
	xfs_agnumber_t cocci_id/* fs/xfs/scrub/agheader_repair.c 121 */;
	bool cocci_id/* fs/xfs/scrub/agheader_repair.c 115 */;
	enum{XREP_AGF_BNOBT=0, XREP_AGF_CNTBT, XREP_AGF_RMAPBT, XREP_AGF_REFCOUNTBT, XREP_AGF_END, XREP_AGF_MAX,} cocci_id/* fs/xfs/scrub/agheader_repair.c 105 */;
}
