cocci_test_suite() {
	union ib_gid cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 838 */;
	char cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 835 */[15];
	struct mlx4_alias_guid_work_context cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 812 */;
	struct ib_sa_query *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 803 */;
	struct mlx4_ib_dev cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 756 */;
	struct mlx4_ib_dev *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 756 */;
	struct mlx4_ib_sriov cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 754 */;
	struct mlx4_ib_sriov *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 753 */;
	struct mlx4_sriov_alias_guid *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 752 */;
	struct mlx4_sriov_alias_guid_port_rec_det cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 750 */;
	struct mlx4_sriov_alias_guid_port_rec_det *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 749 */;
	struct mlx4_next_alias_guid_work *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 748 */;
	int cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 747 */;
	struct delayed_work *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 746 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 744 */;
	void cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 744 */;
	int cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 72 */(struct mlx4_ib_dev *dev,
								     u8 port,
								     int *resched_delay_sec);
	struct mlx4_sriov_alias_guid_info_rec_det cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 696 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 695 */;
	int *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 692 */;
	struct mlx4_next_alias_guid_work {
		u8 port;
		u8 block_num;
		u8 method;
		struct mlx4_sriov_alias_guid_info_rec_det rec_det;
	} cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 65 */;
	struct mlx4_alias_guid_work_context {
		u8 port;
		struct mlx4_ib_dev *dev;
		struct ib_sa_query *sa_query;
		struct completion done;
		int query_id;
		struct list_head list;
		int block_num;
		ib_sa_comp_mask guid_indexes;
		u8 method;
	} cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 53 */;
	struct list_head *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 499 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 493 */;
	struct ib_sa_guidinfo_rec cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 491 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 486 */;
	u64 *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 464 */;
	__be64 *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 337 */;
	__be64 cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 332 */;
	unsigned int cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 300 */;
	ib_sa_comp_mask cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 298 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 297 */;
	struct mlx4_sriov_alias_guid_info_rec_det *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 296 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 294 */;
	struct mlx4_alias_guid_work_context *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 293 */;
	void *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 290 */;
	struct ib_sa_guidinfo_rec *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 289 */;
	unsigned long *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 214 */;
	enum slave_port_gen_event cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 196 */;
	enum slave_port_state cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 193 */;
	u8 *cocci_id/* drivers/infiniband/hw/mlx4/alias_GUID.c 188 */;
}
