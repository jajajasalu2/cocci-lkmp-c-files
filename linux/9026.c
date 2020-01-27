cocci_test_suite() {
	unsigned long *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 79 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 79 */;
	struct mlx4_hwq_resources *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 774 */;
	struct mlx4_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 774 */;
	struct mlx4_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 717 */;
	struct mlx4_db *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 685 */;
	struct mlx4_db_pgdir *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 684 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 663 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 612 */;
	struct mlx4_buf *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 607 */;
	struct mlx4_bitmap *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 44 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 418 */;
	typeof(*curr_node) cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 397 */;
	struct mlx4_zone_allocator *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 341 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 337 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 336 */;
	struct mlx4_zone_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 336 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 336 */;
	typeof(*next) cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 293 */;
	enum mlx4_zone_alloc_flags cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 224 */;
	struct mlx4_zone_entry {
		struct list_head list;
		struct list_head prio_list;
		u32 uid;
		struct mlx4_zone_allocator *allocator;
		struct mlx4_bitmap *bitmap;
		int use_rr;
		int priority;
		int offset;
		enum mlx4_zone_flags flags;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 212 */;
	struct mlx4_zone_allocator {
		struct list_head entries;
		struct list_head prios;
		u32 last_uid;
		u32 mask;
		spinlock_t lock;
		enum mlx4_zone_alloc_flags flags;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx4/alloc.c 202 */;
}
