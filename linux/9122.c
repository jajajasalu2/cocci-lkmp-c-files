cocci_test_suite() {
	struct mlx5_flow_group *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 997 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 996 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 995 */;
	struct mlx5_flow_root_namespace *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 994 */;
	struct mlx5_fpga_ipsec {
		struct mlx5_fpga_device *fdev;
		struct list_head pending_cmds;
		spinlock_t pending_cmds_lock;
		u32 caps[MLX5_ST_SZ_DW(ipsec_extended_cap)];
		struct mlx5_fpga_conn *conn;
		struct notifier_block fs_notifier_ingress_bypass;
		struct notifier_block fs_notifier_egress;
		struct rhashtable sa_hash;
		struct mutex sa_hash_lock;
		struct rb_root rules_rb;
		struct mutex rules_rb_lock;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 99 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 989 */;
	enum fs_flow_table_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 989 */;
	struct mailbox_mod *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 967 */;
	uintptr_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 962 */;
	struct mailbox_mod {
		uintptr_t saved_esp_id;
		u32 saved_action;
		u32 saved_outer_esp_spi_value;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 946 */;
	struct rb_root *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 932 */;
	struct mlx5_fpga_ipsec_rule *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 930 */;
	struct mlx5_fpga_ipsec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 929 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 929 */;
	struct mlx5_ifc_fpga_ipsec_sa_v1 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 91 */;
	struct mlx5_fpga_ipsec_sa_ctx cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 90 */;
	struct mlx5_fpga_ipsec_rule cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 898 */;
	struct rb_node **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 893 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 890 */;
	struct rb_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 861 */;
	struct fs_fte *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 859 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 85 */;
	typeof(spi) cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 812 */;
	struct mlx5_fpga_ipsec_rule {
		struct rb_node node;
		struct fs_fte *fte;
		struct mlx5_fpga_ipsec_sa_ctx *ctx;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 79 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 760 */[4];
	struct mlx5_fpga_esp_xfrm {
		unsigned int num_rules;
		struct mlx5_fpga_ipsec_sa_ctx *sa_ctx;
		struct mutex lock;
		struct mlx5_accel_esp_xfrm accel_xfrm;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 72 */;
	typeof(*fpga_xfrm) cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 673 */;
	struct mlx5_fpga_ipsec_sa_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 671 */;
	struct mlx5_fpga_ipsec_sa_ctx {
		struct rhash_head hash;
		struct mlx5_ifc_fpga_ipsec_sa hw_sa;
		struct mlx5_core_dev *dev;
		struct mlx5_fpga_esp_xfrm *fpga_xfrm;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 65 */;
	struct mlx5_flow_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 640 */;
	struct mlx5_flow_act *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 639 */;
	const u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 637 */;
	const void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 543 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 543 */;
	struct mlx5_ifc_fpga_ipsec_sa *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 527 */;
	const __be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 526 */;
	const __be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 524 */[4];
	struct mlx5_accel_esp_xfrm_attrs *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 523 */;
	struct mlx5_fpga_ipsec_cmd_context {
		struct mlx5_fpga_dma_buf buf;
		enum mlx5_fpga_ipsec_cmd_status status;
		struct mlx5_ifc_fpga_ipsec_cmd_resp resp;
		int status_code;
		struct completion complete;
		struct mlx5_fpga_device *dev;
		struct list_head list;
		u8 command[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 52 */;
	const struct aes_gcm_keymat *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 462 */;
	enum mlx5_fpga_ipsec_cmd_status{MLX5_FPGA_IPSEC_CMD_PENDING, MLX5_FPGA_IPSEC_CMD_SEND_FAIL, MLX5_FPGA_IPSEC_CMD_COMPLETE,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 46 */;
	struct mlx5_ifc_fpga_ipsec_cmd_cap cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 421 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 377 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 375 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 370 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 359 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 221 */;
	struct mlx5_fpga_ipsec_cmd_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 219 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 216 */;
	struct mlx5_fpga_ipsec_cmd_context cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 192 */;
	enum mlx5_ifc_fpga_ipsec_response_syndrome cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 177 */;
	struct mlx5_ifc_fpga_ipsec_cmd_resp *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 175 */;
	struct mlx5_fpga_dma_buf *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 173 */;
	struct mlx5_ifc_fpga_ipsec_sa cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1474 */;
	struct mlx5_fpga_esp_xfrm cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1461 */;
	struct mlx5_fpga_esp_xfrm *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1435 */;
	const struct mlx5_accel_esp_xfrm_attrs *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1432 */;
	struct mlx5_accel_esp_xfrm *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1430 */;
	struct mlx5_fpga_conn *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1250 */;
	struct mlx5_fpga_conn_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1248 */;
	const struct mlx5_flow_cmds *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1233 */;
	struct mlx5_flow_cmds cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1231 */;
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1124 */)(struct mlx5_flow_root_namespace *ns,
										       struct mlx5_flow_table *ft,
										       struct fs_fte *fte);
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1095 */)(struct mlx5_flow_root_namespace *ns,
										       struct mlx5_flow_table *ft,
										       struct mlx5_flow_group *fg,
										       int modify_mask,
										       struct fs_fte *fte);
	struct mailbox_mod cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1053 */;
	struct mlx5_fpga_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1049 */;
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1043 */)(struct mlx5_flow_root_namespace *ns,
										       struct mlx5_flow_table *ft,
										       struct mlx5_flow_group *fg,
										       struct fs_fte *fte);
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1008 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1007 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1006 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1004 */;
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/ipsec.c 1000 */)(struct mlx5_flow_root_namespace *ns,
										       struct mlx5_flow_table *ft,
										       u32 *in,
										       struct mlx5_flow_group *fg);
}
