cocci_test_suite() {
	struct res_counter cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 989 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 971 */(struct mlx4_dev *dev,
										    int slave,
										    int op,
										    int cmd,
										    u64 in_param,
										    u64 *out_param,
										    int port);
	enum res_qp_states{RES_QP_BUSY=RES_ANY_BUSY, RES_QP_RESERVED, RES_QP_MAPPED, RES_QP_HW,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 95 */;
	struct res_common **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 924 */;
	struct res_common *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 895 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 893 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 893 */;
	enum mlx4_resource cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 892 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 891 */;
	struct mlx4_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 891 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 891 */;
	struct res_gid {
		struct list_head list;
		u8 gid[16];
		enum mlx4_protocol prot;
		enum mlx4_steer_type steer;
		u64 reg_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 87 */;
	enum{RES_ANY_BUSY=1,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 83 */;
	struct mlx4_update_qp_params cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 784 */;
	struct mlx4_vport_oper_state *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 754 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 746 */(struct mlx4_dev *dev,
										    struct mlx4_qp_context *qpc,
										    u8 slave,
										    int port);
	struct res_common {
		struct list_head list;
		struct rb_node node;
		u64 res_id;
		int owner;
		int state;
		int from_state;
		int to_state;
		int removing;
		const char *func_name;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 71 */;
	enum mlx4_res_tracker_free_type cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 656 */;
	struct vlan_res {
		struct list_head list;
		u16 vlan;
		int ref_count;
		int vlan_index;
		u8 port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 63 */;
	struct mlx4_slaves_pport cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 589 */;
	struct mac_res {
		struct list_head list;
		u64 mac;
		int ref_count;
		u8 smac_index;
		u8 port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 55 */;
	struct mlx4_vf_immed_vlan_work cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5275 */;
	struct mlx4_vf_immed_vlan_work *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5274 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5272 */;
	struct slave_list cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 508 */;
	struct res_fs_rule cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5036 */;
	struct rb_node *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5030 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 5024 */;
	struct mlx4_active_ports cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 479 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4642 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4609 */;
	struct mlx4_resource_tracker *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4607 */;
	struct mlx4_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4606 */;
	struct mlx4_qp cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4585 */;
	enum{BUSY_MAX_RETRIES=10,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4559 */;
	struct mlx4_net_trans_rule_hw_eth cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4423 */;
	struct _rule_hw *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4379 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4363 */(struct mlx4_dev *dev,
										     struct res_fs_rule *fs_rule);
	struct mlx4_net_trans_rule_hw_ctrl cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4351 */;
	struct mlx4_update_qp_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4295 */;
	unsigned cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4293 */;
	struct resource_allocator *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 424 */;
	__be64 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4234 */;
	struct mlx4_net_trans_rule_hw_tcp_udp *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4233 */;
	struct mlx4_net_trans_rule_hw_ipv4 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4232 */;
	struct mlx4_net_trans_rule_hw_eth *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4231 */;
	struct mlx4_net_trans_rule_hw_ctrl *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4230 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4229 */;
	struct mac_res *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4228 */;
	struct mlx4_cmd_mailbox *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4225 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4078 */[16];
	struct mlx4_qp *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4077 */;
	struct res_gid *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4031 */;
	enum mlx4_steer_type cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4029 */;
	enum mlx4_protocol cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4028 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4028 */;
	struct res_qp *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 4027 */;
	enum mlx4_qp_optpar cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3771 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3771 */;
	struct mlx4_srq_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3619 */;
	struct mlx4_cmd_info *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3524 */;
	struct mlx4_slave_event_eq_info *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3341 */;
	struct mlx4_eqe *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3338 */;
	__be64 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3269 */;
	struct mlx4_mtt cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3268 */;
	enum qp_transition cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3185 */;
	struct res_mtt **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3159 */;
	struct mlx4_cq_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3076 */;
	struct mlx4_eq_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 3060 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 306 */(struct mlx4_dev *dev,
										     int slave);
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2947 */(struct mlx4_dev *dev,
										     int slave,
										     struct mlx4_qp_context *qpc,
										     struct mlx4_cmd_mailbox *inbox);
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2937 */;
	struct mlx4_qp_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2935 */;
	struct mlx4_vhcr *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2934 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2934 */;
	struct mlx4_mpt_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2894 */;
	enum qp_transition{QP_TRANS_INIT2RTR, QP_TRANS_RTR2RTS, QP_TRANS_RTS2RTS, QP_TRANS_SQERR2RTS, QP_TRANS_SQD2SQD, QP_TRANS_SQD2RTS,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 278 */;
	struct res_common cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 259 */;
	struct rb_node **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 255 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2243 */;
	struct res_fs_rule {
		struct res_common com;
		int qpn;
		void *mirr_mbox;
		u32 mirr_mbox_size;
		struct list_head mirr_list;
		u64 mirr_rule_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 223 */;
	struct mlx4_slave_state *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2208 */;
	struct vlan_res *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2191 */;
	enum res_fs_rule_states{RES_FS_RULE_BUSY=RES_ANY_BUSY, RES_FS_RULE_ALLOCATED,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 218 */;
	struct res_xrcdn {
		struct res_common com;
		int port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 213 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 2129 */;
	enum res_xrcdn_states{RES_XRCD_BUSY=RES_ANY_BUSY, RES_XRCD_ALLOCATED,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 208 */;
	struct res_counter {
		struct res_common com;
		int port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 203 */;
	enum res_counter_states{RES_COUNTER_BUSY=RES_ANY_BUSY, RES_COUNTER_ALLOCATED,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 198 */;
	struct res_srq {
		struct res_common com;
		struct res_mtt *mtt;
		struct res_cq *cq;
		atomic_t ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 191 */;
	enum res_srq_states{RES_SRQ_BUSY=RES_ANY_BUSY, RES_SRQ_ALLOCATED, RES_SRQ_HW,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 185 */;
	struct res_cq {
		struct res_common com;
		struct res_mtt *mtt;
		atomic_t ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 179 */;
	enum res_cq_states{RES_CQ_BUSY=RES_ANY_BUSY, RES_CQ_ALLOCATED, RES_CQ_HW,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 173 */;
	enum res_srq_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1712 */;
	struct res_srq **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1712 */;
	struct res_eq {
		struct res_common com;
		struct res_mtt *mtt;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 168 */;
	enum res_cq_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1672 */;
	struct res_cq **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1672 */;
	enum res_eq_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1623 */;
	struct res_eq **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1623 */;
	enum res_eq_states{RES_EQ_BUSY=RES_ANY_BUSY, RES_EQ_RESERVED, RES_EQ_HW,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 162 */;
	enum res_mpt_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1570 */;
	struct res_mpt **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1570 */;
	struct res_mpt {
		struct res_common com;
		struct res_mtt *mtt;
		int key;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 156 */;
	enum res_qp_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1505 */;
	struct res_qp **cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1505 */;
	enum res_mpt_states{RES_MPT_BUSY=RES_ANY_BUSY, RES_MPT_RESERVED, RES_MPT_MAPPED, RES_MPT_HW,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 149 */;
	struct res_mtt {
		struct res_common com;
		int order;
		atomic_t ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 143 */;
	enum res_mtt_states cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 134 */;
	enum res_mtt_states{RES_MTT_BUSY=RES_ANY_BUSY, RES_MTT_ALLOCATED,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 129 */;
	struct rb_root *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1286 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1238 */;
	struct mlx4_counter *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1232 */;
	struct res_fs_rule *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1174 */;
	struct res_xrcdn *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1160 */;
	struct res_counter *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1145 */;
	struct res_srq *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1130 */;
	struct res_cq *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1115 */;
	struct res_eq *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1101 */;
	struct res_mpt *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1086 */;
	struct res_qp {
		struct res_common com;
		struct res_mtt *mtt;
		struct res_cq *rcq;
		struct res_cq *scq;
		struct res_srq *srq;
		struct list_head mcg_list;
		spinlock_t mcg_spl;
		int local_qpn;
		atomic_t ref_count;
		u32 qpc_flags;
		u8 sched_queue;
		__be32 param3;
		u8 vlan_control;
		u8 fvl_rx;
		u8 pri_path_fl;
		u8 vlan_index;
		u8 feup;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 108 */;
	struct res_mtt *cocci_id/* drivers/net/ethernet/mellanox/mlx4/resource_tracker.c 1070 */;
}
