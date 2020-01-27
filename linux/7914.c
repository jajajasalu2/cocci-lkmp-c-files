cocci_test_suite() {
	u64 cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 813 */;
	struct sja1105_l2_lookup_params_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 811 */;
	u16 cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 809 */;
	const u8 *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 809 */;
	int cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 789 */;
	u8 cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 787 */;
	bool cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 730 */;
	u8 cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 650 */[SJA1105_MAX_DYN_CMD_SIZE];
	struct sja1105_dyn_cmd cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 648 */;
	const struct sja1105_dynamic_table_ops *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 647 */;
	void *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 645 */;
	enum sja1105_blk_idx cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 644 */;
	struct sja1105_private *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 643 */;
	struct sja1105_dynamic_table_ops cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 490 */[BLK_IDX_MAX_DYN];
	struct sja1105_general_params_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 476 */;
	struct sja1105_mac_config_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 404 */;
	const int cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 380 */;
	u8 *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 379 */;
	enum packing_op cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 377 */;
	struct sja1105_dyn_cmd *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 376 */;
	void cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 375 */;
	const size_t cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 308 */;
	struct sja1105_mgmt_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 307 */;
	struct sja1105_l2_lookup_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 283 */;
	size_t cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 280 */;
	enum sja1105_hostcmd{SJA1105_HOSTCMD_SEARCH=1, SJA1105_HOSTCMD_READ=2, SJA1105_HOSTCMD_WRITE=3, SJA1105_HOSTCMD_INVALIDATE=4,} cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 139 */;
	struct sja1105_dyn_cmd {
		bool search;
		u64 valid;
		u64 rdwrset;
		u64 errors;
		u64 valident;
		u64 index;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_dynamic_config.c 130 */;
}
