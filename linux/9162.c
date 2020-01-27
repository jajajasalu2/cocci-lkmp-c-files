cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 99 */;
	struct mlxsw_sp_acl_rule_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 64 */;
	struct mlxsw_sp1_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 62 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 61 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 60 */;
	struct mlxsw_sp_acl_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 51 */;
	const struct mlxsw_sp_acl_ctcam_region_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 44 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 33 */;
	struct mlxsw_sp_acl_ctcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 32 */;
	struct mlxsw_sp_acl_ctcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 31 */;
	struct mlxsw_sp1_acl_tcam_entry {
		struct mlxsw_sp_acl_ctcam_entry centry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 26 */;
	struct mlxsw_sp1_acl_tcam_entry cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 249 */;
	struct mlxsw_sp1_acl_tcam_chunk cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 246 */;
	struct mlxsw_sp1_acl_tcam_region cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 242 */;
	const struct mlxsw_sp_acl_tcam_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 237 */;
	struct mlxsw_sp1_acl_tcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 228 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 225 */;
	struct mlxsw_sp1_acl_tcam_chunk {
		struct mlxsw_sp_acl_ctcam_chunk cchunk;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 22 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 210 */[MLXSW_REG_PTCE2_LEN];
	struct mlxsw_sp1_acl_tcam_chunk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 165 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 163 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 154 */;
	struct mlxsw_sp_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 148 */;
	struct mlxsw_sp1_acl_tcam_region {
		struct mlxsw_sp_acl_ctcam_region cregion;
		struct mlxsw_sp_acl_tcam_region *region;
		struct {
			struct mlxsw_sp_acl_ctcam_chunk cchunk;
			struct mlxsw_sp_acl_ctcam_entry centry;
			struct mlxsw_sp_acl_rule_info *rulei;
		} catchall;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_acl_tcam.c 12 */;
}
