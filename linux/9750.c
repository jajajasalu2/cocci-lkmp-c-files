cocci_test_suite() {
	struct iwl_fw_dbg_trigger_mlme *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 996 */;
	struct iwl_fw_dbg_trigger_tlv *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 995 */;
	struct iwl_fw_dbg_trigger_txq_timer *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 941 */;
	struct iwl_sta_iter_data cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 925 */;
	struct iwl_sta_iter_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 914 */;
	struct iwl_sta_iter_data {
		bool assoc;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 907 */;
	struct iwl_bss_iter_data cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 893 */;
	struct iwl_bss_iter_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 878 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 876 */;
	u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 875 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 875 */;
	struct iwl_bss_iter_data {
		struct ieee80211_vif *vif;
		bool error;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 870 */;
	struct iwl_mvm_low_latency_iter cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 850 */;
	struct iwl_mvm_low_latency_iter *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 833 */;
	struct iwl_mvm_low_latency_iter {
		bool result;
		bool result_per_band[NUM_NL80211_BANDS];
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 826 */;
	enum iwl_mvm_low_latency_cause cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 799 */;
	struct iwl_mac_low_latency_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 777 */;
	struct iwl_host_cmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 77 */;
	bool *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 745 */;
	struct iwl_mvm_vif *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 744 */;
	struct iwl_mvm *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 733 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 733 */;
	struct iwl_host_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 712 */;
	struct iwl_statistics_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 709 */;
	enum ieee80211_smps_mode cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 676 */;
	enum iwl_mvm_smps_type_request cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 675 */;
	struct iwl_lq_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 654 */;
	struct iwl_lq_cmd *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 650 */;
	struct iwl_scd_txq_cfg_cmd cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 612 */;
	struct iwl_error_event_table cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 504 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 503 */;
	struct iwl_umac_error_event_table cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 465 */;
	struct iwl_umac_error_event_table {
		u32 valid;
		u32 error_id;
		u32 blink1;
		u32 blink2;
		u32 ilink1;
		u32 ilink2;
		u32 data1;
		u32 data2;
		u32 data3;
		u32 umac_major;
		u32 umac_minor;
		u32 frame_pointer;
		u32 stack_pointer;
		u32 cmd_header;
		u32 nic_isr_pref;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 441 */;
	struct iwl_error_event_table {
		u32 valid;
		u32 error_id;
		u32 trm_hw_status0;
		u32 trm_hw_status1;
		u32 blink2;
		u32 ilink1;
		u32 ilink2;
		u32 data1;
		u32 data2;
		u32 data3;
		u32 bcon_time;
		u32 tsf_low;
		u32 tsf_hi;
		u32 gp1;
		u32 gp2;
		u32 fw_rev_type;
		u32 major;
		u32 minor;
		u32 hw_ver;
		u32 brd_ver;
		u32 log_pc;
		u32 frame_ptr;
		u32 stack_ptr;
		u32 hcmd;
		u32 isr0;
		u32 isr1;
		u32 isr2;
		u32 isr3;
		u32 isr4;
		u32 last_cmd_id;
		u32 wait_event;
		u32 l2p_control;
		u32 l2p_duration;
		u32 l2p_mhvalid;
		u32 l2p_addr_match;
		u32 lmpm_pmg_sel;
		u32 u_timestamp;
		u32 flow_handler;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 386 */;
	struct iwl_error_event_table_v1 {
		u32 valid;
		u32 error_id;
		u32 pc;
		u32 blink1;
		u32 blink2;
		u32 ilink1;
		u32 ilink2;
		u32 data1;
		u32 data2;
		u32 data3;
		u32 bcon_time;
		u32 tsf_low;
		u32 tsf_hi;
		u32 gp1;
		u32 gp2;
		u32 gp3;
		u32 ucode_ver;
		u32 hw_ver;
		u32 brd_ver;
		u32 log_pc;
		u32 frame_ptr;
		u32 stack_ptr;
		u32 hcmd;
		u32 isr0;
		u32 isr1;
		u32 isr2;
		u32 isr3;
		u32 isr4;
		u32 isr_pref;
		u32 wait_event;
		u32 l2p_control;
		u32 l2p_duration;
		u32 l2p_mhvalid;
		u32 l2p_addr_match;
		u32 lmpm_pmg_sel;
		u32 u_timestamp;
		u32 flow_handler;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 339 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 323 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 321 */;
	const char *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 321 */;
	const struct {
		const char *name;
		u8 num;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 295 */[];
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 265 */;
	struct iwl_error_resp *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 250 */;
	struct iwl_rx_packet *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 249 */;
	struct iwl_rx_cmd_buffer *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 247 */;
	const u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 237 */[];
	enum ieee80211_ac_numbers cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 235 */;
	enum nl80211_band cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 213 */;
	const u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 197 */[IWL_RATE_COUNT];
	u64 *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1441 */;
	u32 *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1441 */;
	struct iwl_mvm cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1365 */;
	struct delayed_work *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1364 */;
	struct iwl_cmd_response *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 130 */;
	struct iwl_mvm_tcm_mac *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1246 */;
	enum iwl_mvm_traffic_load cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1230 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1227 */[NUM_MAC_INDEX_DRIVER];
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1226 */[NUM_NL80211_BANDS];
	unsigned int cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1222 */;
	bool cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1220 */;
	unsigned long cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1218 */;
	u64 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1167 */;
	struct ieee80211_vif cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1120 */;
	struct iwl_mvm_vif cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1118 */;
	struct work_struct *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1112 */;
	const void *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 111 */;
	struct iwl_mvm_tcm_iter_data cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1095 */;
	struct iwl_mvm_tcm_iter_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1066 */;
	struct iwl_mvm_tcm_iter_data {
		struct iwl_mvm *mvm;
		bool any_sent;
	} cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1059 */;
	struct iwl_fw_dbg_trigger_ba *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1021 */;
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1018 */;
	const struct ieee80211_sta *cocci_id/* drivers/net/wireless/intel/iwlwifi/mvm/utils.c 1017 */;
}
