cocci_test_suite() {
	size_t cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 96 */;
	struct rxpd cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 87 */;
	unsigned int cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 85 */;
	u8 *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 79 */;
	const u8 cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 65 */[];
	struct ethhdr *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 64 */;
	struct rxpd *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 62 */;
	struct rxpackethdr *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 61 */;
	struct net_device *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 60 */;
	struct sk_buff *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 57 */;
	struct lbs_private *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 57 */;
	int cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 57 */;
	int cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 46 */(struct lbs_private *priv,
									struct sk_buff *skb);
	struct rx80211packethdr {
		struct rxpd rx_pd;
		void *eth80211_hdr;
	}__packed cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 41 */;
	struct rxpackethdr {
		struct eth803hdr eth803_hdr;
		struct rfc1042hdr rfc1042_hdr;
	}__packed cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 36 */;
	struct rfc1042hdr {
		u8 llc_dsap;
		u8 llc_ssap;
		u8 llc_ctrl;
		u8 snap_oui[3];
		u16 snap_type;
	}__packed cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 28 */;
	struct rx_radiotap_hdr *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 220 */;
	struct eth803hdr {
		u8 dest_addr[6];
		u8 src_addr[6];
		u16 h803_len;
	}__packed cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 22 */;
	struct rx_radiotap_hdr cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 219 */;
	struct rx80211packethdr *cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 217 */;
	u8 cocci_id/* drivers/net/wireless/marvell/libertas/rx.c 171 */;
}
