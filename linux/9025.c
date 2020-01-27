cocci_test_suite() {
	struct mlx4_roce_gid_table *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 91 */;
	struct mlx4_vlan_table *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 580 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 578 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 577 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 379 */;
	struct mlx4_cable_info *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 2047 */;
	struct mlx4_mad_ifc *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 2046 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 2002 */;
	enum cable_info_err{CABLE_INF_INV_PORT=0x1, CABLE_INF_OP_NOSUP=0x2, CABLE_INF_NOT_CONN=0x3, CABLE_INF_NO_EEPRM=0x4, CABLE_INF_PAGE_ERR=0x5, CABLE_INF_INV_ADDR=0x6, CABLE_INF_I2C_ADDR=0x7, CABLE_INF_QSFP_VIO=0x8, CABLE_INF_I2C_BUSY=0x9,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1988 */;
	struct mlx4_cable_info {
		u8 i2c_addr;
		u8 page_num;
		__be16 dev_mem_address;
		__be16 reserved1;
		__be16 size;
		__be32 reserved2[2];
		u8 data[MODULE_INFO_MAX_READ];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1978 */;
	unsigned long long cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 196 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 189 */;
	struct mlx4_cmd_info *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1852 */;
	struct mlx4_cmd_mailbox *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1850 */;
	struct mlx4_mac_table *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 185 */;
	struct mlx4_vhcr *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1849 */;
	struct mlx4_port_info *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 184 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 182 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 182 */;
	struct mlx4_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 182 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 182 */;
	struct mlx4_set_port_vxlan_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1774 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1772 */;
	struct mlx4_set_port_vxlan_context {
		u32 reserved1;
		u8 modify_flags;
		u8 reserved2;
		u8 enable_flags;
		u8 steering;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1761 */;
	enum{VXLAN_ENABLE_MODIFY=1 << 7, VXLAN_STEERING_MODIFY=1 << 6, VXLAN_ENABLE=1 << 7,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1754 */;
	struct mlx4_set_port_general_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1731 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1704 */;
	struct mlx4_set_port_rqp_calc_context *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1646 */;
	__be16 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1584 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1580 */;
	enum{MLX4_SET_PORT_VL_CAP=4, MLX4_SET_PORT_MTU_CAP=12, MLX4_CHANGE_PORT_PKEY_TBL_SZ=20, MLX4_CHANGE_PORT_VL_CAP=21, MLX4_CHANGE_PORT_MTU_CAP=22,} cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1560 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1350 */;
	struct mlx4_roce_gid_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1339 */;
	struct mlx4_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1335 */;
	struct mlx4_mfunc_master_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1316 */;
	__be64 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 128 */;
	struct mlx4_slave_state *cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1253 */;
	struct mlx4_active_ports cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1136 */;
	struct mlx4_slaves_pport cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1135 */;
	unsigned cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1131 */;
	struct mlx4_roce_gid_entry cocci_id/* drivers/net/ethernet/mellanox/mlx4/port.c 1090 */;
}