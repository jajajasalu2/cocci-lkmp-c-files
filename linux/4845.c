cocci_test_suite() {
	void cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 87 */;
	struct mlx4_ib_ucontext cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 51 */;
	struct mlx4_ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 50 */;
	struct mlx4_ib_user_db_page *cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 48 */;
	struct mlx4_db *cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 46 */;
	struct ib_udata *cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 45 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 45 */;
	int cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 45 */;
	struct mlx4_ib_user_db_page {
		struct list_head list;
		struct ib_umem *umem;
		unsigned long user_virt;
		int refcnt;
	} cocci_id/* drivers/infiniband/hw/mlx4/doorbell.c 38 */;
}
