cocci_test_suite() {
	const void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 850 */;
	u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 735 */;
	struct ieee80211_sta_ht_cap *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 733 */;
	struct iwl_trans *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 731 */;
	struct ieee80211_supported_band *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 707 */;
	const struct iwl_eeprom_channel *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 572 */;
	const u8 **cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 477 */;
	const struct iwl_eeprom_channel **cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 476 */;
	int *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 475 */;
	const struct iwl_cfg *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 473 */;
	void *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 429 */;
	struct iwl_eeprom_enhanced_txpwr cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 422 */;
	__le16 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 419 */;
	struct device *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 412 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 396 */;
	enum nl80211_band cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 390 */;
	s8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 387 */;
	int cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 387 */;
	struct iwl_eeprom_enhanced_txpwr *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 386 */;
	struct iwl_nvm_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 385 */;
	void cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 384 */;
	const struct iwl_nvm_data *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 351 */;
	struct iwl_eeprom_enhanced_txpwr {
		u8 flags;
		u8 channel;
		s8 chain_a_max;
		s8 chain_b_max;
		s8 chain_c_max;
		u8 delta_20_in_40;
		s8 mimo2_max;
		s8 mimo3_max;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 340 */;
	enum iwl_eeprom_enhanced_txpwr_flags{IWL_EEPROM_ENH_TXP_FL_VALID=BIT(0), IWL_EEPROM_ENH_TXP_FL_BAND_52G=BIT(1), IWL_EEPROM_ENH_TXP_FL_OFDM=BIT(2), IWL_EEPROM_ENH_TXP_FL_40MHZ=BIT(3), IWL_EEPROM_ENH_TXP_FL_HT_AP=BIT(4), IWL_EEPROM_ENH_TXP_FL_RES1=BIT(5), IWL_EEPROM_ENH_TXP_FL_RES2=BIT(6), IWL_EEPROM_ENH_TXP_FL_COMMON_TYPE=BIT(7),} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 315 */;
	struct iwl_eeprom_channel {
		u8 flags;
		s8 max_power_avg;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 309 */;
	enum iwl_eeprom_channel_flags{EEPROM_CHANNEL_VALID=BIT(0), EEPROM_CHANNEL_IBSS=BIT(1), EEPROM_CHANNEL_ACTIVE=BIT(3), EEPROM_CHANNEL_RADAR=BIT(4), EEPROM_CHANNEL_WIDE=BIT(5), EEPROM_CHANNEL_DFS=BIT(7),} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 295 */;
	struct iwl_eeprom_calib_hdr *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 274 */;
	u16 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 213 */;
	u32 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 210 */;
	const u8 *cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 210 */;
	size_t cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 210 */;
	struct ieee80211_rate cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 179 */[];
	const u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 148 */[];
	const u8 cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 144 */[14];
	enum eeprom_sku_bits{EEPROM_SKU_CAP_BAND_24GHZ=BIT(4), EEPROM_SKU_CAP_BAND_52GHZ=BIT(5), EEPROM_SKU_CAP_11N_ENABLE=BIT(6), EEPROM_SKU_CAP_AMT_ENABLE=BIT(7), EEPROM_SKU_CAP_IPAN_ENABLE=BIT(8),} cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 120 */;
	struct iwl_eeprom_calib_hdr {
		u8 version;
		u8 pa_type;
		__le16 voltage;
	}__packed cocci_id/* drivers/net/wireless/intel/iwlwifi/iwl-eeprom-parse.c 106 */;
}
