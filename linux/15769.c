cocci_test_suite() {
	struct wilc_noa_opp_disable {
		u8 cnt;
		__le32 duration;
		__le32 interval;
		__le32 start_time;
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 97 */;
	struct wilc_priv *cocci_id/* drivers/staging/wilc1000/hif.c 952 */;
	u64 cocci_id/* drivers/staging/wilc1000/hif.c 946 */;
	s8 cocci_id/* drivers/staging/wilc1000/hif.c 930 */;
	u8 cocci_id/* drivers/staging/wilc1000/hif.c 908 */;
	struct wilc_remain_ch *cocci_id/* drivers/staging/wilc1000/hif.c 905 */;
	struct ieee80211_ht_cap cocci_id/* drivers/staging/wilc1000/hif.c 893 */;
	struct wilc_noa_opp_enable {
		u8 ct_window;
		u8 cnt;
		__le32 duration;
		__le32 interval;
		__le32 start_time;
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 89 */;
	struct rf_info *cocci_id/* drivers/staging/wilc1000/hif.c 868 */;
	struct wid cocci_id/* drivers/staging/wilc1000/hif.c 816 */[5];
	struct host_if_msg {
		union wilc_message_body body;
		struct wilc_vif *vif;
		struct work_struct work;
		void (*fn)(struct work_struct *ws);
		struct completion work_comp;
		bool is_sync;
	} cocci_id/* drivers/staging/wilc1000/hif.c 80 */;
	struct wilc_rcvd_mac_info *cocci_id/* drivers/staging/wilc1000/hif.c 736 */;
	union wilc_message_body {
		struct wilc_rcvd_net_info net_info;
		struct wilc_rcvd_mac_info mac_info;
		struct wilc_set_multicast mc_info;
		struct wilc_remain_ch remain_on_ch;
		char *data;
	} cocci_id/* drivers/staging/wilc1000/hif.c 72 */;
	s32 cocci_id/* drivers/staging/wilc1000/hif.c 676 */;
	struct wilc_conn_info *cocci_id/* drivers/staging/wilc1000/hif.c 664 */;
	struct assoc_resp *cocci_id/* drivers/staging/wilc1000/hif.c 643 */;
	struct wilc_gtk_key {
		u8 mac_addr[ETH_ALEN];
		u8 rsc[8];
		u8 index;
		u8 key_len;
		u8 key[0];
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 64 */;
	u32 *cocci_id/* drivers/staging/wilc1000/hif.c 618 */;
	u32 cocci_id/* drivers/staging/wilc1000/hif.c 617 */;
	struct ieee80211_mgmt cocci_id/* drivers/staging/wilc1000/hif.c 591 */;
	size_t cocci_id/* drivers/staging/wilc1000/hif.c 588 */;
	u8 *cocci_id/* drivers/staging/wilc1000/hif.c 586 */;
	const u8 *cocci_id/* drivers/staging/wilc1000/hif.c 585 */;
	struct wilc_user_scan_req *cocci_id/* drivers/staging/wilc1000/hif.c 584 */;
	struct wilc_rcvd_net_info *cocci_id/* drivers/staging/wilc1000/hif.c 583 */;
	struct wilc_ap_wpa_ptk {
		u8 mac_addr[ETH_ALEN];
		u8 index;
		u8 key_len;
		u8 key[0];
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 57 */;
	struct ieee80211_wmm_param_ie *cocci_id/* drivers/staging/wilc1000/hif.c 535 */;
	struct wilc_sta_wpa_ptk {
		u8 mac_addr[ETH_ALEN];
		u8 key_len;
		u8 key[0];
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 51 */;
	const struct cfg80211_bss_ies *cocci_id/* drivers/staging/wilc1000/hif.c 454 */;
	struct wilc_wep_key {
		u8 index;
		u8 key_len;
		u8 key[0];
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 45 */;
	struct ieee80211_p2p_noa_attr cocci_id/* drivers/staging/wilc1000/hif.c 449 */;
	struct wilc_join_bss_param *cocci_id/* drivers/staging/wilc1000/hif.c 448 */;
	struct cfg80211_crypto_settings *cocci_id/* drivers/staging/wilc1000/hif.c 446 */;
	struct cfg80211_bss *cocci_id/* drivers/staging/wilc1000/hif.c 445 */;
	void *cocci_id/* drivers/staging/wilc1000/hif.c 445 */;
	char cocci_id/* drivers/staging/wilc1000/hif.c 431 */;
	s8 *cocci_id/* drivers/staging/wilc1000/hif.c 430 */;
	struct host_if_drv *cocci_id/* drivers/staging/wilc1000/hif.c 410 */;
	u16 cocci_id/* drivers/staging/wilc1000/hif.c 409 */;
	struct wid cocci_id/* drivers/staging/wilc1000/hif.c 408 */;
	int cocci_id/* drivers/staging/wilc1000/hif.c 407 */;
	struct host_if_msg cocci_id/* drivers/staging/wilc1000/hif.c 405 */;
	struct host_if_msg *cocci_id/* drivers/staging/wilc1000/hif.c 405 */;
	struct work_struct *cocci_id/* drivers/staging/wilc1000/hif.c 403 */;
	struct wilc_drv_handler {
		__le32 handler;
		u8 mode;
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 40 */;
	struct wilc_reg_frame {
		u8 reg;
		u8 reg_id;
		__le16 frame_type;
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 34 */;
	struct wilc_op_mode {
		__le32 mode;
	} cocci_id/* drivers/staging/wilc1000/hif.c 30 */;
	struct wilc_del_all_sta {
		u8 assoc_sta;
		u8 mac[WILC_MAX_NUM_STA][ETH_ALEN];
	} cocci_id/* drivers/staging/wilc1000/hif.c 25 */;
	struct cfg80211_scan_request *cocci_id/* drivers/staging/wilc1000/hif.c 239 */;
	void (*cocci_id/* drivers/staging/wilc1000/hif.c 237 */)(enum scan_event,
								 struct wilc_rcvd_net_info *,
								 void *);
	enum scan_event cocci_id/* drivers/staging/wilc1000/hif.c 199 */;
	struct wilc_del_all_sta cocci_id/* drivers/staging/wilc1000/hif.c 1931 */;
	u8 cocci_id/* drivers/staging/wilc1000/hif.c 1925 */[][ETH_ALEN];
	struct wilc_set_multicast {
		u32 enabled;
		u32 cnt;
		u8 *mc_list;
	} cocci_id/* drivers/staging/wilc1000/hif.c 19 */;
	struct station_parameters *cocci_id/* drivers/staging/wilc1000/hif.c 1874 */;
	struct wilc *cocci_id/* drivers/staging/wilc1000/hif.c 183 */;
	struct cfg80211_beacon_data *cocci_id/* drivers/staging/wilc1000/hif.c 1815 */;
	struct wilc_reg_frame cocci_id/* drivers/staging/wilc1000/hif.c 1784 */;
	struct wilc_remain_ch cocci_id/* drivers/staging/wilc1000/hif.c 1752 */;
	void (*cocci_id/* drivers/staging/wilc1000/hif.c 1749 */)(void *, u64);
	struct net_device *cocci_id/* drivers/staging/wilc1000/hif.c 1563 */;
	struct host_if_drv **cocci_id/* drivers/staging/wilc1000/hif.c 1563 */;
	struct wilc_vif *cocci_id/* drivers/staging/wilc1000/hif.c 1550 */;
	struct timer_list *cocci_id/* drivers/staging/wilc1000/hif.c 1548 */;
	void cocci_id/* drivers/staging/wilc1000/hif.c 1548 */;
	struct wid cocci_id/* drivers/staging/wilc1000/hif.c 1513 */[4];
	struct cfg_param_attr *cocci_id/* drivers/staging/wilc1000/hif.c 1511 */;
	struct wilc_rcvd_mac_info {
		u8 status;
	} cocci_id/* drivers/staging/wilc1000/hif.c 15 */;
	char *cocci_id/* drivers/staging/wilc1000/hif.c 1499 */;
	struct wilc_drv_handler cocci_id/* drivers/staging/wilc1000/hif.c 1421 */;
	bool cocci_id/* drivers/staging/wilc1000/hif.c 137 */;
	void (*cocci_id/* drivers/staging/wilc1000/hif.c 136 */)(struct work_struct *);
	struct wilc_pmkid cocci_id/* drivers/staging/wilc1000/hif.c 1343 */;
	struct wilc_pmkid_attr *cocci_id/* drivers/staging/wilc1000/hif.c 1337 */;
	struct wilc_gtk_key *cocci_id/* drivers/staging/wilc1000/hif.c 1283 */;
	struct wilc_sta_wpa_ptk *cocci_id/* drivers/staging/wilc1000/hif.c 1248 */;
	struct wilc_ap_wpa_ptk *cocci_id/* drivers/staging/wilc1000/hif.c 1215 */;
	struct wid cocci_id/* drivers/staging/wilc1000/hif.c 1214 */[2];
	struct wilc_wep_key *cocci_id/* drivers/staging/wilc1000/hif.c 1172 */;
	struct wid cocci_id/* drivers/staging/wilc1000/hif.c 1170 */[3];
	enum authtype cocci_id/* drivers/staging/wilc1000/hif.c 1168 */;
	struct wilc_join_bss_param {
		char ssid[IEEE80211_MAX_SSID_LEN];
		u8 ssid_terminator;
		u8 bss_type;
		u8 ch;
		__le16 cap_info;
		u8 sa[ETH_ALEN];
		u8 bssid[ETH_ALEN];
		__le16 beacon_period;
		u8 dtim_period;
		u8 supp_rates[WILC_MAX_RATES_SUPPORTED + 1];
		u8 wmm_cap;
		u8 uapsd_cap;
		u8 ht_capable;
		u8 rsn_found;
		u8 rsn_grp_policy;
		u8 mode_802_11i;
		u8 p_suites[3];
		u8 akm_suites[3];
		u8 rsn_cap[2];
		u8 noa_enabled;
		__le32 tsf_lo;
		u8 idx;
		u8 opp_enabled;
		union {
			struct wilc_noa_opp_disable opp_dis;
			struct wilc_noa_opp_enable opp_en;
		};
	}__packed cocci_id/* drivers/staging/wilc1000/hif.c 104 */;
	struct wilc_set_multicast cocci_id/* drivers/staging/wilc1000/hif.c 1027 */;
	struct wilc_set_multicast *cocci_id/* drivers/staging/wilc1000/hif.c 1020 */;
}
