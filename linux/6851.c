cocci_test_suite() {
	struct fc_exch_mgr_anchor *cocci_id/* drivers/scsi/libfc/fc_exch.c 905 */;
	struct fc_lport *cocci_id/* drivers/scsi/libfc/fc_exch.c 902 */;
	struct fc_exch_mgr {
		struct fc_exch_pool __percpu *pool;
		mempool_t *ep_pool;
		struct fc_lport *lport;
		enum fc_class class;
		struct kref kref;
		u16 min_xid;
		u16 max_xid;
		u16 pool_max_index;
		struct {
			atomic_t no_free_exch;
			atomic_t no_free_exch_xid;
			atomic_t xid_not_found;
			atomic_t xid_busy;
			atomic_t seq_not_found;
			atomic_t non_bls_resp;
		} stats;
	} cocci_id/* drivers/scsi/libfc/fc_exch.c 82 */;
	struct fc_exch_mgr *cocci_id/* drivers/scsi/libfc/fc_exch.c 809 */;
	struct fc_exch cocci_id/* drivers/scsi/libfc/fc_exch.c 762 */;
	struct work_struct *cocci_id/* drivers/scsi/libfc/fc_exch.c 760 */;
	bool cocci_id/* drivers/scsi/libfc/fc_exch.c 725 */;
	const struct fc_seq *cocci_id/* drivers/scsi/libfc/fc_exch.c 691 */;
	struct fc_frame *cocci_id/* drivers/scsi/libfc/fc_exch.c 636 */;
	struct fc_seq *cocci_id/* drivers/scsi/libfc/fc_exch.c 635 */;
	unsigned int cocci_id/* drivers/scsi/libfc/fc_exch.c 633 */;
	struct fc_exch *cocci_id/* drivers/scsi/libfc/fc_exch.c 632 */;
	int cocci_id/* drivers/scsi/libfc/fc_exch.c 632 */;
	void (*cocci_id/* drivers/scsi/libfc/fc_exch.c 594 */)(struct fc_seq *,
							       struct fc_frame *,
							       void *);
	struct fc_exch_pool {
		spinlock_t lock;
		struct list_head ex_list;
		u16 next_index;
		u16 total_exches;
		u16 left;
		u16 right;
	}____cacheline_aligned_in_smp cocci_id/* drivers/scsi/libfc/fc_exch.c 57 */;
	u8 cocci_id/* drivers/scsi/libfc/fc_exch.c 545 */;
	struct fc_exch_pool *cocci_id/* drivers/scsi/libfc/fc_exch.c 436 */;
	struct fc_exch **cocci_id/* drivers/scsi/libfc/fc_exch.c 414 */;
	struct workqueue_struct *cocci_id/* drivers/scsi/libfc/fc_exch.c 31 */;
	struct kmem_cache *cocci_id/* drivers/scsi/libfc/fc_exch.c 30 */;
	u16 cocci_id/* drivers/scsi/libfc/fc_exch.c 27 */;
	void cocci_id/* drivers/scsi/libfc/fc_exch.c 2692 */;
	typeof(*ema) cocci_id/* drivers/scsi/libfc/fc_exch.c 2571 */;
	struct fc_exch_pool cocci_id/* drivers/scsi/libfc/fc_exch.c 2503 */;
	struct fc_exch_mgr cocci_id/* drivers/scsi/libfc/fc_exch.c 2467 */;
	size_t cocci_id/* drivers/scsi/libfc/fc_exch.c 2453 */;
	enum fc_class cocci_id/* drivers/scsi/libfc/fc_exch.c 2447 */;
	struct kref *cocci_id/* drivers/scsi/libfc/fc_exch.c 2395 */;
	bool (*cocci_id/* drivers/scsi/libfc/fc_exch.c 2374 */)(struct fc_frame *);
	struct fc_host_statistics *cocci_id/* drivers/scsi/libfc/fc_exch.c 2347 */;
	struct fc_els_rrq *cocci_id/* drivers/scsi/libfc/fc_exch.c 2281 */;
	const char *cocci_id/* drivers/scsi/libfc/fc_exch.c 220 */;
	char **cocci_id/* drivers/scsi/libfc/fc_exch.c 220 */;
	struct fc_fcp_pkt *cocci_id/* drivers/scsi/libfc/fc_exch.c 2170 */;
	void (*cocci_id/* drivers/scsi/libfc/fc_exch.c 2164 */)(struct fc_seq *,
								void *);
	void (*cocci_id/* drivers/scsi/libfc/fc_exch.c 2161 */)(struct fc_seq *,
								struct fc_frame *fp,
								void *arg);
	char *cocci_id/* drivers/scsi/libfc/fc_exch.c 209 */[];
	void *cocci_id/* drivers/scsi/libfc/fc_exch.c 2085 */;
	u32 cocci_id/* drivers/scsi/libfc/fc_exch.c 2009 */;
	enum fc_els_rjt_explan cocci_id/* drivers/scsi/libfc/fc_exch.c 2008 */;
	enum fc_els_rjt_reason cocci_id/* drivers/scsi/libfc/fc_exch.c 2007 */;
	struct fc_els_rec_acc *cocci_id/* drivers/scsi/libfc/fc_exch.c 2006 */;
	struct fc_els_rec *cocci_id/* drivers/scsi/libfc/fc_exch.c 2005 */;
	struct fc_els_ls_rjt *cocci_id/* drivers/scsi/libfc/fc_exch.c 1854 */;
	struct fc_els_ls_acc *cocci_id/* drivers/scsi/libfc/fc_exch.c 1822 */;
	struct fc_ba_acc *cocci_id/* drivers/scsi/libfc/fc_exch.c 1681 */;
	struct fc_frame_header *cocci_id/* drivers/scsi/libfc/fc_exch.c 1680 */;
	enum fc_sof cocci_id/* drivers/scsi/libfc/fc_exch.c 1573 */;
	enum fc_pf_rjt_reason cocci_id/* drivers/scsi/libfc/fc_exch.c 1512 */;
	struct fc_ba_rjt *cocci_id/* drivers/scsi/libfc/fc_exch.c 1341 */;
	enum fc_ba_rjt_explan cocci_id/* drivers/scsi/libfc/fc_exch.c 1336 */;
	enum fc_ba_rjt_reason cocci_id/* drivers/scsi/libfc/fc_exch.c 1335 */;
	const struct fc_frame *cocci_id/* drivers/scsi/libfc/fc_exch.c 1272 */;
	enum fc_rctl cocci_id/* drivers/scsi/libfc/fc_exch.c 1254 */;
	enum fc_fh_type cocci_id/* drivers/scsi/libfc/fc_exch.c 1254 */;
	void cocci_id/* drivers/scsi/libfc/fc_exch.c 124 */(struct fc_frame *);
	struct fc_seq_els_data *cocci_id/* drivers/scsi/libfc/fc_exch.c 1225 */;
	enum fc_els_cmd cocci_id/* drivers/scsi/libfc/fc_exch.c 1224 */;
	void cocci_id/* drivers/scsi/libfc/fc_exch.c 122 */(struct fc_frame *,
							    enum fc_els_rjt_reason,
							    enum fc_els_rjt_explan);
	void cocci_id/* drivers/scsi/libfc/fc_exch.c 120 */(struct fc_exch *);
	struct fc_exch_mgr_anchor {
		struct list_head ema_list;
		struct fc_exch_mgr *mp;
		bool (*match)(struct fc_frame *);
	} cocci_id/* drivers/scsi/libfc/fc_exch.c 114 */;
}
