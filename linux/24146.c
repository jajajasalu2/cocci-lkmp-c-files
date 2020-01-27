cocci_test_suite() {
	struct ncsi_cmd_rc_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 99 */;
	struct ncsi_cmd_dc_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 87 */;
	struct ncsi_cmd_sp_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 75 */;
	struct ncsi_cmd_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 64 */;
	struct ncsi_pkt_hdr cocci_id/* net/ncsi/ncsi-cmd.c 56 */;
	void *cocci_id/* net/ncsi/ncsi-cmd.c 56 */;
	__be32 *cocci_id/* net/ncsi/ncsi-cmd.c 40 */;
	struct ncsi_pkt_hdr *cocci_id/* net/ncsi/ncsi-cmd.c 36 */;
	void cocci_id/* net/ncsi/ncsi-cmd.c 36 */;
	struct ethhdr *cocci_id/* net/ncsi/ncsi-cmd.c 315 */;
	unsigned char cocci_id/* net/ncsi/ncsi-cmd.c 314 */;
	struct ncsi_cmd_handler *cocci_id/* net/ncsi/ncsi-cmd.c 312 */;
	struct ncsi_cmd_pkt_hdr cocci_id/* net/ncsi/ncsi-cmd.c 287 */;
	struct sk_buff *cocci_id/* net/ncsi/ncsi-cmd.c 276 */;
	int cocci_id/* net/ncsi/ncsi-cmd.c 273 */;
	struct net_device *cocci_id/* net/ncsi/ncsi-cmd.c 272 */;
	struct ncsi_dev *cocci_id/* net/ncsi/ncsi-cmd.c 271 */;
	struct ncsi_dev_priv *cocci_id/* net/ncsi/ncsi-cmd.c 270 */;
	struct ncsi_request *cocci_id/* net/ncsi/ncsi-cmd.c 268 */;
	struct ncsi_cmd_arg *cocci_id/* net/ncsi/ncsi-cmd.c 268 */;
	struct ncsi_cmd_handler {
		unsigned char type;
		int payload;
		int (*handler)(struct sk_buff *skb, struct ncsi_cmd_arg *nca);
	} cocci_id/* net/ncsi/ncsi-cmd.c 230 */[];
	unsigned int cocci_id/* net/ncsi/ncsi-cmd.c 215 */;
	struct ncsi_cmd_oem_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 214 */;
	u32 cocci_id/* net/ncsi/ncsi-cmd.c 21 */;
	unsigned char *cocci_id/* net/ncsi/ncsi-cmd.c 21 */;
	struct ncsi_cmd_snfc_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 202 */;
	struct ncsi_cmd_egmf_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 190 */;
	struct ncsi_cmd_ebf_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 178 */;
	struct ncsi_cmd_sma_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 162 */;
	struct ncsi_cmd_ev_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 150 */;
	struct ncsi_cmd_svf_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 136 */;
	struct ncsi_cmd_sl_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 123 */;
	struct ncsi_cmd_ae_pkt *cocci_id/* net/ncsi/ncsi-cmd.c 110 */;
}
