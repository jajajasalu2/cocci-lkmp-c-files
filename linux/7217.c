cocci_test_suite() {
	enum dma_data_direction cocci_id/* drivers/nvme/host/fc.c 986 */;
	struct scatterlist *cocci_id/* drivers/nvme/host/fc.c 985 */;
	struct device *cocci_id/* drivers/nvme/host/fc.c 985 */;
	struct nvme_fcp_op_w_sgl {
		struct nvme_fc_fcp_op op;
		struct scatterlist sgl[NVME_INLINE_SG_CNT];
		uint8_t priv[0];
	} cocci_id/* drivers/nvme/host/fc.c 96 */;
	void *cocci_id/* drivers/nvme/host/fc.c 930 */;
	size_t cocci_id/* drivers/nvme/host/fc.c 930 */;
	dma_addr_t cocci_id/* drivers/nvme/host/fc.c 929 */;
	struct nvme_fc_fcp_op {
		struct nvme_request nreq;
		struct nvmefc_fcp_req fcp_req;
		struct nvme_fc_ctrl *ctrl;
		struct nvme_fc_queue *queue;
		struct request *rq;
		atomic_t state;
		u32 flags;
		u32 rqno;
		u32 nents;
		struct nvme_fc_cmd_iu cmd_iu;
		struct nvme_fc_ersp_iu rsp_iu;
	} cocci_id/* drivers/nvme/host/fc.c 72 */;
	struct nvme_fc_remote_port **cocci_id/* drivers/nvme/host/fc.c 649 */;
	enum nvme_fcpop_state{FCPOP_STATE_UNINIT=0, FCPOP_STATE_IDLE=1, FCPOP_STATE_ACTIVE=2, FCPOP_STATE_ABORTED=3, FCPOP_STATE_COMPLETE=4,} cocci_id/* drivers/nvme/host/fc.c 64 */;
	struct nvme_fc_port_info *cocci_id/* drivers/nvme/host/fc.c 622 */;
	struct nvmefc_ls_req_op {
		struct nvmefc_ls_req ls_req;
		struct nvme_fc_rport *rport;
		struct nvme_fc_queue *queue;
		struct request *rq;
		u32 flags;
		int ls_error;
		struct completion ls_done;
		struct list_head lsreq_list;
		bool req_queued;
	} cocci_id/* drivers/nvme/host/fc.c 50 */;
	struct nvme_fc_rport cocci_id/* drivers/nvme/host/fc.c 499 */;
	char *cocci_id/* drivers/nvme/host/fc.c 481 */[4];
	char cocci_id/* drivers/nvme/host/fc.c 479 */[FCNVME_TRADDR_LENGTH];
	enum nvme_fcop_flags{FCOP_FLAGS_TERMIO=(1 << 0), FCOP_FLAGS_AEN=(1 << 1),} cocci_id/* drivers/nvme/host/fc.c 45 */;
	void __exit cocci_id/* drivers/nvme/host/fc.c 3539 */;
	int __init cocci_id/* drivers/nvme/host/fc.c 3456 */;
	struct class cocci_id/* drivers/nvme/host/fc.c 3450 */;
	const struct attribute_group *cocci_id/* drivers/nvme/host/fc.c 3445 */[];
	struct attribute_group cocci_id/* drivers/nvme/host/fc.c 3441 */;
	struct attribute *cocci_id/* drivers/nvme/host/fc.c 3436 */[];
	const char *cocci_id/* drivers/nvme/host/fc.c 3376 */;
	struct device_attribute *cocci_id/* drivers/nvme/host/fc.c 3376 */;
	ssize_t cocci_id/* drivers/nvme/host/fc.c 3375 */;
	struct nvmf_transport_ops cocci_id/* drivers/nvme/host/fc.c 3364 */;
	struct nvme_fc_local_port **cocci_id/* drivers/nvme/host/fc.c 335 */;
	struct nvmet_fc_traddr cocci_id/* drivers/nvme/host/fc.c 3319 */;
	struct nvme_ctrl *cocci_id/* drivers/nvme/host/fc.c 3313 */;
	substring_t cocci_id/* drivers/nvme/host/fc.c 3274 */;
	char cocci_id/* drivers/nvme/host/fc.c 3273 */[2 + NVME_FC_TRADDR_HEXNAMELEN + 1];
	struct nvmet_fc_traddr *cocci_id/* drivers/nvme/host/fc.c 3271 */;
	u64 cocci_id/* drivers/nvme/host/fc.c 3256 */;
	u64 *cocci_id/* drivers/nvme/host/fc.c 3254 */;
	substring_t *cocci_id/* drivers/nvme/host/fc.c 3254 */;
	struct nvmet_fc_traddr {
		u64 nn;
		u64 pn;
	} cocci_id/* drivers/nvme/host/fc.c 3248 */;
	struct nvme_fc_queue cocci_id/* drivers/nvme/host/fc.c 3124 */;
	const struct blk_mq_ops cocci_id/* drivers/nvme/host/fc.c 3014 */;
	struct nvme_fc_ctrl cocci_id/* drivers/nvme/host/fc.c 3002 */;
	struct work_struct *cocci_id/* drivers/nvme/host/fc.c 2996 */;
	const struct nvme_ctrl_ops cocci_id/* drivers/nvme/host/fc.c 2982 */;
	struct nvme_fc_queue {
		struct nvme_fc_ctrl *ctrl;
		struct device *dev;
		struct blk_mq_hw_ctx *hctx;
		void *lldd_handle;
		size_t cmnd_capsule_len;
		u32 qnum;
		u32 rqcnt;
		u32 seqno;
		u64 connection_id;
		atomic_t csn;
		unsigned long flags;
	}__aligned(sizeof(u64)) cocci_id/* drivers/nvme/host/fc.c 29 */;
	struct nvme_fc_remote_port *cocci_id/* drivers/nvme/host/fc.c 2874 */;
	bool cocci_id/* drivers/nvme/host/fc.c 2629 */;
	struct nvmf_ctrl_options *cocci_id/* drivers/nvme/host/fc.c 2627 */;
	struct nvme_fc_port_template *cocci_id/* drivers/nvme/host/fc.c 262 */;
	enum nvmefc_fcp_datadir cocci_id/* drivers/nvme/host/fc.c 2333 */;
	struct nvme_ns *cocci_id/* drivers/nvme/host/fc.c 2326 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/nvme/host/fc.c 2324 */;
	blk_status_t cocci_id/* drivers/nvme/host/fc.c 2322 */;
	enum nvme_fc_queue_flags{NVME_FC_Q_CONNECTED=0, NVME_FC_Q_LIVE,} cocci_id/* drivers/nvme/host/fc.c 22 */;
	void cocci_id/* drivers/nvme/host/fc.c 219 */(struct nvme_fc_ctrl *,
						      struct nvme_fc_queue *,
						      unsigned int);
	enum blk_eh_timer_return cocci_id/* drivers/nvme/host/fc.c 2109 */;
	char *cocci_id/* drivers/nvme/host/fc.c 2076 */;
	struct workqueue_struct *cocci_id/* drivers/nvme/host/fc.c 205 */;
	struct kref *cocci_id/* drivers/nvme/host/fc.c 2015 */;
	u16 cocci_id/* drivers/nvme/host/fc.c 1943 */;
	struct nvme_fc_queue *cocci_id/* drivers/nvme/host/fc.c 1943 */;
	unsigned int cocci_id/* drivers/nvme/host/fc.c 1943 */;
	void cocci_id/* drivers/nvme/host/fc.c 1922 */;
	struct nvme_fc_fcp_op cocci_id/* drivers/nvme/host/fc.c 191 */;
	struct nvmefc_fcp_req *cocci_id/* drivers/nvme/host/fc.c 189 */;
	struct nvme_command cocci_id/* drivers/nvme/host/fc.c 1883 */;
	struct nvmefc_ls_req_op cocci_id/* drivers/nvme/host/fc.c 185 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/nvme/host/fc.c 1837 */;
	struct nvme_fc_lport cocci_id/* drivers/nvme/host/fc.c 173 */;
	struct nvme_fc_cmd_iu *cocci_id/* drivers/nvme/host/fc.c 1716 */;
	typeof(*op_w_sgl) cocci_id/* drivers/nvme/host/fc.c 1715 */;
	struct nvme_fcp_op_w_sgl *cocci_id/* drivers/nvme/host/fc.c 1714 */;
	u32 cocci_id/* drivers/nvme/host/fc.c 1712 */;
	struct request *cocci_id/* drivers/nvme/host/fc.c 1712 */;
	struct nvme_fc_local_port *cocci_id/* drivers/nvme/host/fc.c 171 */;
	struct nvme_fc_lport *cocci_id/* drivers/nvme/host/fc.c 170 */;
	struct nvme_fc_ersp_iu cocci_id/* drivers/nvme/host/fc.c 1652 */;
	union nvme_result cocci_id/* drivers/nvme/host/fc.c 1560 */;
	__le16 cocci_id/* drivers/nvme/host/fc.c 1559 */;
	struct nvme_command *cocci_id/* drivers/nvme/host/fc.c 1558 */;
	struct nvme_completion *cocci_id/* drivers/nvme/host/fc.c 1557 */;
	unsigned long cocci_id/* drivers/nvme/host/fc.c 1497 */;
	struct nvme_fc_fcp_op *cocci_id/* drivers/nvme/host/fc.c 1495 */;
	struct nvme_fc_ctrl *cocci_id/* drivers/nvme/host/fc.c 1495 */;
	int cocci_id/* drivers/nvme/host/fc.c 1494 */;
	struct blk_mq_tag_set *cocci_id/* drivers/nvme/host/fc.c 1486 */;
	void cocci_id/* drivers/nvme/host/fc.c 1471 */(struct nvme_fc_ctrl *ctrl,
						       char *errmsg);
	struct fcnvme_lsdesc_disconn_cmd cocci_id/* drivers/nvme/host/fc.c 1441 */;
	struct fcnvme_ls_disconnect_assoc_acc *cocci_id/* drivers/nvme/host/fc.c 1418 */;
	struct fcnvme_ls_disconnect_assoc_rqst *cocci_id/* drivers/nvme/host/fc.c 1417 */;
	struct fcnvme_ls_cr_conn_acc cocci_id/* drivers/nvme/host/fc.c 1348 */;
	struct nvme_fc_ctrl {
		spinlock_t lock;
		struct nvme_fc_queue *queues;
		struct device *dev;
		struct nvme_fc_lport *lport;
		struct nvme_fc_rport *rport;
		u32 cnum;
		bool ioq_live;
		bool assoc_active;
		atomic_t err_work_active;
		u64 association_id;
		struct list_head ctrl_list;
		struct blk_mq_tag_set admin_tag_set;
		struct blk_mq_tag_set tag_set;
		struct delayed_work connect_work;
		struct work_struct err_work;
		struct kref ref;
		u32 flags;
		u32 iocnt;
		wait_queue_head_t ioabort_wait;
		struct nvme_fc_fcp_op aen_ops[NVME_NR_AEN_COMMANDS];
		struct nvme_ctrl ctrl;
	} cocci_id/* drivers/nvme/host/fc.c 133 */;
	struct fcnvme_lsdesc_cr_conn_cmd cocci_id/* drivers/nvme/host/fc.c 1315 */;
	struct fcnvme_ls_cr_conn_acc *cocci_id/* drivers/nvme/host/fc.c 1295 */;
	struct fcnvme_ls_cr_conn_rqst *cocci_id/* drivers/nvme/host/fc.c 1294 */;
	enum nvme_fcctrl_flags{FCCTRL_TERMIO=(1 << 0),} cocci_id/* drivers/nvme/host/fc.c 129 */;
	struct fcnvme_lsdesc_conn_id cocci_id/* drivers/nvme/host/fc.c 1262 */;
	struct fcnvme_lsdesc_assoc_id cocci_id/* drivers/nvme/host/fc.c 1256 */;
	struct fcnvme_lsdesc_rqst cocci_id/* drivers/nvme/host/fc.c 1247 */;
	struct fcnvme_ls_cr_assoc_acc cocci_id/* drivers/nvme/host/fc.c 1241 */;
	struct fcnvme_lsdesc_cr_assoc_cmd cocci_id/* drivers/nvme/host/fc.c 1205 */;
	struct fcnvme_ls_cr_assoc_acc *cocci_id/* drivers/nvme/host/fc.c 1186 */;
	struct fcnvme_ls_cr_assoc_rqst *cocci_id/* drivers/nvme/host/fc.c 1185 */;
	char *cocci_id/* drivers/nvme/host/fc.c 1162 */[];
	enum{VERR_NO_ERROR=0, VERR_LSACC=1, VERR_LSDESC_RQST=2, VERR_LSDESC_RQST_LEN=3, VERR_ASSOC_ID=4, VERR_ASSOC_ID_LEN=5, VERR_CONN_ID=6, VERR_CONN_ID_LEN=7, VERR_CR_ASSOC=8, VERR_CR_ASSOC_ACC_LEN=9, VERR_CR_CONN=10, VERR_CR_CONN_ACC_LEN=11, VERR_DISCONN=12, VERR_DISCONN_ACC_LEN=13,} cocci_id/* drivers/nvme/host/fc.c 1145 */;
	struct nvme_fc_rport {
		struct nvme_fc_remote_port remoteport;
		struct list_head endp_list;
		struct list_head ctrl_list;
		struct list_head ls_req_list;
		struct list_head disc_list;
		struct device *dev;
		struct nvme_fc_lport *lport;
		spinlock_t lock;
		struct kref ref;
		atomic_t act_ctrl_cnt;
		unsigned long dev_loss_end;
	}__aligned(sizeof(u64)) cocci_id/* drivers/nvme/host/fc.c 114 */;
	struct fcnvme_ls_rjt *cocci_id/* drivers/nvme/host/fc.c 1105 */;
	void (*cocci_id/* drivers/nvme/host/fc.c 1035 */)(struct nvmefc_ls_req *req,
							  int status);
	struct nvme_fc_lport {
		struct nvme_fc_local_port localport;
		struct ida endp_cnt;
		struct list_head port_list;
		struct list_head endp_list;
		struct device *dev;
		struct nvme_fc_port_template *ops;
		struct kref ref;
		atomic_t act_rport_cnt;
	}__aligned(sizeof(u64)) cocci_id/* drivers/nvme/host/fc.c 102 */;
	struct nvmefc_ls_req *cocci_id/* drivers/nvme/host/fc.c 1009 */;
	struct nvme_fc_rport *cocci_id/* drivers/nvme/host/fc.c 1008 */;
	struct nvmefc_ls_req_op *cocci_id/* drivers/nvme/host/fc.c 1006 */;
	int cocci_id/* drivers/nvme/host/fc.c 1002 */(struct nvme_fc_ctrl *);
	void cocci_id/* drivers/nvme/host/fc.c 1001 */(struct nvme_fc_ctrl *);
}
