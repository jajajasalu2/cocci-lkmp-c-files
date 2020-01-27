cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 93 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 80 */;
	struct mlx5_mpfs *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 80 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 80 */;
	struct mlx5_mpfs {
		struct hlist_head hash[MLX5_L2_ADDR_HASH_SIZE];
		struct mutex lock;
		u32 size;
		unsigned long *bitmap;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 73 */;
	struct l2table_node {
		struct l2addr_node node;
		u32 index;
		int ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 67 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 59 */[MLX5_ST_SZ_DW(delete_l2_table_entry_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 58 */[MLX5_ST_SZ_DW(delete_l2_table_entry_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 56 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 56 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 44 */[MLX5_ST_SZ_DW(set_l2_table_entry_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 43 */[MLX5_ST_SZ_DW(set_l2_table_entry_in)];
	struct l2table_node cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 146 */;
	struct l2table_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 137 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/mpfs.c 134 */;
}
