cocci_test_suite() {
	struct ethhdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 99 */;
	struct mlx5ehdr {
		__be32 version;
		__be64 magic;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 92 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 84 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 73 */;
	struct mlx5_core_health *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 66 */;
	const char cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 50 */[MLX5E_ST_NUM][ETH_GSTRING_LEN];
	enum{MLX5E_ST_LINK_STATE, MLX5E_ST_LINK_SPEED, MLX5E_ST_HEALTH_INFO,

#ifdef CONFIG_INET
 MLX5E_ST_LOOPBACK,

#endif
 MLX5E_ST_NUM,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 40 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 332 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 330 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 329 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 327 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 326 */;
	struct ethtool_test *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 326 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 326 */;
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 317 */[MLX5E_ST_NUM])(struct mlx5e_priv *);
	struct mlx5e_lbt_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 272 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 209 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 205 */;
	struct packet_type *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 183 */;
	struct mlx5e_lbt_priv {
		struct packet_type pt;
		struct completion comp;
		bool loopback_ok;
		bool local_lb;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 173 */;
	struct mlx5ehdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 139 */;
	struct udphdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 129 */;
	struct iphdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 126 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 109 */;
	struct udphdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 108 */;
	struct ethhdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 107 */;
	struct mlx5ehdr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 106 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_selftest.c 103 */;
}
