cocci_test_suite() {
	struct iwl_mvm_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 80 */;
	struct iwl_mvm_active_iface_iterator_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 79 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 77 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 76 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 76 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 76 */;
	struct iwl_mvm_active_iface_iterator_data {
		struct ieee80211_vif *ignore_vif;
		u8 sta_vif_ap_sta_id;
		enum iwl_sf_state sta_vif_state;
		u32 num_active_macs;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 65 */;
	struct iwl_mvm_active_iface_iterator_data cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 278 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 273 */;
	struct iwl_sf_cfg_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 214 */;
	enum iwl_sf_state cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 212 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 211 */;
	__le32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 195 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 156 */;
	struct ieee80211_sta *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 154 */;
	struct iwl_sf_cfg_cmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 153 */;
	struct iwl_mvm *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 152 */;
	const __le32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/sf.c 129 */[SF_NUM_SCENARIO][SF_NUM_TIMEOUT_TYPES];
}
