cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 89 */;
	struct mlxsw_sp1_kvdl {
		struct mlxsw_sp1_kvdl_part *parts[MLXSW_SP1_KVDL_PARTS_INFO_LEN];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 66 */;
	struct mlxsw_sp1_kvdl_part {
		struct mlxsw_sp1_kvdl_part_info info;
		unsigned long usage[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 61 */;
	const struct mlxsw_sp1_kvdl_part_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 53 */[];
	enum mlxsw_sp1_kvdl_part_id{MLXSW_SP1_KVDL_PART_ID_SINGLE, MLXSW_SP1_KVDL_PART_ID_CHUNKS, MLXSW_SP1_KVDL_PART_ID_LARGE_CHUNKS,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 39 */;
	struct devlink_resource_size_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 389 */;
	struct mlxsw_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 386 */;
	struct mlxsw_sp1_kvdl cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 378 */;
	const struct mlxsw_sp_kvdl_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 377 */;
	struct devlink *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 363 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 361 */;
	const struct mlxsw_sp1_kvdl *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 317 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 315 */;
	struct mlxsw_sp1_kvdl_part_info {
		unsigned int part_index;
		unsigned int start_index;
		unsigned int end_index;
		unsigned int alloc_size;
		enum mlxsw_sp_resource_id resource_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 31 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 228 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 216 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 214 */;
	unsigned int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 181 */;
	struct mlxsw_sp1_kvdl_part *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 152 */;
	struct mlxsw_sp1_kvdl *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 151 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 149 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 148 */;
	enum mlxsw_sp_kvdl_entry_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 147 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 146 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 146 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 146 */;
	const struct mlxsw_sp1_kvdl_part_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_kvdl.c 121 */;
}
