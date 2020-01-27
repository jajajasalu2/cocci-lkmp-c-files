cocci_test_suite() {
	u32 cocci_id/* fs/ocfs2/journal.c 913 */;
	struct ocfs2_replay_map {
		unsigned int rm_slots;
		enum ocfs2_replay_state rm_state;
		unsigned char rm_replay_slots[0];
	} cocci_id/* fs/ocfs2/journal.c 91 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/journal.c 908 */;
	enum ocfs2_replay_state{REPLAY_UNNEEDED=0, REPLAY_NEEDED, REPLAY_DONE,} cocci_id/* fs/ocfs2/journal.c 85 */;
	unsigned long long cocci_id/* fs/ocfs2/journal.c 650 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/journal.c 642 */;
	struct ocfs2_triggers *cocci_id/* fs/ocfs2/journal.c 638 */;
	struct buffer_head *cocci_id/* fs/ocfs2/journal.c 637 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/journal.c 636 */;
	handle_t *cocci_id/* fs/ocfs2/journal.c 635 */;
	int cocci_id/* fs/ocfs2/journal.c 635 */;
	struct ocfs2_dx_leaf cocci_id/* fs/ocfs2/journal.c 632 */;
	void cocci_id/* fs/ocfs2/journal.c 63 */(struct ocfs2_journal *journal,
						 int slot_num,
						 struct ocfs2_dinode *la_dinode,
						 struct ocfs2_dinode *tl_dinode,
						 struct ocfs2_quota_recovery *qrec,
						 enum ocfs2_orphan_reco_type orphan_reco_type);
	struct ocfs2_dx_root_block cocci_id/* fs/ocfs2/journal.c 624 */;
	struct ocfs2_xattr_block cocci_id/* fs/ocfs2/journal.c 609 */;
	struct ocfs2_triggers cocci_id/* fs/ocfs2/journal.c 597 */;
	struct ocfs2_group_desc cocci_id/* fs/ocfs2/journal.c 594 */;
	int cocci_id/* fs/ocfs2/journal.c 59 */(struct ocfs2_super *osb,
						int slot,
						enum ocfs2_orphan_reco_type orphan_reco_type);
	struct ocfs2_refcount_block cocci_id/* fs/ocfs2/journal.c 586 */;
	struct ocfs2_extent_block cocci_id/* fs/ocfs2/journal.c 578 */;
	struct ocfs2_dinode cocci_id/* fs/ocfs2/journal.c 570 */;
	int cocci_id/* fs/ocfs2/journal.c 57 */(struct ocfs2_super *osb,
						int slot_num);
	unsigned long cocci_id/* fs/ocfs2/journal.c 558 */;
	struct jbd2_buffer_trigger_type *cocci_id/* fs/ocfs2/journal.c 552 */;
	void cocci_id/* fs/ocfs2/journal.c 552 */;
	int cocci_id/* fs/ocfs2/journal.c 55 */(struct ocfs2_super *osb,
						int dirty, int replayed);
	struct ocfs2_dir_block_trailer *cocci_id/* fs/ocfs2/journal.c 540 */;
	int cocci_id/* fs/ocfs2/journal.c 54 */(struct ocfs2_super *osb,
						int quota);
	size_t cocci_id/* fs/ocfs2/journal.c 538 */;
	int cocci_id/* fs/ocfs2/journal.c 53 */(struct ocfs2_super *osb);
	struct ocfs2_disk_dqtrailer *cocci_id/* fs/ocfs2/journal.c 520 */;
	int cocci_id/* fs/ocfs2/journal.c 52 */(void *arg);
	int cocci_id/* fs/ocfs2/journal.c 50 */(struct ocfs2_super *osb,
						int node_num, int slot_num);
	int cocci_id/* fs/ocfs2/journal.c 49 */(struct inode *inode);
	struct ocfs2_triggers {
		struct jbd2_buffer_trigger_type ot_triggers;
		int ot_offset;
	} cocci_id/* fs/ocfs2/journal.c 487 */;
	struct ocfs2_journal *cocci_id/* fs/ocfs2/journal.c 298 */;
	struct ocfs2_recovery_map *cocci_id/* fs/ocfs2/journal.c 237 */;
	unsigned int cocci_id/* fs/ocfs2/journal.c 234 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/journal.c 2178 */;
	struct inode **cocci_id/* fs/ocfs2/journal.c 2073 */;
	struct ocfs2_orphan_filldir_priv cocci_id/* fs/ocfs2/journal.c 2031 */;
	struct ocfs2_orphan_filldir_priv *cocci_id/* fs/ocfs2/journal.c 2030 */;
	unsigned cocci_id/* fs/ocfs2/journal.c 2028 */;
	loff_t cocci_id/* fs/ocfs2/journal.c 2027 */;
	const char *cocci_id/* fs/ocfs2/journal.c 2026 */;
	struct dir_context *cocci_id/* fs/ocfs2/journal.c 2026 */;
	struct ocfs2_orphan_filldir_priv {
		struct dir_context ctx;
		struct inode *head;
		struct ocfs2_super *osb;
		enum ocfs2_orphan_reco_type orphan_reco_type;
	} cocci_id/* fs/ocfs2/journal.c 2019 */;
	struct ocfs2_orphan_scan *cocci_id/* fs/ocfs2/journal.c 1994 */;
	struct ocfs2_orphan_scan cocci_id/* fs/ocfs2/journal.c 1967 */;
	unsigned int *cocci_id/* fs/ocfs2/journal.c 190 */;
	char *cocci_id/* fs/ocfs2/journal.c 190 */;
	struct ocfs2_recovery_map cocci_id/* fs/ocfs2/journal.c 182 */;
	struct buffer_head **cocci_id/* fs/ocfs2/journal.c 1525 */;
	struct ocfs2_quota_recovery *cocci_id/* fs/ocfs2/journal.c 1364 */;
	int *cocci_id/* fs/ocfs2/journal.c 1362 */;
	void *cocci_id/* fs/ocfs2/journal.c 1357 */;
	struct ocfs2_la_recovery_item cocci_id/* fs/ocfs2/journal.c 1292 */;
	enum ocfs2_orphan_reco_type cocci_id/* fs/ocfs2/journal.c 1218 */;
	struct ocfs2_la_recovery_item *cocci_id/* fs/ocfs2/journal.c 1216 */;
	struct ocfs2_journal cocci_id/* fs/ocfs2/journal.c 1213 */;
	struct work_struct *cocci_id/* fs/ocfs2/journal.c 1209 */;
	struct ocfs2_la_recovery_item {
		struct list_head lri_list;
		int lri_slot;
		struct ocfs2_dinode *lri_la_dinode;
		struct ocfs2_dinode *lri_tl_dinode;
		struct ocfs2_quota_recovery *lri_qrec;
		enum ocfs2_orphan_reco_type lri_orphan_reco_type;
	} cocci_id/* fs/ocfs2/journal.c 1190 */;
	char cocci_id/* fs/ocfs2/journal.c 119 */;
	struct ocfs2_replay_map cocci_id/* fs/ocfs2/journal.c 118 */;
	u64 cocci_id/* fs/ocfs2/journal.c 1147 */;
	struct inode *cocci_id/* fs/ocfs2/journal.c 1143 */;
	struct ocfs2_replay_map *cocci_id/* fs/ocfs2/journal.c 111 */;
	journal_t *cocci_id/* fs/ocfs2/journal.c 1035 */;
	struct super_block *cocci_id/* fs/ocfs2/journal.c 1034 */;
}
