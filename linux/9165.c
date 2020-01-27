cocci_test_suite() {
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 993 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 986 */;
	struct mlxsw_sp_sb_port {
		struct mlxsw_sp_sb_cm ing_cms[MLXSW_SP_SB_ING_TC_COUNT];
		struct mlxsw_sp_sb_cm eg_cms[MLXSW_SP_SB_EG_TC_COUNT];
		struct mlxsw_sp_sb_pm *pms;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 94 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 921 */;
	const struct mlxsw_sp_sb_vals cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 886 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 871 */;
	const struct mlxsw_sp_sb_mm *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 852 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 846 */[MLXSW_REG_SBMM_LEN];
	const struct mlxsw_sp_sb_mm cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 826 */[];
	const struct mlxsw_sp_sb_pm *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 778 */;
	const struct mlxsw_sp_sb_pm cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 733 */[];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 670 */;
	const struct mlxsw_sp_sb_vals *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 664 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 662 */;
	const struct mlxsw_sp_sb_cm *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 661 */;
	enum mlxsw_reg_sbxx_dir cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 660 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 659 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 659 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 659 */;
	const struct mlxsw_sp_sb_pool_des cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 63 */[];
	const struct mlxsw_sp_sb_cm cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 574 */[];
	struct mlxsw_sp_sb_pool_des {
		enum mlxsw_reg_sbxx_dir dir;
		u8 pool;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 52 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 474 */[2];
	struct mlxsw_sp_sb_mm {
		u32 min_buff;
		u32 max_buff;
		u16 pool_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 46 */;
	const struct mlxsw_sp_sb_pr cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 428 */[];
	struct mlxsw_sp_sb_pm {
		u32 min_buff;
		u32 max_buff;
		struct mlxsw_cp_sb_occ occ;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 40 */;
	struct mlxsw_sp_sb_port cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 370 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 324 */[MLXSW_REG_PPTB_LEN];
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 305 */[MLXSW_REG_PBMC_LEN];
	const u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 300 */[];
	struct mlxsw_sp_sb_cm {
		u32 min_buff;
		u32 max_buff;
		u16 pool_index;
		struct mlxsw_cp_sb_occ occ;
		u8 freeze_pool:1,freeze_thresh:1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 28 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 252 */[MLXSW_REG_SBPM_LEN];
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 248 */;
	struct mlxsw_cp_sb_occ {
		u32 cur;
		u32 max;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 23 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 202 */[MLXSW_REG_SBCM_LEN];
	const struct mlxsw_sp_sb_pool_des *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 200 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 178 */[MLXSW_REG_SBPR_LEN];
	struct mlxsw_sp_sb_pr {
		enum mlxsw_reg_sbpr_mode mode;
		u32 size;
		u8 freeze_mode:1,freeze_size:1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 16 */;
	struct mlxsw_sp_sb_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 157 */;
	struct mlxsw_sp_sb_cm *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 153 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 145 */;
	enum devlink_sb_pool_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1409 */;
	struct mlxsw_sp_sb_pm *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1399 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1393 */;
	struct mlxsw_core_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1391 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1335 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1331 */;
	struct mlxsw_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1330 */;
	const struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 129 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1266 */;
	struct mlxsw_sp_sb_sr_occ_query_cb_ctx cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1265 */;
	struct mlxsw_sp_sb_sr_occ_query_cb_ctx {
		u8 masked_count;
		u8 local_port_1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1207 */;
	struct mlxsw_sp_sb_vals {
		unsigned int pool_count;
		const struct mlxsw_sp_sb_pool_des *pool_dess;
		const struct mlxsw_sp_sb_pm *pms;
		const struct mlxsw_sp_sb_pm *pms_cpu;
		const struct mlxsw_sp_sb_pr *prs;
		const struct mlxsw_sp_sb_mm *mms;
		const struct mlxsw_sp_sb_cm *cms_ingress;
		const struct mlxsw_sp_sb_cm *cms_egress;
		const struct mlxsw_sp_sb_cm *cms_cpu;
		unsigned int mms_count;
		unsigned int cms_ingress_count;
		unsigned int cms_egress_count;
		unsigned int cms_cpu_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 108 */;
	enum mlxsw_reg_sbpr_mode cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1033 */;
	const struct mlxsw_sp_sb_pr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1032 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1028 */;
	enum devlink_sb_threshold_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1020 */;
	struct mlxsw_sp_sb_pr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1014 */;
	struct devlink_sb_pool_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 1010 */;
	struct mlxsw_sp_sb {
		struct mlxsw_sp_sb_pr *prs;
		struct mlxsw_sp_sb_port *ports;
		u32 cell_size;
		u32 max_headroom_cells;
		u64 sb_size;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_buffers.c 100 */;
}
