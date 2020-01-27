cocci_test_suite() {
	const struct carl9170_phy_freq_entry cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 712 */[];
	struct carl9170_phy_freq_entry {
		u16 freq;
		struct carl9170_phy_freq_params params[__CARL9170_NUM_BW];
	} cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 706 */;
	enum carl9170_bw{CARL9170_BW_20, CARL9170_BW_40_BELOW, CARL9170_BW_40_ABOVE, __CARL9170_NUM_BW,} cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 698 */;
	struct carl9170_phy_freq_params {
		u8 coeff_exp;
		u16 coeff_man;
		u8 coeff_exp_shgi;
		u16 coeff_man_shgi;
	} cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 691 */;
	struct carl9170_phy_init cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 67 */[];
	struct carl9170_phy_init {
		u32 reg,_5ghz_20,_5ghz_40,_2ghz_40,_2ghz_20;
	} cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 63 */;
	struct carl9170_rf_initvals cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 593 */[];
	struct carl9170_rf_initvals {
		u32 reg,_5ghz,_2ghz;
	} cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 589 */;
	enum nl80211_band cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 543 */;
	struct ar9170_eeprom_modal *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 440 */;
	const u8 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 435 */[16];
	unsigned int cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 408 */;
	bool cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 406 */;
	struct carl9170_rf_init cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1575 */;
	struct carl9170_rf_init_result cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1574 */;
	enum nl80211_channel_type cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1571 */;
	u32 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1532 */[ARRAY_SIZE(phy_regs)];
	const u32 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1529 */[];
	u8 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1437 */[AR5416_MAX_NUM_TGT_PWRS];
	struct ar9170_calibration_target_power_ht *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1432 */;
	struct ar9170_calibration_target_power_legacy *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1431 */;
	struct ctl_modes cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1307 */[];
	struct ctl_modes {
		u8 ctl_mode;
		u8 max_power;
		u8 *pwr_cal_data;
		int pwr_cal_len;
	} *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1296 */;
	int cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1295 */;
	u8 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1293 */;
	u32 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1291 */;
	enum carl9170_bw cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1291 */;
	struct ar9170 *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1291 */;
	void cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1291 */;
	struct ar9170_calctl_edges cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1260 */[];
	struct ar9170_calibration_data_per_freq *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1157 */;
	u8 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1121 */[2][AR5416_PD_GAIN_ICEPTS];
	s32 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1068 */;
	u8 *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1055 */;
	u16 cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1039 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1035 */;
	const struct carl9170_phy_freq_params *cocci_id/* drivers/net/wireless/ath/carl9170/phy.c 1034 */;
}
