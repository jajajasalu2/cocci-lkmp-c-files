cocci_test_suite() {
	struct mthca_next_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 976 */;
	struct mthca_data_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 973 */;
	struct mthca_pd *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 963 */;
	enum{MTHCA_QP_BIT_DE=1 << 8, MTHCA_QP_BIT_SRE=1 << 15, MTHCA_QP_BIT_SWE=1 << 14, MTHCA_QP_BIT_SAE=1 << 13, MTHCA_QP_BIT_SIC=1 << 4, MTHCA_QP_BIT_SSC=1 << 3, MTHCA_QP_BIT_RRE=1 << 15, MTHCA_QP_BIT_RWE=1 << 14, MTHCA_QP_BIT_RAE=1 << 13, MTHCA_QP_BIT_RIC=1 << 4, MTHCA_QP_BIT_RSC=1 << 3,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 86 */;
	struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 858 */;
	enum{MTHCA_QP_PM_MIGRATED=0x3, MTHCA_QP_PM_ARMED=0x0, MTHCA_QP_PM_REARM=0x1,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 80 */;
	enum{MTHCA_QP_ST_RC=0x0, MTHCA_QP_ST_UC=0x1, MTHCA_QP_ST_RD=0x2, MTHCA_QP_ST_UD=0x3, MTHCA_QP_ST_MLX=0x7,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 72 */;
	u8 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 669 */;
	enum{MTHCA_QP_STATE_RST=0, MTHCA_QP_STATE_INIT=1, MTHCA_QP_STATE_RTR=2, MTHCA_QP_STATE_RTS=3, MTHCA_QP_STATE_SQE=4, MTHCA_QP_STATE_SQD=5, MTHCA_QP_STATE_ERR=6, MTHCA_QP_STATE_DRAINING=7,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 61 */;
	u32 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 569 */;
	struct mthca_qp_context *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 568 */;
	struct mthca_qp_param *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 567 */;
	struct mthca_mailbox *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 566 */;
	struct mthca_ucontext cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 565 */;
	struct mthca_ucontext *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 564 */;
	struct mthca_qp *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 563 */;
	struct mthca_dev *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 562 */;
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 560 */;
	enum ib_qp_state cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 558 */;
	const struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 557 */;
	struct ib_qp *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 556 */;
	int cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 556 */;
	const struct ib_global_route *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 531 */;
	struct mthca_qp_path *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 523 */;
	const struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 522 */;
	enum{MTHCA_MAX_DIRECT_QP_SIZE=4 * PAGE_SIZE, MTHCA_ACK_REQ_FREQ=10, MTHCA_FLIGHT_LIMIT=9, MTHCA_UD_HEADER_SIZE=72, MTHCA_INLINE_HEADER_SIZE=4, MTHCA_INLINE_CHUNK_SIZE=16,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 52 */;
	struct ib_qp_init_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 431 */;
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 398 */;
	enum ib_mig_state cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 373 */;
	__be32 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 328 */;
	struct mthca_init_ib_param cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 313 */;
	void cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 310 */;
	enum{RC, UC, UD, RD, RDEE, MLX, NUM_TRANS,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 285 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 242 */;
	enum ib_event_type cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 239 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2232 */;
	int *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2232 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2165 */;
	const struct ib_recv_wr **cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2161 */;
	const struct ib_recv_wr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2160 */;
	u32 *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 2097 */;
	void *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 208 */;
	const struct ib_send_wr **cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1927 */;
	const struct ib_send_wr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1926 */;
	const u8 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 186 */[];
	enum{MTHCA_QP_OPTPAR_ALT_ADDR_PATH=1 << 0, MTHCA_QP_OPTPAR_RRE=1 << 1, MTHCA_QP_OPTPAR_RAE=1 << 2, MTHCA_QP_OPTPAR_RWE=1 << 3, MTHCA_QP_OPTPAR_PKEY_INDEX=1 << 4, MTHCA_QP_OPTPAR_Q_KEY=1 << 5, MTHCA_QP_OPTPAR_RNR_TIMEOUT=1 << 6, MTHCA_QP_OPTPAR_PRIMARY_ADDR_PATH=1 << 7, MTHCA_QP_OPTPAR_SRA_MAX=1 << 8, MTHCA_QP_OPTPAR_RRA_MAX=1 << 9, MTHCA_QP_OPTPAR_PM_STATE=1 << 10, MTHCA_QP_OPTPAR_PORT_NUM=1 << 11, MTHCA_QP_OPTPAR_RETRY_COUNT=1 << 12, MTHCA_QP_OPTPAR_ALT_RNR_RETRY=1 << 13, MTHCA_QP_OPTPAR_ACK_TIMEOUT=1 << 14, MTHCA_QP_OPTPAR_RNR_RETRY=1 << 15, MTHCA_QP_OPTPAR_SCHED_QUEUE=1 << 16,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 166 */;
	struct mthca_arbel_ud_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1615 */;
	struct mthca_tavor_ud_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1605 */;
	const struct ib_atomic_wr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1593 */;
	struct mthca_atomic_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1592 */;
	struct mthca_qp_param {
		__be32 opt_param_mask;
		u32 reserved1;
		struct mthca_qp_context context;
		u32 reserved2[62];
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 159 */;
	struct mthca_raddr_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1584 */;
	unsigned cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1569 */;
	struct ib_cq *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1567 */;
	struct mthca_wq *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1566 */;
	u16 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1506 */;
	struct mthca_data_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1502 */;
	struct mthca_mlx_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1501 */;
	const struct ib_ud_wr *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1500 */;
	struct mthca_sqp *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1499 */;
	struct ib_qp_cap *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1294 */;
	enum ib_sig_type cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1293 */;
	enum ib_qp_type cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1292 */;
	struct mthca_cq *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1290 */;
	struct mthca_qp_context {
		__be32 flags;
		__be32 tavor_sched_queue;
		u8 mtu_msgmax;
		u8 rq_size_stride;
		u8 sq_size_stride;
		u8 rlkey_arbel_sched_queue;
		__be32 usr_page;
		__be32 local_qpn;
		__be32 remote_qpn;
		u32 reserved1[2];
		struct mthca_qp_path pri_path;
		struct mthca_qp_path alt_path;
		__be32 rdd;
		__be32 pd;
		__be32 wqe_base;
		__be32 wqe_lkey;
		__be32 params1;
		__be32 reserved2;
		__be32 next_send_psn;
		__be32 cqn_snd;
		__be32 snd_wqe_base_l;
		__be32 snd_db_index;
		__be32 last_acked_psn;
		__be32 ssn;
		__be32 params2;
		__be32 rnr_nextrecvpsn;
		__be32 ra_buff_indx;
		__be32 cqn_rcv;
		__be32 rcv_wqe_base_l;
		__be32 rcv_db_index;
		__be32 qkey;
		__be32 srqn;
		__be32 rmsn;
		__be16 rq_wqe_counter;
		__be16 sq_wqe_counter;
		u32 reserved3[18];
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 120 */;
	struct mthca_next_seg *cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1169 */;
	struct mthca_qp_path {
		__be32 port_pkey;
		u8 rnr_retry;
		u8 g_mylmc;
		__be16 rlid;
		u8 ackto;
		u8 mgid_index;
		u8 static_rate;
		u8 hop_limit;
		__be32 sl_tclass_flowlabel;
		u8 rgid[16];
	}__packed cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 107 */;
	u64 cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1063 */;
	struct mthca_bind_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1038 */;
	enum{MTHCA_SEND_DOORBELL_FENCE=1 << 5,} cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 103 */;
	struct mthca_atomic_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1028 */;
	struct mthca_raddr_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1018 */;
	struct mthca_tavor_ud_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1014 */;
	struct mthca_arbel_ud_seg cocci_id/* drivers/infiniband/hw/mthca/mthca_qp.c 1013 */;
}
