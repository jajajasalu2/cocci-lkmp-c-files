cocci_test_suite() {
	struct wtbl_req_hdr cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 992 */;
	struct wtbl_rx cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 976 */;
	struct wtbl_generic cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 969 */;
	struct {
		struct wtbl_req_hdr hdr;
		struct wtbl_generic g_wtbl;
		struct wtbl_rx rx_wtbl;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 957 */;
	struct mt7615_sta *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 956 */;
	struct mt7615_vif *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 955 */;
	struct ieee80211_sta *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 953 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 952 */;
	struct req_hdr *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 812 */;
	struct req_hdr cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 808 */;
	struct req_hdr {
		u8 bss_idx;
		u8 rsv0;
		__le16 tlv_num;
		u8 is_tlv_append;
		u8 rsv1[3];
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 801 */;
	struct bss_info_ext_bss cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 792 */;
	struct bss_info_ext_bss *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 784 */;
	struct bss_info_basic cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 769 */;
	struct bss_info_basic *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 766 */;
	bool cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 763 */;
	u8 *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 761 */;
	void cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 760 */;
	struct bss_info_omac cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 753 */;
	struct bss_info_omac *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 748 */;
	struct req_tlv cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 733 */;
	struct {
		struct req_hdr {
			u8 omac_idx;
			u8 band_idx;
			__le16 tlv_num;
			u8 is_tlv_append;
			u8 rsv[3];
		}__packed hdr;
		struct req_tlv {
			__le16 tag;
			__le16 len;
			u8 active;
			u8 band_idx;
			u8 omac_addr[ETH_ALEN];
		}__packed tlv;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 709 */;
	struct {
		u8 pm_number;
		u8 pm_state;
		u8 bssid[ETH_ALEN];
		u8 dtim_period;
		u8 wlan_idx;
		__le16 bcn_interval;
		__le32 aid;
		__le32 rx_filter;
		u8 band_idx;
		u8 rsv[3];
		__le32 feature;
		u8 omac_idx;
		u8 wmm_idx;
		u8 bcn_loss_cnt;
		u8 bcn_sp_duration;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 679 */;
	struct mt7615_mcu_txd cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 65 */;
	struct req_data {
		u8 number;
		u8 rsv[3];
		u8 queue;
		u8 valid;
		u8 aifs;
		u8 cw_min;
		__le16 cw_max;
		__le16 txop;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 647 */;
	const struct ieee80211_tx_queue_params *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 639 */;
	struct {
		u8 prot_idx;
		u8 band;
		u8 rsv[2];
		__le32 len_thresh;
		__le32 pkt_thresh;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 621 */;
	struct {
		u8 enable;
		u8 band;
		u8 rsv[2];
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 606 */;
	__le32 *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 58 */;
	struct {
		u8 buffer_mode;
		u8 pad;
		u16 len;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 578 */;
	u32 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 57 */;
	enum mt76_txq_id cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 56 */;
	u8 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 55 */;
	const struct mt76_mcu_ops cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 548 */;
	struct mt7615_mcu_txd *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 54 */;
	int *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 52 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 51 */;
	struct mt7615_dev *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 51 */;
	int cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 51 */;
	const struct mt7615_fw_trailer *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 449 */;
	const u8 *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 418 */;
	const struct firmware *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 337 */;
	const struct mt7615_patch_hdr *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 336 */;
	struct {
		u8 check_crc;
		u8 reserved[3];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 311 */;
	struct {
		__le32 op;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 299 */;
	struct {
		__le32 option;
		__le32 addr;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 279 */;
	struct {
		__le32 addr;
		__le32 len;
		__le32 mode;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 240 */;
	struct mt7615_fw_trailer {
		__le32 addr;
		u8 chip_id;
		u8 feature_set;
		u8 eco_code;
		char fw_ver[10];
		char build_date[15];
		__le32 len;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 22 */;
	void *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 182 */;
	struct {
		u8 action;
		u8 rsv[3];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1606 */;
	struct sta_rec_ba cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1582 */;
	struct {
		struct sta_req_hdr hdr;
		struct sta_rec_ba ba;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1569 */;
	struct wtbl_ba cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1561 */;
	struct {
		struct wtbl_req_hdr hdr;
		struct wtbl_ba ba;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1550 */;
	struct ieee80211_ampdu_params *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1545 */;
	unsigned long cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 147 */;
	struct mt7615_dev cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 146 */;
	struct sta_rec_vht *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1457 */;
	const void *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 143 */;
	struct mt76_dev *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 143 */;
	struct wtbl_smps *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1410 */;
	struct mt7615_patch_hdr {
		char build_date[16];
		char platform[4];
		__be32 hw_sw_ver;
		__be32 patch_ver;
		__be16 checksum;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 14 */;
	struct wtbl_vht *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1392 */;
	struct wtbl_ht *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1361 */;
	struct sta_rec_ht *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1360 */;
	struct wtbl_raw *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1359 */;
	struct sta_req_hdr *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1358 */;
	struct wtbl_req_hdr *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1357 */;
	struct {
		u8 control_chan;
		u8 center_chan;
		u8 bw;
		u8 tx_streams;
		u8 rx_streams_mask;
		u8 switch_reason;
		u8 band_idx;
		u8 center_chan2;
		__le16 cac_case;
		u8 channel_band;
		u8 rsv0;
		__le32 outband_freq;
		u8 txpower_drop;
		u8 rsv1[3];
		u8 txpower_sku[53];
		u8 rsv2[3];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1281 */;
	struct cfg80211_chan_def *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1279 */;
	struct {
		u8 pulse_num;
		u8 rsv[3];
		struct {
			u32 start_time;
			u16 width;
			s16 power;
		} pattern[32];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1248 */;
	struct {
		u8 ctrl;
		u8 rdd_idx;
		u8 rdd_rx_sel;
		u8 val;
		u8 rsv[4];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1229 */;
	enum mt7615_rdd_cmd cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1226 */;
	struct mt7615_mcu_rxd *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 119 */;
	s8 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1176 */;
	struct {
		u8 center_chan;
		u8 dbdc_idx;
		u8 band;
		u8 rsv;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1167 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1166 */;
	enum nl80211_band cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1165 */;
	u16 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1147 */;
	struct req {
		u8 omac_idx;
		u8 enable;
		u8 wlan_idx;
		u8 band_idx;
		u8 pkt_type;
		u8 need_pre_tbtt_int;
		__le16 csa_ie_pos;
		__le16 pkt_len;
		__le16 tim_ie_pos;
		u8 pkt[512];
		u8 csa_cnt;
		u8 bcc_cnt;
		__le16 bcc_ie_pos;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1108 */;
	struct ieee80211_mutable_offsets cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1107 */;
	struct mt76_wcid *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1106 */;
	struct sta_rec_basic cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1066 */;
	struct {
		struct sta_req_hdr hdr;
		struct sta_rec_basic basic;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7615/mcu.c 1053 */;
}
