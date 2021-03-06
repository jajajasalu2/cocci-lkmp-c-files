cocci_test_suite() {
	struct mlx5_wqe_raddr_seg cocci_id/* drivers/infiniband/hw/mlx5/main.c 980 */;
	struct mlx5_wqe_ctrl_seg cocci_id/* drivers/infiniband/hw/mlx5/main.c 979 */;
	struct mlx5_wqe_data_seg cocci_id/* drivers/infiniband/hw/mlx5/main.c 977 */;
	enum{MLX5_ATOMIC_SIZE_QP_8BYTES=1 << 3,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 97 */;
	struct mlx5_ib_event_work {
		struct work_struct work;
		union {
			struct mlx5_ib_dev *dev;
			struct mlx5_ib_multiport_info *mpi;
		};
		bool is_slave;
		unsigned int event;
		void *param;
	} cocci_id/* drivers/infiniband/hw/mlx5/main.c 86 */;
	struct mlx5_ib_query_device_resp cocci_id/* drivers/infiniband/hw/mlx5/main.c 826 */;
	char cocci_id/* drivers/infiniband/hw/mlx5/main.c 82 */[];
	struct mlx5_reg_node_desc {
		u8 desc[IB_DEVICE_NODE_DESC_MAX];
	} cocci_id/* drivers/infiniband/hw/mlx5/main.c 796 */;
	void __exit cocci_id/* drivers/infiniband/hw/mlx5/main.c 7021 */;
	int __init cocci_id/* drivers/infiniband/hw/mlx5/main.c 6998 */;
	struct mlx5_interface cocci_id/* drivers/infiniband/hw/mlx5/main.c 6981 */;
	struct mlx5_ib_multiport_info *cocci_id/* drivers/infiniband/hw/mlx5/main.c 6871 */;
	const struct mlx5_ib_profile cocci_id/* drivers/infiniband/hw/mlx5/main.c 6764 */;
	const struct mlx5_ib_profile *cocci_id/* drivers/infiniband/hw/mlx5/main.c 6740 */;
	void *cocci_id/* drivers/infiniband/hw/mlx5/main.c 6739 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/main.c 6724 */;
	const char *cocci_id/* drivers/infiniband/hw/mlx5/main.c 6643 */;
	enum{MLX5_VPORT_ACCESS_METHOD_MAD, MLX5_VPORT_ACCESS_METHOD_HCA, MLX5_VPORT_ACCESS_METHOD_NIC,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 649 */;
	const struct ib_device_ops cocci_id/* drivers/infiniband/hw/mlx5/main.c 6452 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 634 */;
	__be16 cocci_id/* drivers/infiniband/hw/mlx5/main.c 633 */;
	void **cocci_id/* drivers/infiniband/hw/mlx5/main.c 620 */;
	struct mlx5_read_counters_attr cocci_id/* drivers/infiniband/hw/mlx5/main.c 6075 */;
	struct ib_counters_read_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 6071 */;
	const struct uapi_definition cocci_id/* drivers/infiniband/hw/mlx5/main.c 6058 */[];
	enum mlx5_ib_uapi_flow_action_flags cocci_id/* drivers/infiniband/hw/mlx5/main.c 6056 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx5/main.c 587 */[ETH_ALEN];
	enum ib_gid_type cocci_id/* drivers/infiniband/hw/mlx5/main.c 583 */;
	const union ib_gid *cocci_id/* drivers/infiniband/hw/mlx5/main.c 580 */;
	struct dentry *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5796 */;
	const struct file_operations cocci_id/* drivers/infiniband/hw/mlx5/main.c 5787 */;
	const char __user *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5766 */;
	char cocci_id/* drivers/infiniband/hw/mlx5/main.c 5759 */[20];
	loff_t *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5756 */;
	size_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 5756 */;
	struct file *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5755 */;
	char __user *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5755 */;
	struct rdma_netdev_alloc_params *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5730 */;
	enum rdma_netdev_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 5729 */;
	struct rdma_counter *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5665 */;
	__be64 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5603 */;
	__be32 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5575 */;
	__be32 cocci_id/* drivers/infiniband/hw/mlx5/main.c 5563 */;
	struct rdma_hw_stats *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5537 */;
	const struct mlx5_ib_counters *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5514 */;
	size_t *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5431 */;
	const char **cocci_id/* drivers/infiniband/hw/mlx5/main.c 5430 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/main.c 5389 */;
	struct mlx5_ib_counters *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5387 */;
	const struct mlx5_core_dev *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5363 */;
	const struct mlx5_ib_counter cocci_id/* drivers/infiniband/hw/mlx5/main.c 5313 */[];
	struct mlx5_ib_counter {
		const char *name;
		size_t offset;
	} cocci_id/* drivers/infiniband/hw/mlx5/main.c 5305 */;
	struct mlx5_hca_vport_context cocci_id/* drivers/infiniband/hw/mlx5/main.c 5163 */;
	struct ib_port_immutable *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5158 */;
	enum rdma_link_layer cocci_id/* drivers/infiniband/hw/mlx5/main.c 5127 */;
	struct mlx5_hca_vport_context *cocci_id/* drivers/infiniband/hw/mlx5/main.c 5124 */;
	struct ib_cq_init_attr cocci_id/* drivers/infiniband/hw/mlx5/main.c 4969 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4968 */;
	struct ib_srq_init_attr cocci_id/* drivers/infiniband/hw/mlx5/main.c 4966 */;
	struct mlx5_ib_resources *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4964 */;
	enum ib_mtu cocci_id/* drivers/infiniband/hw/mlx5/main.c 490 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/main.c 487 */[MLX5_ST_SZ_DW(ptys_reg)];
	struct ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4847 */;
	struct ib_cq *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4846 */;
	struct ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4845 */;
	struct ib_qp_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4844 */;
	struct ib_qp_init_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4843 */;
	enum{MAX_UMR_WR=128,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 4837 */;
	struct ib_udata cocci_id/* drivers/infiniband/hw/mlx5/main.c 4774 */;
	struct ib_port_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4772 */;
	struct ib_device_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4771 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx5/main.c 4769 */;
	struct mlx5_ib_dev *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4769 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/main.c 4769 */;
	struct mlx5_ib_multiport_info cocci_id/* drivers/infiniband/hw/mlx5/main.c 4723 */;
	struct mlx5_ib_event_work *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4696 */;
	struct notifier_block *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4693 */;
	struct ib_event cocci_id/* drivers/infiniband/hw/mlx5/main.c 4648 */;
	struct mlx5_ib_event_work cocci_id/* drivers/infiniband/hw/mlx5/main.c 4646 */;
	struct ib_event *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4583 */;
	struct mlx5_eqe *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4582 */;
	struct mlx5_ib_delay_drop cocci_id/* drivers/infiniband/hw/mlx5/main.c 4566 */;
	struct mlx5_ib_delay_drop *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4565 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4562 */;
	struct list_head cocci_id/* drivers/infiniband/hw/mlx5/main.c 4508 */;
	struct mlx5_core_cq *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4507 */;
	struct mlx5_ib_cq *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4506 */;
	struct mlx5_ib_port_resources cocci_id/* drivers/infiniband/hw/mlx5/main.c 4495 */;
	struct mlx5_ib_port_resources *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4494 */;
	const struct attribute_group cocci_id/* drivers/infiniband/hw/mlx5/main.c 4488 */;
	struct attribute *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4479 */[];
	struct mlx5_ib_dev cocci_id/* drivers/infiniband/hw/mlx5/main.c 4472 */;
	struct device_attribute *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4469 */;
	char *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4469 */;
	struct device *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4468 */;
	ssize_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 4468 */;
	union ib_gid *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4376 */;
	struct mlx5_ib_flow_action *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4229 */;
	struct mlx5_accel_esp_xfrm_attrs cocci_id/* drivers/infiniband/hw/mlx5/main.c 4228 */;
	struct ib_uverbs_flow_action_esp_keymat_aes_gcm *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4227 */;
	const struct ib_flow_action_attrs_esp *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4223 */;
	struct ib_flow_action *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4221 */;
	struct mlx5_flow_act *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4044 */;
	struct mlx5_flow_context *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4043 */;
	struct mlx5_ib_flow_matcher *cocci_id/* drivers/infiniband/hw/mlx5/main.c 4042 */;
	struct mlx5_flow_namespace *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3969 */;
	struct mlx5_ib_flow_counters_data cocci_id/* drivers/infiniband/hw/mlx5/main.c 3850 */;
	typeof(ucmd_hdr) cocci_id/* drivers/infiniband/hw/mlx5/main.c 3836 */;
	struct mlx5_ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3824 */;
	struct ib_flow *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3818 */;
	const struct ib_flow_attr cocci_id/* drivers/infiniband/hw/mlx5/main.c 3789 */;
	struct ib_flow_spec_eth cocci_id/* drivers/infiniband/hw/mlx5/main.c 3741 */;
	struct {
		struct ib_flow_attr flow_attr;
		struct ib_flow_spec_eth eth_flow;
	} cocci_id/* drivers/infiniband/hw/mlx5/main.c 3730 */[];
	enum{LEFTOVERS_MC, LEFTOVERS_UC,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 3717 */;
	struct ib_flow_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3695 */;
	struct mlx5_ib_mcounters *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3625 */;
	struct mlx5_eswitch_rep *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3605 */;
	union ib_flow_spec *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3592 */;
	bool cocci_id/* drivers/infiniband/hw/mlx5/main.c 3568 */;
	unsigned int cocci_id/* drivers/infiniband/hw/mlx5/main.c 3564 */;
	const void *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3563 */;
	struct mlx5_flow_destination cocci_id/* drivers/infiniband/hw/mlx5/main.c 3561 */[2];
	struct mlx5_flow_spec *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3560 */;
	struct mlx5_flow_act cocci_id/* drivers/infiniband/hw/mlx5/main.c 3559 */;
	struct mlx5_flow_table *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3557 */;
	struct mlx5_ib_create_flow *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3555 */;
	struct mlx5_flow_destination *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3553 */;
	const struct ib_flow_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3552 */;
	struct mlx5_ib_flow_prio *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3551 */;
	struct mlx5_ib_flow_handler *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3550 */;
	struct mlx5_ib_flow_counters_data *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3452 */;
	struct mlx5_ib_flow_counters_desc *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3415 */;
	enum mlx5_ib_counters_type cocci_id/* drivers/infiniband/hw/mlx5/main.c 3414 */;
	struct mlx5_fc *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3403 */;
	struct mlx5_read_counters_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3401 */;
	enum mlx5_flow_namespace_type cocci_id/* drivers/infiniband/hw/mlx5/main.c 3313 */;
	enum flow_table_type cocci_id/* drivers/infiniband/hw/mlx5/main.c 3295 */;
	enum flow_table_type{MLX5_IB_FT_RX, MLX5_IB_FT_TX,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 3265 */;
	struct mlx5_ib_flow_handler cocci_id/* drivers/infiniband/hw/mlx5/main.c 3229 */;
	struct ib_counters *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3215 */;
	const u32 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3120 */;
	const struct mlx5_flow_act *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3117 */;
	const struct mlx5_flow_spec *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3116 */;
	enum valid_spec cocci_id/* drivers/infiniband/hw/mlx5/main.c 3114 */;
	enum valid_spec{VALID_SPEC_INVALID, VALID_SPEC_VALID, VALID_SPEC_NA,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 3108 */;
	struct ib_flow_spec_eth *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3098 */;
	struct ib_flow_spec_ipv4 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 3088 */;
	const union ib_flow_spec *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2715 */;
	uintptr_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 2674 */;
	typeof(filter) cocci_id/* drivers/infiniband/hw/mlx5/main.c 2660 */;
	const __be32 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2624 */;
	u32 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2555 */;
	enum{MATCH_CRITERIA_ENABLE_OUTER_BIT, MATCH_CRITERIA_ENABLE_MISC_BIT, MATCH_CRITERIA_ENABLE_INNER_BIT, MATCH_CRITERIA_ENABLE_MISC2_BIT,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 2544 */;
	struct mlx5_ib_ucontext cocci_id/* drivers/infiniband/hw/mlx5/main.c 2513 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/main.c 2510 */[MLX5_ST_SZ_DW(alloc_pd_in)];
	u32 cocci_id/* drivers/infiniband/hw/mlx5/main.c 2509 */[MLX5_ST_SZ_DW(alloc_pd_out)];
	struct mlx5_ib_alloc_pd_resp cocci_id/* drivers/infiniband/hw/mlx5/main.c 2507 */;
	struct mlx5_ib_pd *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2505 */;
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2503 */;
	enum mlx5_ib_uapi_dm_type cocci_id/* drivers/infiniband/hw/mlx5/main.c 2416 */;
	struct ib_dm *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2410 */;
	enum ib_port_state cocci_id/* drivers/infiniband/hw/mlx5/main.c 240 */;
	struct mlx5_core_dev *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2382 */;
	struct mlx5_dm *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2333 */;
	struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2331 */;
	struct ib_dm_alloc_attr *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2330 */;
	phys_addr_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 2263 */;
	struct vm_area_struct *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2258 */;
	pgprot_t cocci_id/* drivers/infiniband/hw/mlx5/main.c 2238 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx5/main.c 2209 */;
	struct mlx5_ib_dm *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2208 */;
	struct ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2207 */;
	struct mlx5_ib_dm cocci_id/* drivers/infiniband/hw/mlx5/main.c 2085 */;
	struct mlx5_user_mmap_entry *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2079 */;
	struct rdma_user_mmap_entry *cocci_id/* drivers/infiniband/hw/mlx5/main.c 2077 */;
	enum mlx5_ib_mmap_cmd cocci_id/* drivers/infiniband/hw/mlx5/main.c 2039 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx5/main.c 2018 */;
	struct mlx5_init_seg cocci_id/* drivers/infiniband/hw/mlx5/main.c 1922 */;
	struct mlx5_roce cocci_id/* drivers/infiniband/hw/mlx5/main.c 192 */;
	typeof(resp) cocci_id/* drivers/infiniband/hw/mlx5/main.c 1820 */;
	__u8 cocci_id/* drivers/infiniband/hw/mlx5/main.c 1814 */;
	struct mlx5_ib_alloc_ucontext_req cocci_id/* drivers/infiniband/hw/mlx5/main.c 1782 */;
	struct mlx5_ib_alloc_ucontext_resp cocci_id/* drivers/infiniband/hw/mlx5/main.c 1768 */;
	struct mlx5_ib_alloc_ucontext_req_v2 cocci_id/* drivers/infiniband/hw/mlx5/main.c 1767 */;
	struct mlx5_ib_port *cocci_id/* drivers/infiniband/hw/mlx5/main.c 167 */;
	struct mlx5_eswitch *cocci_id/* drivers/infiniband/hw/mlx5/main.c 165 */;
	struct mlx5_bfreg_info *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1645 */;
	struct mlx5_ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1643 */;
	u8 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 163 */;
	struct net_device *cocci_id/* drivers/infiniband/hw/mlx5/main.c 162 */;
	struct mlx5_roce *cocci_id/* drivers/infiniband/hw/mlx5/main.c 161 */;
	struct mlx5_ib_alloc_ucontext_req_v2 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1606 */;
	u16 cocci_id/* drivers/infiniband/hw/mlx5/main.c 1596 */;
	struct ib_port_modify *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1551 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/hw/mlx5/main.c 151 */;
	struct mlx5_reg_node_desc cocci_id/* drivers/infiniband/hw/mlx5/main.c 1491 */;
	enum ib_port_state *cocci_id/* drivers/infiniband/hw/mlx5/main.c 149 */;
	struct ib_device_modify *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1488 */;
	u16 *cocci_id/* drivers/infiniband/hw/mlx5/main.c 1473 */;
	enum mlx5_vl_hw_cap{MLX5_VL_HW_0=1, MLX5_VL_HW_0_1=2, MLX5_VL_HW_0_2=3, MLX5_VL_HW_0_3=4, MLX5_VL_HW_0_4=5, MLX5_VL_HW_0_5=6, MLX5_VL_HW_0_6=7, MLX5_VL_HW_0_7=8, MLX5_VL_HW_0_14=15,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 1253 */;
	enum ib_max_vl_num{__IB_MAX_VL_0=1, __IB_MAX_VL_0_1=2, __IB_MAX_VL_0_3=3, __IB_MAX_VL_0_7=4, __IB_MAX_VL_0_14=5,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 1245 */;
	enum mlx5_ib_width{MLX5_IB_WIDTH_1X=1 << 0, MLX5_IB_WIDTH_2X=1 << 1, MLX5_IB_WIDTH_4X=1 << 2, MLX5_IB_WIDTH_8X=1 << 3, MLX5_IB_WIDTH_12X=1 << 4,} cocci_id/* drivers/infiniband/hw/mlx5/main.c 1199 */;
	struct mutex cocci_id/* drivers/infiniband/hw/mlx5/main.c 113 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/hw/mlx5/main.c 101 */;
}
