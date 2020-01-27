cocci_test_suite() {
	struct flow_keys cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 678 */;
	const struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 671 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 671 */;
	struct hlist_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 660 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 639 */;
	const struct arfs_tuple *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 639 */;
	struct in6_addr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 623 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 602 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 602 */;
	const struct flow_keys *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 601 */;
	struct arfs_rule cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 569 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 566 */;
	struct arfs_rule {
		struct mlx5e_priv *priv;
		struct work_struct arfs_work;
		struct mlx5_flow_handle *rule;
		struct hlist_node hlist;
		int rxq;
		int flow_id;
		int filter_id;
		struct arfs_tuple tuple;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 54 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 465 */;
	struct arfs_tuple *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 459 */;
	struct mlx5e_arfs_tables *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 458 */;
	struct arfs_rule *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 456 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 455 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 441 */;
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 441 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 429 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 403 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 401 */;
	struct arfs_tuple {
		__be16 etype;
		u8 ip_proto;
		union {
			__be32 src_ipv4;
			struct in6_addr src_ipv6;
		};
		union {
			__be32 dst_ipv4;
			struct in6_addr dst_ipv6;
		};
		__be16 src_port;
		__be16 dst_port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 39 */;
	struct mlx5_flow_table_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 314 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 226 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 224 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 222 */;
	struct mlx5e_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 218 */;
	enum mlx5e_traffic_types cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 179 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 178 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 176 */;
	struct mlx5e_tir *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 175 */;
	struct arfs_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 174 */;
	enum arfs_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 172 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 171 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 171 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_arfs.c 116 */(struct mlx5e_priv *priv);
}
