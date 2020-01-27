cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 75 */[MLX5_ST_SZ_DW(delete_vxlan_udp_dport_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 74 */[MLX5_ST_SZ_DW(delete_vxlan_udp_dport_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 64 */[MLX5_ST_SZ_DW(add_vxlan_udp_dport_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 63 */[MLX5_ST_SZ_DW(add_vxlan_udp_dport_in)];
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 61 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 56 */;
	struct mlx5_vxlan_port {
		struct hlist_node hlist;
		refcount_t refcount;
		u16 udp_port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 50 */;
	struct mlx5_vxlan {
		struct mlx5_core_dev *mdev;
		spinlock_t lock;
		DECLARE_HASHTABLE(htable,4);
		int num_ports;
		struct mutex sync_lock;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 41 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 218 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 215 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 162 */;
	struct mlx5_vxlan_port *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 112 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 110 */;
	struct mlx5_vxlan *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 110 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/vxlan.c 110 */;
}
