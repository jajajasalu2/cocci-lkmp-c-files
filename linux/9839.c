cocci_test_suite() {
	size_t cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 961 */;
	u8 *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 960 */;
	struct station_info *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 959 */;
	struct wmi_connect_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 957 */;
	struct wireless_dev *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 956 */;
	struct cfg80211_scan_info cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 928 */;
	struct wmi_scan_complete_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 926 */;
	struct wmi_tx_mgmt_packet_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 913 */;
	struct wmi_tx_mgmt_packet_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 910 */;
	struct ieee80211_mgmt cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 880 */;
	u64 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 876 */;
	struct cfg80211_inform_bss cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 870 */;
	struct cfg80211_bss *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 869 */;
	__le16 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 826 */;
	s32 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 825 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 824 */;
	struct wmi_rx_mgmt_packet_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 821 */;
	struct ieee80211_mgmt *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 819 */;
	struct wmi_rx_mgmt_packet_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 817 */;
	const struct fw_map cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 80 */[];
	struct wmi_ready_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 784 */;
	struct wmi_ready_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 770 */;
	struct RGF_ICR cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 746 */;
	struct wil6210_mbox_ctl cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 710 */;
	uint cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 654 */;
	void __iomem *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 652 */;
	u32 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 651 */;
	struct wil6210_mbox_ring_desc cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 650 */;
	struct wil6210_mbox_ring *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 649 */;
	struct {
		struct wil6210_mbox_hdr hdr;
		struct wmi_cmd_hdr wmi;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 635 */;
	void *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 633 */;
	u8 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 632 */;
	u16 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 632 */;
	struct wil6210_priv *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 632 */;
	int cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 632 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_link_stats_config_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3960 */;
	struct wmi_link_stats_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3954 */;
	struct {
		struct wmi_cmd_hdr hdr;
		struct wmi_rx_desc_ring_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3919 */;
	struct wmi_bcast_desc_ring_add_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3910 */;
	struct {
		struct wmi_cmd_hdr hdr;
		struct wmi_tx_desc_ring_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3874 */;
	struct wmi_tx_desc_ring_add_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3859 */;
	struct wmi_rx_desc_ring_add_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3815 */;
	struct {
		struct wmi_cmd_hdr hdr;
		struct wmi_rx_status_ring_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3782 */;
	struct wmi_rx_status_ring_add_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3772 */;
	struct wil_status_ring *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3770 */;
	struct {
		struct wmi_cmd_hdr hdr;
		struct wmi_cfg_def_rx_offload_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3742 */;
	struct wmi_cfg_def_rx_offload_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3735 */;
	struct net_device *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3732 */;
	struct {
		struct wmi_cmd_hdr hdr;
		struct wmi_tx_status_ring_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3701 */;
	struct wmi_tx_status_ring_add_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3695 */;
	struct wmi_sw_tx_req_ext_cmd *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3642 */;
	struct ieee80211_hdr_3addr cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3606 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_sw_tx_complete_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3594 */;
	struct wmi_sw_tx_req_cmd *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3593 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_stop_sched_scan_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3563 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_start_sched_scan_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3522 */;
	struct wmi_start_sched_scan_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3518 */;
	struct cfg80211_sched_scan_request *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3514 */;
	struct cfg80211_sched_scan_plan *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3492 */;
	struct ieee80211_channel **cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3471 */;
	struct wmi_start_sched_scan_cmd *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3469 */;
	struct wmi_sched_scan_ssid_match *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3446 */;
	struct cfg80211_match_set *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3433 */;
	struct cfg80211_ssid *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3432 */;
	bool cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3396 */;
	struct pending_wmi_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3389 */;
	struct wil6210_priv cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3382 */;
	struct work_struct *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3380 */;
	ulong cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3362 */;
	struct list_head *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3360 */;
	const char *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 336 */;
	struct wmi_cmd_hdr *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3298 */;
	struct wmi_cmd_hdr cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3297 */;
	struct wil6210_mbox_hdr *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3291 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_port_deleted_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3249 */;
	struct wmi_port_delete_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3246 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_port_allocated_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3196 */;
	struct wmi_port_allocate_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3193 */;
	enum nl80211_iftype cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3190 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_traffic_resume_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3166 */;
	char cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3165 */[100];
	char *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3136 */;
	void cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3136 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_traffic_suspend_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3079 */;
	struct wmi_traffic_suspend_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3076 */;
	struct pending_wmi_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3044 */;
	struct wmi_new_sta_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 3026 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_get_mgmt_retry_limit_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2985 */;
	__le32 cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 298 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_set_mgmt_retry_limit_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2953 */;
	struct wmi_set_mgmt_retry_limit_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2950 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_ps_dev_profile_cfg_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2918 */;
	struct wmi_ps_dev_profile_cfg_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2915 */;
	enum wmi_ps_profile_type cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2911 */;
	struct wmi_rcp_addba_resp_edma_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2867 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_rcp_addba_resp_sent_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2827 */;
	struct wmi_rcp_addba_resp_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2815 */;
	struct wmi_rcp_delba_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2792 */;
	struct wmi_ring_ba_dis_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2780 */;
	struct wmi_ring_ba_en_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2765 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_disconnect_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2728 */;
	struct wmi_del_sta_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2725 */;
	struct wmi_disconnect_sta_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2722 */;
	const u8 *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2717 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_temp_sense_all_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2690 */;
	struct wmi_temp_sense_all_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2685 */;
	struct wmi_temp_sense_all_done_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2680 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_temp_sense_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2658 */;
	struct wmi_temp_sense_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2653 */;
	u32 *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2649 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_cfg_rx_chain_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2601 */;
	struct wmi_cfg_rx_chain_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2588 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_listen_started_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2558 */;
	struct fw_map *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 254 */;
	struct wmi_update_ft_ies_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2521 */;
	struct wmi_update_ft_ies_cmd *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2515 */;
	struct wmi_set_appie_cmd *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2479 */;
	struct wmi_set_appie_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2478 */;
	const char *const cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2470 */[];
	struct wmi_add_cipher_key_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2443 */;
	const void *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2439 */;
	struct wmi_delete_cipher_key_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2427 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_search_started_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2386 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_p2p_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2339 */;
	struct wmi_p2p_cfg_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2334 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_set_pcp_channel_cmd cmd;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2309 */;
	struct wmi_set_pcp_channel_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2297 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_set_ssid_cmd cmd;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2270 */;
	struct wmi_set_ssid_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2254 */;
	struct auth_no_hdr {
		__le16 auth_alg;
		__le16 auth_transaction;
		__le16 status_code;
		u8 variable[0];
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 220 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_pcp_started_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2194 */;
	struct wmi_pcp_start_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2180 */;
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_rbufcap_cfg_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2152 */;
	struct wmi_rbufcap_cfg_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2148 */;
	struct blink_on_off_time cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 214 */[];
	struct fw_map cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 212 */[MAX_FW_MAPPING_TABLE_SIZE];
	struct {
		struct wmi_cmd_hdr wmi;
		struct wmi_led_cfg_done_event evt;
	}__packed cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2107 */;
	struct wmi_led_cfg_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2090 */;
	struct wmi_set_mac_address_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2076 */;
	struct wmi_echo_cmd cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2064 */;
	unsigned long cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 2018 */;
	unsigned int cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1890 */;
	unsigned cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1889 */;
	struct wil6210_mbox_hdr cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1883 */;
	const struct {
		int eventid;
		void (*handler)(struct wil6210_vif *vif, int eventid,
				void *data, int data_len);
	} cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1850 */[];
	struct cfg80211_roam_info cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1729 */;
	struct wmi_ft_reassoc_status_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1717 */;
	struct wmi_ft_reassoc_status_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1716 */;
	struct auth_no_hdr *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1633 */;
	const size_t cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1632 */;
	struct cfg80211_ft_event_params cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1629 */;
	struct wmi_ft_auth_status_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1627 */;
	struct wmi_ft_auth_status_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1626 */;
	struct wil_ring_tx_data *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1585 */;
	struct wil_ring *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1584 */;
	int *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1581 */;
	struct wil6210_vif *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1580 */;
	struct wmi_link_stats_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1560 */;
	struct wmi_link_stats_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1557 */;
	struct wmi_link_stats_global cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1522 */;
	struct wmi_link_stats_basic cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1501 */;
	struct wmi_link_stats_record *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1481 */;
	struct wmi_link_stats_record cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1479 */;
	struct wmi_link_stats_global *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1467 */;
	struct wil_sta_info *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1455 */;
	struct wmi_link_stats_basic *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1451 */;
	struct wmi_sched_scan_result_event cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1382 */;
	struct wmi_sched_scan_result_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1378 */;
	struct wil_tid_ampdu_rx *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1321 */;
	struct wmi_delba_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1317 */;
	struct wmi_rcp_addba_req_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1300 */;
	struct wmi_ba_status_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1267 */;
	struct key_params cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1223 */;
	struct wmi_ring_en_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1218 */;
	struct wil_net_stats *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1175 */;
	struct ethhdr *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1173 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1172 */;
	struct wmi_eapol_rx_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1169 */;
	struct wmi_disconnect_event *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1124 */;
	const struct fw_map cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 110 */;
	struct wiphy *cocci_id/* drivers/net/wireless/ath/wil6210/wmi.c 1063 */;
}
