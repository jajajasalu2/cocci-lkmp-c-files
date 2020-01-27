cocci_test_suite() {
	u32 cocci_id/* drivers/scsi/libfc/fc_fcp.c 987 */;
	struct fc_exch *cocci_id/* drivers/scsi/libfc/fc_fcp.c 986 */;
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 94 */(struct fc_fcp_pkt *,
							  enum fc_rctl, u32);
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 91 */(struct fc_seq *,
							  struct fc_frame *,
							  void *);
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 88 */(struct timer_list *);
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 87 */(struct fc_fcp_pkt *,
							  u8 code);
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 86 */(struct fc_fcp_pkt *,
							  struct fc_frame *);
	struct fcp_resp_rsp_info *cocci_id/* drivers/scsi/libfc/fc_fcp.c 857 */;
	struct fcp_resp_ext *cocci_id/* drivers/scsi/libfc/fc_fcp.c 856 */;
	struct fcp_resp *cocci_id/* drivers/scsi/libfc/fc_fcp.c 855 */;
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 84 */(struct fc_fcp_pkt *);
	struct fcp_txrdy *cocci_id/* drivers/scsi/libfc/fc_fcp.c 782 */;
	struct fc_frame_header *cocci_id/* drivers/scsi/libfc/fc_fcp.c 744 */;
	struct fc_ba_rjt *cocci_id/* drivers/scsi/libfc/fc_fcp.c 743 */;
	struct fc_frame *cocci_id/* drivers/scsi/libfc/fc_fcp.c 740 */;
	struct fc_fcp_internal {
		mempool_t *scsi_pkt_pool;
		spinlock_t scsi_queue_lock;
		struct list_head scsi_pkt_queue;
		unsigned long last_can_queue_ramp_down_time;
		unsigned long last_can_queue_ramp_up_time;
		int max_can_queue;
	} cocci_id/* drivers/scsi/libfc/fc_fcp.c 66 */;
	struct page *cocci_id/* drivers/scsi/libfc/fc_fcp.c 601 */;
	u8 *cocci_id/* drivers/scsi/libfc/fc_fcp.c 530 */;
	struct scatterlist *cocci_id/* drivers/scsi/libfc/fc_fcp.c 485 */;
	struct fc_stats *cocci_id/* drivers/scsi/libfc/fc_fcp.c 477 */;
	size_t cocci_id/* drivers/scsi/libfc/fc_fcp.c 434 */;
	bool cocci_id/* drivers/scsi/libfc/fc_fcp.c 397 */;
	struct kmem_cache *cocci_id/* drivers/scsi/libfc/fc_fcp.c 33 */;
	u16 cocci_id/* drivers/scsi/libfc/fc_fcp.c 316 */;
	struct fc_fcp_internal cocci_id/* drivers/scsi/libfc/fc_fcp.c 2304 */;
	void cocci_id/* drivers/scsi/libfc/fc_fcp.c 2281 */;
	struct fc_fcp_pkt cocci_id/* drivers/scsi/libfc/fc_fcp.c 2270 */;
	struct scsi_device *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2235 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2203 */;
	struct fc_rport *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2157 */;
	unsigned long cocci_id/* drivers/scsi/libfc/fc_fcp.c 2106 */;
	struct fc_fcp_internal *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2104 */;
	struct fc_lport *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2103 */;
	struct fc_fcp_pkt *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2102 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/libfc/fc_fcp.c 2100 */;
	int cocci_id/* drivers/scsi/libfc/fc_fcp.c 2100 */;
	void *cocci_id/* drivers/scsi/libfc/fc_fcp.c 192 */;
	struct fc_remote_port **cocci_id/* drivers/scsi/libfc/fc_fcp.c 1874 */;
	struct fcp_srr *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1722 */;
	enum fc_rctl cocci_id/* drivers/scsi/libfc/fc_fcp.c 1517 */;
	enum dma_data_direction cocci_id/* drivers/scsi/libfc/fc_fcp.c 1516 */;
	u8 cocci_id/* drivers/scsi/libfc/fc_fcp.c 1514 */;
	struct fc_els_ls_rjt *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1512 */;
	struct fc_els_rec_acc *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1511 */;
	struct fc_els_rec cocci_id/* drivers/scsi/libfc/fc_fcp.c 1476 */;
	struct timer_list *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1421 */;
	gfp_t cocci_id/* drivers/scsi/libfc/fc_fcp.c 135 */;
	const size_t cocci_id/* drivers/scsi/libfc/fc_fcp.c 1175 */;
	struct fc_rport_libfc_priv *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1174 */;
	struct fc_seq *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1172 */;
	void (*cocci_id/* drivers/scsi/libfc/fc_fcp.c 1167 */)(struct fc_seq *,
							       struct fc_frame *fp,
							       void *arg);
	char *cocci_id/* drivers/scsi/libfc/fc_fcp.c 1139 */;
	unsigned int cocci_id/* drivers/scsi/libfc/fc_fcp.c 1063 */;
}
