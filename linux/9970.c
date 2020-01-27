cocci_test_suite() {
	struct wsm_scan_complete cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 995 */;
	struct cw1200_wsm_event cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 925 */;
	struct cw1200_wsm_event *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 918 */;
	struct wsm_rx cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 865 */;
	int cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 81 */(struct cw1200_common *priv,
								  struct wsm_buf *buf,
								  void *arg,
								  u16 cmd,
								  long tmo);
	const char *const cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 802 */[];
	int cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 79 */(struct wsm_buf *buf,
								  size_t extra_size);
	void cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 78 */(struct wsm_buf *buf);
	const struct wsm_update_ie *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 772 */;
	const struct wsm_map_link *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 748 */;
	const struct wsm_beacon_transmit *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 700 */;
	const struct wsm_start *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 666 */;
	const struct wsm_set_pm *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 640 */;
	const struct wsm_switch_channel *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 612 */;
	const struct wsm_edca_params *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 565 */;
	u8 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 540 */[];
	const struct wsm_set_tx_queue_params *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 536 */;
	const struct wsm_remove_key *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 511 */;
	struct wsm_buf *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 492 */;
	const struct wsm_add_key *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 489 */;
	type2 *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 47 */;
	const struct wsm_set_bss_params *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 464 */;
	type cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 44 */;
	struct wsm_join_cnf cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 429 */;
	struct wsm_join *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 425 */;
	struct wsm_join_cnf *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 408 */;
	struct wsm_tx_confirm cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 356 */;
	const struct wsm_scan *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 287 */;
	const char *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 279 */;
	struct wsm_mib *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 215 */;
	struct wsm_mib cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 194 */;
	struct wsm_mib {
		u16 mib_id;
		void *buf;
		size_t buf_size;
	} cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 183 */;
	u8 *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1805 */;
	size_t cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1801 */;
	u32 *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1795 */;
	void cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1785 */;
	struct ieee80211_hdr *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1743 */;
	const struct cw1200_txpriv *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1668 */;
	struct cw1200_queue *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1665 */;
	struct ieee80211_tx_info *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1664 */;
	struct wsm_tx *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1663 */;
	size_t *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1661 */;
	u8 **cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1660 */;
	const struct wsm_reset *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 163 */;
	bool *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1623 */;
	struct cw1200_queue **cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1621 */;
	unsigned cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1584 */;
	struct wsm_edca_queue_params *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1583 */;
	const int cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1581 */;
	u32 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1579 */;
	int *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1579 */;
	struct cw1200_common *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1578 */;
	int cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1578 */;
	enum{do_probe, do_drop, do_wep, do_tx,} cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1465 */;
	__le16 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1464 */;
	const struct ieee80211_hdr *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1462 */;
	const struct ieee80211_tx_info *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1457 */;
	struct wsm_hdr *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1298 */;
	struct sk_buff **cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1298 */;
	unsigned int cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1247 */;
	char cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1246 */[48];
	u32 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1245 */[18];
	struct wsm_buf cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1243 */;
	unsigned long cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1180 */;
	bool cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1178 */;
	__le16 *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1099 */;
	u16 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1076 */;
	void *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1076 */;
	long cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1076 */;
	struct wsm_suspend_resume cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1054 */;
	struct wsm_configuration *cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 105 */;
	u8 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1034 */[ETH_ALEN];
	u8 cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1032 */;
	struct wsm_join_complete cocci_id/* drivers/net/wireless/st/cw1200/wsm.c 1010 */;
}
