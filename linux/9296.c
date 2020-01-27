cocci_test_suite() {
	s8 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 991 */;
	struct ieee80211_rx_status *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 990 */;
	struct mwl8k_rxd_ap *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 973 */;
	struct mwl8k_rxd_ap {
		__le16 pkt_len;
		__u8 sq2;
		__u8 rate;
		__le32 pkt_phys_addr;
		__le32 next_rxd_phys_addr;
		__le16 qos_control;
		__le16 htsig2;
		__le32 hw_rssi_info;
		__le32 hw_noise_floor_info;
		__u8 noise_floor;
		__u8 pad0[3];
		__u8 rssi;
		__u8 rx_status;
		__u8 channel;
		__u8 rx_ctrl;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 940 */;
	struct ieee80211_tx_info *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 896 */;
	void *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 882 */;
	struct ieee80211_cts cocci_id/* drivers/net/wireless/marvell/mwl8k.c 859 */;
	struct mwl8k_dma_data *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 843 */;
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 840 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 837 */;
	__le16 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 824 */;
	struct mwl8k_dma_data {
		__le16 fwlen;
		struct ieee80211_hdr wh;
		char data[0];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 806 */;
	unsigned char *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 688 */;
	size_t cocci_id/* drivers/net/wireless/marvell/mwl8k.c 686 */;
	struct pci_driver cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6351 */;
	const struct pci_device_id *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6183 */;
	struct pci_dev *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6182 */;
	struct mwl8k_sta cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6106 */;
	struct mwl8k_vif cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6105 */;
	struct mwl8k_dma_data cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6088 */;
	const struct ieee80211_iface_combination cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6063 */;
	const struct ieee80211_iface_limit cocci_id/* drivers/net/wireless/marvell/mwl8k.c 6058 */[];
	struct mwl8k_cmd_pkt {
		__le16 code;
		__le16 length;
		__u8 seq_num;
		__u8 macid;
		__le16 result;
		char payload[0];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 589 */;
	const struct firmware *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5727 */;
	int cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5726 */(struct mwl8k_priv *priv);
	const struct pci_device_id cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5696 */[];
	struct mwl8k_device_info cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5661 */[];
	enum{MWL8363=0, MWL8687, MWL8366, MWL8764,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5646 */;
	struct ieee80211_mgmt cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5632 */;
	struct mwl8k_priv cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5629 */;
	struct work_struct *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5626 */;
	const struct ieee80211_ops cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5604 */;
	struct mwl8k_sta *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5448 */;
	u16 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5442 */;
	u16 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5441 */;
	enum ieee80211_ampdu_mlme_action cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5440 */;
	struct ieee80211_ampdu_params *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5437 */;
	struct survey_info *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5397 */;
	const struct ieee80211_tx_queue_params *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5362 */;
	const u8 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5273 */;
	unsigned long cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5230 */;
	u64 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5227 */;
	unsigned int *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5226 */;
	unsigned int cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5225 */;
	enum{FW_STATE_INIT=0, FW_STATE_LOADING_PREF, FW_STATE_LOADING_ALT, FW_STATE_ERROR,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 522 */;
	void cocci_id/* drivers/net/wireless/marvell/mwl8k.c 521 */(const struct firmware *fw,
								    void *context);
	struct ieee80211_bss_conf *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5159 */;
	const struct firmware **cocci_id/* drivers/net/wireless/marvell/mwl8k.c 506 */;
	u8 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 5000 */[16];
	struct mwl8k_device_info *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4803 */;
	struct mwl8k_vif *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4800 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4797 */;
	int cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4794 */(struct ieee80211_hw *hw,
								    char *fw_image);
	struct ieee80211_tx_control *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4685 */;
	irqreturn_t cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4587 */;
	struct peer_capability_info *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4525 */;
	struct mwl8k_cmd_update_stadb *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4524 */;
	struct mwl8k_cmd_update_stadb {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__u8 peer_addr[ETH_ALEN];
		__le32 reserved;
		struct peer_capability_info peer_info;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4499 */;
	struct peer_capability_info {
		__u8 peer_type;
		__le16 basic_caps;
		__u8 ht_support;
		__le16 ht_caps;
		__u8 extended_ht_caps;
		struct ewc_ht_info ewc_info;
		__u8 legacy_rates[12];
		__u8 ht_rates[16];
		__u8 pad[16];
		__u8 interop;
		__u8 pad2;
		__u8 station_id;
		__le16 amsdu_enabled;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4470 */;
	__le16 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 447 */;
	const char *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 447 */;
	char *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 447 */;
	struct ewc_ht_info {
		__le16 control1;
		__le16 control2;
		__le16 control3;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4464 */;
	enum set_key_cmd cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4414 */;
	struct mwl8k_cmd_set_key *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4388 */;
	struct ieee80211_key_conf *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4386 */;
	struct mwl8k_cmd_set_key cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4289 */;
	struct mwl8k_cmd_update_encryption *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4263 */;
	enum{MWL8K_ALG_WEP, MWL8K_ALG_TKIP, MWL8K_ALG_CCMP,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4246 */;
	enum{MWL8K_ENCR_ENABLE, MWL8K_ENCR_SET_KEY, MWL8K_ENCR_REMOVE_KEY, MWL8K_ENCR_SET_GROUP_KEY,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4233 */;
	struct mwl8k_cmd_set_key {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__le32 reserved;
		__le16 length;
		__le16 key_type_id;
		__le32 key_info;
		__le32 key_id;
		__le16 key_len;
		__u8 key_material[MAX_ENCR_KEY_LENGTH];
		__u8 tkip_tx_mic_key[MIC_KEY_LENGTH];
		__u8 tkip_rx_mic_key[MIC_KEY_LENGTH];
		__le16 tkip_rsc_low;
		__le32 tkip_rsc_high;
		__le16 tkip_tsc_low;
		__le32 tkip_tsc_high;
		__u8 mac_addr[6];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4213 */;
	struct mwl8k_cmd_update_encryption {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__le32 reserved;
		__u8 mac_addr[6];
		__u8 encr_type;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4203 */;
	struct mwl8k_cmd_set_new_stn *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4096 */;
	struct mwl8k_cmd_set_new_stn {
		struct mwl8k_cmd_pkt header;
		__le16 aid;
		__u8 mac_addr[6];
		__le16 stn_id;
		__le16 action;
		__le16 rsvd;
		__le32 legacy_rates;
		__u8 ht_rates[4];
		__le16 cap_info;
		__le16 ht_capabilities_info;
		__u8 mac_ht_param_info;
		__u8 rev;
		__u8 control_channel;
		__u8 add_channel;
		__le16 op_mode;
		__le16 stbc;
		__u8 add_qos_info;
		__u8 is_qos_sta;
		__le32 fw_sta_ptr;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 4067 */;
	struct mwl8k_cmd_bastream *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3970 */;
	struct mwl8k_cmd_bastream {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		union {
			struct mwl8k_create_ba_stream create_params;
			struct mwl8k_destroy_ba_stream destroy_params;
		};
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3957 */;
	struct mwl8k_destroy_ba_stream {
		__le32 flags;
		__le32 ba_context;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3952 */;
	struct mwl8k_create_ba_stream {
		__le32 flags;
		__le32 idle_thrs;
		__le32 bar_thrs;
		__le32 window_size;
		u8 peer_mac_addr[6];
		u8 dialog_token;
		u8 tid;
		u8 queue_id;
		u8 param_info;
		__le32 ba_context;
		u8 reset_seq_no_flag;
		__le16 curr_seq_no;
		u8 sta_src_mac_addr[6];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3936 */;
	enum ba_stream_action_type{MWL8K_BA_CREATE, MWL8K_BA_UPDATE, MWL8K_BA_DESTROY, MWL8K_BA_FLUSH, MWL8K_BA_CHECK,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3927 */;
	struct mwl8k_cmd_bss_start *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3870 */;
	struct mwl8k_cmd_bss_start {
		struct mwl8k_cmd_pkt header;
		__le32 enable;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3862 */;
	void cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3810 */(struct ieee80211_hw *hw,
								     u8 idx);
	struct mwl8k_cmd_get_watchdog_bitmap *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3789 */;
	struct mwl8k_cmd_get_watchdog_bitmap {
		struct mwl8k_cmd_pkt header;
		u8 bitmap;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3782 */;
	struct mwl8k_cmd_set_rate_adapt_mode *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3761 */;
	struct mwl8k_cmd_set_rate_adapt_mode {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 mode;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3753 */;
	struct mwl8k_cmd_update_mac_addr *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3689 */;
	struct mwl8k_cmd_update_mac_addr {
		struct mwl8k_cmd_pkt header;
		union {
			struct {
				__le16 mac_type;
				__u8 mac_addr[ETH_ALEN];
			} mbss;
			__u8 mac_addr[ETH_ALEN];
		};
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3668 */;
	struct mwl8k_cmd_enable_sniffer *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3651 */;
	const struct ieee80211_rate cocci_id/* drivers/net/wireless/marvell/mwl8k.c 365 */[];
	struct mwl8k_cmd_enable_sniffer {
		struct mwl8k_cmd_pkt header;
		__le32 action;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3644 */;
	struct mwl8k_cmd_use_fixed_rate_ap *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3622 */;
	struct mwl8k_cmd_use_fixed_rate_ap {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__le32 allow_rate_drop;
		__le32 num_rates;
		struct mwl8k_rate_entry_ap {
			__le32 is_ht_rate;
			__le32 enable_retry;
			__le32 rate;
			__le32 retry_count;
		} rate_entry[4];
		u8 multicast_rate;
		u8 multicast_rate_type;
		u8 management_rate;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3603 */;
	struct mwl8k_cmd_use_fixed_rate_sta *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3582 */;
	struct mwl8k_cmd_use_fixed_rate_sta {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__le32 allow_rate_drop;
		__le32 num_rates;
		struct {
			__le32 is_ht_rate;
			__le32 enable_retry;
			__le32 rate;
			__le32 retry_count;
		} rate_entry[8];
		__le32 rate_type;
		__le32 reserved1;
		__le32 reserved2;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3561 */;
	struct mwl8k_cmd_mimo_config *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3539 */;
	__u8 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3537 */;
	struct mwl8k_cmd_mimo_config {
		struct mwl8k_cmd_pkt header;
		__le32 action;
		__u8 rx_antenna_map;
		__u8 tx_antenna_map;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3530 */;
	struct mwl8k_cmd_set_wmm_mode *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3507 */;
	struct mwl8k_cmd_set_wmm_mode {
		struct mwl8k_cmd_pkt header;
		__le16 action;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3499 */;
	const struct ieee80211_channel cocci_id/* drivers/net/wireless/marvell/mwl8k.c 348 */[];
	struct mwl8k_cmd_set_edca_params *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3467 */;
	__u16 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3463 */;
	struct mwl8k_cmd_set_edca_params {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 txop;
		union {
			struct {
				__le32 log_cw_max;
				__le32 log_cw_min;
				__u8 aifs;
				__u8 txq;
			} ap;
			struct {
				__u8 log_cw_max;
				__u8 log_cw_min;
				__u8 aifs;
				__u8 txq;
			} sta;
		};
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3414 */;
	struct mwl8k_sta {
		u8 peer_id;
		u8 is_ampdu_allowed;
		struct tx_traffic_info tx_stats[MWL8K_MAX_TID];
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 340 */;
	struct mwl8k_cmd_set_slot *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3393 */;
	struct mwl8k_cmd_set_slot {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__u8 short_slot;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3385 */;
	struct mwl8k_cmd_set_rts_threshold *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3364 */;
	struct mwl8k_cmd_set_rts_threshold {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 threshold;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3355 */;
	struct tx_traffic_info {
		u32 start_time;
		u32 pkts;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 334 */;
	struct ieee80211_mgmt *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3326 */;
	struct mwl8k_cmd_finalize_join *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3325 */;
	struct mwl8k_cmd_finalize_join {
		struct mwl8k_cmd_pkt header;
		__le32 sleep_interval;
		__u8 beacon_data[MWL8K_FJ_BEACON_MAXLEN];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3316 */;
	bool cocci_id/* drivers/net/wireless/marvell/mwl8k.c 33 */;
	struct mwl8k_cmd_set_rate *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3293 */;
	struct mwl8k_cmd_set_rate {
		struct mwl8k_cmd_pkt header;
		__u8 legacy_rates[14];
		__u8 mcs_set[16];
		__u8 reserved[16];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3280 */;
	struct mwl8k_cmd_update_set_aid *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3238 */;
	u32 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3218 */;
	u8 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3218 */;
	void cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3218 */;
	struct mwl8k_cmd_update_set_aid {
		struct mwl8k_cmd_pkt header;
		__le16 aid;
		__u8 bssid[ETH_ALEN];
		__le16 protection_mode;
		__u8 supp_rates[14];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3208 */;
	struct mwl8k_cmd_set_rf_channel *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3152 */;
	enum nl80211_channel_type cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3150 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3149 */;
	struct ieee80211_conf *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3147 */;
	struct mwl8k_cmd_set_rf_channel {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__u8 current_channel;
		__le32 channel_flags;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3139 */;
	s8 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3101 */;
	struct mwl8k_vif {
		struct list_head list;
		struct ieee80211_vif *vif;
		int macid;
		u16 seqno;
		struct {
			u8 enabled;
			u8 key[sizeof(struct ieee80211_key_conf) + MAX_WEP_KEY_LEN];
		} wep_key_conf[NUM_WEP_KEYS];
		u8 bssid[ETH_ALEN];
		bool is_hw_crypto_enabled;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 309 */;
	struct ieee80211_supported_band *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3080 */;
	struct mwl8k_cmd_set_post_scan *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3060 */;
	const __u8 *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3058 */;
	struct mwl8k_cmd_set_post_scan {
		struct mwl8k_cmd_pkt header;
		__le32 isibss;
		__u8 bssid[ETH_ALEN];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3051 */;
	struct mwl8k_cmd_bbp_reg_access *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3024 */;
	struct mwl8k_cmd_bbp_reg_access {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 offset;
		u8 value;
		u8 rsrv[3];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 3010 */;
	struct mwl8k_cmd_set_pre_scan *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2991 */;
	struct mwl8k_cmd_set_pre_scan {
		struct mwl8k_cmd_pkt header;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2985 */;
	struct mwl8k_cmd_set_beacon *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2964 */;
	struct mwl8k_cmd_set_beacon {
		struct mwl8k_cmd_pkt header;
		__le16 beacon_len;
		__u8 beacon[0];
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2955 */;
	struct mwl8k_cmd_rf_antenna *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2934 */;
	struct mwl8k_cmd_rf_antenna {
		struct mwl8k_cmd_pkt header;
		__le16 antenna;
		__le16 mode;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2922 */;
	struct mwl8k_cmd_tx_power *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2880 */;
	unsigned short cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2875 */;
	struct mwl8k_cmd_tx_power {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 band;
		__le16 channel;
		__le16 bw;
		__le16 sub_ch;
		__le16 power_level_list[MWL8K_TX_POWER_LEVEL_TOTAL];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2863 */;
	struct mwl8k_cmd_rf_tx_power *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2840 */;
	struct mwl8k_cmd_rf_tx_power {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 support_level;
		__le16 current_level;
		__le16 reserved;
		__le16 power_level_list[MWL8K_RF_TX_POWER_LEVEL_TOTAL];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2829 */;
	struct mwl8k_cmd_radio_control *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2779 */;
	struct mwl8k_cmd_radio_control {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 control;
		__le16 radio_on;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2768 */;
	struct mwl8k_cmd_get_stat *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2739 */;
	struct ieee80211_low_level_stats *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2737 */;
	struct mwl8k_cmd_get_stat {
		struct mwl8k_cmd_pkt header;
		__le32 stats[64];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2726 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2710 */;
	struct mwl8k_cmd_mac_multicast_adr *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2684 */;
	struct mwl8k_priv *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2683 */;
	struct netdev_hw_addr_list *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2681 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2680 */;
	int cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2680 */;
	struct mwl8k_cmd_pkt *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2679 */;
	struct mwl8k_cmd_mac_multicast_adr {
		struct mwl8k_cmd_pkt header;
		__le16 action;
		__le16 numaddr;
		__u8 addr[0][ETH_ALEN];
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2667 */;
	struct mwl8k_cmd_set_hw_spec *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2624 */;
	struct mwl8k_cmd_set_hw_spec {
		struct mwl8k_cmd_pkt header;
		__u8 hw_rev;
		__u8 host_interface;
		__le16 num_mcaddrs;
		__u8 perm_addr[ETH_ALEN];
		__le16 region_code;
		__le32 fw_rev;
		__le32 ps_cookie;
		__le32 caps;
		__le32 rx_queue_ptr;
		__le32 num_tx_queues;
		__le32 tx_queue_ptrs[MWL8K_MAX_TX_QUEUES];
		__le32 flags;
		__le32 num_tx_desc_per_queue;
		__le32 total_rxd;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2590 */;
	struct mwl8k_cmd_get_hw_spec_ap *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2522 */;
	struct mwl8k_cmd_get_hw_spec_ap {
		struct mwl8k_cmd_pkt header;
		__u8 hw_rev;
		__u8 host_interface;
		__le16 num_wcb;
		__le16 num_mcaddrs;
		__u8 perm_addr[ETH_ALEN];
		__le16 region_code;
		__le16 num_antenna;
		__le32 fw_rev;
		__le32 wcbbase0;
		__le32 rxwrptr;
		__le32 rxrdptr;
		__le32 ps_cookie;
		__le32 wcbbase1;
		__le32 wcbbase2;
		__le32 wcbbase3;
		__le32 fw_api_version;
		__le32 caps;
		__le32 num_of_ampdu_queues;
		__le32 wcbbase_ampdu[MWL8K_MAX_AMPDU_QUEUES];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2496 */;
	struct mwl8k_cmd_get_hw_spec_sta *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2457 */;
	struct mwl8k_cmd_get_hw_spec_sta {
		struct mwl8k_cmd_pkt header;
		__u8 hw_rev;
		__u8 host_interface;
		__le16 num_mcaddrs;
		__u8 perm_addr[ETH_ALEN];
		__le16 region_code;
		__le32 fw_rev;
		__le32 ps_cookie;
		__le32 caps;
		__u8 mcs_bitmap[16];
		__le32 rx_queue_ptr;
		__le32 num_tx_queues;
		__le32 tx_queue_ptrs[MWL8K_TX_WMM_QUEUES];
		__le32 caps2;
		__le32 num_tx_desc_per_queue;
		__le32 total_rxd;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2347 */;
	u8 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2208 */[32];
	dma_addr_t cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2204 */;
	void __iomem *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2203 */;
	void cocci_id/* drivers/net/wireless/marvell/mwl8k.c 2189 */(struct ieee80211_hw *hw,
								     bool enable,
								     u32 bitmap);
	struct tx_traffic_info *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1854 */;
	struct mwl8k_priv {
		struct ieee80211_hw *hw;
		struct pci_dev *pdev;
		int irq;
		struct mwl8k_device_info *device_info;
		void __iomem *sram;
		void __iomem *regs;
		const struct firmware *fw_helper;
		const struct firmware *fw_ucode;
		bool ap_fw;
		struct rxd_ops *rxd_ops;
		struct ieee80211_supported_band band_24;
		struct ieee80211_channel channels_24[14];
		struct ieee80211_rate rates_24[13];
		struct ieee80211_supported_band band_50;
		struct ieee80211_channel channels_50[9];
		struct ieee80211_rate rates_50[8];
		u32 ap_macids_supported;
		u32 sta_macids_supported;
		u8 num_ampdu_queues;
		spinlock_t stream_lock;
		struct mwl8k_ampdu_stream ampdu[MWL8K_MAX_AMPDU_QUEUES];
		struct work_struct watchdog_ba_handle;
		struct mutex fw_mutex;
		struct task_struct *fw_mutex_owner;
		struct task_struct *hw_restart_owner;
		int fw_mutex_depth;
		struct completion *hostcmd_wait;
		atomic_t watchdog_event_pending;
		spinlock_t tx_lock;
		struct completion *tx_wait;
		u32 macids_used;
		struct list_head vif_list;
		u32 *cookie;
		dma_addr_t cookie_dma;
		u16 num_mcaddrs;
		u8 hw_rev;
		u32 fw_rev;
		u32 caps;
		int pending_tx_pkts;
		struct mwl8k_rx_queue rxq[MWL8K_RX_QUEUES];
		struct mwl8k_tx_queue txq[MWL8K_MAX_TX_QUEUES];
		u32 txq_offset[MWL8K_MAX_TX_QUEUES];
		bool radio_on;
		bool radio_short_preamble;
		bool sniffer_enabled;
		bool wmm_enabled;
		bool capture_beacon;
		u8 capture_bssid[ETH_ALEN];
		struct sk_buff *beacon_skb;
		struct work_struct finalize_join_worker;
		struct tasklet_struct poll_tx_task;
		struct tasklet_struct poll_rx_task;
		s8 noise;
		struct ieee80211_tx_queue_params wmm_params[MWL8K_TX_WMM_QUEUES];
		struct work_struct fw_reload;
		bool hw_restart_in_progress;
		unsigned fw_state;
		char *fw_pref;
		char *fw_alt;
		bool is_8764;
		struct completion firmware_loading_complete;
		u32 running_bsses;
		bool sw_scan_start;
		struct ieee80211_channel *acs_chan;
		unsigned long channel_time;
		struct survey_info survey[MWL8K_NUM_CHANS];
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 181 */;
	u8 cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1785 */;
	struct ieee80211_sta *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1785 */;
	struct mwl8k_ampdu_stream *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1784 */;
	struct mwl8k_tx_desc cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1778 */;
	struct mwl8k_ampdu_stream {
		struct ieee80211_sta *sta;
		u8 tid;
		u8 state;
		u8 idx;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 174 */;
	enum{AMPDU_NO_STREAM, AMPDU_STREAM_NEW, AMPDU_STREAM_IN_PROGRESS, AMPDU_STREAM_ACTIVE,} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 167 */;
	struct mwl8k_tx_queue {
		int head;
		int tail;
		unsigned int len;
		struct mwl8k_tx_desc *txd;
		dma_addr_t txd_dma;
		struct sk_buff **skb;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 154 */;
	struct mwl8k_tx_desc *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1512 */;
	struct mwl8k_tx_queue *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1505 */;
	struct mwl8k_tx_desc {
		__le32 status;
		__u8 data_rate;
		__u8 tx_priority;
		__le16 qos_control;
		__le32 pkt_phys_addr;
		__le16 pkt_len;
		__u8 dest_MAC_addr[ETH_ALEN];
		__le32 next_txd_phys_addr;
		__le32 timestamp;
		__le16 rate_info;
		__u8 peer_id;
		__u8 tx_frag_cnt;
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1433 */;
	struct mwl8k_rx_queue {
		int rxd_count;
		int head;
		int tail;
		void *rxd;
		dma_addr_t rxd_dma;
		struct {
			struct sk_buff *skb;
			DEFINE_DMA_UNMAP_ADDR(dma);
		} *buf;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 137 */;
	struct ieee80211_rx_status cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1329 */;
	struct list_head *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1302 */;
	struct mwl8k_device_info {
		char *part_name;
		char *helper_image;
		char *fw_image_sta;
		char *fw_image_ap;
		struct rxd_ops *ap_rxd_ops;
		u32 fw_api_ap;
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 128 */;
	struct mwl8k_rx_queue *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1244 */;
	struct rxd_ops {
		int rxd_size;
		void (*rxd_init)(void *rxd, dma_addr_t next_dma_addr);
		void (*rxd_refill)(void *rxd, dma_addr_t addr, int len);
		int (*rxd_process)(void *rxd,
				   struct ieee80211_rx_status *status,
				   __le16 *qos, s8 *noise);
	} cocci_id/* drivers/net/wireless/marvell/mwl8k.c 120 */;
	struct mwl8k_rxd_sta cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1149 */;
	struct mwl8k_rxd_sta *cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1084 */;
	struct mwl8k_rxd_sta {
		__le16 pkt_len;
		__u8 link_quality;
		__u8 noise_level;
		__le32 pkt_phys_addr;
		__le32 next_rxd_phys_addr;
		__le16 qos_control;
		__le16 rate_info;
		__le32 pad0[4];
		__u8 rssi;
		__u8 channel;
		__le16 pad1;
		__u8 rx_ctrl;
		__u8 rx_status;
		__u8 pad2[2];
	}__packed cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1051 */;
	struct mwl8k_rxd_ap cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1042 */;
	struct rxd_ops cocci_id/* drivers/net/wireless/marvell/mwl8k.c 1041 */;
}
