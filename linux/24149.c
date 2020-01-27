cocci_test_suite() {
	bool cocci_id/* net/ncsi/ncsi-aen.c 54 */;
	struct ncsi_package *cocci_id/* net/ncsi/ncsi-aen.c 53 */;
	struct ncsi_aen_lsc_pkt *cocci_id/* net/ncsi/ncsi-aen.c 52 */;
	unsigned char *cocci_id/* net/ncsi/ncsi-aen.c 38 */;
	void *cocci_id/* net/ncsi/ncsi-aen.c 34 */;
	__be32 *cocci_id/* net/ncsi/ncsi-aen.c 23 */;
	u32 cocci_id/* net/ncsi/ncsi-aen.c 22 */;
	struct ncsi_aen_handler *cocci_id/* net/ncsi/ncsi-aen.c 211 */;
	struct ncsi_aen_pkt_hdr *cocci_id/* net/ncsi/ncsi-aen.c 210 */;
	struct sk_buff *cocci_id/* net/ncsi/ncsi-aen.c 208 */;
	struct ncsi_dev_priv *cocci_id/* net/ncsi/ncsi-aen.c 208 */;
	int cocci_id/* net/ncsi/ncsi-aen.c 208 */;
	const unsigned short cocci_id/* net/ncsi/ncsi-aen.c 20 */;
	struct ncsi_aen_handler {
		unsigned char type;
		int payload;
		int (*handler)(struct ncsi_dev_priv *ndp,
			       struct ncsi_aen_pkt_hdr *h);
	} cocci_id/* net/ncsi/ncsi-aen.c 197 */[];
	struct ncsi_aen_hncdsc_pkt *cocci_id/* net/ncsi/ncsi-aen.c 177 */;
	struct ncsi_channel_mode *cocci_id/* net/ncsi/ncsi-aen.c 176 */;
	unsigned long cocci_id/* net/ncsi/ncsi-aen.c 144 */;
	struct ncsi_channel *cocci_id/* net/ncsi/ncsi-aen.c 143 */;
}
