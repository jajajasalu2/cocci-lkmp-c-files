cocci_test_suite() {
	struct {
		struct rdma_conn_param rdma_param;
		struct srp_login_req_rdma rdma_req;
		struct ib_cm_req_param ib_param;
		struct srp_login_req ib_req;
	} *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 843 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 824 */;
	struct sa_path_rec *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 740 */;
	bool cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 73 */;
	unsigned int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 71 */;
	const int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 561 */;
	struct ib_qp *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 558 */;
	struct ib_cq *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 557 */;
	struct ib_qp_init_attr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 556 */;
	const struct ib_device_attr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 555 */;
	struct srp_fr_pool *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 525 */;
	typeof(*d) cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 496 */;
	enum ib_mr_type cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 443 */;
	struct ib_mr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 441 */;
	struct srp_fr_desc *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 440 */;
	struct ib_pd *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 436 */;
	void __exit cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4349 */;
	struct srp_cmd cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4278 */;
	struct srp_login_req_rdma cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4277 */;
	struct srp_login_req cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4276 */;
	struct srp_imm_buf cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4275 */;
	int __init cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4271 */;
	struct srp_function_template cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4260 */;
	u64 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4141 */;
	struct ib_device_attr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4137 */;
	struct srp_device *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4136 */;
	struct ib_device *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4134 */;
	void cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4134 */;
	char cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4126 */[IB_DEVICE_NAME_MAX + 8];
	u8 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4080 */;
	struct srp_host cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4063 */;
	struct srp_host *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 4063 */;
	char cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3970 */[64];
	struct ib_fmr_pool_param cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 394 */;
	struct srp_direct_buf cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3910 */;
	struct ib_fmr_pool *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 391 */;
	struct srp_cmd *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3812 */;
	struct srp_target_port cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3804 */;
	const char *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3789 */;
	unsigned long long cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3509 */;
	substring_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3508 */[MAX_OPT_ARGS];
	bool *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3474 */;
	struct sockaddr_storage *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3473 */;
	struct net *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3473 */;
	const match_table_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3439 */;
	unsigned int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3428 */[];
	struct rdma_cm_id *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 342 */;
	enum{SRP_OPT_ERR=0, SRP_OPT_ID_EXT=1 << 0, SRP_OPT_IOC_GUID=1 << 1, SRP_OPT_DGID=1 << 2, SRP_OPT_PKEY=1 << 3, SRP_OPT_SERVICE_ID=1 << 4, SRP_OPT_MAX_SECT=1 << 5, SRP_OPT_MAX_CMD_PER_LUN=1 << 6, SRP_OPT_IO_CLASS=1 << 7, SRP_OPT_INITIATOR_EXT=1 << 8, SRP_OPT_CMD_SG_ENTRIES=1 << 9, SRP_OPT_ALLOW_EXT_SG=1 << 10, SRP_OPT_SG_TABLESIZE=1 << 11, SRP_OPT_COMP_VECTOR=1 << 12, SRP_OPT_TL_RETRY_COUNT=1 << 13, SRP_OPT_QUEUE_SIZE=1 << 14, SRP_OPT_IP_SRC=1 << 15, SRP_OPT_IP_DEST=1 << 16, SRP_OPT_TARGET_CAN_QUEUE=1 << 17, SRP_OPT_MAX_IT_IU_SIZE=1 << 18,} cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3405 */;
	struct class cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3357 */;
	struct srp_rport *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3300 */;
	struct srp_rport_identifiers cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3299 */;
	struct scsi_host_template cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3257 */;
	struct device_attribute *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3237 */[];
	struct device_attribute *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3213 */;
	char *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3213 */;
	struct device *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3212 */;
	ssize_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3212 */;
	int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3146 */;
	struct request_queue *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3064 */;
	struct scsi_target *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 3050 */;
	u16 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2990 */;
	u32 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2989 */;
	struct srp_request *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2988 */;
	struct scsi_cmnd *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2985 */;
	struct srp_tsk_mgmt *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2926 */;
	struct scsi_device *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2912 */;
	struct rdma_cm_event *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2826 */;
	struct ib_event *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 274 */;
	const struct ib_cm_event *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2714 */;
	struct srp_login_rej *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2682 */;
	u8 *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2680 */;
	union ib_gid *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2651 */;
	struct ib_class_port_info *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2633 */;
	struct ib_qp_attr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2541 */;
	const struct srp_login_rsp *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2537 */;
	struct ib_cm_id *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2536 */;
	uint64_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2511 */;
	uint32_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2509 */;
	struct ib_wc *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2334 */;
	enum dma_data_direction cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 233 */;
	gfp_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 232 */;
	size_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 231 */;
	struct srp_aer_rsp cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2244 */;
	struct srp_aer_req *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2241 */;
	const u8 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 223 */[3];
	struct srp_cred_rsp cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2229 */;
	struct srp_cred_req *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2227 */;
	struct srp_rsp *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2125 */;
	struct Scsi_Host *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 211 */;
	struct ib_sge cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2109 */;
	struct ib_recv_wr cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2108 */;
	struct srp_iu cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2050 */;
	s32 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2030 */;
	struct srp_target_port *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2029 */;
	enum srp_iu_type cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2027 */;
	struct srp_rdma_ch *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2026 */;
	struct srp_iu *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 2026 */;
	struct srp_indirect_buf cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1950 */;
	struct srp_direct_buf *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1883 */;
	struct ib_sge *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1855 */;
	struct srp_imm_buf *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1854 */;
	__be32 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1823 */;
	struct srp_indirect_buf *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1820 */;
	struct srp_map_state cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1819 */;
	struct srp_fr_desc **cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1781 */;
	struct scatterlist *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1778 */;
	struct srp_map_state *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1776 */;
	int *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 174 */;
	struct scatterlist cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1737 */[1];
	u64 cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1736 */[1];
	__be32 *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1730 */;
	void **cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1729 */;
	const struct kernel_param *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 172 */;
	struct ib_sa_client cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 170 */;
	struct ib_client cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 163 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 161 */;
	struct scsi_transport_template *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 160 */;
	int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 157 */(struct rdma_cm_id *cm_id,
								  struct rdma_cm_event *event);
	int cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 155 */(struct ib_cm_id *cm_id,
								  const struct ib_cm_event *event);
	struct ib_reg_wr cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1537 */;
	unsigned int *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1533 */;
	void cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 153 */(struct ib_cq *cq,
								   struct ib_wc *wc,
								   const char *opname);
	void cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 152 */(struct ib_cq *cq,
								   struct ib_wc *wc);
	void cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 150 */(struct ib_device *device,
								   void *client_data);
	void cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 149 */(struct ib_device *device);
	struct ib_pool_fmr *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1480 */;
	unsigned cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 144 */;
	unsigned long cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1302 */;
	struct ib_pool_fmr **cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1276 */;
	struct ib_send_wr cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1232 */;
	struct work_struct *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1136 */;
	struct device_attribute **cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1096 */;
	const struct kernel_param_ops cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 109 */;
	dma_addr_t cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1045 */;
	void *cocci_id/* drivers/infiniband/ulp/srp/ib_srp.c 1044 */;
}