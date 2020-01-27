cocci_test_suite() {
	struct mlx5_hv_vhca_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 99 */;
	struct mlx5_hv_vhca {
		struct mlx5_core_dev *dev;
		struct workqueue_struct *work_queue;
		struct mlx5_hv_vhca_agent *agents[MLX5_HV_VHCA_AGENT_MAX];
		struct mutex agents_lock;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 9 */;
	struct mlx5_hv_vhca_work cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 76 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 70 */;
	struct mlx5_hv_vhca_data_block cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 345 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 336 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 320 */;
	struct mlx5_hv_vhca_data_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 319 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 296 */;
	struct mlx5_hv_vhca_agent {
		enum mlx5_hv_vhca_agent_type type;
		struct mlx5_hv_vhca *hv_vhca;
		void *priv;
		u16 seq;
		void (*control)(struct mlx5_hv_vhca_agent *agent,
				struct mlx5_hv_vhca_control_block *block);
		void (*invalidate)(struct mlx5_hv_vhca_agent *agent,
				   u64 block_mask);
		void (*cleanup)(struct mlx5_hv_vhca_agent *agent);
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 29 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 259 */;
	void (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 258 */)(struct mlx5_hv_vhca_agent *agent);
	void (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 256 */)(struct mlx5_hv_vhca_agent *,
											u64 block_mask);
	void (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 254 */)(struct mlx5_hv_vhca_agent *,
											struct mlx5_hv_vhca_control_block *block);
	enum mlx5_hv_vhca_agent_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 253 */;
	struct mlx5_hv_vhca *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 252 */;
	struct mlx5_hv_vhca_agent *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 251 */;
	struct mlx5_hv_vhca_data_block {
		u16 sequence;
		u16 offset;
		u8 reserved[4];
		u64 data[15];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 22 */;
	struct mlx5_hv_vhca_work {
		struct work_struct invalidate_work;
		struct mlx5_hv_vhca *hv_vhca;
		u64 block_mask;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 16 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 152 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 150 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 147 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 133 */;
	struct mlx5_hv_vhca_control_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/hv_vhca.c 115 */;
}
