cocci_test_suite() {
	const struct xchk_health_map cocci_id/* fs/xfs/scrub/health.c 81 */[XFS_SCRUB_TYPE_NR];
	struct xchk_health_map {
		enum xchk_health_group group;
		unsigned int sick_mask;
	} cocci_id/* fs/xfs/scrub/health.c 76 */;
	enum xchk_health_group{XHG_FS=1, XHG_RT, XHG_AG, XHG_INO,} cocci_id/* fs/xfs/scrub/health.c 69 */;
	unsigned int cocci_id/* fs/xfs/scrub/health.c 179 */;
	xfs_btnum_t cocci_id/* fs/xfs/scrub/health.c 177 */;
	struct xfs_perag *cocci_id/* fs/xfs/scrub/health.c 176 */;
	struct xfs_scrub *cocci_id/* fs/xfs/scrub/health.c 175 */;
	bool cocci_id/* fs/xfs/scrub/health.c 173 */;
	void cocci_id/* fs/xfs/scrub/health.c 126 */;
	__u32 cocci_id/* fs/xfs/scrub/health.c 111 */;
}
