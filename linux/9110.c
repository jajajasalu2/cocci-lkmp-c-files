cocci_test_suite() {
	struct mlx5dr_icm_pool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 9 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 76 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 75 */[MLX5_ST_SZ_DW(create_mkey_in)];
	struct mlx5_core_mkey *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 72 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 71 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 71 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 70 */;
	struct mlx5dr_icm_mr {
		struct mlx5dr_icm_pool *pool;
		struct mlx5_core_mkey mkey;
		struct mlx5dr_icm_dm dm;
		size_t used_length;
		size_t length;
		u64 icm_start_addr;
		struct list_head mr_list;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 60 */;
	struct mlx5dr_icm_dm {
		u32 obj_id;
		enum mlx5_sw_icm_type type;
		phys_addr_t addr;
		size_t length;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 53 */;
	enum mlx5dr_icm_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 517 */;
	struct mlx5dr_domain *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 516 */;
	struct mlx5dr_icm_chunk cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 483 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 428 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 425 */[DR_CHUNK_SIZE_MAX];
	struct mlx5dr_icm_pool {
		struct mlx5dr_icm_bucket *buckets;
		enum mlx5dr_icm_type icm_type;
		enum mlx5dr_icm_chunk_size max_log_chunk_sz;
		enum mlx5dr_icm_chunk_size num_of_buckets;
		struct list_head icm_mr_list;
		struct mutex mr_mutex;
		struct mlx5dr_domain *dmn;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 42 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 344 */;
	struct mlx5dr_icm_chunk *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 316 */;
	struct mlx5dr_icm_bucket *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 314 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 314 */;
	enum mlx5dr_icm_chunk_size cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 298 */;
	struct mlx5dr_icm_pool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 296 */;
	uintptr_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 250 */;
	struct mlx5dr_icm_mr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 224 */;
	enum mlx5_sw_icm_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 203 */;
	struct mlx5dr_icm_mr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 201 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 199 */;
	struct mlx5dr_icm_dm *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 160 */;
	struct mlx5dr_icm_bucket {
		struct mlx5dr_icm_pool *pool;
		struct list_head free_list;
		unsigned int free_list_count;
		struct list_head used_list;
		unsigned int used_list_count;
		struct list_head hot_list;
		unsigned int hot_list_count;
		struct list_head sync_list;
		unsigned int sync_list_count;
		u32 total_chunks;
		u32 num_of_entries;
		u32 entry_size;
		struct mutex mutex;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/steering/dr_icm_pool.c 11 */;
}
