cocci_test_suite() {
	void cocci_id/* net/caif/cfpkt_skbuff.c 96 */;
	enum caif_direction cocci_id/* net/caif/cfpkt_skbuff.c 65 */;
	struct cfpkt_priv_data *cocci_id/* net/caif/cfpkt_skbuff.c 45 */;
	struct cfpkt_priv_data {
		struct dev_info dev_info;
		bool erronous;
	} cocci_id/* net/caif/cfpkt_skbuff.c 40 */;
	struct caif_payload_info *cocci_id/* net/caif/cfpkt_skbuff.c 372 */;
	bool cocci_id/* net/caif/cfpkt_skbuff.c 367 */;
	struct cfpkt {
		struct sk_buff skb;
	} cocci_id/* net/caif/cfpkt_skbuff.c 35 */;
	u16 (*cocci_id/* net/caif/cfpkt_skbuff.c 254 */)(u16, void *, u16);
	struct cfpktq {
		struct sk_buff_head head;
		atomic_t count;
		spinlock_t lock;
	} cocci_id/* net/caif/cfpkt_skbuff.c 24 */;
	const u8 *cocci_id/* net/caif/cfpkt_skbuff.c 220 */;
	u8 cocci_id/* net/caif/cfpkt_skbuff.c 210 */;
	u8 *cocci_id/* net/caif/cfpkt_skbuff.c 176 */;
	struct sk_buff *cocci_id/* net/caif/cfpkt_skbuff.c 174 */;
	u16 cocci_id/* net/caif/cfpkt_skbuff.c 172 */;
	const void *cocci_id/* net/caif/cfpkt_skbuff.c 172 */;
	struct cfpkt *cocci_id/* net/caif/cfpkt_skbuff.c 172 */;
	int cocci_id/* net/caif/cfpkt_skbuff.c 172 */;
	void *cocci_id/* net/caif/cfpkt_skbuff.c 119 */;
}
