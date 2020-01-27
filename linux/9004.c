cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 90 */;
	struct mlx4_set_port_prio2tc_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 88 */;
	struct mlx4_set_vport_context {
		__be32 reserved[8];
		struct mlx4_prio_qos_param qos_p_up[MLX4_NUM_UP];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 80 */;
	struct mlx4_prio_qos_param {
		__be32 bw_share;
		__be32 max_avg_bw;
		__be32 reserved;
		__be32 enable;
		__be32 reserved1[4];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 72 */;
	struct mlx4_alloc_vpp_param {
		__be32 available_vpp;
		__be32 vpp_p_up[MLX4_NUM_UP];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 67 */;
	struct mlx4_set_port_scheduler_context {
		struct mlx4_port_scheduler_tc_cfg_be tc[MLX4_NUM_TC];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 62 */;
	struct mlx4_port_scheduler_tc_cfg_be {
		__be16 pg;
		__be16 bw_precentage;
		__be16 max_bw_units;
		__be16 max_bw_value;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 55 */;
	struct mlx4_set_port_prio2tc_context {
		u8 prio2tc[4];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 51 */;
	enum{MLX4_SET_VPORT_QOS_SET=0x0, MLX4_SET_VPORT_QOS_QUERY=0x1,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 45 */;
	enum{MLX4_ALLOCATE_VPP_ALLOCATE=0x0, MLX4_ALLOCATE_VPP_QUERY=0x1,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 39 */;
	struct mlx4_set_vport_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 227 */;
	struct mlx4_vport_qos_param *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 222 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 182 */;
	struct mlx4_alloc_vpp_param *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 165 */;
	struct mlx4_cmd_mailbox *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 164 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 160 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 160 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 159 */;
	struct mlx4_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 159 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 159 */;
	struct mlx4_port_scheduler_tc_cfg_be *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 127 */;
	struct mlx4_set_port_scheduler_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/fw_qos.c 115 */;
}
