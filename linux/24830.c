cocci_test_suite() {
	Alerting_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 977 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 96 */)(struct sk_buff *skb,
								       struct nf_conn *ct,
								       enum ip_conntrack_info ctinfo,
								       unsigned int protoff,
								       unsigned char **data,
								       int dataoff,
								       TransportAddress *taddr,
								       __be16 port,
								       struct nf_conntrack_expect *exp)__read_mostly;
	Connect_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 946 */;
	CallProceeding_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 915 */;
	Setup_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 844 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 82 */)(struct sk_buff *skb,
								       struct nf_conn *ct,
								       enum ip_conntrack_info ctinfo,
								       unsigned int protoff,
								       unsigned char **data,
								       int dataoff,
								       H245_TransportAddress *taddr,
								       __be16 port,
								       struct nf_conntrack_expect *exp)__read_mostly;
	typeof(nat_callforwarding_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 793 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 791 */;
	union nf_inet_addr cocci_id/* net/netfilter/nf_conntrack_h323_main.c 790 */;
	__be16 cocci_id/* net/netfilter/nf_conntrack_h323_main.c 789 */;
	TransportAddress *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 785 */;
	unsigned char **cocci_id/* net/netfilter/nf_conntrack_h323_main.c 784 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_h323_main.c 782 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 781 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 780 */;
	struct flowi6 cocci_id/* net/netfilter/nf_conntrack_h323_main.c 753 */;
	struct rt6_info *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 752 */;
	struct dst_entry **cocci_id/* net/netfilter/nf_conntrack_h323_main.c 736 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 73 */)(struct sk_buff *skb,
								       struct nf_conn *ct,
								       enum ip_conntrack_info ctinfo,
								       unsigned int protoff,
								       unsigned char **data,
								       int dataoff,
								       H245_TransportAddress *taddr,
								       __be16 port,
								       __be16 rtp_port,
								       struct nf_conntrack_expect *rtp_exp,
								       struct nf_conntrack_expect *rtcp_exp)__read_mostly;
	struct rtable *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 729 */;
	struct flowi4 cocci_id/* net/netfilter/nf_conntrack_h323_main.c 728 */;
	u_int8_t cocci_id/* net/netfilter/nf_conntrack_h323_main.c 722 */;
	const union nf_inet_addr *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 720 */;
	struct net *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 719 */;
	int cocci_id/* net/netfilter/nf_conntrack_h323_main.c 719 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 68 */)(struct sk_buff *skb,
								       struct nf_conn *ct,
								       enum ip_conntrack_info ctinfo,
								       unsigned int protoff,
								       unsigned char **data,
								       TransportAddress *taddr,
								       int count)__read_mostly;
	typeof(nat_h245_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 677 */;
	void *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 661 */;
	const unsigned char *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 640 */;
	__be16 *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 638 */;
	unsigned char *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 636 */;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_h323_main.c 622 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 58 */)(struct sk_buff *skb,
								       unsigned int protoff,
								       unsigned char **data,
								       int dataoff,
								       TransportAddress *taddr,
								       union nf_inet_addr *addr,
								       __be16 port)
			   __read_mostly;
	MultimediaSystemControlMessage cocci_id/* net/netfilter/nf_conntrack_h323_main.c 576 */;
	MultimediaSystemControlMessage *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 541 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 53 */)(struct sk_buff *skb,
								       unsigned int protoff,
								       unsigned char **data,
								       int dataoff,
								       H245_TransportAddress *taddr,
								       union nf_inet_addr *addr,
								       __be16 port)
			   __read_mostly;
	H2250LogicalChannelAckParameters *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 474 */;
	OpenLogicalChannelAck *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 472 */;
	bool cocci_id/* net/netfilter/nf_conntrack_h323_main.c 46 */;
	OpenLogicalChannel *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 412 */;
	H2250LogicalChannelParameters *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 384 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_h323_main.c 38 */;
	typeof(nat_t120_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 340 */;
	typeof(nat_rtp_rtcp_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 268 */;
	H245_TransportAddress *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 259 */;
	struct nf_ct_h323_master cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1821 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1801 */;
	void cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1801 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1776 */;
	RasMessage cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1711 */;
	RasMessage *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1667 */;
	InfoRequestResponse *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1634 */;
	LocationConfirm *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1595 */;
	LocationRequest *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1578 */;
	typeof(set_sig_addr_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1537 */;
	AdmissionConfirm *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1530 */;
	typeof(set_h225_addr_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1492 */;
	const struct nf_ct_h323_master *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1488 */;
	AdmissionRequest *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1486 */;
	UnregistrationRequest *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1453 */;
	RegistrationConfirm *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1402 */;
	RegistrationRequest *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1366 */;
	GatekeeperConfirm *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1322 */;
	typeof(set_ras_addr_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1307 */;
	GatekeeperRequest *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1305 */;
	typeof(nat_q931_hook) cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1257 */;
	struct nf_ct_h323_master *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1250 */;
	struct tcphdr cocci_id/* net/netfilter/nf_conntrack_h323_main.c 125 */;
	const struct tcphdr *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 124 */;
	struct nf_conntrack_tuple cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1231 */;
	union nf_inet_addr *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1226 */;
	struct udphdr cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1212 */;
	const struct udphdr *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1211 */;
	int *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 120 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1187 */[]__read_mostly;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_h323_main.c 115 */[];
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_h323_main.c 114 */;
	Q931 cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1136 */;
	char *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 112 */;
	H323_UU_PDU *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1080 */;
	Q931 *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1078 */;
	Progress_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1048 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_main.c 103 */)(struct sk_buff *skb,
									struct nf_conn *ct,
									enum ip_conntrack_info ctinfo,
									unsigned int protoff,
									unsigned char **data,
									TransportAddress *taddr,
									int idx,
									__be16 port,
									struct nf_conntrack_expect *exp)
		      __read_mostly;
	Facility_UUIE *cocci_id/* net/netfilter/nf_conntrack_h323_main.c 1008 */;
}
