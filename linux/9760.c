cocci_test_suite() {
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 86 */;
	struct iwl_mvm_quota_iterator_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 84 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 82 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 81 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 81 */;
	struct iwl_mvm_quota_iterator_data {
		int n_interfaces[MAX_BINDINGS];
		int colors[MAX_BINDINGS];
		int low_latency[MAX_BINDINGS];
#ifdef CONFIG_IWLWIFI_DEBUGFS
		int dbgfs_min[MAX_BINDINGS];
#endif
		int n_low_latency_bindings;
		struct ieee80211_vif *disabled_vif;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 70 */;
	struct iwl_mvm_quota_iterator_data cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 189 */;
	struct iwl_time_quota_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 187 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 184 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 165 */;
	struct iwl_time_quota_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 162 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 149 */;
	struct iwl_mvm_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 148 */;
	struct iwl_time_quota_cmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 145 */;
	struct iwl_mvm *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 144 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/quota.c 144 */;
}
