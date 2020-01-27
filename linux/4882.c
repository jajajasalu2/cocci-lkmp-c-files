cocci_test_suite() {
	u32 *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 996 */;
	struct mlx5_klm *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 96 */;
	struct pf_frame *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 831 */;
	struct mlx5_ib_devx_mr cocci_id/* drivers/infiniband/hw/mlx5/odp.c 808 */;
	struct mlx5_ib_mw cocci_id/* drivers/infiniband/hw/mlx5/odp.c 804 */;
	struct mlx5_ib_devx_mr *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 801 */;
	struct mlx5_ib_mw *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 800 */;
	struct mlx5_core_mkey *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 798 */;
	struct pf_frame {
		struct pf_frame *next;
		u32 key;
		u64 io_virt;
		size_t bcnt;
		int depth;
	} cocci_id/* drivers/infiniband/hw/mlx5/odp.c 781 */;
	struct list_head cocci_id/* drivers/infiniband/hw/mlx5/odp.c 549 */;
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 492 */;
	struct mlx5_ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 491 */;
	struct mlx5_pagefault {
		u32 bytes_committed;
		u32 token;
		u8 event_subtype;
		u8 type;
		union {
			struct {
				u32 packet_size;
				u32 wq_num;
				u16 wqe_index;
			} wqe;
			struct {
				u32 r_key;
				u32 packet_size;
				u32 rdma_op_len;
				u64 rdma_va;
			} rdma;
		};
		struct mlx5_ib_pf_eq *eq;
		struct work_struct work;
	} cocci_id/* drivers/infiniband/hw/mlx5/odp.c 43 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 411 */[MLX5_ST_SZ_DW(page_fault_resume_in)];
	u32 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 410 */[MLX5_ST_SZ_DW(page_fault_resume_out)];
	struct ib_odp_caps *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 340 */;
	const struct mmu_interval_notifier_ops cocci_id/* drivers/infiniband/hw/mlx5/odp.c 334 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 253 */;
	struct mlx5_mtt cocci_id/* drivers/infiniband/hw/mlx5/odp.c 252 */;
	const u64 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 251 */;
	struct ib_umem_odp cocci_id/* drivers/infiniband/hw/mlx5/odp.c 249 */;
	const struct mmu_notifier_range *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 245 */;
	struct mmu_interval_notifier *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 244 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx5/odp.c 224 */;
	struct ib_umem_odp *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 223 */;
	struct mlx5_ib_mr *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 221 */;
	struct mlx5_ib_mr cocci_id/* drivers/infiniband/hw/mlx5/odp.c 214 */;
	struct rcu_head *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 211 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 203 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/odp.c 180 */;
	bool cocci_id/* drivers/infiniband/hw/mlx5/odp.c 174 */;
	struct ib_sge *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1730 */;
	struct prefetch_mr_work cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1715 */;
	struct mlx5_ib_dev *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1686 */;
	enum ib_uverbs_advise_mr_advice cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1683 */;
	struct ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1683 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1675 */;
	struct prefetch_mr_work *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1673 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1673 */;
	struct prefetch_mr_work {
		struct work_struct work;
		u32 pf_flags;
		u32 num_sge;
		struct {
			u64 io_virt;
			struct mlx5_ib_mr *mr;
			size_t length;
		} frags[];
	} cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1662 */;
	const struct ib_device_ops cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1620 */;
	struct mlx5_klm cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1612 */;
	struct mlx5_cache_ent *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1594 */;
	struct mlx5_pagefault cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1541 */;
	struct mlx5_eq_param cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1533 */;
	struct mlx5_ib_pf_eq *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1531 */;
	enum{MLX5_IB_NUM_PF_EQE=0x1000, MLX5_IB_NUM_PF_DRAIN=64,} cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1525 */;
	struct mlx5_ib_pf_eq cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1516 */;
	mempool_t *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1507 */;
	void *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1487 */;
	struct notifier_block *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1486 */;
	struct mlx5_eqe *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1403 */;
	struct mlx5_pagefault *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1402 */;
	struct mlx5_eqe_page_fault *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1401 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1372 */;
	size_t cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1215 */;
	struct mlx5_core_rsc_common *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1212 */;
	struct mlx5_core_srq cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1200 */;
	struct mlx5_core_qp *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1192 */;
	struct mlx5_core_srq *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1170 */;
	struct mlx5_ib_wq *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1148 */;
	struct mlx5_wqe_srq_next_seg cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1138 */;
	struct mlx5_ib_srq *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1126 */;
	struct mlx5_wqe_atomic_seg cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1115 */;
	struct mlx5_wqe_raddr_seg cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1110 */;
	struct mlx5_base_av cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1103 */;
	struct mlx5_av cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1101 */;
	struct mlx5_wqe_xrc_seg cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1095 */;
	unsigned cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1072 */;
	struct mlx5_base_av *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1071 */;
	u16 cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1070 */;
	struct mlx5_wqe_ctrl_seg *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1069 */;
	struct mlx5_ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1067 */;
	void **cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1067 */;
	struct mlx5_wqe_inline_seg cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1022 */;
	struct mlx5_wqe_data_seg *cocci_id/* drivers/infiniband/hw/mlx5/odp.c 1012 */;
}
