cocci_test_suite() {
	struct mt7603_mcu_rxd *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 62 */;
	unsigned long cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 61 */;
	struct mt7603_dev cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 60 */;
	bool cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 58 */;
	const void *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 57 */;
	s8 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 452 */;
	struct {
		u8 control_chan;
		u8 center_chan;
		u8 bw;
		u8 tx_streams;
		u8 rx_streams;
		u8 _res0[7];
		u8 txpower[21];
		u8 _res1[3];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 436 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 434 */;
	struct cfg80211_chan_def *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 433 */;
	struct {
		u8 center_channel;
		u8 tssi;
		u8 temp_comp;
		u8 target_power[2];
		u8 rate_power_delta[14];
		u8 bw_power_delta;
		u8 ch_power_delta[6];
		u8 temp_comp_power[17];
		u8 reserved;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 389 */;
	struct req_data *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 364 */;
	u8 *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 362 */;
	const int cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 361 */;
	struct req_data cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 361 */;
	struct {
		u8 buffer_mode;
		u8 len;
		u8 pad[2];
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 353 */;
	struct req_data {
		__le16 addr;
		u8 val;
		u8 pad;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 348 */;
	const u16 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 285 */[];
	void cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 277 */;
	const struct mt76_mcu_ops cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 268 */;
	u8 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 23 */;
	struct mt7603_mcu_txd *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 22 */;
	struct mt76_dev *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 21 */;
	struct mt7603_mcu_txd cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 20 */;
	int *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 18 */;
	u32 cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 171 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 17 */;
	struct mt7603_dev *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 17 */;
	const char *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 169 */;
	const struct mt7603_fw_trailer *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 168 */;
	const struct firmware *cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 167 */;
	int cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 16 */;
	struct {
		__le32 override;
		__le32 addr;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 146 */;
	struct {
		__le32 addr;
		__le32 len;
		__le32 mode;
	} cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 108 */;
	struct mt7603_fw_trailer {
		char fw_ver[10];
		char build_date[15];
		__le32 dl_len;
	}__packed cocci_id/* drivers/net/wireless/mediatek/mt76/mt7603/mcu.c 10 */;
}
