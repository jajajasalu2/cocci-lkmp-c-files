cocci_test_suite() {
	struct xlog_rec_header **cocci_id/* fs/xfs/xfs_log_recover.c 817 */;
	struct xfs_buf_cancel {
		xfs_daddr_t bc_blkno;
		uint bc_len;
		int bc_refcount;
		struct list_head bc_list;
	} cocci_id/* fs/xfs/xfs_log_recover.c 62 */;
	struct xfs_agi *cocci_id/* fs/xfs/xfs_log_recover.c 5849 */;
	xfs_agnumber_t cocci_id/* fs/xfs/xfs_log_recover.c 5821 */;
	xfs_agf_t *cocci_id/* fs/xfs/xfs_log_recover.c 5818 */;
	xfs_sb_t *cocci_id/* fs/xfs/xfs_log_recover.c 5594 */;
	xfs_buf_t *cocci_id/* fs/xfs/xfs_log_recover.c 5593 */;
	struct list_head cocci_id/* fs/xfs/xfs_log_recover.c 5549 */;
	struct xlog_recover *cocci_id/* fs/xfs/xfs_log_recover.c 5512 */;
	struct hlist_node *cocci_id/* fs/xfs/xfs_log_recover.c 5511 */;
	int cocci_id/* fs/xfs/xfs_log_recover.c 54 */(struct xlog *,
						      xfs_daddr_t,
						      xfs_daddr_t, int,
						      xfs_daddr_t *);
	struct hlist_head cocci_id/* fs/xfs/xfs_log_recover.c 5249 */[XLOG_RHASH_SIZE];
	__le32 cocci_id/* fs/xfs/xfs_log_recover.c 5144 */;
	xlog_in_core_2_t *cocci_id/* fs/xfs/xfs_log_recover.c 5122 */;
	xfs_ino_t cocci_id/* fs/xfs/xfs_log_recover.c 4985 */;
	xfs_agino_t cocci_id/* fs/xfs/xfs_log_recover.c 4959 */;
	xfs_agi_t cocci_id/* fs/xfs/xfs_log_recover.c 4958 */;
	xfs_agi_t *cocci_id/* fs/xfs/xfs_log_recover.c 4943 */;
	xfs_trans_t *cocci_id/* fs/xfs/xfs_log_recover.c 4942 */;
	void cocci_id/* fs/xfs/xfs_log_recover.c 48 */(struct xlog *);
	int64_t cocci_id/* fs/xfs/xfs_log_recover.c 4753 */;
	struct xfs_trans *cocci_id/* fs/xfs/xfs_log_recover.c 4749 */;
	struct xfs_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 4733 */;
	struct xfs_bui_log_item cocci_id/* fs/xfs/xfs_log_recover.c 4725 */;
	struct xfs_cui_log_item cocci_id/* fs/xfs/xfs_log_recover.c 4685 */;
	struct xfs_cui_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 4683 */;
	struct xfs_rui_log_item cocci_id/* fs/xfs/xfs_log_recover.c 4645 */;
	struct xfs_rui_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 4643 */;
	struct xfs_efi_log_item cocci_id/* fs/xfs/xfs_log_recover.c 4605 */;
	struct xfs_efi_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 4603 */;
	struct xlog_recover cocci_id/* fs/xfs/xfs_log_recover.c 4434 */;
	struct hlist_head *cocci_id/* fs/xfs/xfs_log_recover.c 4412 */;
	xlog_tid_t cocci_id/* fs/xfs/xfs_log_recover.c 4411 */;
	struct hlist_head cocci_id/* fs/xfs/xfs_log_recover.c 4406 */[];
	int cocci_id/* fs/xfs/xfs_log_recover.c 43 */(struct xlog *,
						      xfs_lsn_t);
	uint *cocci_id/* fs/xfs/xfs_log_recover.c 4239 */;
	struct xfs_trans_header cocci_id/* fs/xfs/xfs_log_recover.c 4184 */;
	xlog_recover_item_t cocci_id/* fs/xfs/xfs_log_recover.c 4163 */;
	xlog_recover_item_t *cocci_id/* fs/xfs/xfs_log_recover.c 4161 */;
	struct xfs_dq_logformat *cocci_id/* fs/xfs/xfs_log_recover.c 3928 */;
	int cocci_id/* fs/xfs/xfs_log_recover.c 39 */(struct xlog *,
						      xfs_daddr_t *);
	struct xfs_buf_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3882 */;
	xfs_agblock_t cocci_id/* fs/xfs/xfs_log_recover.c 3771 */;
	struct xfs_ino_geometry *cocci_id/* fs/xfs/xfs_log_recover.c 3769 */;
	struct xfs_icreate_log *cocci_id/* fs/xfs/xfs_log_recover.c 3768 */;
	struct xfs_bud_log_format cocci_id/* fs/xfs/xfs_log_recover.c 3718 */;
	struct xfs_ail *cocci_id/* fs/xfs/xfs_log_recover.c 3715 */;
	struct xfs_ail_cursor cocci_id/* fs/xfs/xfs_log_recover.c 3714 */;
	uint64_t cocci_id/* fs/xfs/xfs_log_recover.c 3713 */;
	struct xfs_bui_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 3711 */;
	struct xfs_bud_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3710 */;
	struct xlog_recover_item *cocci_id/* fs/xfs/xfs_log_recover.c 3708 */;
	uint cocci_id/* fs/xfs/xfs_log_recover.c 3640 */;
	struct xfs_bui_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3637 */;
	struct xfs_log_iovec *cocci_id/* fs/xfs/xfs_log_recover.c 3636 */;
	int cocci_id/* fs/xfs/xfs_log_recover.c 3634 */;
	struct xfs_cud_log_format cocci_id/* fs/xfs/xfs_log_recover.c 3594 */;
	struct xfs_cud_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3586 */;
	struct xfs_cui_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3517 */;
	struct xfs_rud_log_format cocci_id/* fs/xfs/xfs_log_recover.c 3477 */;
	struct xfs_rud_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3469 */;
	struct xfs_rui_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3432 */;
	xfs_efi_log_item_t *cocci_id/* fs/xfs/xfs_log_recover.c 3374 */;
	xfs_efd_log_format_t *cocci_id/* fs/xfs/xfs_log_recover.c 3373 */;
	struct xfs_efi_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 3336 */;
	struct xfs_dqblk cocci_id/* fs/xfs/xfs_log_recover.c 3306 */;
	struct xfs_dqblk *cocci_id/* fs/xfs/xfs_log_recover.c 3296 */;
	xfs_dq_logformat_t *cocci_id/* fs/xfs/xfs_log_recover.c 3226 */;
	struct xfs_disk_dquot *cocci_id/* fs/xfs/xfs_log_recover.c 3223 */;
	xfs_qoff_logformat_t *cocci_id/* fs/xfs/xfs_log_recover.c 3194 */;
	xfs_bmdr_block_t *cocci_id/* fs/xfs/xfs_log_recover.c 3113 */;
	struct xfs_inode_log_format cocci_id/* fs/xfs/xfs_log_recover.c 2925 */;
	struct xfs_log_dinode *cocci_id/* fs/xfs/xfs_log_recover.c 2921 */;
	xfs_dinode_t *cocci_id/* fs/xfs/xfs_log_recover.c 2914 */;
	struct xfs_inode *cocci_id/* fs/xfs/xfs_log_recover.c 2861 */;
	struct list_head *cocci_id/* fs/xfs/xfs_log_recover.c 2859 */;
	struct xfs_inode_log_format *cocci_id/* fs/xfs/xfs_log_recover.c 2858 */;
	struct xfs_dinode *cocci_id/* fs/xfs/xfs_log_recover.c 2857 */;
	struct xfs_mount *cocci_id/* fs/xfs/xfs_log_recover.c 2856 */;
	__be16 *cocci_id/* fs/xfs/xfs_log_recover.c 2809 */;
	struct xfs_buf *cocci_id/* fs/xfs/xfs_log_recover.c 2659 */;
	const size_t cocci_id/* fs/xfs/xfs_log_recover.c 2571 */;
	struct xfs_disk_dquot cocci_id/* fs/xfs/xfs_log_recover.c 2571 */;
	xfs_failaddr_t cocci_id/* fs/xfs/xfs_log_recover.c 2570 */;
	struct xfs_buf_log_item *cocci_id/* fs/xfs/xfs_log_recover.c 2543 */;
	struct xfs_da3_blkinfo *cocci_id/* fs/xfs/xfs_log_recover.c 2276 */;
	struct xfs_da_blkinfo *cocci_id/* fs/xfs/xfs_log_recover.c 2271 */;
	struct xfs_dsb *cocci_id/* fs/xfs/xfs_log_recover.c 2255 */;
	struct xfs_dir3_blk_hdr *cocci_id/* fs/xfs/xfs_log_recover.c 2235 */;
	struct xfs_dsymlink_hdr *cocci_id/* fs/xfs/xfs_log_recover.c 2229 */;
	struct xfs_agfl *cocci_id/* fs/xfs/xfs_log_recover.c 2221 */;
	struct xfs_agf *cocci_id/* fs/xfs/xfs_log_recover.c 2217 */;
	struct xfs_btree_block *cocci_id/* fs/xfs/xfs_log_recover.c 2202 */;
	__be32 *cocci_id/* fs/xfs/xfs_log_recover.c 2192 */;
	uuid_t *cocci_id/* fs/xfs/xfs_log_recover.c 2185 */;
	void *cocci_id/* fs/xfs/xfs_log_recover.c 2184 */;
	uint16_t cocci_id/* fs/xfs/xfs_log_recover.c 2182 */;
	uint32_t cocci_id/* fs/xfs/xfs_log_recover.c 2181 */;
	xfs_mount_t *cocci_id/* fs/xfs/xfs_log_recover.c 218 */;
	xfs_agino_t *cocci_id/* fs/xfs/xfs_log_recover.c 2069 */;
	struct xfs_buf_cancel *cocci_id/* fs/xfs/xfs_log_recover.c 2021 */;
	unsigned short cocci_id/* fs/xfs/xfs_log_recover.c 2019 */;
	struct xfs_buf_cancel cocci_id/* fs/xfs/xfs_log_recover.c 1959 */;
	xfs_buf_log_format_t *cocci_id/* fs/xfs/xfs_log_recover.c 1933 */;
	char **cocci_id/* fs/xfs/xfs_log_recover.c 192 */;
	xfs_lsn_t cocci_id/* fs/xfs/xfs_log_recover.c 1671 */;
	uuid_t cocci_id/* fs/xfs/xfs_log_recover.c 1566 */;
	xlog_rec_header_t *cocci_id/* fs/xfs/xfs_log_recover.c 1556 */;
	char *cocci_id/* fs/xfs/xfs_log_recover.c 1550 */;
	struct xlog *cocci_id/* fs/xfs/xfs_log_recover.c 1549 */;
	void cocci_id/* fs/xfs/xfs_log_recover.c 1547 */;
	xfs_daddr_t cocci_id/* fs/xfs/xfs_log_recover.c 139 */;
	unsigned int cocci_id/* fs/xfs/xfs_log_recover.c 136 */;
	bool cocci_id/* fs/xfs/xfs_log_recover.c 1312 */;
	struct xlog_op_header *cocci_id/* fs/xfs/xfs_log_recover.c 1189 */;
	bool *cocci_id/* fs/xfs/xfs_log_recover.c 1187 */;
	struct xlog_rec_header *cocci_id/* fs/xfs/xfs_log_recover.c 1184 */;
	xfs_daddr_t *cocci_id/* fs/xfs/xfs_log_recover.c 1182 */;
}
