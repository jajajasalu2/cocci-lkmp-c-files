cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 73 */(struct mlx5_fc_pool *fc_pool,
										    struct mlx5_fc *fc);
	struct mlx5_fc *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 72 */(struct mlx5_fc_pool *fc_pool);
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 71 */(struct mlx5_fc_pool *fc_pool);
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 70 */(struct mlx5_fc_pool *fc_pool,
										    struct mlx5_core_dev *dev);
	struct mlx5_fc_pool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 644 */;
	struct mlx5_fc_bulk cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 636 */;
	struct mlx5_fc_bulk *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 546 */;
	struct mlx5_fc {
		struct list_head list;
		struct llist_node addlist;
		struct llist_node dellist;
		u64 lastpackets;
		u64 lastbytes;
		struct mlx5_fc_bulk *bulk;
		u32 id;
		bool aging;
		struct mlx5_fc_cache cache ____cacheline_aligned_in_smp;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 52 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 505 */;
	struct mlx5_fc cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 500 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 494 */;
	enum mlx5_fc_bulk_alloc_bitmask cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 490 */;
	struct mlx5_fc_bulk {
		struct list_head pool_list;
		u32 base_id;
		int bulk_len;
		unsigned long *bitmask;
		struct mlx5_fc fcs[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 468 */;
	struct mlx5_fc_cache {
		u64 packets;
		u64 bytes;
		u64 lastuse;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 46 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 449 */;
	struct mlx5_fc_cache cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 436 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 428 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 422 */;
	struct mlx5_fc *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 402 */;
	struct llist_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 401 */;
	struct mlx5_fc_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 400 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 398 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 285 */;
	struct mlx5_core_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 230 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 228 */;
	struct mlx5_fc_cache *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 200 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 176 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 156 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 147 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 147 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fs_counters.c 107 */;
}
