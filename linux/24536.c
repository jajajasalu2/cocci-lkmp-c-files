cocci_test_suite() {
	enum sctp_disposition cocci_id/* net/sctp/sm_statefuns.c 99 */(struct net *net,
								       const struct sctp_endpoint *ep,
								       const struct sctp_association *asoc,
								       void *arg,
								       struct sctp_cmd_seq *commands,
								       const __u8 *payload,
								       const size_t paylen);
	enum sctp_disposition cocci_id/* net/sctp/sm_statefuns.c 92 */(struct net *net,
								       struct sctp_cmd_seq *commands,
								       __be16 error,
								       int sk_err,
								       const struct sctp_association *asoc,
								       struct sctp_transport *transport);
	struct sctp_sackhdr *cocci_id/* net/sctp/sm_statefuns.c 90 */(struct sctp_chunk *chunk);
	struct sctp_af *cocci_id/* net/sctp/sm_statefuns.c 6347 */;
	struct sctp_chunkhdr *cocci_id/* net/sctp/sm_statefuns.c 634 */;
	__u32 cocci_id/* net/sctp/sm_statefuns.c 6324 */;
	enum sctp_verb cocci_id/* net/sctp/sm_statefuns.c 6322 */;
	struct sctp_datahdr *cocci_id/* net/sctp/sm_statefuns.c 6320 */;
	struct sock *cocci_id/* net/sctp/sm_statefuns.c 6318 */;
	struct sctp_tsnmap *cocci_id/* net/sctp/sm_statefuns.c 6317 */;
	int cocci_id/* net/sctp/sm_statefuns.c 6313 */;
	void cocci_id/* net/sctp/sm_statefuns.c 63 */(struct net *net,
						      const struct sctp_endpoint *ep,
						      const struct sctp_association *asoc,
						      const struct sctp_chunk *chunk,
						      struct sctp_cmd_seq *commands,
						      struct sctp_chunk *err_chunk);
	struct sctp_signed_cookie *cocci_id/* net/sctp/sm_statefuns.c 6294 */;
	void cocci_id/* net/sctp/sm_statefuns.c 6276 */;
	struct sctp_init_chunk *cocci_id/* net/sctp/sm_statefuns.c 6242 */;
	struct sctp_initack_chunk *cocci_id/* net/sctp/sm_statefuns.c 6225 */;
	const struct sctp_chunk *cocci_id/* net/sctp/sm_statefuns.c 6204 */;
	const void *cocci_id/* net/sctp/sm_statefuns.c 6164 */;
	size_t cocci_id/* net/sctp/sm_statefuns.c 6164 */;
	struct sctp_packet *cocci_id/* net/sctp/sm_statefuns.c 6159 */;
	struct sctp_sackhdr cocci_id/* net/sctp/sm_statefuns.c 6146 */;
	struct sctp_chunk cocci_id/* net/sctp/sm_statefuns.c 614 */;
	struct sctp_packet *cocci_id/* net/sctp/sm_statefuns.c 59 */(struct net *net,
								     const struct sctp_association *asoc,
								     const struct sctp_chunk *chunk);
	int cocci_id/* net/sctp/sm_statefuns.c 56 */(const struct sctp_association *asoc,
						     struct sctp_chunk *chunk,
						     struct sctp_cmd_seq *commands);
	enum sctp_error cocci_id/* net/sctp/sm_statefuns.c 527 */;
	struct sctp_initack_chunk cocci_id/* net/sctp/sm_statefuns.c 515 */;
	struct sctp_packet *cocci_id/* net/sctp/sm_statefuns.c 50 */(struct net *net,
								     const struct sctp_endpoint *ep,
								     const struct sctp_association *asoc,
								     struct sctp_chunk *chunk,
								     const void *payload,
								     size_t paylen);
	struct sctp_datamsg *cocci_id/* net/sctp/sm_statefuns.c 4923 */;
	const char cocci_id/* net/sctp/sm_statefuns.c 4736 */[];
	const size_t cocci_id/* net/sctp/sm_statefuns.c 4535 */;
	const __u8 *cocci_id/* net/sctp/sm_statefuns.c 4534 */;
	struct sctp_auth_chunk *cocci_id/* net/sctp/sm_statefuns.c 4248 */;
	struct sctp_auth_chunk cocci_id/* net/sctp/sm_statefuns.c 4226 */;
	struct sctp_hmac *cocci_id/* net/sctp/sm_statefuns.c 4197 */;
	__u8 *cocci_id/* net/sctp/sm_statefuns.c 4196 */;
	struct sctp_authhdr *cocci_id/* net/sctp/sm_statefuns.c 4195 */;
	struct sctp_shared_key *cocci_id/* net/sctp/sm_statefuns.c 4194 */;
	enum sctp_ierror cocci_id/* net/sctp/sm_statefuns.c 4190 */;
	struct sctp_fwdtsn_hdr *cocci_id/* net/sctp/sm_statefuns.c 4043 */;
	union sctp_params cocci_id/* net/sctp/sm_statefuns.c 3969 */;
	struct sctp_reconf_chunk *cocci_id/* net/sctp/sm_statefuns.c 3968 */;
	struct sctp_inithdr cocci_id/* net/sctp/sm_statefuns.c 389 */;
	struct sctp_inithdr *cocci_id/* net/sctp/sm_statefuns.c 386 */;
	struct list_head *cocci_id/* net/sctp/sm_statefuns.c 3823 */;
	struct sctp_association *cocci_id/* net/sctp/sm_statefuns.c 3818 */;
	struct sctp_addip_chunk cocci_id/* net/sctp/sm_statefuns.c 3732 */;
	struct sctp_addiphdr *cocci_id/* net/sctp/sm_statefuns.c 3711 */;
	struct sk_buff *cocci_id/* net/sctp/sm_statefuns.c 3528 */;
	struct sctp_init_chunk cocci_id/* net/sctp/sm_statefuns.c 342 */;
	struct sctp_sack_chunk cocci_id/* net/sctp/sm_statefuns.c 3290 */;
	struct sctp_sackhdr *cocci_id/* net/sctp/sm_statefuns.c 3281 */;
	struct sctp_endpoint *cocci_id/* net/sctp/sm_statefuns.c 307 */;
	union sctp_arg cocci_id/* net/sctp/sm_statefuns.c 3068 */;
	struct sctp_ecnehdr *cocci_id/* net/sctp/sm_statefuns.c 3012 */;
	struct sctp_unrecognized_param *cocci_id/* net/sctp/sm_statefuns.c 301 */;
	struct sctp_ecne_chunk cocci_id/* net/sctp/sm_statefuns.c 2963 */;
	struct sctp_cwrhdr *cocci_id/* net/sctp/sm_statefuns.c 2957 */;
	struct sctp_shutdown_chunk cocci_id/* net/sctp/sm_statefuns.c 2846 */;
	struct sctp_shutdownhdr *cocci_id/* net/sctp/sm_statefuns.c 2839 */;
	struct sctp_abort_chunk cocci_id/* net/sctp/sm_statefuns.c 2635 */;
	struct sctp_errhdr *cocci_id/* net/sctp/sm_statefuns.c 2586 */;
	struct sctp_errhdr cocci_id/* net/sctp/sm_statefuns.c 2585 */;
	struct sctp_chunkhdr cocci_id/* net/sctp/sm_statefuns.c 2585 */;
	unsigned int cocci_id/* net/sctp/sm_statefuns.c 2581 */;
	struct sctp_chunk *cocci_id/* net/sctp/sm_statefuns.c 2580 */;
	__be16 cocci_id/* net/sctp/sm_statefuns.c 2579 */;
	struct sctp_cmd_seq *cocci_id/* net/sctp/sm_statefuns.c 2577 */;
	void *cocci_id/* net/sctp/sm_statefuns.c 2576 */;
	const union sctp_subtype cocci_id/* net/sctp/sm_statefuns.c 2575 */;
	const struct sctp_association *cocci_id/* net/sctp/sm_statefuns.c 2574 */;
	const struct sctp_endpoint *cocci_id/* net/sctp/sm_statefuns.c 2573 */;
	struct net *cocci_id/* net/sctp/sm_statefuns.c 2572 */;
	enum sctp_disposition cocci_id/* net/sctp/sm_statefuns.c 2571 */;
	u8 *cocci_id/* net/sctp/sm_statefuns.c 2449 */;
	__be32 *cocci_id/* net/sctp/sm_statefuns.c 2449 */;
	u32 cocci_id/* net/sctp/sm_statefuns.c 2423 */;
	struct sctp_bind_addr *cocci_id/* net/sctp/sm_statefuns.c 2421 */;
	struct sctp_cookie_preserve_param cocci_id/* net/sctp/sm_statefuns.c 2420 */;
	struct sctp_operr_chunk cocci_id/* net/sctp/sm_statefuns.c 2362 */;
	struct sctp_ulpevent *cocci_id/* net/sctp/sm_statefuns.c 215 */;
	char cocci_id/* net/sctp/sm_statefuns.c 2110 */;
	__u16 cocci_id/* net/sctp/sm_statefuns.c 160 */;
	enum sctp_disposition cocci_id/* net/sctp/sm_statefuns.c 144 */(struct net *net,
									const struct sctp_endpoint *ep,
									const struct sctp_association *asoc,
									const union sctp_subtype type,
									void *arg,
									struct sctp_cmd_seq *commands);
	enum sctp_ierror cocci_id/* net/sctp/sm_statefuns.c 140 */(const struct sctp_association *asoc,
								   struct sctp_chunk *chunk);
	struct sctp_transport *cocci_id/* net/sctp/sm_statefuns.c 1306 */;
	union sctp_addr *cocci_id/* net/sctp/sm_statefuns.c 1304 */;
	bool cocci_id/* net/sctp/sm_statefuns.c 1303 */;
	const struct list_head *cocci_id/* net/sctp/sm_statefuns.c 1303 */;
	char cocci_id/* net/sctp/sm_statefuns.c 1261 */[sizeof(*errhdr) + sizeof(*addrparm)];
	union sctp_addr_param *cocci_id/* net/sctp/sm_statefuns.c 1259 */;
	union sctp_addr cocci_id/* net/sctp/sm_statefuns.c 1190 */;
	unsigned long cocci_id/* net/sctp/sm_statefuns.c 1189 */;
	struct sctp_sender_hb_info *cocci_id/* net/sctp/sm_statefuns.c 1186 */;
	enum sctp_disposition cocci_id/* net/sctp/sm_statefuns.c 116 */(struct net *net,
									const struct sctp_endpoint *ep,
									const struct sctp_association *asoc,
									const union sctp_subtype type,
									void *arg,
									void *ext,
									struct sctp_cmd_seq *commands);
	struct sctp_heartbeathdr *cocci_id/* net/sctp/sm_statefuns.c 1129 */;
	struct sctp_heartbeat_chunk cocci_id/* net/sctp/sm_statefuns.c 1121 */;
	struct sctp_paramhdr *cocci_id/* net/sctp/sm_statefuns.c 1111 */;
}
