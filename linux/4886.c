cocci_test_suite() {
	struct devx_obj {
		struct mlx5_ib_dev *ib_dev;
		u64 obj_id;
		u32 dinlen;
		u32 dinbox[MLX5_MAX_DESTROY_INBOX_SIZE_DW];
		u32 flags;
		union {
			struct mlx5_ib_devx_mr devx_mr;
			struct mlx5_core_dct core_dct;
			struct mlx5_core_cq core_cq;
			u32 flow_counter_bulk_size;
		};
		struct list_head event_sub;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 93 */;
	struct mlx5_ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 899 */;
	struct devx_async_event_file {
		struct ib_uobject uobj;
		struct list_head subscribed_events_list;
		spinlock_t lock;
		wait_queue_head_t poll_wait;
		struct list_head event_list;
		struct mlx5_ib_dev *dev;
		u8 omit_data:1;
		u8 is_overflow_err:1;
		u8 is_destroyed:1;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 79 */;
	u16 *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 751 */;
	struct mlx5_ib_sq *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 622 */;
	struct mlx5_ib_rq *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 621 */;
	struct mlx5_ib_raw_packet_qp *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 619 */;
	enum ib_qp_type cocci_id/* drivers/infiniband/hw/mlx5/devx.c 615 */;
	struct mlx5_ib_qp *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 614 */;
	struct mlx5_core_srq *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 590 */;
	struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 573 */;
	struct devx_event_subscription {
		struct list_head file_list;
		struct list_head xa_list;
		struct list_head obj_list;
		struct list_head event_list;
		u8 is_cleaned:1;
		u32 xa_key_level1;
		u32 xa_key_level2;
		struct rcu_head rcu;
		u64 cookie;
		struct devx_async_event_file *ev_file;
		struct file *filp;
		struct eventfd_ctx *eventfd;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 57 */;
	struct devx_obj_event {
		struct rcu_head rcu;
		struct list_head obj_sub_list;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 52 */;
	struct devx_event {
		struct xarray object_ids;
		struct list_head unaffiliated_list;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 46 */;
	struct devx_async_event_data {
		struct list_head list;
		struct mlx5_ib_uapi_devx_async_event_hdr hdr;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 40 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 351 */;
	struct devx_async_data {
		struct mlx5_ib_dev *mdev;
		struct list_head list;
		struct ib_uobject *fd_uobj;
		struct mlx5_async_work cb_work;
		u16 cmd_out_len;
		struct mlx5_ib_uapi_devx_async_cmd_hdr hdr;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 30 */;
	const struct uapi_definition cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2946 */[];
	struct ib_device *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2939 */;
	enum mlx5_ib_uapi_devx_create_event_channel_flags cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2928 */;
	enum ib_access_flags cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2747 */;
	struct devx_async_event_file cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2723 */;
	enum rdma_remove_reason cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2701 */;
	struct mlx5_ib_dev *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2661 */;
	struct mlx5_ib_uapi_devx_async_event_hdr cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2611 */;
	struct devx_async_event_data cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2609 */;
	struct devx_event_subscription cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2603 */;
	void *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2565 */;
	bool cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2564 */;
	const struct file_operations cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2548 */;
	struct devx_async_event_queue *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2533 */;
	struct poll_table_struct *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2530 */;
	__poll_t cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2529 */;
	struct devx_async_data *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2517 */;
	struct devx_async_cmd_event_file cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2516 */;
	struct devx_async_cmd_event_file *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2515 */;
	struct ib_uobject *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2514 */;
	struct inode *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2512 */;
	struct file *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2512 */;
	struct mlx5_ib_uapi_devx_async_cmd_hdr cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2492 */;
	struct devx_async_data cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2490 */;
	loff_t *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2459 */;
	size_t cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2459 */;
	char __user *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2458 */;
	ssize_t cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2458 */;
	enum devx_obj_flags{DEVX_OBJ_FLAGS_INDIRECT_MKEY=1 << 0, DEVX_OBJ_FLAGS_DCT=1 << 1, DEVX_OBJ_FLAGS_CQ=1 << 2,} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 24 */;
	struct mlx5_ib_dev cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2395 */;
	struct mlx5_devx_event_table cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2394 */;
	u16 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2385 */;
	struct notifier_block *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2378 */;
	struct list_head *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2358 */;
	struct mlx5_eqe cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2338 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2321 */;
	struct devx_async_event_data *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2320 */;
	struct devx_async_event_file *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2319 */;
	const void *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2317 */;
	struct devx_event_subscription *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2316 */;
	int cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2316 */;
	struct mlx5_core_dev *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2257 */;
	struct devx_umem *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2244 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/devx.c 22 */(struct list_head *fd_list,
								const void *data);
	__be64 *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2171 */;
	struct devx_umem_reg_cmd *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2158 */;
	struct ib_ucontext *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 2110 */;
	int *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 174 */;
	struct mlx5_async_work *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1673 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 165 */[MLX5_ST_SZ_DW(destroy_uctx_in)];
	struct devx_async_cmd_event_file {
		struct ib_uobject uobj;
		struct devx_async_event_queue ev_queue;
		struct mlx5_async_ctx async_ctx;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1610 */;
	struct devx_async_event_queue {
		spinlock_t lock;
		wait_queue_head_t poll_wait;
		struct list_head event_list;
		atomic_t bytes_in_use;
		u8 is_destroyed:1;
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1602 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1386 */;
	struct mlx5_devx_event_table *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1383 */;
	struct devx_obj cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1382 */;
	struct devx_obj *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1382 */;
	struct mlx5_eqe *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1380 */;
	struct mlx5_core_cq *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1380 */;
	u32 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1340 */[MLX5_ST_SZ_DW(general_obj_out_cmd_hdr)];
	u32 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 132 */[MLX5_ST_SZ_DW(create_uctx_in)];
	struct devx_obj_event *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1311 */;
	struct devx_event *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1310 */;
	void cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1307 */;
	u8 cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1286 */;
	struct mlx5_core_mkey *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1259 */;
	struct mlx5_ib_devx_mr *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1258 */;
	const struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 125 */;
	struct devx_umem_reg_cmd {
		void *in;
		u32 inlen;
		u32 out[MLX5_ST_SZ_DW(general_obj_out_cmd_hdr)];
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 118 */;
	struct devx_umem {
		struct mlx5_core_dev *mdev;
		struct ib_umem *umem;
		u32 page_offset;
		int page_shift;
		int ncont;
		u32 dinlen;
		u32 dinbox[MLX5_ST_SZ_DW(general_obj_in_cmd_hdr)];
	} cocci_id/* drivers/infiniband/hw/mlx5/devx.c 108 */;
	u32 *cocci_id/* drivers/infiniband/hw/mlx5/devx.c 1074 */;
}
