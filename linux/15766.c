cocci_test_suite() {
	struct tx_complete_mon_data {
		int size;
		void *buff;
	} cocci_id/* drivers/staging/wilc1000/mon.c 98 */;
	struct wilc_wfi_radiotap_hdr {
		struct ieee80211_radiotap_header hdr;
		u8 rate;
	}__packed cocci_id/* drivers/staging/wilc1000/mon.c 9 */;
	struct wilc_wfi_radiotap_hdr cocci_id/* drivers/staging/wilc1000/mon.c 80 */;
	struct wilc_wfi_radiotap_hdr *cocci_id/* drivers/staging/wilc1000/mon.c 28 */;
	bool cocci_id/* drivers/staging/wilc1000/mon.c 250 */;
	struct wilc *cocci_id/* drivers/staging/wilc1000/mon.c 250 */;
	u8 *cocci_id/* drivers/staging/wilc1000/mon.c 24 */;
	struct wilc_wfi_mon_priv cocci_id/* drivers/staging/wilc1000/mon.c 227 */;
	struct wilc_wfi_mon_priv *cocci_id/* drivers/staging/wilc1000/mon.c 221 */;
	const char *cocci_id/* drivers/staging/wilc1000/mon.c 218 */;
	const struct net_device_ops cocci_id/* drivers/staging/wilc1000/mon.c 212 */;
	struct wilc_wfi_radiotap_cb_hdr cocci_id/* drivers/staging/wilc1000/mon.c 170 */;
	u8 cocci_id/* drivers/staging/wilc1000/mon.c 149 */[ETH_ALEN];
	struct wilc_wfi_radiotap_cb_hdr *cocci_id/* drivers/staging/wilc1000/mon.c 148 */;
	u32 cocci_id/* drivers/staging/wilc1000/mon.c 145 */;
	netdev_tx_t cocci_id/* drivers/staging/wilc1000/mon.c 142 */;
	struct sk_buff *cocci_id/* drivers/staging/wilc1000/mon.c 142 */;
	struct wilc_wfi_radiotap_cb_hdr {
		struct ieee80211_radiotap_header hdr;
		u8 rate;
		u8 dump;
		u16 tx_flags;
	}__packed cocci_id/* drivers/staging/wilc1000/mon.c 14 */;
	const u8 *cocci_id/* drivers/staging/wilc1000/mon.c 115 */;
	struct net_device *cocci_id/* drivers/staging/wilc1000/mon.c 115 */;
	size_t cocci_id/* drivers/staging/wilc1000/mon.c 115 */;
	struct tx_complete_mon_data *cocci_id/* drivers/staging/wilc1000/mon.c 105 */;
	void *cocci_id/* drivers/staging/wilc1000/mon.c 103 */;
	int cocci_id/* drivers/staging/wilc1000/mon.c 103 */;
	void cocci_id/* drivers/staging/wilc1000/mon.c 103 */;
}
