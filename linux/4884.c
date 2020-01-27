cocci_test_suite() {
	void cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 87 */;
	struct mlx5_ib_user_db_page *cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 50 */;
	struct mlx5_db *cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 48 */;
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 47 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 47 */;
	struct mlx5_ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 46 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 46 */;
	struct mlx5_ib_user_db_page {
		struct list_head list;
		struct ib_umem *umem;
		unsigned long user_virt;
		int refcnt;
	} cocci_id/* drivers/infiniband/hw/mlx5/doorbell.c 39 */;
}
