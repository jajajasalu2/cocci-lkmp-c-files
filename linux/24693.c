cocci_test_suite() {
	struct ip_vs_protocol cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 574 */;
	struct netns_ipvs *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 569 */;
	struct ip_vs_proto_data *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 569 */;
	void cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 569 */;
	int *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 562 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 559 */;
	struct ip_vs_app *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 523 */;
	struct ip_vs_conn *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 519 */;
	u16 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 484 */;
	__u16 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 482 */;
	__be16 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 482 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 475 */;
	struct ip_vs_dest *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 437 */;
	struct sctphdr cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 392 */;
	unsigned char cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 382 */;
	const char *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 368 */;
	const char *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 349 */[IP_VS_SCTP_S_LAST + 1];
	const int cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 331 */[IP_VS_SCTP_S_LAST + 1];
	const __u8 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 285 */[IP_VS_DIR_LAST][IP_VS_SCTP_EVENT_LAST][IP_VS_SCTP_S_LAST];
	__be16 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 24 */[2];
	struct sctphdr *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 23 */;
	__u8 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 227 */[];
	struct sctp_chunkhdr cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 22 */;
	enum ipvs_sctp_event_t{IP_VS_SCTP_DATA=0, IP_VS_SCTP_INIT, IP_VS_SCTP_INIT_ACK, IP_VS_SCTP_COOKIE_ECHO, IP_VS_SCTP_COOKIE_ACK, IP_VS_SCTP_SHUTDOWN, IP_VS_SCTP_SHUTDOWN_ACK, IP_VS_SCTP_SHUTDOWN_COMPLETE, IP_VS_SCTP_ERROR, IP_VS_SCTP_ABORT, IP_VS_SCTP_EVENT_LAST,} cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 212 */;
	struct ip_vs_service *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 21 */;
	struct ipv6hdr cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 194 */;
	__le32 cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 190 */;
	struct ip_vs_iphdr *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 19 */;
	unsigned int cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 188 */;
	struct ip_vs_protocol *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 186 */;
	struct ip_vs_conn **cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 18 */;
	void *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 170 */;
	struct sk_buff *cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 16 */;
	bool cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 143 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_proto_sctp.c 12 */(int af,
								   struct sk_buff *skb,
								   struct ip_vs_protocol *pp);
}
