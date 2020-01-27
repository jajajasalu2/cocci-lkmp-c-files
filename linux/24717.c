cocci_test_suite() {
	const char *const cocci_id/* net/netfilter/nf_conntrack_pptp.c 75 */[];
	void (*cocci_id/* net/netfilter/nf_conntrack_pptp.c 68 */)(struct nf_conn *ct,
								   struct nf_conntrack_expect *exp)__read_mostly;
	void __exit cocci_id/* net/netfilter/nf_conntrack_pptp.c 621 */;
	void cocci_id/* net/netfilter/nf_conntrack_pptp.c 621 */;
	void (*cocci_id/* net/netfilter/nf_conntrack_pptp.c 62 */)(struct nf_conntrack_expect *expect_orig,
								   struct nf_conntrack_expect *expect_reply)
			    __read_mostly;
	struct nf_ct_pptp_master cocci_id/* net/netfilter/nf_conntrack_pptp.c 616 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_pptp.c 614 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_pptp.c 603 */;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_pptp.c 597 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_pptp.c 55 */)(struct sk_buff *skb,
								  struct nf_conn *ct,
								  enum ip_conntrack_info ctinfo,
								  unsigned int protoff,
								  struct PptpControlHeader *ctlh,
								  union pptp_ctrl_union *pptpReq)__read_mostly;
	struct nf_conn_nat *cocci_id/* net/netfilter/nf_conntrack_pptp.c 527 */;
	u_int16_t cocci_id/* net/netfilter/nf_conntrack_pptp.c 523 */;
	union pptp_ctrl_union cocci_id/* net/netfilter/nf_conntrack_pptp.c 518 */;
	struct PptpControlHeader cocci_id/* net/netfilter/nf_conntrack_pptp.c 517 */;
	struct pptp_pkt_hdr cocci_id/* net/netfilter/nf_conntrack_pptp.c 516 */;
	const struct pptp_pkt_hdr *cocci_id/* net/netfilter/nf_conntrack_pptp.c 515 */;
	struct tcphdr cocci_id/* net/netfilter/nf_conntrack_pptp.c 514 */;
	const struct tcphdr *cocci_id/* net/netfilter/nf_conntrack_pptp.c 513 */;
	const struct nf_ct_pptp_master *cocci_id/* net/netfilter/nf_conntrack_pptp.c 512 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_pptp.c 508 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_pptp.c 508 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_pptp.c 507 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_pptp.c 507 */;
	int cocci_id/* net/netfilter/nf_conntrack_pptp.c 506 */;
	struct PptpSetLinkInfo cocci_id/* net/netfilter/nf_conntrack_pptp.c 502 */;
	struct PptpWanErrorNotify cocci_id/* net/netfilter/nf_conntrack_pptp.c 501 */;
	struct PptpCallDisconnectNotify cocci_id/* net/netfilter/nf_conntrack_pptp.c 500 */;
	struct PptpClearCallRequest cocci_id/* net/netfilter/nf_conntrack_pptp.c 499 */;
	struct PptpInCallConnected cocci_id/* net/netfilter/nf_conntrack_pptp.c 498 */;
	struct PptpInCallReply cocci_id/* net/netfilter/nf_conntrack_pptp.c 497 */;
	struct PptpInCallRequest cocci_id/* net/netfilter/nf_conntrack_pptp.c 496 */;
	struct PptpOutCallReply cocci_id/* net/netfilter/nf_conntrack_pptp.c 495 */;
	struct PptpOutCallRequest cocci_id/* net/netfilter/nf_conntrack_pptp.c 494 */;
	struct PptpStopSessionReply cocci_id/* net/netfilter/nf_conntrack_pptp.c 493 */;
	struct PptpStopSessionRequest cocci_id/* net/netfilter/nf_conntrack_pptp.c 492 */;
	struct PptpStartSessionReply cocci_id/* net/netfilter/nf_conntrack_pptp.c 491 */;
	struct PptpStartSessionRequest cocci_id/* net/netfilter/nf_conntrack_pptp.c 490 */;
	const unsigned int cocci_id/* net/netfilter/nf_conntrack_pptp.c 489 */[];
	typeof(nf_nat_pptp_hook_outbound) cocci_id/* net/netfilter/nf_conntrack_pptp.c 404 */;
	typeof(nf_nat_pptp_hook_inbound) cocci_id/* net/netfilter/nf_conntrack_pptp.c 276 */;
	struct nf_ct_pptp_master *cocci_id/* net/netfilter/nf_conntrack_pptp.c 273 */;
	union pptp_ctrl_union *cocci_id/* net/netfilter/nf_conntrack_pptp.c 268 */;
	struct PptpControlHeader *cocci_id/* net/netfilter/nf_conntrack_pptp.c 267 */;
	typeof(nf_nat_pptp_hook_exp_gre) cocci_id/* net/netfilter/nf_conntrack_pptp.c 206 */;
	enum ip_conntrack_dir cocci_id/* net/netfilter/nf_conntrack_pptp.c 204 */;
	__be16 cocci_id/* net/netfilter/nf_conntrack_pptp.c 201 */;
	struct nf_conntrack_tuple cocci_id/* net/netfilter/nf_conntrack_pptp.c 179 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_pptp.c 146 */;
	const struct nf_conntrack_zone *cocci_id/* net/netfilter/nf_conntrack_pptp.c 145 */;
	const struct nf_conntrack_tuple_hash *cocci_id/* net/netfilter/nf_conntrack_pptp.c 144 */;
	const struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conntrack_pptp.c 142 */;
	struct net *cocci_id/* net/netfilter/nf_conntrack_pptp.c 141 */;
	typeof(nf_nat_pptp_hook_expectfn) cocci_id/* net/netfilter/nf_conntrack_pptp.c 107 */;
}
