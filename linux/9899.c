cocci_test_suite() {
	const struct ath_btcoex_config cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 62 */;
	u8 *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 481 */;
	enum ath_stomp_type cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 454 */;
	struct ath_hw *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 453 */;
	void cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 453 */;
	const u32 cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 43 */[ATH_BTCOEX_STOMP_MAX][AR9300_NUM_WLAN_WEIGHTS];
	int cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 419 */;
	u32 cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 323 */;
	struct ath_btcoex_config {
		u8 bt_time_extend;
		bool bt_txstate_extend;
		bool bt_txframe_extend;
		enum ath_bt_mode bt_mode;
		bool bt_quiet_collision;
		bool bt_rxclear_polarity;
		u8 bt_priority_time;
		u8 bt_first_slot_time;
		bool bt_hold_rx_clear;
		u8 wl_active_time;
		u8 wl_qc_time;
	} cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 29 */;
	const u32 *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 280 */;
	bool cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 279 */;
	u8 cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 278 */[];
	struct ath9k_hw_mci *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 277 */;
	struct ath_btcoex_hw *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 225 */;
	enum ath_bt_mode{ATH_BT_COEX_MODE_LEGACY, ATH_BT_COEX_MODE_UNSLOTTED, ATH_BT_COEX_MODE_SLOTTED, ATH_BT_COEX_MODE_DISABLED,} cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 22 */;
	struct ath_common *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 139 */;
	struct ath9k_platform_data *cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 118 */;
	u8 cocci_id/* drivers/net/wireless/ath/ath9k/btcoex.c 114 */;
}
