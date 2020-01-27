cocci_test_suite() {
	void cocci_id/* drivers/infiniband/hw/mlx5/qp.c 99 */(enum ib_qp_type qp_type,
							      struct ib_cq *ib_send_cq,
							      struct ib_cq *ib_recv_cq,
							      struct mlx5_ib_cq **send_cq,
							      struct mlx5_ib_cq **recv_cq);
	struct mlx5_modify_raw_qp_param {
		u16 operation;
		u32 set_mask;
		struct mlx5_rate_limit rl;
		u8 rq_q_ctr_id;
		u16 port;
	} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 88 */;
	struct mlx5_bfreg_info *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 849 */;
	unsigned long long cocci_id/* drivers/infiniband/hw/mlx5/qp.c 831 */;
	enum raw_qp_set_mask_map{MLX5_RAW_QP_MOD_SET_RQ_Q_CTR_ID=1UL << 0, MLX5_RAW_QP_RATE_LIMIT=1UL << 1,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 83 */;
	struct mlx5_ib_create_wq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 796 */;
	struct mlx5_wqe_eth_pad {
		u8 rsvd0[16];
	} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 79 */;
	struct ib_umem **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 747 */;
	unsigned int cocci_id/* drivers/infiniband/hw/mlx5/qp.c 720 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/qp.c 711 */(struct mlx5_ib_cq *send_cq,
							       struct mlx5_ib_cq *recv_cq);
	struct ib_recv_wr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6501 */;
	struct ib_qp_attr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6499 */;
	struct ib_rdma_wr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6467 */;
	struct mlx5_ib_drain_cqe *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6413 */;
	struct mlx5_ib_drain_cqe cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6405 */;
	struct ib_wc *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6402 */;
	struct mlx5_ib_drain_cqe {
		struct ib_cqe cqe;
		struct completion done;
	} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6397 */;
	struct mlx5_ib_modify_wq cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6309 */;
	struct ib_wq_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6304 */;
	struct mlx5_ib_create_rwq_ind_tbl_resp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6222 */;
	struct mlx5_ib_rwq_ind_table *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6220 */;
	struct ib_rwq_ind_table_init_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6216 */;
	struct ib_rwq_ind_table *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6215 */;
	const u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 62 */[];
	struct mlx5_ib_create_wq_resp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6152 */;
	struct ib_wq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6146 */;
	struct mlx5_ib_create_wq cocci_id/* drivers/infiniband/hw/mlx5/qp.c 6070 */;
	const u8 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5968 */[];
	struct ib_wq_init_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5921 */;
	struct mlx5_ib_rwq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5920 */;
	struct mlx5_ib_xrcd *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5844 */;
	struct ib_xrcd *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5840 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5840 */;
	enum{NUM_NON_BLUE_FLAME_BFREGS=1,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 573 */;
	enum{MLX5_IB_SQ_STRIDE=6, MLX5_IB_SQ_UMR_INLINE_THRESHOLD=64,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 57 */;
	struct mlx5_core_dct *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5698 */;
	struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5695 */;
	const u8 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5560 */[MLX5_RQ_NUM_STATE][MLX5_SQ_NUM_STATE];
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5485 */;
	enum ib_mig_state cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5460 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5367 */;
	struct mlx5_core_dev *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5366 */;
	struct mlx5_rwqe_sig *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5364 */;
	struct mlx5_wqe_data_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5363 */;
	const struct ib_recv_wr **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5360 */;
	const struct ib_recv_wr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5359 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5336 */;
	struct mlx5_wqe_data_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5307 */;
	struct mlx5_mkey_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5283 */;
	struct mlx5_wqe_umr_ctrl_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5279 */;
	struct mlx5_wqe_eth_pad cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5260 */;
	struct mlx5_wqe_eth_pad *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5257 */;
	struct mlx5_wqe_datagram_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5244 */;
	struct mlx5_wqe_raddr_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 5060 */;
	enum{MLX5_IB_DEFAULT_SCHED_QUEUE=0x83, MLX5_IB_DEFAULT_QP0_SCHED_QUEUE=0x3f, MLX5_IB_LINK_TYPE_IB=0, MLX5_IB_LINK_TYPE_ETH=1,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 50 */;
	unsigned cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4984 */;
	void *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4981 */;
	struct mlx5_bf *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4980 */;
	struct mlx5_wqe_xrc_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4979 */;
	struct ib_sig_attrs *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4978 */;
	struct mlx5_ib_mr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4977 */;
	struct mlx5_ib_mr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4975 */;
	struct ib_reg_wr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4973 */;
	struct mlx5_wqe_ctrl_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4970 */;
	const struct ib_send_wr **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4968 */;
	unsigned *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4928 */;
	uint32_t *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4913 */;
	bool cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4905 */;
	int *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4904 */;
	const struct ib_send_wr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4903 */;
	unsigned int *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4903 */;
	struct mlx5_wqe_ctrl_seg **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4902 */;
	struct mlx5_ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4901 */;
	void **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4901 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4901 */;
	struct mlx5_seg_set_psv *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4789 */;
	struct mlx5_klm cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4764 */;
	const struct ib_reg_wr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4739 */;
	struct mlx5_stride_block_entry *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4656 */;
	struct mlx5_stride_block_ctrl_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4655 */;
	struct mlx5_wqe_xrc_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 465 */;
	struct mlx5_klm *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4635 */;
	enum{MLX5_IB_ACK_REQ_FREQ=8,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 46 */;
	struct mlx5_wqe_ctrl_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 459 */;
	struct mlx5_bsf_basic *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4541 */;
	struct mlx5_core_sig_ctx *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4540 */;
	struct mlx5_bsf *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4538 */;
	struct ib_mr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4536 */;
	struct mlx5_bsf_inl *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4510 */;
	struct ib_sig_domain *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4509 */;
	enum ib_signature_type cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4487 */;
	struct mlx5_wqe_inline_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4443 */;
	u8 *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4425 */;
	struct mlx5_wqe_inline_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 441 */;
	const struct mlx5_umr_wr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4377 */;
	struct mlx5_mkey_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4368 */;
	struct ib_qp_init_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 431 */;
	struct mlx5_wqe_umr_ctrl_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4224 */;
	__be64 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4169 */;
	struct ib_sge *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4156 */;
	struct mlx5_av cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4151 */;
	struct mlx5_wqe_datagram_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4148 */;
	struct ib_ud_wr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4112 */;
	struct ib_ud_wr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4112 */;
	struct mlx5_wqe_eth_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4105 */;
	struct mlx5_wqe_eth_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4103 */;
	struct mlx5_wqe_raddr_seg *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4092 */;
	const void *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4056 */;
	struct mlx5_ib_wq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4019 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/qp.c 4019 */;
	struct mlx5_ib_modify_qp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3899 */;
	struct mlx5_wqe_atomic_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 389 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3854 */[MLX5_ST_SZ_DW(create_dct_out)];
	struct mlx5_ib_modify_qp_resp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3853 */;
	enum ib_qp_attr_mask cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3764 */;
	struct mlx5_modify_raw_qp_param cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3657 */;
	__be32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3599 */;
	struct mlx5_wqe_signature_seg cocci_id/* drivers/infiniband/hw/mlx5/qp.c 357 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3470 */;
	u16 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3469 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3466 */;
	enum mlx5_qp_optpar cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3465 */;
	enum mlx5_qp_state cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3464 */;
	struct mlx5_ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3463 */;
	struct mlx5_qp_context *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3462 */;
	struct mlx5_ib_cq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3461 */;
	struct mlx5_ib_qp_base *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3460 */;
	struct mlx5_ib_dev *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3458 */;
	const u16 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3421 */[MLX5_QP_NUM_STATE][MLX5_QP_NUM_STATE];
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3419 */;
	const struct mlx5_ib_modify_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3418 */;
	enum ib_qp_state cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3416 */;
	const struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3415 */;
	struct ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3414 */;
	struct mlx5_qp_context cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3393 */;
	struct rdma_counter *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3389 */;
	struct mlx5_flow_handle *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3325 */;
	struct ib_qp_cap *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 330 */;
	const struct mlx5_modify_raw_qp_param *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3271 */;
	struct mlx5_rate_limit cocci_id/* drivers/infiniband/hw/mlx5/qp.c 3199 */;
	enum mlx5_qp_optpar cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2988 */[MLX5_QP_NUM_STATE][MLX5_QP_NUM_STATE][MLX5_QP_ST_MAX];
	enum ib_gid_type cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2918 */;
	const struct ib_global_route *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2916 */;
	struct mlx5_qp_path *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2912 */;
	const struct rdma_ah_attr *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2911 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/mlx5/qp.c 286 */;
	enum{MLX5_PATH_FLAG_FL=1 << 0, MLX5_PATH_FLAG_FREE_AR=1 << 1, MLX5_PATH_FLAG_COUNTER=1 << 2,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2834 */;
	struct mlx5_core_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 283 */;
	struct ib_qp_init_attr cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2638 */;
	enum{MLX_QP_FLAGS=MLX5_QP_FLAG_TYPE_DCT | MLX5_QP_FLAG_TYPE_DCI,} cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2597 */;
	struct mlx5_ib_srq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 257 */;
	const char *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2510 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2431 */(struct mlx5_ib_dev *dev,
							       struct mlx5_ib_qp *qp,
							       const struct mlx5_modify_raw_qp_param *raw_qp_param,
							       u8 lag_tx_affinity);
	struct mlx5_ib_cq **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2398 */;
	struct ib_cq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2397 */;
	__u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 2132 */;
	u32 *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1966 */;
	struct mlx5_ib_create_qp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1962 */;
	struct mlx5_ib_ucontext cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1957 */;
	struct mlx5_ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1956 */;
	struct mlx5_ib_create_qp_resp cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1955 */;
	struct mlx5_ib_resources *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1952 */;
	struct ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1948 */;
	uint64_t cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1943 */;
	enum ib_qp_type cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1872 */;
	struct mlx5_ib_create_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1869 */;
	typeof(ucmd) cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1622 */;
	typeof(resp) cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1618 */;
	struct mlx5_ib_create_qp_rss cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1608 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1515 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1467 */[MLX5_ST_SZ_DW(create_tir_out)];
	struct mlx5_ib_rq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1461 */;
	struct mlx5_ib_sq *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1460 */;
	struct mlx5_ib_raw_packet_qp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1459 */;
	struct mlx5_ib_create_qp_resp *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1457 */;
	size_t cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1454 */;
	size_t *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 140 */;
	struct ib_umem *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 132 */;
	struct mlx5_ib_ubuffer *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1227 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1198 */[MLX5_ST_SZ_DW(create_tis_in)];
	__be64 *cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1116 */;
	u32 **cocci_id/* drivers/infiniband/hw/mlx5/qp.c 1033 */;
}
