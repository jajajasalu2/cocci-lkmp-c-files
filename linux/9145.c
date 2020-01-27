cocci_test_suite() {
	struct mlxsw_afk_picker {
		struct {
		DECLARE_BITMAP(element,MLXSW_AFK_ELEMENT_MAX)
			;
			unsigned int total;
		} hits[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 98 */;
	struct mlxsw_afk_key_info {
		struct list_head list;
		unsigned int ref_count;
		unsigned int blocks_count;
		int element_to_block[MLXSW_AFK_ELEMENT_MAX];
		struct mlxsw_afk_element_usage elusage;
		const struct mlxsw_afk_block *blocks[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 67 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 462 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 462 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 432 */[MLXSW_SP_AFK_KEY_BLOCK_MAX_SIZE];
	const struct mlxsw_afk_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 43 */;
	struct mlxsw_afk_element_values *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 427 */;
	struct mlxsw_afk_key_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 426 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 42 */;
	const struct mlxsw_item *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 372 */;
	const struct mlxsw_afk_element_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 370 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 367 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 349 */;
	const struct mlxsw_afk_key_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 333 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 332 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 313 */;
	struct mlxsw_afk_element_inst *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 301 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 298 */;
	enum mlxsw_afk_element cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 296 */;
	const struct mlxsw_afk_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 295 */;
	const struct mlxsw_afk_element_inst *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 294 */;
	struct mlxsw_afk_element_usage *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 237 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 20 */;
	struct mlxsw_afk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 20 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 190 */;
	struct mlxsw_afk_picker *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 188 */;
	struct mlxsw_afk {
		struct list_head key_info_list;
		unsigned int max_blocks;
		const struct mlxsw_afk_ops *ops;
		const struct mlxsw_afk_block *blocks;
		unsigned int blocks_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_keys.c 12 */;
}
