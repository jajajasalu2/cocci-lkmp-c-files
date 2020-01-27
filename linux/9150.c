cocci_test_suite() {
	struct mlxsw_sp_acl_atcam_region_generic *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 97 */;
	const struct mlxsw_sp_acl_atcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 67 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 66 */;
	struct mlxsw_sp_acl_atcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 634 */;
	struct mlxsw_sp_acl_atcam_entry cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 62 */;
	struct mlxsw_sp_acl_atcam_entry_ht_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 61 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 60 */;
	struct mlxsw_sp_acl_rule_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 563 */;
	struct mlxsw_sp_acl_atcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 562 */;
	struct mlxsw_sp_acl_atcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 561 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 560 */;
	struct mlxsw_sp_acl_atcam_lkey_id cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 56 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 559 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 546 */;
	struct mlxsw_sp_acl_erp_mask *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 481 */;
	const struct mlxsw_sp_acl_erp_delta *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 480 */;
	struct mlxsw_sp_acl_atcam_region_12kb {
		struct rhashtable lkey_ht;
		unsigned int max_lkey_id;
		unsigned long *used_lkey_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 48 */;
	struct mlxsw_afk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 479 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 478 */[MLXSW_REG_PTCEX_FLEX_KEY_BLOCKS_LEN];
	struct mlxsw_sp_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 477 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 452 */[MLXSW_REG_PTCE3_LEN];
	struct mlxsw_sp_acl_atcam_region_generic {
		struct mlxsw_sp_acl_atcam_lkey_id dummy_lkey_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 44 */;
	struct mlxsw_sp_acl_atcam_chunk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 374 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 368 */;
	struct mlxsw_sp_acl_atcam_region_ops {
		int (*init)(struct mlxsw_sp_acl_atcam_region *aregion);
		void (*fini)(struct mlxsw_sp_acl_atcam_region *aregion);
		struct mlxsw_sp_acl_atcam_lkey_id *(*lkey_id_get)(struct mlxsw_sp_acl_atcam_region *aregion,
								  char *enc_key,
								  u8 erp_id);
		void (*lkey_id_put)(struct mlxsw_sp_acl_atcam_region *aregion,
				    struct mlxsw_sp_acl_atcam_lkey_id *lkey_id);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 34 */;
	const struct mlxsw_sp_acl_ctcam_region_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 322 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 321 */;
	enum mlxsw_sp_acl_atcam_region_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 296 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 279 */[MLXSW_REG_PERAR_LEN];
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 277 */;
	struct mlxsw_sp_acl_atcam_lkey_id {
		struct rhash_head ht_node;
		struct mlxsw_sp_acl_atcam_lkey_id_ht_key ht_key;
		refcount_t refcnt;
		u32 id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 27 */;
	const struct mlxsw_sp_acl_atcam_region_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 264 */[];
	const struct mlxsw_sp_acl_atcam_region_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 256 */;
	struct mlxsw_sp_acl_atcam_lkey_id_ht_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 228 */;
	struct mlxsw_sp_acl_atcam_region_12kb *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 226 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 224 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 224 */;
	struct mlxsw_sp_acl_atcam_lkey_id *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 222 */;
	struct mlxsw_sp_acl_atcam_lkey_id_ht_key {
		char enc_key[MLXSW_REG_PTCEX_FLEX_KEY_BLOCKS_LEN];
		u8 erp_id;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 22 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 174 */;
	struct mlxsw_sp_acl_atcam_lkey_id_ht_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 170 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 134 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 123 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_atcam.c 122 */;
}
