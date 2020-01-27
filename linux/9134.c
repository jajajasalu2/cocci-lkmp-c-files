cocci_test_suite() {
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 66 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 66 */;
	struct mlx5_events {
		struct mlx5_core_dev *dev;
		struct workqueue_struct *wq;
		struct mlx5_event_nb notifiers[ARRAY_SIZE(events_nbs_ref)];
		struct atomic_notifier_head nh;
		struct mlx5_pme_stats pme_stats;
		struct work_struct pcie_core_work;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 54 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 400 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 356 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 356 */;
	struct mlx5_pme_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 320 */;
	struct mlx5_nb cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 29 */[];
	struct mlx5_events cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 272 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 270 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 265 */[MLX5_ST_SZ_DW(mpein_reg)];
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 263 */;
	enum{MLX5_PCI_POWER_COULD_NOT_BE_READ=0x0, MLX5_PCI_POWER_SUFFICIENT_REPORTED=0x1, MLX5_PCI_POWER_INSUFFICIENT_REPORTED=0x2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 257 */;
	struct mlx5_eqe_port_module *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 220 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 21 */(struct notifier_block *,
									      unsigned long,
									      void *);
	enum port_module_event_error_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 185 */;
	enum port_module_event_status_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 169 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 155 */;
	struct mlx5_eqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 142 */;
	struct mlx5_events *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 141 */;
	struct mlx5_event_nb cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 140 */;
	struct mlx5_event_nb *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 140 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 138 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 138 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 137 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 137 */;
	struct mlx5_event_nb {
		struct mlx5_nb nb;
		void *ctx;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/events.c 10 */;
}
