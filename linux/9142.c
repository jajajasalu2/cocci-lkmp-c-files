cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 96 */[MLX5_MAX_IRQ_NAME];
	char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 82 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 76 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 76 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 59 */;
	struct mlx5_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 263 */;
	struct cpu_rmap *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 245 */;
	struct cpumask *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 238 */;
	struct mlx5_irq_table {
		struct mlx5_irq *irq;
		int nvec;
#ifdef CONFIG_RFS_ACCEL
		struct cpu_rmap *rmap;
#endif
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 21 */;
	struct mlx5_irq *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 199 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 196 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 196 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 196 */;
	struct mlx5_irq {
		struct atomic_notifier_head nh;
		cpumask_var_t mask;
		char name[MLX5_MAX_IRQ_NAME];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 15 */;
	struct mlx5_irq_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/pci_irq.c 130 */;
}
