cocci_test_suite() {
	int cocci_id/* fs/ocfs2/cluster/quorum.c 94 */;
	struct work_struct *cocci_id/* fs/ocfs2/cluster/quorum.c 92 */;
	struct o2quo_state {
		spinlock_t qs_lock;
		struct work_struct qs_work;
		int qs_pending;
		int qs_heartbeating;
		unsigned long qs_hb_bm[BITS_TO_LONGS(O2NM_MAX_NODES)];
		int qs_connected;
		unsigned long qs_conn_bm[BITS_TO_LONGS(O2NM_MAX_NODES)];
		int qs_holds;
		unsigned long qs_hold_bm[BITS_TO_LONGS(O2NM_MAX_NODES)];
	} cocci_id/* fs/ocfs2/cluster/quorum.c 42 */;
	u8 cocci_id/* fs/ocfs2/cluster/quorum.c 176 */;
	struct o2quo_state *cocci_id/* fs/ocfs2/cluster/quorum.c 176 */;
	void cocci_id/* fs/ocfs2/cluster/quorum.c 176 */;
}
