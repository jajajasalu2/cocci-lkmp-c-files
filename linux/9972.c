cocci_test_suite() {
	struct ndis_80211_ssid *cocci_id/* drivers/net/wireless/rndis_wlan.c 976 */;
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 963 */(struct usbnet *usbdev,
								u8 *match_bssid,
								bool *matched);
	void cocci_id/* drivers/net/wireless/rndis_wlan.c 962 */(struct usbnet *usbdev);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 961 */(struct usbnet *usbdev,
								int mode);
	__le16 cocci_id/* drivers/net/wireless/rndis_wlan.c 875 */;
	__le32 *cocci_id/* drivers/net/wireless/rndis_wlan.c 870 */;
	__le16 *cocci_id/* drivers/net/wireless/rndis_wlan.c 869 */;
	struct ndis_config_param *cocci_id/* drivers/net/wireless/rndis_wlan.c 867 */;
	struct rndis_reset *cocci_id/* drivers/net/wireless/rndis_wlan.c 840 */;
	union {
		void *buf;
		struct rndis_msg_hdr *header;
		struct rndis_set *set;
		struct rndis_set_c *set_c;
	} cocci_id/* drivers/net/wireless/rndis_wlan.c 782 */;
	const void *cocci_id/* drivers/net/wireless/rndis_wlan.c 778 */;
	union {
		void *buf;
		struct rndis_msg_hdr *header;
		struct rndis_query *get;
		struct rndis_query_c *get_c;
	} cocci_id/* drivers/net/wireless/rndis_wlan.c 697 */;
	const struct cfg80211_ops cocci_id/* drivers/net/wireless/rndis_wlan.c 528 */;
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 524 */(struct wiphy *wiphy,
								struct net_device *dev,
								s32 rssi_thold,
								u32 rssi_hyst);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 521 */(struct wiphy *wiphy,
								struct net_device *dev,
								bool enabled,
								int timeout);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 519 */(struct wiphy *wiphy,
								struct net_device *netdev);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 516 */(struct wiphy *wiphy,
								struct net_device *netdev,
								struct cfg80211_pmksa *pmksa);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 510 */(struct wiphy *wiphy,
								struct net_device *dev,
								int idx,
								u8 *mac,
								struct station_info *sinfo);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 507 */(struct wiphy *wiphy,
								struct net_device *dev,
								const u8 *mac,
								struct station_info *sinfo);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 504 */(struct wiphy *wiphy,
								struct net_device *netdev,
								u8 key_index,
								bool unicast,
								bool multicast);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 501 */(struct wiphy *wiphy,
								struct net_device *netdev,
								u8 key_index,
								bool pairwise,
								const u8 *mac_addr);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 497 */(struct wiphy *wiphy,
								struct net_device *netdev,
								u8 key_index,
								bool pairwise,
								const u8 *mac_addr,
								struct key_params *params);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 495 */(struct wiphy *wiphy,
								struct net_device *dev);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 492 */(struct wiphy *wiphy,
								struct net_device *dev,
								struct cfg80211_ibss_params *params);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 489 */(struct wiphy *wiphy,
								struct net_device *dev,
								u16 reason_code);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 486 */(struct wiphy *wiphy,
								struct net_device *dev,
								struct cfg80211_connect_params *sme);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 482 */(struct wiphy *wiphy,
								struct wireless_dev *wdev,
								int *dbm);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 478 */(struct wiphy *wiphy,
								struct wireless_dev *wdev,
								enum nl80211_tx_power_setting type,
								int mbm);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 476 */(struct wiphy *wiphy,
								u32 changed);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 473 */(struct wiphy *wiphy,
								struct cfg80211_scan_request *request);
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 468 */(struct wiphy *wiphy,
								struct net_device *dev,
								enum nl80211_iftype type,
								struct vif_params *params);
	struct rndis_wlan_private {
		struct usbnet *usbdev;
		struct wireless_dev wdev;
		struct cfg80211_scan_request *scan_request;
		struct workqueue_struct *workqueue;
		struct delayed_work dev_poller_work;
		struct delayed_work scan_work;
		struct work_struct work;
		struct mutex command_lock;
		unsigned long work_pending;
		int last_qual;
		s32 cqm_rssi_thold;
		u32 cqm_rssi_hyst;
		int last_cqm_event_rssi;
		struct ieee80211_supported_band band;
		struct ieee80211_channel channels[ARRAY_SIZE(rndis_channels)];
		struct ieee80211_rate rates[ARRAY_SIZE(rndis_rates)];
		u32 cipher_suites[ARRAY_SIZE(rndis_cipher_suites)];
		int device_type;
		int caps;
		int multicast_size;
		char param_country[4];
		int param_frameburst;
		int param_afterburner;
		int param_power_save;
		int param_power_output;
		int param_roamtrigger;
		int param_roamdelta;
		u32 param_workaround_interval;
		bool radio_on;
		int power_mode;
		int infra_mode;
		bool connected;
		u8 bssid[ETH_ALEN];
		u32 current_command_oid;
		u8 encr_tx_key_index;
		struct rndis_wlan_encr_key encr_keys[RNDIS_WLAN_NUM_KEYS];
		int wpa_version;
		u8 command_buffer[COMMAND_BUFFER_SIZE];
	} cocci_id/* drivers/net/wireless/rndis_wlan.c 412 */;
	struct rndis_wlan_encr_key {
		int len;
		u32 cipher;
		u8 material[32];
		u8 bssid[ETH_ALEN];
		bool pairwise;
		bool tx_key;
	} cocci_id/* drivers/net/wireless/rndis_wlan.c 402 */;
	const u32 cocci_id/* drivers/net/wireless/rndis_wlan.c 395 */[];
	const struct ieee80211_rate cocci_id/* drivers/net/wireless/rndis_wlan.c 380 */[];
	struct usb_driver cocci_id/* drivers/net/wireless/rndis_wlan.c 3758 */;
	unsigned long cocci_id/* drivers/net/wireless/rndis_wlan.c 3658 */;
	const struct usb_device_id cocci_id/* drivers/net/wireless/rndis_wlan.c 3643 */[];
	const struct ieee80211_channel cocci_id/* drivers/net/wireless/rndis_wlan.c 363 */[];
	const struct driver_info cocci_id/* drivers/net/wireless/rndis_wlan.c 3611 */;
	struct rndis_set cocci_id/* drivers/net/wireless/rndis_wlan.c 361 */;
	char cocci_id/* drivers/net/wireless/rndis_wlan.c 36 */[4];
	struct usb_interface *cocci_id/* drivers/net/wireless/rndis_wlan.c 3396 */;
	const struct net_device_ops cocci_id/* drivers/net/wireless/rndis_wlan.c 3385 */;
	char cocci_id/* drivers/net/wireless/rndis_wlan.c 3359 */[8];
	struct ndis_80211_pmkid {
		__le32 length;
		__le32 bssid_info_count;
		struct ndis_80211_bssid_info bssid_info[0];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 333 */;
	struct ndis_80211_bssid_info {
		u8 bssid[ETH_ALEN];
		u8 pmkid[16];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 328 */;
	struct ndis_80211_capability {
		__le32 length;
		__le32 version;
		__le32 num_pmkids;
		__le32 num_auth_encr_pair;
		struct ndis_80211_auth_encr_pair auth_encr_pair[0];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 320 */;
	struct rndis_wlan_private cocci_id/* drivers/net/wireless/rndis_wlan.c 3192 */;
	struct work_struct *cocci_id/* drivers/net/wireless/rndis_wlan.c 3189 */;
	enum nl80211_cqm_rssi_threshold_event cocci_id/* drivers/net/wireless/rndis_wlan.c 3165 */;
	struct ndis_80211_auth_encr_pair {
		__le32 auth_mode;
		__le32 encr_mode;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 315 */;
	u8 cocci_id/* drivers/net/wireless/rndis_wlan.c 3113 */[sizeof(*caps) + sizeof(caps->auth_encr_pair) * 16];
	struct ndis_80211_capability *cocci_id/* drivers/net/wireless/rndis_wlan.c 3112 */;
	struct {
		__le32 num_items;
		__le32 items[8];
	} cocci_id/* drivers/net/wireless/rndis_wlan.c 3108 */;
	struct rndis_indicate *cocci_id/* drivers/net/wireless/rndis_wlan.c 3064 */;
	struct rndis_indicate cocci_id/* drivers/net/wireless/rndis_wlan.c 3018 */;
	struct ndis_80211_pmkid_candidate *cocci_id/* drivers/net/wireless/rndis_wlan.c 3000 */;
	struct ndis_80211_pmkid_candidate cocci_id/* drivers/net/wireless/rndis_wlan.c 2980 */;
	struct ndis_80211_pmkid_cand_list cocci_id/* drivers/net/wireless/rndis_wlan.c 2973 */;
	struct ndis_80211_pmkid_cand_list *cocci_id/* drivers/net/wireless/rndis_wlan.c 2969 */;
	struct ndis_80211_assoc_info {
		__le32 length;
		__le16 req_ies;
		struct req_ie {
			__le16 capa;
			__le16 listen_interval;
			u8 cur_ap_address[ETH_ALEN];
		} req_ie;
		__le32 req_ie_length;
		__le32 offset_req_ies;
		__le16 resp_ies;
		struct resp_ie {
			__le16 capa;
			__le16 status_code;
			__le16 assoc_id;
		} resp_ie;
		__le32 resp_ie_length;
		__le32 offset_resp_ies;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 295 */;
	struct ndis_80211_auth_request cocci_id/* drivers/net/wireless/rndis_wlan.c 2906 */;
	struct ndis_80211_status_indication cocci_id/* drivers/net/wireless/rndis_wlan.c 2905 */;
	enum nl80211_key_type cocci_id/* drivers/net/wireless/rndis_wlan.c 2902 */;
	struct ndis_80211_auth_request *cocci_id/* drivers/net/wireless/rndis_wlan.c 2901 */;
	struct ndis_80211_status_indication *cocci_id/* drivers/net/wireless/rndis_wlan.c 2894 */;
	struct ndis_config_param {
		__le32 name_offs;
		__le32 name_length;
		__le32 type;
		__le32 value_offs;
		__le32 value_length;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 287 */;
	struct cfg80211_roam_info cocci_id/* drivers/net/wireless/rndis_wlan.c 2824 */;
	struct ndis_80211_remove_key {
		__le32 size;
		__le32 index;
		u8 bssid[ETH_ALEN];
		u8 padding[2];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 280 */;
	struct ndis_80211_key {
		__le32 size;
		__le32 index;
		__le32 length;
		u8 bssid[ETH_ALEN];
		u8 padding[6];
		u8 rsc[8];
		u8 material[32];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 270 */;
	u8 cocci_id/* drivers/net/wireless/rndis_wlan.c 2645 */[34];
	struct ndis_80211_wep_key {
		__le32 size;
		__le32 index;
		__le32 length;
		u8 material[32];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 263 */;
	struct ndis_80211_pmkid cocci_id/* drivers/net/wireless/rndis_wlan.c 2571 */;
	struct ndis_80211_fixed_ies {
		u8 timestamp[8];
		__le16 beacon_interval;
		__le16 capabilities;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 257 */;
	struct ndis_80211_bssid_list_ex {
		__le32 num_items;
		struct ndis_80211_bssid_ex bssid[0];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 252 */;
	struct station_info *cocci_id/* drivers/net/wireless/rndis_wlan.c 2496 */;
	struct key_params *cocci_id/* drivers/net/wireless/rndis_wlan.c 2390 */;
	struct wiphy *cocci_id/* drivers/net/wireless/rndis_wlan.c 2388 */;
	struct net_device *cocci_id/* drivers/net/wireless/rndis_wlan.c 2388 */;
	struct ndis_80211_bssid_ex {
		__le32 length;
		u8 mac[ETH_ALEN];
		u8 padding[2];
		struct ndis_80211_ssid ssid;
		__le32 privacy;
		__le32 rssi;
		__le32 net_type;
		struct ndis_80211_conf config;
		__le32 net_infra;
		u8 rates[NDIS_802_11_LENGTH_RATES_EX];
		__le32 ie_length;
		u8 ies[0];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 237 */;
	struct ndis_80211_conf {
		__le32 length;
		__le32 beacon_period;
		__le32 atim_window;
		__le32 ds_config;
		struct ndis_80211_conf_freq_hop fh_config;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 229 */;
	enum nl80211_auth_type cocci_id/* drivers/net/wireless/rndis_wlan.c 2283 */;
	struct cfg80211_ibss_params *cocci_id/* drivers/net/wireless/rndis_wlan.c 2277 */;
	struct ndis_80211_conf_freq_hop {
		__le32 length;
		__le32 hop_pattern;
		__le32 hop_set;
		__le32 dwell_time;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 222 */;
	struct ndis_80211_ssid {
		__le32 length;
		u8 essid[NDIS_802_11_LENGTH_SSID];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 217 */;
	struct cfg80211_connect_params *cocci_id/* drivers/net/wireless/rndis_wlan.c 2140 */;
	struct cfg80211_scan_info cocci_id/* drivers/net/wireless/rndis_wlan.c 2123 */;
	struct ndis_80211_bssid_list_ex cocci_id/* drivers/net/wireless/rndis_wlan.c 2077 */;
	struct ndis_80211_status_indication {
		__le32 status_type;
		union {
			__le32 media_stream_mode;
			__le32 radio_status;
			struct ndis_80211_auth_request auth_request[0];
			struct ndis_80211_pmkid_cand_list cand_list;
		} u;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 207 */;
	struct ndis_80211_bssid_list_ex *cocci_id/* drivers/net/wireless/rndis_wlan.c 2057 */;
	bool *cocci_id/* drivers/net/wireless/rndis_wlan.c 2054 */;
	char *cocci_id/* drivers/net/wireless/rndis_wlan.c 2047 */;
	void *cocci_id/* drivers/net/wireless/rndis_wlan.c 2040 */;
	struct ndis_80211_bssid_ex *cocci_id/* drivers/net/wireless/rndis_wlan.c 2039 */;
	int *cocci_id/* drivers/net/wireless/rndis_wlan.c 2022 */;
	struct ndis_80211_pmkid_cand_list {
		__le32 version;
		__le32 num_candidates;
		struct ndis_80211_pmkid_candidate candidate_list[0];
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 201 */;
	__le64 *cocci_id/* drivers/net/wireless/rndis_wlan.c 2007 */;
	struct ndis_80211_fixed_ies cocci_id/* drivers/net/wireless/rndis_wlan.c 1988 */;
	struct ndis_80211_bssid_ex cocci_id/* drivers/net/wireless/rndis_wlan.c 1987 */;
	u8 *cocci_id/* drivers/net/wireless/rndis_wlan.c 1979 */;
	struct ndis_80211_fixed_ies *cocci_id/* drivers/net/wireless/rndis_wlan.c 1977 */;
	u16 cocci_id/* drivers/net/wireless/rndis_wlan.c 1975 */;
	u64 cocci_id/* drivers/net/wireless/rndis_wlan.c 1974 */;
	s32 cocci_id/* drivers/net/wireless/rndis_wlan.c 1973 */;
	struct cfg80211_bss *cocci_id/* drivers/net/wireless/rndis_wlan.c 1972 */;
	struct ndis_80211_pmkid_candidate {
		u8 bssid[ETH_ALEN];
		u8 padding[2];
		__le32 flags;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 195 */;
	struct cfg80211_scan_request *cocci_id/* drivers/net/wireless/rndis_wlan.c 1935 */;
	struct wireless_dev *cocci_id/* drivers/net/wireless/rndis_wlan.c 1920 */;
	enum nl80211_tx_power_setting cocci_id/* drivers/net/wireless/rndis_wlan.c 1892 */;
	struct ndis_80211_auth_request {
		__le32 length;
		u8 bssid[ETH_ALEN];
		u8 padding[2];
		__le32 flags;
	}__packed cocci_id/* drivers/net/wireless/rndis_wlan.c 188 */;
	struct vif_params *cocci_id/* drivers/net/wireless/rndis_wlan.c 1847 */;
	enum nl80211_iftype cocci_id/* drivers/net/wireless/rndis_wlan.c 1846 */;
	enum ndis_80211_pmkid_cand_list_flag_bits{NDIS_80211_PMKID_CAND_PREAUTH=cpu_to_le32(1 << 0),} cocci_id/* drivers/net/wireless/rndis_wlan.c 184 */;
	enum ndis_80211_power_mode{NDIS_80211_POWER_MODE_CAM, NDIS_80211_POWER_MODE_MAX_PSP, NDIS_80211_POWER_MODE_FAST_PSP,} cocci_id/* drivers/net/wireless/rndis_wlan.c 178 */;
	unsigned int cocci_id/* drivers/net/wireless/rndis_wlan.c 1753 */;
	struct cfg80211_pmksa *cocci_id/* drivers/net/wireless/rndis_wlan.c 1749 */;
	enum ndis_80211_addwep_bits{NDIS_80211_ADDWEP_PERCLIENT_KEY=cpu_to_le32(1 << 30), NDIS_80211_ADDWEP_TRANSMIT_KEY=cpu_to_le32(1 << 31),} cocci_id/* drivers/net/wireless/rndis_wlan.c 173 */;
	u32 *cocci_id/* drivers/net/wireless/rndis_wlan.c 1673 */;
	enum ndis_80211_addkey_bits{NDIS_80211_ADDKEY_8021X_AUTH=cpu_to_le32(1 << 28), NDIS_80211_ADDKEY_SET_INIT_RECV_SEQ=cpu_to_le32(1 << 29), NDIS_80211_ADDKEY_PAIRWISE_KEY=cpu_to_le32(1 << 30), NDIS_80211_ADDKEY_TRANSMIT_KEY=cpu_to_le32(1 << 31),} cocci_id/* drivers/net/wireless/rndis_wlan.c 166 */;
	const char *cocci_id/* drivers/net/wireless/rndis_wlan.c 1655 */;
	struct ndis_80211_pmkid *cocci_id/* drivers/net/wireless/rndis_wlan.c 1654 */;
	enum ndis_80211_radio_status{NDIS_80211_RADIO_STATUS_ON, NDIS_80211_RADIO_STATUS_HARDWARE_OFF, NDIS_80211_RADIO_STATUS_SOFTWARE_OFF,} cocci_id/* drivers/net/wireless/rndis_wlan.c 160 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/wireless/rndis_wlan.c 1581 */;
	enum ndis_80211_media_stream_mode{NDIS_80211_MEDIA_STREAM_OFF, NDIS_80211_MEDIA_STREAM_ON,} cocci_id/* drivers/net/wireless/rndis_wlan.c 155 */;
	struct ndis_80211_remove_key cocci_id/* drivers/net/wireless/rndis_wlan.c 1520 */;
	void cocci_id/* drivers/net/wireless/rndis_wlan.c 1511 */;
	struct rndis_wlan_encr_key cocci_id/* drivers/net/wireless/rndis_wlan.c 1488 */;
	enum ndis_80211_status_type{NDIS_80211_STATUSTYPE_AUTHENTICATION, NDIS_80211_STATUSTYPE_MEDIASTREAMMODE, NDIS_80211_STATUSTYPE_PMKID_CANDIDATELIST, NDIS_80211_STATUSTYPE_RADIOSTATE,} cocci_id/* drivers/net/wireless/rndis_wlan.c 148 */;
	enum ndis_80211_priv_filter{NDIS_80211_PRIV_ACCEPT_ALL, NDIS_80211_PRIV_8021X_WEP,} cocci_id/* drivers/net/wireless/rndis_wlan.c 143 */;
	bool cocci_id/* drivers/net/wireless/rndis_wlan.c 1393 */;
	struct ndis_80211_key cocci_id/* drivers/net/wireless/rndis_wlan.c 1392 */;
	__le32 cocci_id/* drivers/net/wireless/rndis_wlan.c 1389 */;
	u32 cocci_id/* drivers/net/wireless/rndis_wlan.c 1338 */;
	struct ndis_80211_wep_key cocci_id/* drivers/net/wireless/rndis_wlan.c 1337 */;
	struct rndis_wlan_private *cocci_id/* drivers/net/wireless/rndis_wlan.c 1336 */;
	u8 cocci_id/* drivers/net/wireless/rndis_wlan.c 1334 */;
	const u8 *cocci_id/* drivers/net/wireless/rndis_wlan.c 1333 */;
	struct usbnet *cocci_id/* drivers/net/wireless/rndis_wlan.c 1333 */;
	int cocci_id/* drivers/net/wireless/rndis_wlan.c 1333 */;
	enum ndis_80211_encr_status{NDIS_80211_ENCR_WEP_ENABLED, NDIS_80211_ENCR_DISABLED, NDIS_80211_ENCR_WEP_KEY_ABSENT, NDIS_80211_ENCR_NOT_SUPPORTED, NDIS_80211_ENCR_TKIP_ENABLED, NDIS_80211_ENCR_TKIP_KEY_ABSENT, NDIS_80211_ENCR_CCMP_ENABLED, NDIS_80211_ENCR_CCMP_KEY_ABSENT,} cocci_id/* drivers/net/wireless/rndis_wlan.c 132 */;
	struct ndis_80211_conf cocci_id/* drivers/net/wireless/rndis_wlan.c 1309 */;
	struct ieee80211_channel *cocci_id/* drivers/net/wireless/rndis_wlan.c 1304 */;
	enum ndis_80211_auth_mode{NDIS_80211_AUTH_OPEN, NDIS_80211_AUTH_SHARED, NDIS_80211_AUTH_AUTO_SWITCH, NDIS_80211_AUTH_WPA, NDIS_80211_AUTH_WPA_PSK, NDIS_80211_AUTH_WPA_NONE, NDIS_80211_AUTH_WPA2, NDIS_80211_AUTH_WPA2_PSK,} cocci_id/* drivers/net/wireless/rndis_wlan.c 121 */;
	enum ndis_80211_net_infra{NDIS_80211_INFRA_ADHOC, NDIS_80211_INFRA_INFRA, NDIS_80211_INFRA_AUTO_UNKNOWN,} cocci_id/* drivers/net/wireless/rndis_wlan.c 115 */;
	enum ndis_80211_net_type{NDIS_80211_TYPE_FREQ_HOP, NDIS_80211_TYPE_DIRECT_SEQ, NDIS_80211_TYPE_OFDM_A, NDIS_80211_TYPE_OFDM_G,} cocci_id/* drivers/net/wireless/rndis_wlan.c 108 */;
	struct ndis_80211_ssid cocci_id/* drivers/net/wireless/rndis_wlan.c 1058 */;
	struct ndis_80211_assoc_info *cocci_id/* drivers/net/wireless/rndis_wlan.c 1034 */;
	u8 cocci_id/* drivers/net/wireless/rndis_wlan.c 1019 */[ETH_ALEN];
	const u8 cocci_id/* drivers/net/wireless/rndis_wlan.c 1012 */[ETH_ALEN];
}
