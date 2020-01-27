cocci_test_suite() {
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 89 */;
	struct mlx5i_pkey_qpn_ht *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 88 */;
	struct mlx5i_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 87 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 85 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 85 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 72 */;
	struct qpn_to_netdev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 71 */;
	struct hlist_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 71 */;
	struct mlx5i_pkey_qpn_ht {
		struct hlist_head buckets[1 << MLX5I_MAX_LOG_PKEY_SUP];
		spinlock_t ht_lock;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 44 */;
	struct qpn_to_netdev {
		struct net_device *netdev;
		struct hlist_node hlist;
		u32 underlay_qpn;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 38 */;
	const struct mlx5e_profile *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 361 */;
	const struct mlx5e_profile cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 344 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 303 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 281 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 268 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 246 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 180 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 145 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 143 */(struct net_device *dev,
											 struct ifreq *ifr,
											 int cmd);
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 142 */(struct net_device *netdev,
											 int new_mtu);
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 141 */(struct net_device *netdev);
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 140 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/ipoib/ipoib_vlan.c 139 */(struct net_device *netdev);
}
