cocci_test_suite() {
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 970 */[ETH_ALEN];
	struct sk_buff *cocci_id/* drivers/net/wireless/atmel/atmel.c 898 */;
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 897 */[6];
	struct {
		AtmelFWType fw_type;
		const char *fw_file;
		const char *fw_file_ext;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 86 */[];
	const u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 801 */[6];
	netdev_tx_t cocci_id/* drivers/net/wireless/atmel/atmel.c 799 */;
	const struct iw_handler_def cocci_id/* drivers/net/wireless/atmel/atmel.c 680 */;
	struct tx_desc cocci_id/* drivers/net/wireless/atmel/atmel.c 633 */;
	struct rx_desc cocci_id/* drivers/net/wireless/atmel/atmel.c 628 */;
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 614 */(struct net_device *dev);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 613 */(struct atmel_private *priv,
								  int new_state);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 610 */(struct net_device *dev,
								  u16 data);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 608 */(struct atmel_private *priv,
								  int bss_index);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 607 */(struct atmel_private *priv,
								  int specific_ssid);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 605 */(struct atmel_private *priv,
								  u8 type,
								  u8 index,
								  u8 *data,
								  int data_len);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 601 */(struct atmel_private *priv,
								  u8 type,
								  u8 index,
								  u16 data);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 599 */(struct atmel_private *priv,
								  u8 type,
								  u8 index,
								  u8 data);
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 598 */(struct atmel_private *priv,
								u8 type,
								u8 index);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 594 */(struct atmel_private *priv,
								  struct ieee80211_hdr *header,
								  u8 *body,
								  int body_len);
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 592 */(struct atmel_private *priv,
								 int command,
								 void *cmd,
								 int cmd_size);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 590 */(struct atmel_private *priv,
								  int command,
								  void *cmd,
								  int cmd_size);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 589 */(struct timer_list *t);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 586 */(struct atmel_private *priv,
								  struct ieee80211_hdr *header,
								  u16 frame_len,
								  u8 rssi);
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 585 */(struct atmel_private *priv,
								 int channel);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 584 */(struct atmel_private *priv);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 583 */(struct atmel_private *priv,
								  u16 pos,
								  u32 data);
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 582 */(struct atmel_private *priv);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 581 */(struct net_device *dev,
								  u16 mask);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 578 */(struct net_device *dev,
								  unsigned char *dest,
								  u16 src,
								  u16 len);
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 576 */(struct net_device *dev,
								  u16 dest,
								  const unsigned char *src,
								  u16 len);
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 575 */(struct net_device *dev,
								 struct ifreq *rq,
								 int cmd);
	const struct {
		int reg_domain;
		int min,max;
		char *name;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 561 */[];
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 559 */[4];
	struct atmel_private {
		void *card;
		int (*present_callback)(void *);
		char firmware_id[32];
		AtmelFWType firmware_type;
		u8 *firmware;
		int firmware_length;
		struct timer_list management_timer;
		struct net_device *dev;
		struct device *sys_dev;
		struct iw_statistics wstats;
		spinlock_t irqlock,timerlock;
		enum{BUS_TYPE_PCCARD, BUS_TYPE_PCI,} bus_type;
		enum{CARD_TYPE_PARALLEL_FLASH, CARD_TYPE_SPI_FLASH, CARD_TYPE_EEPROM,} card_type;
		int do_rx_crc;
		int probe_crc;
		int crc_ok_cnt,crc_ko_cnt;
		u16 rx_desc_head;
		u16 tx_desc_free,tx_desc_head,tx_desc_tail,tx_desc_previous;
		u16 tx_free_mem,tx_buff_head,tx_buff_tail;
		u16 frag_seq,frag_len,frag_no;
		u8 frag_source[6];
		u8 wep_is_on,default_key,exclude_unencrypted,encryption_level;
		u8 group_cipher_suite,pairwise_cipher_suite;
		u8 wep_keys[MAX_ENCRYPTION_KEYS][MAX_ENCRYPTION_KEY_SIZE];
		int wep_key_len[MAX_ENCRYPTION_KEYS];
		int use_wpa,radio_on_broken;
		u16 host_info_base;
		struct host_info_struct {
			volatile u8 int_status;
			volatile u8 int_mask;
			volatile u8 lockout_host;
			volatile u8 lockout_mac;
			u16 tx_buff_pos;
			u16 tx_buff_size;
			u16 tx_desc_pos;
			u16 tx_desc_count;
			u16 rx_buff_pos;
			u16 rx_buff_size;
			u16 rx_desc_pos;
			u16 rx_desc_count;
			u16 build_version;
			u16 command_pos;
			u16 major_version;
			u16 minor_version;
			u16 func_ctrl;
			u16 mac_status;
			u16 generic_IRQ_type;
			u8 reserved[2];
		} host_info;
		enum{STATION_STATE_SCANNING, STATION_STATE_JOINNING, STATION_STATE_AUTHENTICATING, STATION_STATE_ASSOCIATING, STATION_STATE_READY, STATION_STATE_REASSOCIATING, STATION_STATE_DOWN, STATION_STATE_MGMT_ERROR,} station_state;
		int operating_mode,power_mode;
		unsigned long last_qual;
		int beacons_this_sec;
		int channel;
		int reg_domain,config_reg_domain;
		int tx_rate;
		int auto_tx_rate;
		int rts_threshold;
		int frag_threshold;
		int long_retry,short_retry;
		int preamble;
		int default_beacon_period,beacon_period,listen_interval;
		int CurrentAuthentTransactionSeqNum,ExpectedAuthentTransactionSeqNum;
		int AuthenticationRequestRetryCnt,AssociationRequestRetryCnt,ReAssociationRequestRetryCnt;
		enum{SITE_SURVEY_IDLE, SITE_SURVEY_IN_PROGRESS, SITE_SURVEY_COMPLETED,} site_survey_state;
		unsigned long last_survey;
		int station_was_associated,station_is_associated;
		int fast_scan;
		struct bss_info {
			int channel;
			int SSIDsize;
			int RSSI;
			int UsingWEP;
			int preamble;
			int beacon_period;
			int BSStype;
			u8 BSSID[6];
			u8 SSID[MAX_SSID_LENGTH];
		} BSSinfo[MAX_BSS_ENTRIES];
		int BSS_list_entries,current_BSS;
		int connect_to_any_BSS;
		int SSID_size,new_SSID_size;
		u8 CurrentBSSID[6],BSSID[6];
		u8 SSID[MAX_SSID_LENGTH],new_SSID[MAX_SSID_LENGTH];
		u64 last_beacon_timestamp;
		u8 rx_buf[MAX_WIRELESS_BODY];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 440 */;
	struct net_device *cocci_id/* drivers/net/wireless/atmel/atmel.c 4188 */;
	unsigned char *cocci_id/* drivers/net/wireless/atmel/atmel.c 4165 */;
	const unsigned char *cocci_id/* drivers/net/wireless/atmel/atmel.c 4148 */;
	struct get_set_mib cocci_id/* drivers/net/wireless/atmel/atmel.c 4125 */;
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 395 */[];
	const struct firmware *cocci_id/* drivers/net/wireless/atmel/atmel.c 3881 */;
	char *cocci_id/* drivers/net/wireless/atmel/atmel.c 3866 */[];
	struct {
		u8 cipher_default_key_value[MAX_ENCRYPTION_KEYS][MAX_ENCRYPTION_KEY_SIZE];
		u8 receiver_address[ETH_ALEN];
		u8 wep_is_on;
		u8 default_key;
		u8 group_key;
		u8 exclude_unencrypted;
		u8 encryption_type;
		u8 reserved;
		u32 WEPICV_error_count;
		u32 WEP_excluded_count;
		u8 key_RSC[4][8];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 3785 */;
	struct {
		u8 wep_is_on;
		u8 default_key;
		u8 reserved;
		u8 exclude_unencrypted;
		u32 WEPICV_error_count;
		u32 WEP_excluded_count;
		u8 wep_keys[MAX_ENCRYPTION_KEYS][13];
		u8 encryption_level;
		u8 reserved2[3];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 3747 */;
	struct host_info_struct *cocci_id/* drivers/net/wireless/atmel/atmel.c 3576 */;
	u8 *cocci_id/* drivers/net/wireless/atmel/atmel.c 3501 */;
	u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 3487 */;
	unsigned long cocci_id/* drivers/net/wireless/atmel/atmel.c 3424 */;
	struct timer_list *cocci_id/* drivers/net/wireless/atmel/atmel.c 3421 */;
	u32 cocci_id/* drivers/net/wireless/atmel/atmel.c 3359 */;
	u64 cocci_id/* drivers/net/wireless/atmel/atmel.c 3337 */;
	struct beacon_format *cocci_id/* drivers/net/wireless/atmel/atmel.c 3334 */;
	struct beacon_format {
		__le64 timestamp;
		__le16 interval;
		__le16 capability;
		u8 ssid_el_id;
		u8 ssid_length;
		u8 rates_el_id;
		u8 rates_length;
		u8 ds_el_id;
		u8 ds_length;
	} *cocci_id/* drivers/net/wireless/atmel/atmel.c 3321 */;
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/atmel/atmel.c 3308 */;
	struct bss_info *cocci_id/* drivers/net/wireless/atmel/atmel.c 3202 */;
	int cocci_id/* drivers/net/wireless/atmel/atmel.c 3192 */;
	union iwreq_data cocci_id/* drivers/net/wireless/atmel/atmel.c 3125 */;
	struct ass_resp_format *cocci_id/* drivers/net/wireless/atmel/atmel.c 3119 */;
	struct ass_resp_format {
		__le16 capability;
		__le16 status;
		__le16 ass_id;
		u8 el_id;
		u8 length;
		u8 rates[4];
	} *cocci_id/* drivers/net/wireless/atmel/atmel.c 3112 */;
	u16 cocci_id/* drivers/net/wireless/atmel/atmel.c 3110 */;
	struct atmel_private *cocci_id/* drivers/net/wireless/atmel/atmel.c 3110 */;
	void cocci_id/* drivers/net/wireless/atmel/atmel.c 3110 */;
	struct auth_body *cocci_id/* drivers/net/wireless/atmel/atmel.c 3027 */;
	struct ass_req_format {
		__le16 capability;
		__le16 listen_interval;
		u8 ap[ETH_ALEN];
		u8 ssid_el_id;
		u8 ssid_len;
		u8 ssid[MAX_SSID_LENGTH];
		u8 sup_rates_el_id;
		u8 sup_rates_len;
		u8 rates[4];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2882 */;
	struct auth_body cocci_id/* drivers/net/wireless/atmel/atmel.c 2847 */;
	struct {
		u8 BSSID[6];
		u8 SSID[MAX_SSID_LENGTH];
		u8 BSS_type;
		u8 channel;
		u8 SSID_size;
		u8 reserved[3];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2795 */;
	struct {
		u8 BSSID[6];
		u8 SSID[MAX_SSID_LENGTH];
		u8 BSS_type;
		u8 channel;
		__le16 timeout;
		u8 SSID_size;
		u8 reserved;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2773 */;
	struct {
		u8 BSSID[ETH_ALEN];
		u8 SSID[MAX_SSID_LENGTH];
		u8 scan_type;
		u8 channel;
		__le16 BSS_type;
		__le16 min_channel_time;
		__le16 max_channel_time;
		u8 options;
		u8 SSID_size;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2728 */;
	struct auth_body {
		__le16 alg;
		__le16 trans_seq;
		__le16 status;
		u8 el_id;
		u8 chall_text_len;
		u8 chall_text[253];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2695 */;
	char cocci_id/* drivers/net/wireless/atmel/atmel.c 2632 */[REGDOMAINSZ + 1];
	struct iwreq *cocci_id/* drivers/net/wireless/atmel/atmel.c 2630 */;
	struct atmel_priv_ioctl cocci_id/* drivers/net/wireless/atmel/atmel.c 2629 */;
	struct ifreq *cocci_id/* drivers/net/wireless/atmel/atmel.c 2625 */;
	struct iw_priv_args *cocci_id/* drivers/net/wireless/atmel/atmel.c 2621 */;
	iw_handler *cocci_id/* drivers/net/wireless/atmel/atmel.c 2619 */;
	const struct iw_priv_args cocci_id/* drivers/net/wireless/atmel/atmel.c 2594 */[];
	struct atmel_priv_ioctl {
		char id[32];
		unsigned char __user *data;
		unsigned short len;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 2582 */;
	iw_handler cocci_id/* drivers/net/wireless/atmel/atmel.c 2520 */;
	const iw_handler cocci_id/* drivers/net/wireless/atmel/atmel.c 2518 */[];
	char *cocci_id/* drivers/net/wireless/atmel/atmel.c 2513 */;
	void *cocci_id/* drivers/net/wireless/atmel/atmel.c 2512 */;
	struct iw_request_info *cocci_id/* drivers/net/wireless/atmel/atmel.c 2511 */;
	const u8 cocci_id/* drivers/net/wireless/atmel/atmel.c 2475 */[];
	struct iw_range cocci_id/* drivers/net/wireless/atmel/atmel.c 2403 */;
	struct iw_range *cocci_id/* drivers/net/wireless/atmel/atmel.c 2400 */;
	struct iw_event cocci_id/* drivers/net/wireless/atmel/atmel.c 2331 */;
	struct iw_freq *cocci_id/* drivers/net/wireless/atmel/atmel.c 2275 */;
	__u32 *cocci_id/* drivers/net/wireless/atmel/atmel.c 2072 */;
	struct iw_param *cocci_id/* drivers/net/wireless/atmel/atmel.c 1981 */;
	union iwreq_data *cocci_id/* drivers/net/wireless/atmel/atmel.c 1978 */;
	struct tx_desc {
		u32 NextDescriptor;
		u16 TxStartOfFrame;
		u16 TxLength;
		u8 TxState;
		u8 TxStatus;
		u8 RetryCount;
		u8 TxRate;
		u8 KeyIndex;
		u8 ChiperType;
		u8 ChipreLength;
		u8 Reserved1;
		u8 Reserved;
		u8 PacketType;
		u16 HostTxLength;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 196 */;
	struct iw_encode_ext *cocci_id/* drivers/net/wireless/atmel/atmel.c 1895 */;
	struct iw_point *cocci_id/* drivers/net/wireless/atmel/atmel.c 1798 */;
	struct sockaddr *cocci_id/* drivers/net/wireless/atmel/atmel.c 1697 */;
	struct rx_desc {
		u32 Next;
		u16 MsduPos;
		u16 MsduSize;
		u8 State;
		u8 Status;
		u8 Rate;
		u8 Rssi;
		u8 LinkQuality;
		u8 PreambleType;
		u16 Duration;
		u32 RxTime;
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 165 */;
	struct get_set_mib {
		u8 type;
		u8 size;
		u8 index;
		u8 reserved;
		u8 data[MIB_MAX_DATA_BYTES];
	} cocci_id/* drivers/net/wireless/atmel/atmel.c 157 */;
	int (*cocci_id/* drivers/net/wireless/atmel/atmel.c 1499 */)(void *);
	struct device *cocci_id/* drivers/net/wireless/atmel/atmel.c 1498 */;
	const AtmelFWType cocci_id/* drivers/net/wireless/atmel/atmel.c 1497 */;
	unsigned short cocci_id/* drivers/net/wireless/atmel/atmel.c 1496 */;
	const struct net_device_ops cocci_id/* drivers/net/wireless/atmel/atmel.c 1487 */;
	struct seq_file *cocci_id/* drivers/net/wireless/atmel/atmel.c 1403 */;
	struct iw_statistics *cocci_id/* drivers/net/wireless/atmel/atmel.c 1263 */;
	irqreturn_t cocci_id/* drivers/net/wireless/atmel/atmel.c 1156 */;
	u32 *cocci_id/* drivers/net/wireless/atmel/atmel.c 1135 */;
	struct ieee80211_hdr cocci_id/* drivers/net/wireless/atmel/atmel.c 1055 */;
}
