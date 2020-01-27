cocci_test_suite() {
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 99 */(struct dlm_ctxt *dlm,
						      struct dlm_lock_resource *res,
						      struct dlm_master_list_entry *mle,
						      struct dlm_master_list_entry **oldmle,
						      const char *name,
						      unsigned int namelen,
						      u8 new_master,
						      u8 master);
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 95 */(struct dlm_ctxt *dlm,
						      struct dlm_lock_resource *res,
						      struct dlm_master_list_entry *mle,
						      int blocked);
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 91 */(struct dlm_ctxt *dlm,
						      struct dlm_lock_resource *res,
						      struct dlm_master_list_entry *mle,
						      int *blocked);
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 87 */(struct dlm_lock_resource *res,
						      struct dlm_master_list_entry *mle,
						      int to);
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 83 */(struct dlm_ctxt *dlm,
						      struct dlm_master_list_entry **mle,
						      char *name,
						      unsigned int namelen);
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 82 */(struct dlm_master_list_entry *mle);
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 75 */(struct dlm_master_list_entry *mle,
						       enum dlm_mle_type type,
						       struct dlm_ctxt *dlm,
						       struct dlm_lock_resource *res,
						       const char *name,
						       unsigned int namelen);
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 74 */(struct kref *kref);
	struct kmem_cache *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 71 */;
	struct dlm_lock_resource *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 669 */;
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 50 */(struct dlm_ctxt *dlm,
						      struct dlm_lock_resource *res,
						      void *nodemap,
						      u32 flags);
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 49 */(struct dlm_work_item *item,
						       void *data);
	struct kref *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 466 */;
	struct dlm_lock_resource cocci_id/* fs/ocfs2/dlm/dlmmaster.c 440 */;
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 40 */(struct dlm_ctxt *dlm,
						       struct dlm_master_list_entry *mle,
						       struct o2nm_node *node,
						       int idx);
	struct dlm_master_list_entry cocci_id/* fs/ocfs2/dlm/dlmmaster.c 392 */;
	struct o2nm_node *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 362 */;
	struct hlist_node *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3337 */;
	char *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3200 */;
	u8 cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3189 */;
	const char *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3188 */;
	unsigned int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3188 */;
	struct dlm_master_list_entry **cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3187 */;
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3184 */;
	struct hlist_head *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 315 */;
	struct dlm_master_list_entry *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 313 */;
	struct dlm_ctxt *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 313 */;
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 313 */;
	struct dlm_migrate_request *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3109 */;
	struct dlm_migrate_request cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3032 */;
	struct dlm_node_iter *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 3030 */;
	struct dlm_migratable_lockres *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2547 */;
	enum dlm_mle_type cocci_id/* fs/ocfs2/dlm/dlmmaster.c 251 */;
	u64 cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2491 */;
	struct dlm_lock *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2490 */;
	struct list_head *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2489 */;
	enum dlm_lockres_list cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2487 */;
	struct dlm_deref_lockres_done cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2413 */;
	struct dlm_deref_lockres_done *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2349 */;
	struct dlm_deref_lockres *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2255 */;
	struct dlm_deref_lockres cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2219 */;
	unsigned long cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2086 */[BITS_TO_LONGS(O2NM_MAX_NODES)];
	struct dlm_work_item *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 2081 */;
	struct dlm_assert_master *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1766 */;
	void **cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1762 */;
	u32 cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1761 */;
	struct o2net_msg *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1761 */;
	void *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1761 */;
	struct dlm_node_iter cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1658 */;
	struct dlm_assert_master cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1656 */;
	struct dlm_master_request *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1408 */;
	struct dlm_master_request cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1312 */;
	enum dlm_node_state_change cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1214 */;
	struct dlm_bitmap_diff_iter cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1213 */;
	enum dlm_node_state_change *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1183 */;
	unsigned long cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1168 */;
	unsigned long *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1165 */;
	struct dlm_bitmap_diff_iter *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1164 */;
	enum dlm_node_state_change{NODE_DOWN=-1, NODE_NO_CHANGE=0, NODE_UP,} cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1157 */;
	struct dlm_bitmap_diff_iter {
		int curnode;
		unsigned long *orig_bm;
		unsigned long *cur_bm;
		unsigned long diff_bm[BITS_TO_LONGS(O2NM_MAX_NODES)];
	} cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1149 */;
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 113 */(struct dlm_ctxt *dlm,
						       struct dlm_lock_resource *res);
	int cocci_id/* fs/ocfs2/dlm/dlmmaster.c 110 */(struct dlm_ctxt *dlm,
						       struct dlm_lock_resource *res,
						       u8 target);
	void cocci_id/* fs/ocfs2/dlm/dlmmaster.c 108 */(struct dlm_ctxt *dlm,
							struct dlm_lock_resource *res);
	u8 cocci_id/* fs/ocfs2/dlm/dlmmaster.c 106 */(struct dlm_ctxt *dlm,
						      struct dlm_lock_resource *res);
	int *cocci_id/* fs/ocfs2/dlm/dlmmaster.c 1006 */;
}
