cocci_test_suite() {
	struct ath_buf **cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 895 */;
	enum{MCS_HT20, MCS_HT20_SGI, MCS_HT40, MCS_HT40_SGI,} cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 73 */;
	int cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 70 */(struct ieee80211_hw *hw,
								   struct sk_buff *skb,
								   struct ath_tx_control *txctl);
	struct ath_buf *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 66 */(struct ath_softc *sc,
									       struct ath_txq *txq,
									       struct ath_atx_tid *tid,
									       struct sk_buff *skb);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 64 */(struct ath_softc *sc,
								    struct ath_atx_tid *tid,
								    struct ath_buf *bf);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 61 */(struct ath_softc *sc,
								    struct ath_buf *bf,
								    struct ath_tx_status *ts,
								    int nframes,
								    int nbad,
								    int txok);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 59 */(struct ath_softc *sc,
								    struct ath_txq *txq,
								    struct list_head *head,
								    bool internal);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 55 */(struct ath_softc *sc,
								    struct ath_buf *bf,
								    struct ath_txq *txq,
								    struct list_head *bf_q,
								    struct ieee80211_sta *sta,
								    struct ath_tx_status *ts,
								    int txok);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 52 */(struct ath_softc *sc,
								    struct sk_buff *skb,
								    int tx_flags,
								    struct ath_txq *txq,
								    struct ieee80211_sta *sta);
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 50 */(struct ath_softc *sc,
								    struct ath_txq *txq,
								    struct ath_atx_tid *tid,
								    struct sk_buff *skb);
	struct ieee80211_tx_rate cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 455 */[4];
	u32 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 452 */[WME_BA_BMP_SIZE >> 5];
	struct sk_buff_head cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 450 */;
	struct ath_tx_status *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 443 */;
	int *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 411 */;
	u16 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 38 */[][2];
	struct ath_common *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2847 */;
	struct ath_frame_info *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2846 */;
	struct ath_tx_control *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2843 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2842 */;
	struct ath_descdma *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2733 */;
	struct ath_desc *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2559 */;
	unsigned long cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2405 */;
	struct ath_tx_info cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2338 */;
	struct sk_buff **cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 222 */;
	struct ath_vif *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2201 */;
	struct ieee80211_vif *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2200 */;
	struct ath9k_channel *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2128 */;
	enum ath9k_key_type cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2077 */;
	struct ieee80211_key_conf *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 2072 */;
	struct ath_tx_control cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 192 */;
	struct ieee80211_txq cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 189 */;
	void *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 189 */;
	struct ath_tx_status cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1812 */;
	struct list_head *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1808 */;
	struct ath_beacon_config *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1795 */;
	struct ath9k_tx_queue_info cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1794 */;
	struct ath9k_tx_queue_info *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1766 */;
	const int cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1697 */[];
	struct ath_buf cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1682 */;
	struct ath_atx_tid *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1640 */;
	struct ath_buf *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1634 */;
	struct list_head cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1633 */;
	struct ieee80211_tx_info *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1632 */;
	struct ath_txq *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1631 */;
	struct ath_node *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1630 */;
	struct ath_softc *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1629 */;
	bool cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1627 */;
	enum ieee80211_frame_release_type cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1626 */;
	u16 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1625 */;
	int cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1625 */;
	struct ieee80211_sta *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1624 */;
	struct ieee80211_hw *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1623 */;
	void cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1623 */;
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1611 */;
	u16 *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1511 */;
	struct ath_frame_info cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 143 */;
	__le16 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1323 */;
	enum ath9k_pkt_type cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1319 */;
	struct ieee80211_txq *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 124 */;
	u8 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1217 */;
	u32 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1215 */;
	const struct ieee80211_rate *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1212 */;
	struct ieee80211_tx_rate *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1211 */;
	struct ath_hw *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1207 */;
	struct ath_tx_info *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1205 */;
	s8 cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1171 */;
	struct modal_eep_header *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1156 */;
	struct ar5416_eeprom_def *cocci_id/* drivers/net/wireless/ath/ath9k/xmit.c 1151 */;
}
