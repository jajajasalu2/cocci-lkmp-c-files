cocci_test_suite() {
	struct cm_sidr_generic_msg *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 93 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx4/cm.c 90 */;
	struct ib_mad *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 90 */;
	struct cm_req_msg {
		unsigned char unused[0x60];
		union ib_gid primary_path_sgid;
	} cocci_id/* drivers/infiniband/hw/mlx4/cm.c 69 */;
	struct cm_sidr_generic_msg {
		struct ib_mad_hdr hdr;
		__be32 request_id;
	} cocci_id/* drivers/infiniband/hw/mlx4/cm.c 64 */;
	struct cm_generic_msg {
		struct ib_mad_hdr hdr;
		__be32 local_comm_id;
		__be32 remote_comm_id;
	} cocci_id/* drivers/infiniband/hw/mlx4/cm.c 57 */;
	struct id_map_entry {
		struct rb_node node;
		u32 sl_cm_id;
		u32 pv_cm_id;
		int slave_id;
		int scheduled_delete;
		struct mlx4_ib_dev *dev;
		struct list_head list;
		struct delayed_work timeout;
	} cocci_id/* drivers/infiniband/hw/mlx4/cm.c 44 */;
	struct list_head cocci_id/* drivers/infiniband/hw/mlx4/cm.c 409 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx4/cm.c 292 */;
	int *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 272 */;
	struct id_map_entry cocci_id/* drivers/infiniband/hw/mlx4/cm.c 245 */;
	struct mlx4_ib_sriov *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 243 */;
	int cocci_id/* drivers/infiniband/hw/mlx4/cm.c 239 */;
	struct id_map_entry *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 238 */;
	struct rb_node **cocci_id/* drivers/infiniband/hw/mlx4/cm.c 209 */;
	struct rb_root *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 174 */;
	struct mlx4_ib_dev *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 172 */;
	struct delayed_work *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 169 */;
	struct work_struct *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 167 */;
	void cocci_id/* drivers/infiniband/hw/mlx4/cm.c 167 */;
	struct rb_node *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 147 */;
	struct cm_req_msg *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 137 */;
	union ib_gid cocci_id/* drivers/infiniband/hw/mlx4/cm.c 135 */;
	struct ib_device *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 135 */;
	struct cm_generic_msg *cocci_id/* drivers/infiniband/hw/mlx4/cm.c 100 */;
}
