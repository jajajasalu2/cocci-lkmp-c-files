cocci_test_suite() {
	struct rb_node **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 79 */;
	enum{MLX5_MAX_RECLAIM_TIME_MILI=5000, MLX5_NUM_4K_IN_PAGE=PAGE_SIZE / MLX5_ADAPTER_PAGE_SIZE,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 71 */;
	enum{MAX_RECLAIM_TIME_MSECS=5000, MAX_RECLAIM_VFS_PAGES_TIME_MSECS=2 * 1000 * 60,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 66 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 591 */;
	struct fw_page {
		struct rb_node rb_node;
		u64 addr;
		struct page *page;
		u16 func_id;
		unsigned long bitmask;
		struct list_head list;
		unsigned free_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 56 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 522 */;
	struct mlx5_cmd_layout *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 510 */;
	struct mlx5_cmd_prot_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 509 */;
	enum{MLX5_BLKS_FOR_RECLAIM_PAGES=12,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 503 */;
	s32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 490 */;
	struct mlx5_pages_req {
		struct mlx5_core_dev *dev;
		u16 func_id;
		u8 ec_function;
		s32 npages;
		struct work_struct work;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 48 */;
	struct mlx5_core_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 464 */;
	struct mlx5_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 463 */;
	struct mlx5_eqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 458 */;
	struct mlx5_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 457 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 453 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 452 */;
	enum{EC_FUNCTION_MASK=0x8000,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 448 */;
	struct mlx5_pages_req cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 431 */;
	struct mlx5_pages_req *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 431 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 429 */;
	enum{MLX5_PAGES_CANT_GIVE=0, MLX5_PAGES_GIVE=1, MLX5_PAGES_TAKE=2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 42 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 373 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 282 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 278 */[MLX5_ST_SZ_DW(manage_pages_out)];
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 276 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 261 */[MLX5_ST_SZ_DW(manage_pages_in)];
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 217 */;
	struct page *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 216 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 214 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 212 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 185 */;
	struct fw_page cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 167 */;
	unsigned cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 162 */;
	struct fw_page *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 161 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 159 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 159 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 159 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 140 */[MLX5_ST_SZ_DW(query_pages_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 139 */[MLX5_ST_SZ_DW(query_pages_out)];
	s32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 137 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 136 */;
	struct rb_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 117 */;
	struct rb_root *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pagealloc.c 116 */;
}
