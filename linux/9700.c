cocci_test_suite() {
	struct iwl_power_vec_entry {
		struct iwl_powertable_cmd cmd;
		u8 no_dtim;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 46 */;
	struct iwl_powertable_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 366 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 29 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 279 */;
	struct iwl_powertable_cmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 276 */;
	struct iwl_priv *cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 275 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 275 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 153 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 152 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 150 */[IWL_POWER_VEC_SIZE];
	const struct iwl_power_vec_entry *cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 149 */;
	enum iwl_power_level cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 147 */;
	const struct iwl_power_vec_entry cocci_id/* drivers/net/wireless/intel/iwlwifi/dvm/power.c 101 */[IWL_POWER_NUM];
}
