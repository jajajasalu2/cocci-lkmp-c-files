cocci_test_suite() {
	struct vnt_rrv_time_ab *cocci_id/* drivers/staging/vt6655/rxtx.c 989 */;
	struct vnt_rrv_time_cts *cocci_id/* drivers/staging/vt6655/rxtx.c 978 */;
	struct vnt_rrv_time_rts *cocci_id/* drivers/staging/vt6655/rxtx.c 968 */;
	void cocci_id/* drivers/staging/vt6655/rxtx.c 91 */(struct vnt_private *pDevice,
							    unsigned char byPktType,
							    void *pvRTS,
							    unsigned int cbFrameLength,
							    bool bNeedAck,
							    bool bDisCRC,
							    struct ieee80211_hdr *hdr,
							    unsigned short wCurrentRate,
							    unsigned char byFBOption);
	struct vnt_cts *cocci_id/* drivers/staging/vt6655/rxtx.c 881 */;
	struct vnt_cts_fb *cocci_id/* drivers/staging/vt6655/rxtx.c 843 */;
	void cocci_id/* drivers/staging/vt6655/rxtx.c 815 */;
	struct vnt_rts_a_fb *cocci_id/* drivers/staging/vt6655/rxtx.c 762 */;
	struct vnt_rts_ab *cocci_id/* drivers/staging/vt6655/rxtx.c 742 */;
	struct vnt_rts_g_fb *cocci_id/* drivers/staging/vt6655/rxtx.c 686 */;
	struct vnt_rts_g *cocci_id/* drivers/staging/vt6655/rxtx.c 651 */;
	const unsigned short cocci_id/* drivers/staging/vt6655/rxtx.c 64 */[2][5];
	const unsigned short cocci_id/* drivers/staging/vt6655/rxtx.c 59 */[2][MAX_RATE];
	struct vnt_tx_datahead_ab *cocci_id/* drivers/staging/vt6655/rxtx.c 573 */;
	struct vnt_tx_datahead_a_fb *cocci_id/* drivers/staging/vt6655/rxtx.c 558 */;
	struct vnt_tx_datahead_g_fb *cocci_id/* drivers/staging/vt6655/rxtx.c 532 */;
	struct vnt_tx_datahead_g *cocci_id/* drivers/staging/vt6655/rxtx.c 498 */;
	struct ieee80211_bss_conf *cocci_id/* drivers/staging/vt6655/rxtx.c 1502 */;
	struct ieee80211_vif *cocci_id/* drivers/staging/vt6655/rxtx.c 1501 */;
	int cocci_id/* drivers/staging/vt6655/rxtx.c 1501 */;
	u32 cocci_id/* drivers/staging/vt6655/rxtx.c 1414 */;
	struct ieee80211_mgmt *cocci_id/* drivers/staging/vt6655/rxtx.c 1411 */;
	struct vnt_tx_short_buf_head *cocci_id/* drivers/staging/vt6655/rxtx.c 1409 */;
	u8 cocci_id/* drivers/staging/vt6655/rxtx.c 1281 */;
	struct ieee80211_rate *cocci_id/* drivers/staging/vt6655/rxtx.c 1275 */;
	struct ieee80211_tx_rate *cocci_id/* drivers/staging/vt6655/rxtx.c 1274 */;
	__le16 cocci_id/* drivers/staging/vt6655/rxtx.c 127 */(struct vnt_private *pDevice,
							       unsigned char byPktType,
							       void *pTxDataHead,
							       unsigned int cbFrameLength,
							       unsigned int uDMAIdx,
							       bool bNeedAck,
							       unsigned int uFragIdx,
							       unsigned int cbLastFragmentSize,
							       unsigned int uMACfragNum,
							       unsigned char byFBOption,
							       unsigned short wCurrentRate,
							       bool is_pspoll);
	u64 cocci_id/* drivers/staging/vt6655/rxtx.c 1203 */;
	unsigned int cocci_id/* drivers/staging/vt6655/rxtx.c 120 */(struct vnt_private *pDevice,
								     unsigned char byPktType,
								     unsigned char *pbyTxBufferAddr,
								     unsigned int uDMAIdx,
								     struct vnt_tx_desc *pHeadTD,
								     unsigned int uNodeIndex);
	struct ieee80211_key_conf *cocci_id/* drivers/staging/vt6655/rxtx.c 1199 */;
	u8 *cocci_id/* drivers/staging/vt6655/rxtx.c 1198 */;
	struct vnt_tx_datahead_a_fb cocci_id/* drivers/staging/vt6655/rxtx.c 1158 */;
	struct vnt_rts_a_fb cocci_id/* drivers/staging/vt6655/rxtx.c 1156 */;
	struct vnt_tx_datahead_ab cocci_id/* drivers/staging/vt6655/rxtx.c 1138 */;
	struct vnt_rts_ab cocci_id/* drivers/staging/vt6655/rxtx.c 1136 */;
	struct vnt_rrv_time_ab cocci_id/* drivers/staging/vt6655/rxtx.c 1132 */;
	struct vnt_cts_fb cocci_id/* drivers/staging/vt6655/rxtx.c 1122 */;
	struct vnt_tx_datahead_g_fb cocci_id/* drivers/staging/vt6655/rxtx.c 1115 */;
	struct vnt_rts_g_fb cocci_id/* drivers/staging/vt6655/rxtx.c 1113 */;
	struct vnt_cts cocci_id/* drivers/staging/vt6655/rxtx.c 1101 */;
	struct vnt_rrv_time_cts cocci_id/* drivers/staging/vt6655/rxtx.c 1097 */;
	struct vnt_tx_datahead_g cocci_id/* drivers/staging/vt6655/rxtx.c 1094 */;
	struct vnt_rts_g cocci_id/* drivers/staging/vt6655/rxtx.c 1091 */;
	struct vnt_rrv_time_rts cocci_id/* drivers/staging/vt6655/rxtx.c 1087 */;
	struct vnt_tx_fifo_head cocci_id/* drivers/staging/vt6655/rxtx.c 1081 */;
	struct vnt_mic_hdr cocci_id/* drivers/staging/vt6655/rxtx.c 1058 */;
	void cocci_id/* drivers/staging/vt6655/rxtx.c 105 */(struct vnt_private *pDevice,
							     unsigned char byPktType,
							     struct vnt_tx_fifo_head *,
							     void *pvRrvTime,
							     void *pvRTS,
							     void *pvCTS,
							     unsigned int cbFrameSize,
							     bool bNeedACK,
							     unsigned int uDMAIdx,
							     void *psEthHeader,
							     unsigned short wCurrentRate);
	unsigned short cocci_id/* drivers/staging/vt6655/rxtx.c 1048 */;
	struct vnt_mic_hdr *cocci_id/* drivers/staging/vt6655/rxtx.c 1044 */;
	void *cocci_id/* drivers/staging/vt6655/rxtx.c 1043 */;
	bool cocci_id/* drivers/staging/vt6655/rxtx.c 1039 */;
	__le16 cocci_id/* drivers/staging/vt6655/rxtx.c 1032 */;
	u16 cocci_id/* drivers/staging/vt6655/rxtx.c 1030 */;
	struct vnt_tx_fifo_head *cocci_id/* drivers/staging/vt6655/rxtx.c 1028 */;
	struct ieee80211_hdr *cocci_id/* drivers/staging/vt6655/rxtx.c 1027 */;
	struct ieee80211_tx_info *cocci_id/* drivers/staging/vt6655/rxtx.c 1026 */;
	struct sk_buff *cocci_id/* drivers/staging/vt6655/rxtx.c 1025 */;
	struct vnt_td_info *cocci_id/* drivers/staging/vt6655/rxtx.c 1024 */;
	struct vnt_tx_desc *cocci_id/* drivers/staging/vt6655/rxtx.c 1021 */;
	unsigned char *cocci_id/* drivers/staging/vt6655/rxtx.c 1020 */;
	struct vnt_private *cocci_id/* drivers/staging/vt6655/rxtx.c 1019 */;
	unsigned char cocci_id/* drivers/staging/vt6655/rxtx.c 1019 */;
	unsigned int cocci_id/* drivers/staging/vt6655/rxtx.c 1018 */;
}
