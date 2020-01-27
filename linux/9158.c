cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 93 */(struct mlxsw_sp_acl_erp_table *erp_table,
										     struct mlxsw_sp_acl_erp *erp);
	struct mlxsw_sp_acl_erp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 90 */(struct mlxsw_sp_acl_erp_table *erp_table,
													 struct mlxsw_sp_acl_erp_key *key);
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 804 */;
	struct mlxsw_sp_acl_erp_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 794 */;
	unsigned int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 736 */;
	struct mlxsw_sp_acl_erp_table *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 735 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 734 */;
	struct mlxsw_sp_acl_erp_table_ops {
		struct mlxsw_sp_acl_erp *(*erp_create)(struct mlxsw_sp_acl_erp_table *erp_table,
						       struct mlxsw_sp_acl_erp_key *key);
		void (*erp_destroy)(struct mlxsw_sp_acl_erp_table *erp_table,
				    struct mlxsw_sp_acl_erp *erp);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 70 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 698 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 650 */[MLXSW_REG_PERERP_LEN];
	struct mlxsw_sp_acl_erp_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 628 */;
	struct mlxsw_sp_acl_erp_table {
		struct mlxsw_sp_acl_erp_master_mask master_mask;
	DECLARE_BITMAP(erp_id_bitmap,MLXSW_SP_ACL_ERP_MAX_PER_REGION)
		;
	DECLARE_BITMAP(erp_index_bitmap,MLXSW_SP_ACL_ERP_MAX_PER_REGION)
		;
		struct list_head atcam_erps_list;
		struct mlxsw_sp_acl_erp_core *erp_core;
		struct mlxsw_sp_acl_atcam_region *aregion;
		const struct mlxsw_sp_acl_erp_table_ops *ops;
		unsigned long base_index;
		unsigned int num_atcam_erps;
		unsigned int num_max_atcam_erps;
		unsigned int num_ctcam_erps;
		unsigned int num_deltas;
		struct objagg *objagg;
		struct mutex objagg_lock;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 53 */;
	struct mlxsw_sp_acl_atcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 528 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 527 */;
	struct mlxsw_sp_acl_atcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 526 */;
	struct mlxsw_sp_acl_erp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 524 */;
	struct mlxsw_sp_acl_erp_master_mask {
	DECLARE_BITMAP(bitmap,MLXSW_SP_ACL_TCAM_MASK_LEN)
		;
		unsigned int count[MLXSW_SP_ACL_TCAM_MASK_LEN];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 48 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 404 */[MLXSW_REG_PTCEX_FLEX_KEY_BLOCKS_LEN];
	struct mlxsw_sp_acl_erp {
		struct mlxsw_sp_acl_erp_key key;
		u8 id;
		u8 index;
	DECLARE_BITMAP(mask_bitmap,MLXSW_SP_ACL_TCAM_MASK_LEN)
		;
		struct list_head list;
		struct mlxsw_sp_acl_erp_table *erp_table;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 39 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 388 */[MLXSW_REG_PERPT_LEN];
	enum mlxsw_reg_perpt_key_size cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 387 */;
	struct mlxsw_sp_acl_erp cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 343 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 328 */;
	struct mlxsw_sp_acl_erp_key {
		char mask[MLXSW_REG_PTCEX_FLEX_KEY_BLOCKS_LEN];
#define __MASK_LEN 0x38
#define __MASK_IDX (i)(__MASK_LEN - (i) - 1)
				bool ctcam;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 32 */;
	unsigned long *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 301 */;
	enum mlxsw_sp_acl_atcam_region_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 300 */;
	struct mlxsw_sp_acl_erp_core {
		unsigned int erpt_entries_size[MLXSW_SP_ACL_ATCAM_REGION_TYPE_MAX + 1];
		struct gen_pool *erp_tables;
		struct mlxsw_sp *mlxsw_sp;
		struct mlxsw_sp_acl_bf *bf;
		unsigned int num_erp_banks;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 24 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 186 */;
	struct mlxsw_sp_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 183 */;
	struct mlxsw_sp_acl_erp_master_mask *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 174 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 173 */;
	struct mlxsw_sp_acl_atcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1595 */;
	const struct objagg_stats *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1383 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1380 */;
	struct objagg_hints *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1380 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1360 */[MLXSW_REG_PERCR_LEN];
	const struct mlxsw_sp_acl_erp_table *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 134 */;
	const struct objagg_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1306 */;
	const struct mlxsw_sp_acl_erp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 128 */;
	struct mlxsw_sp_acl_erp_delta *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1237 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1210 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1209 */;
	const struct mlxsw_sp_acl_erp_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1207 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1204 */;
	const void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1204 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1204 */;
	unsigned char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1181 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1156 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1156 */;
	const struct mlxsw_sp_acl_erp_mask *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1142 */;
	const struct mlxsw_sp_acl_erp_delta *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1141 */;
	const struct mlxsw_sp_acl_erp_delta cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1138 */;
	unsigned char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1123 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1119 */;
	struct mlxsw_sp_acl_erp_delta {
		struct mlxsw_sp_acl_erp_key key;
		u16 start;
		u8 mask;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1084 */;
	struct objagg_obj *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1036 */;
	struct mlxsw_sp_acl_erp_mask *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1033 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1031 */;
	struct mlxsw_sp_acl_erp_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 1007 */;
	const struct mlxsw_sp_acl_erp_table_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_erp.c 100 */;
}
