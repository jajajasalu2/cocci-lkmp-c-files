cocci_test_suite() {
	struct mlxsw_sp_mr cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 997 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 995 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 981 */;
	struct mlxsw_sp_mr_route cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 92 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 90 */;
	enum mlxsw_sp_l3proto cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 886 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 885 */;
	struct mlxsw_sp_mr_table_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 869 */[];
	struct mlxsw_sp_mr_vif_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 859 */[];
	const struct mfc6_cache *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 835 */;
	struct mfc6_cache *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 835 */;
	const struct mlxsw_sp_mr_vif *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 808 */;
	const struct mlxsw_sp_mr_route *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 803 */;
	const struct mlxsw_sp_mr_table *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 802 */;
	const struct mfc_cache *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 788 */;
	struct mfc_cache *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 788 */;
	struct mr_mfc *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 786 */;
	struct mlxsw_sp_mr_route_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 785 */;
	const struct mr_mfc *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 768 */;
	struct mlxsw_sp_mr_route {
		struct list_head node;
		struct rhash_head ht_node;
		struct mlxsw_sp_mr_route_key key;
		enum mlxsw_sp_mr_route_action route_action;
		u16 min_mtu;
		struct mr_mfc *mfc;
		void *route_priv;
		const struct mlxsw_sp_mr_table *mr_table;
		struct list_head evif_list;
		struct mlxsw_sp_mr_route_vif_entry ivif;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 75 */;
	struct mlxsw_sp_mr_route_vif_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 742 */;
	const struct mlxsw_sp_rif *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 707 */;
	vifi_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 698 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 696 */;
	struct mlxsw_sp_mr_vif *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 694 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 671 */;
	struct mlxsw_sp_mr_table {
		struct list_head node;
		enum mlxsw_sp_l3proto proto;
		struct mlxsw_sp *mlxsw_sp;
		u32 vr_id;
		struct mlxsw_sp_mr_vif vifs[MAXVIFS];
		struct list_head route_list;
		struct rhashtable route_ht;
		const struct mlxsw_sp_mr_table_ops *ops;
		char catchall_route_priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 62 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 524 */;
	struct mlxsw_sp_mr_table_ops {
		bool (*is_route_valid)(const struct mlxsw_sp_mr_table *mr_table,
				       const struct mr_mfc *mfc);
		void (*key_create)(struct mlxsw_sp_mr_table *mr_table,
				   struct mlxsw_sp_mr_route_key *key,
				   struct mr_mfc *mfc);
		bool (*is_route_starg)(const struct mlxsw_sp_mr_table *mr_table,
				       const struct mlxsw_sp_mr_route *mr_route);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 52 */;
	struct mlxsw_sp_mr_table cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 51 */;
	struct mlxsw_sp_mr_route_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 458 */;
	struct mlxsw_sp_mr_route_vif_entry {
		struct list_head vif_node;
		struct list_head route_node;
		struct mlxsw_sp_mr_vif *mr_vif;
		struct mlxsw_sp_mr_route *mr_route;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 44 */;
	struct mlxsw_sp_mr_route *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 371 */;
	struct mlxsw_sp_mr_table *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 370 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 370 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 354 */;
	struct mlxsw_sp_mr_route_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 259 */;
	struct mlxsw_sp_mr_route_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 250 */;
	struct mlxsw_sp_mr_vif {
		struct net_device *dev;
		const struct mlxsw_sp_rif *rif;
		unsigned long vif_flags;
		struct list_head route_evif_list;
		struct list_head route_ivif_list;
		const struct mlxsw_sp_mr_vif_ops *ops;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 25 */;
	struct mlxsw_sp_mr_vif_ops {
		bool (*is_regular)(const struct mlxsw_sp_mr_vif *vif);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 21 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 209 */;
	struct mlxsw_sp_mr_route_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 206 */;
	struct mlxsw_sp_mr_vif cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 20 */;
	enum mlxsw_sp_mr_route_prio cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 159 */;
	enum mlxsw_sp_mr_route_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 128 */;
	struct mlxsw_sp_mr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 1044 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 1042 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 1018 */;
	const struct mlxsw_sp_mr_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 1015 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 1014 */;
	struct mlxsw_sp_mr {
		const struct mlxsw_sp_mr_ops *mr_ops;
		void *catchall_route_priv;
		struct delayed_work stats_update_dw;
		struct list_head table_list;
#define MLXSW_SP_MR_ROUTES_COUNTER_UPDATE_INTERVAL 5000
		unsigned long priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr.c 10 */;
}
