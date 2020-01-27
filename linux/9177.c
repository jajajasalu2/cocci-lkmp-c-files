cocci_test_suite() {
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 76 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 75 */[MLXSW_REG_PGCR_LEN];
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 74 */[MLXSW_REG_PEFA_LEN];
	struct mlxsw_afa_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 73 */;
	struct mlxsw_sp_acl_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 70 */;
	const struct mlxsw_sp_acl_ctcam_region_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 63 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 50 */;
	struct mlxsw_sp_acl_erp_mask *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 37 */;
	struct mlxsw_sp_acl_atcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 36 */;
	struct mlxsw_sp_acl_atcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 35 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 33 */;
	struct mlxsw_sp_acl_ctcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 32 */;
	struct mlxsw_sp_acl_ctcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 31 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 30 */;
	struct mlxsw_sp2_acl_tcam_entry cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 265 */;
	struct mlxsw_sp2_acl_tcam_chunk cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 262 */;
	struct mlxsw_sp2_acl_tcam_region cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 256 */;
	struct mlxsw_sp2_acl_tcam cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 253 */;
	const struct mlxsw_sp_acl_tcam_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 251 */;
	struct mlxsw_sp2_acl_tcam_entry {
		struct mlxsw_sp_acl_atcam_entry aentry;
		struct mlxsw_afa_block *act_block;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 25 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 244 */;
	struct mlxsw_sp2_acl_tcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 233 */;
	struct mlxsw_sp_acl_rule_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 230 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 228 */;
	struct mlxsw_sp2_acl_tcam_chunk {
		struct mlxsw_sp_acl_atcam_chunk achunk;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 21 */;
	struct mlxsw_sp2_acl_tcam_chunk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 195 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 193 */;
	struct mlxsw_sp2_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 186 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 184 */;
	struct mlxsw_sp_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 166 */;
	struct mlxsw_sp2_acl_tcam_region {
		struct mlxsw_sp_acl_atcam_region aregion;
		struct mlxsw_sp_acl_tcam_region *region;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 16 */;
	struct mlxsw_sp2_acl_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 132 */;
	struct mlxsw_sp2_acl_tcam {
		struct mlxsw_sp_acl_atcam atcam;
		u32 kvdl_index;
		unsigned int kvdl_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum2_acl_tcam.c 10 */;
}
