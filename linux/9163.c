cocci_test_suite() {
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 62 */;
	struct mlxsw_sp2_kvdl {
		struct mlxsw_sp2_kvdl_part *parts[MLXSW_SP2_KVDL_PARTS_INFO_LEN];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 51 */;
	struct mlxsw_sp2_kvdl_part {
		const struct mlxsw_sp2_kvdl_part_info *info;
		unsigned int usage_bit_count;
		unsigned int indexes_per_usage_bit;
		unsigned int last_allocated_bit;
		unsigned long usage[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 43 */;
	const struct mlxsw_sp2_kvdl_part_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 32 */[];
	struct mlxsw_sp2_kvdl cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 266 */;
	const struct mlxsw_sp_kvdl_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 265 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 258 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 204 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 186 */;
	const struct mlxsw_sp2_kvdl_part_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 180 */;
	unsigned int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 172 */;
	struct mlxsw_sp2_kvdl_part *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 151 */;
	struct mlxsw_sp2_kvdl *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 150 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 147 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 146 */;
	enum mlxsw_sp_kvdl_entry_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 145 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 144 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 144 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 144 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 125 */;
	struct mlxsw_sp2_kvdl_part_info {
		u8 res_type;
		enum mlxsw_res_id usage_bit_count_res_id;
		enum mlxsw_res_id index_range_res_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 12 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 109 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 107 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_kvdl.c 106 */;
}
