cocci_test_suite() {
	enum mlxsw_sp_l3proto cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 84 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 65 */[MLXSW_REG_RMFT2_LEN];
	struct in6_addr cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 64 */;
	struct parman_item *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 61 */;
	struct mlxsw_sp1_mr_tcam_route cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 338 */;
	struct mlxsw_sp1_mr_tcam cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 335 */;
	const struct mlxsw_sp_mr_tcam_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 334 */;
	struct mlxsw_sp1_mr_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 328 */;
	struct mlxsw_sp1_mr_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 327 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 325 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 325 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 298 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 294 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 294 */;
	struct parman *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 243 */;
	struct parman_prio *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 242 */;
	enum mlxsw_reg_rtar_key_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 240 */;
	struct mlxsw_sp1_mr_tcam_route {
		struct parman_item parman_item;
		struct parman_prio *parman_prio;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 23 */;
	const struct parman_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 229 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 221 */[MLXSW_REG_RRCR_LEN];
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 215 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 204 */;
	struct mlxsw_sp1_mr_tcam {
		struct mlxsw_sp1_mr_tcam_region tcam_regions[MLXSW_SP_L3_PROTO_MAX];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 19 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 179 */[MLXSW_REG_RTAR_LEN];
	struct mlxsw_sp1_mr_tcam_route *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 128 */;
	enum mlxsw_sp_mr_route_prio cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 126 */;
	struct mlxsw_afa_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 125 */;
	struct mlxsw_sp_mr_route_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 124 */;
	struct mlxsw_sp1_mr_tcam_region {
		struct mlxsw_sp *mlxsw_sp;
		enum mlxsw_reg_rtar_key_type rtar_key_type;
		struct parman *parman;
		struct parman_prio *parman_prios;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum1_mr_tcam.c 12 */;
}
