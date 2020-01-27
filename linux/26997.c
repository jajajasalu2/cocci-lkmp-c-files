cocci_test_suite() {
	void cocci_id/* fs/xfs/xfs_log.c 99 */(struct xlog *log,
					       struct xlog_in_core *iclog,
					       xfs_lsn_t tail_lsn);
	xlog_in_core_t *cocci_id/* fs/xfs/xfs_log.c 956 */;
	void cocci_id/* fs/xfs/xfs_log.c 94 */(struct xlog *log,
					       struct xlog_in_core *iclog,
					       int count);
	struct xfs_log_vec cocci_id/* fs/xfs/xfs_log.c 879 */;
	struct xfs_log_iovec cocci_id/* fs/xfs/xfs_log.c 874 */;
	struct xfs_unmount_log_format cocci_id/* fs/xfs/xfs_log.c 871 */;
	void cocci_id/* fs/xfs/xfs_log.c 87 */(struct xlog *log, void *ptr);
	void cocci_id/* fs/xfs/xfs_log.c 74 */(struct xlog *log,
					       struct xlog_ticket *ticket);
	void cocci_id/* fs/xfs/xfs_log.c 70 */(struct xlog *log,
					       int need_bytes);
	void cocci_id/* fs/xfs/xfs_log.c 65 */(struct xlog *log,
					       struct xlog_in_core *iclog);
	xfs_daddr_t cocci_id/* fs/xfs/xfs_log.c 636 */;
	xfs_buftarg_t *cocci_id/* fs/xfs/xfs_log.c 635 */;
	xfs_mount_t *cocci_id/* fs/xfs/xfs_log.c 634 */;
	void cocci_id/* fs/xfs/xfs_log.c 60 */(struct xlog *log,
					       struct xlog_in_core *iclog,
					       int eventual_size);
	int cocci_id/* fs/xfs/xfs_log.c 52 */(struct xlog *log, int len,
					      struct xlog_in_core **iclog,
					      struct xlog_ticket *ticket,
					      int *continued_write,
					      int *logoffsetp);
	struct xlog_in_core **cocci_id/* fs/xfs/xfs_log.c 513 */;
	struct xlog_ticket *cocci_id/* fs/xfs/xfs_log.c 512 */;
	void cocci_id/* fs/xfs/xfs_log.c 49 */(struct xlog_in_core *iclog,
					       bool aborted);
	uint8_t cocci_id/* fs/xfs/xfs_log.c 441 */;
	struct xlog_ticket **cocci_id/* fs/xfs/xfs_log.c 440 */;
	void cocci_id/* fs/xfs/xfs_log.c 44 */(struct xlog *log);
	int cocci_id/* fs/xfs/xfs_log.c 40 */(struct xlog *log,
					      atomic64_t *head);
	uintptr_t cocci_id/* fs/xfs/xfs_log.c 3805 */;
	unsigned long cocci_id/* fs/xfs/xfs_log.c 3796 */;
	ptrdiff_t cocci_id/* fs/xfs/xfs_log.c 3740 */;
	xlog_op_header_t *cocci_id/* fs/xfs/xfs_log.c 3736 */;
	xfs_km_flags_t cocci_id/* fs/xfs/xfs_log.c 3592 */;
	char cocci_id/* fs/xfs/xfs_log.c 3590 */;
	xlog_op_header_t cocci_id/* fs/xfs/xfs_log.c 3530 */;
	xlog_ticket_t *cocci_id/* fs/xfs/xfs_log.c 3476 */;
	struct xlog *cocci_id/* fs/xfs/xfs_log.c 34 */(struct xfs_mount *mp,
						       struct xfs_buftarg *log_target,
						       xfs_daddr_t blk_offset,
						       int num_bblks);
	struct xlog_in_core *cocci_id/* fs/xfs/xfs_log.c 3329 */;
	struct xlog *cocci_id/* fs/xfs/xfs_log.c 3328 */;
	bool cocci_id/* fs/xfs/xfs_log.c 3326 */;
	int *cocci_id/* fs/xfs/xfs_log.c 3325 */;
	uint cocci_id/* fs/xfs/xfs_log.c 3324 */;
	xfs_lsn_t cocci_id/* fs/xfs/xfs_log.c 3323 */;
	struct xfs_mount *cocci_id/* fs/xfs/xfs_log.c 3322 */;
	int cocci_id/* fs/xfs/xfs_log.c 3320 */;
	struct xlog_grant_head *cocci_id/* fs/xfs/xfs_log.c 313 */;
	bool *cocci_id/* fs/xfs/xfs_log.c 2755 */;
	int cocci_id/* fs/xfs/xfs_log.c 27 */(struct xlog *log,
					      struct xlog_ticket *ticket,
					      struct xlog_in_core **iclog,
					      xfs_lsn_t *commitlsnp);
	struct xlog_op_header cocci_id/* fs/xfs/xfs_log.c 2488 */;
	struct xlog_op_header *cocci_id/* fs/xfs/xfs_log.c 2459 */;
	kmem_zone_t *cocci_id/* fs/xfs/xfs_log.c 24 */;
	struct xfs_log_iovec *cocci_id/* fs/xfs/xfs_log.c 2121 */;
	struct xfs_log_vec *cocci_id/* fs/xfs/xfs_log.c 2120 */;
	struct xfs_trans *cocci_id/* fs/xfs/xfs_log.c 2105 */;
	char *cocci_id/* fs/xfs/xfs_log.c 2046 */[];
	uint32_t cocci_id/* fs/xfs/xfs_log.c 1854 */;
	uint32_t *cocci_id/* fs/xfs/xfs_log.c 1852 */;
	uint64_t cocci_id/* fs/xfs/xfs_log.c 1833 */;
	unsigned int cocci_id/* fs/xfs/xfs_log.c 1750 */;
	struct page *cocci_id/* fs/xfs/xfs_log.c 1749 */;
	void *cocci_id/* fs/xfs/xfs_log.c 1745 */;
	struct bio *cocci_id/* fs/xfs/xfs_log.c 1734 */;
	struct xlog_rec_ext_header cocci_id/* fs/xfs/xfs_log.c 1722 */;
	union xlog_in_core2 *cocci_id/* fs/xfs/xfs_log.c 1712 */;
	struct xlog_rec_header cocci_id/* fs/xfs/xfs_log.c 1707 */;
	struct xlog_rec_header *cocci_id/* fs/xfs/xfs_log.c 1699 */;
	__le32 cocci_id/* fs/xfs/xfs_log.c 1696 */;
	xlog_in_core_2_t *cocci_id/* fs/xfs/xfs_log.c 1675 */;
	__be32 *cocci_id/* fs/xfs/xfs_log.c 1669 */;
	__be32 cocci_id/* fs/xfs/xfs_log.c 1660 */;
	xfs_lsn_t *cocci_id/* fs/xfs/xfs_log.c 1564 */;
	char *cocci_id/* fs/xfs/xfs_log.c 1515 */;
	xlog_rec_header_t cocci_id/* fs/xfs/xfs_log.c 1500 */;
	struct bio_vec cocci_id/* fs/xfs/xfs_log.c 1482 */;
	size_t cocci_id/* fs/xfs/xfs_log.c 1481 */;
	int64_t cocci_id/* fs/xfs/xfs_log.c 147 */;
	atomic64_t *cocci_id/* fs/xfs/xfs_log.c 144 */;
	xlog_in_core_t **cocci_id/* fs/xfs/xfs_log.c 1408 */;
	xlog_rec_header_t *cocci_id/* fs/xfs/xfs_log.c 1407 */;
	struct xfs_buftarg *cocci_id/* fs/xfs/xfs_log.c 1402 */;
	struct xlog cocci_id/* fs/xfs/xfs_log.c 1367 */;
	struct work_struct *cocci_id/* fs/xfs/xfs_log.c 1364 */;
	struct xlog_in_core cocci_id/* fs/xfs/xfs_log.c 1280 */;
	int cocci_id/* fs/xfs/xfs_log.c 111 */(struct xlog *log);
	const struct xfs_item_ops *cocci_id/* fs/xfs/xfs_log.c 1077 */;
	struct xfs_log_item *cocci_id/* fs/xfs/xfs_log.c 1075 */;
	void cocci_id/* fs/xfs/xfs_log.c 1072 */;
}
