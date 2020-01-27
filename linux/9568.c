cocci_test_suite() {
	const u32 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 959 */[2];
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 918 */;
	struct ieee80211_rx_status *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 916 */;
	u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 897 */;
	struct rtw_rx_pkt_stat *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 895 */;
	u8 *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 894 */;
	struct rtw_dev *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 894 */;
	void cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 894 */;
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 89 */;
	int cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 841 */;
	s8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 820 */;
	const u32 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 82 */[RTW_TXSCALE_SIZE];
	struct rtw_dm_info *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 819 */;
	u32 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 789 */;
	const struct rtw8822b_rfe_info *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 719 */;
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 472 */[15];
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 469 */[23];
	const struct rtw8822b_rfe_info cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 392 */[];
	struct rtw8822b_rfe_info {
		const struct cca_ccut *cca_ccut_2g;
		const struct cca_ccut *cca_ccut_5g;
		enum rtw_rfe_fem fem;
		bool ifem_ext;
		void (*rtw_set_channel_rfe)(struct rtw_dev *rtwdev,
					    u8 channel);
	} cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 369 */;
	u32 *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 362 */;
	const struct cca_ccut *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 361 */;
	const struct cca_ccut cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 349 */;
	struct cca_ccut {
		u32 reg82c[CCUT_IDX_NR];
		u32 reg830[CCUT_IDX_NR];
		u32 reg838[CCUT_IDX_NR];
	} cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 337 */;
	enum{CCUT_IDX_1R_2G, CCUT_IDX_2R_2G, CCUT_IDX_1R_5G, CCUT_IDX_2R_5G, CCUT_IDX_NR,} cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 329 */;
	struct rtw8822b_efuse *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 30 */;
	struct rtw_chip_info cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2374 */;
	const struct rtw_pwr_track_tbl cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2351 */;
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2339 */[RTW_PWR_TRK_TBL_SZ];
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2277 */[RTW_PWR_TRK_5G_NUM][RTW_PWR_TRK_TBL_SZ];
	const struct coex_rf_para cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2240 */[];
	const struct coex_5g_afh_map cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2228 */[];
	const u8 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2227 */[];
	const struct coex_tdma_para cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2201 */[];
	const struct coex_table_para cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2142 */[];
	struct rtw_chip_ops cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2080 */;
	struct rtw_rqpn cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2062 */[];
	struct rtw_page_table cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2054 */[];
	struct rtw_hw_reg cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2049 */[];
	const struct rtw_rfe_def cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2043 */[];
	struct rtw_intf_phy_para_table cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 2032 */;
	struct rtw_intf_phy_para cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1938 */[];
	struct rtw_pwr_seq_cmd *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1914 */[];
	void cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 18 */(struct rtw_dev *rtwdev,
									    u8 tx_path,
									    u8 rx_path,
									    bool is_tx2_path);
	struct rtw_pwr_seq_cmd cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1717 */[];
	bool cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1536 */;
	struct rtw_bfee *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1536 */;
	struct rtw_vif *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1535 */;
	struct rtw_swing_table cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1470 */;
	struct rtw_swing_table *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1445 */;
	s8 *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1359 */;
	struct rtw_hal *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 133 */;
	const u32 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1305 */[];
	const u16 cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1282 */[];
	struct rtw_efuse *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1234 */;
	struct rtw_coex_rfe *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1138 */;
	struct rtw_coex_dm *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1137 */;
	struct rtw_coex *cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1136 */;
	struct rtw_iqk_para cocci_id/* drivers/net/wireless/realtek/rtw88/rtw8822b.c 1082 */;
}
