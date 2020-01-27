cocci_test_suite() {
	const size_t cocci_id/* net/sctp/sm_make_chunk.c 937 */;
	struct sctp_shutdownhdr cocci_id/* net/sctp/sm_make_chunk.c 857 */;
	struct sctp_ulpevent *cocci_id/* net/sctp/sm_make_chunk.c 85 */;
	struct sctp_gap_ack_block cocci_id/* net/sctp/sm_make_chunk.c 781 */;
	struct sctp_sackhdr cocci_id/* net/sctp/sm_make_chunk.c 761 */;
	struct sctp_shared_key *cocci_id/* net/sctp/sm_make_chunk.c 76 */;
	struct sctp_gap_ack_block cocci_id/* net/sctp/sm_make_chunk.c 757 */[SCTP_MAX_GABS];
	struct sctp_tsnmap *cocci_id/* net/sctp/sm_make_chunk.c 756 */;
	struct sctp_sndrcvinfo cocci_id/* net/sctp/sm_make_chunk.c 745 */;
	struct sctp_datahdr cocci_id/* net/sctp/sm_make_chunk.c 727 */;
	const struct sctp_sndrcvinfo *cocci_id/* net/sctp/sm_make_chunk.c 723 */;
	struct sctp_ecnehdr cocci_id/* net/sctp/sm_make_chunk.c 705 */;
	struct sctp_cwrhdr cocci_id/* net/sctp/sm_make_chunk.c 671 */;
	void *cocci_id/* net/sctp/sm_make_chunk.c 67 */(struct sctp_chunk *chunk,
							int len,
							const void *data);
	const __u32 cocci_id/* net/sctp/sm_make_chunk.c 667 */;
	int cocci_id/* net/sctp/sm_make_chunk.c 63 */(struct sctp_association *asoc,
						      union sctp_params param,
						      const union sctp_addr *peer_addr,
						      gfp_t gfp);
	struct sctp_cookie_param *cocci_id/* net/sctp/sm_make_chunk.c 57 */(const struct sctp_endpoint *ep,
									    const struct sctp_association *asoc,
									    const struct sctp_chunk *init_chunk,
									    int *cookie_len,
									    const __u8 *raw_addrs,
									    int addrs_len);
	struct sctp_chunk *cocci_id/* net/sctp/sm_make_chunk.c 54 */(const struct sctp_association *asoc,
								     __u8 type,
								     __u8 flags,
								     int paylen,
								     gfp_t gfp);
	struct sctp_chunk *cocci_id/* net/sctp/sm_make_chunk.c 52 */(const struct sctp_association *asoc,
								     __u8 flags,
								     int paylen,
								     gfp_t gfp);
	struct sctp_cookie_param *cocci_id/* net/sctp/sm_make_chunk.c 389 */;
	struct sctp_strreset_resptsn cocci_id/* net/sctp/sm_make_chunk.c 3806 */;
	struct sctp_strreset_resp cocci_id/* net/sctp/sm_make_chunk.c 3768 */;
	struct sctp_strreset_addstrm cocci_id/* net/sctp/sm_make_chunk.c 3723 */;
	struct sctp_strreset_tsnreq cocci_id/* net/sctp/sm_make_chunk.c 3691 */;
	struct sctp_strreset_inreq cocci_id/* net/sctp/sm_make_chunk.c 3641 */;
	struct sctp_strreset_outreq cocci_id/* net/sctp/sm_make_chunk.c 3640 */;
	bool cocci_id/* net/sctp/sm_make_chunk.c 3637 */;
	__be16 *cocci_id/* net/sctp/sm_make_chunk.c 3636 */;
	struct sctp_reconf_chunk *cocci_id/* net/sctp/sm_make_chunk.c 3586 */;
	struct sctp_ifwdtsn_hdr cocci_id/* net/sctp/sm_make_chunk.c 3549 */;
	struct sctp_ifwdtsn_skip *cocci_id/* net/sctp/sm_make_chunk.c 3546 */;
	struct sctp_fwdtsn_skip cocci_id/* net/sctp/sm_make_chunk.c 3520 */;
	struct sctp_fwdtsn_hdr cocci_id/* net/sctp/sm_make_chunk.c 3519 */;
	struct sctp_fwdtsn_skip *cocci_id/* net/sctp/sm_make_chunk.c 3516 */;
	struct sctp_addip_chunk cocci_id/* net/sctp/sm_make_chunk.c 3437 */;
	struct sctp_addiphdr cocci_id/* net/sctp/sm_make_chunk.c 3388 */;
	struct sctp_chunkhdr cocci_id/* net/sctp/sm_make_chunk.c 3383 */;
	struct sctp_errhdr *cocci_id/* net/sctp/sm_make_chunk.c 3372 */;
	struct sctp_af *cocci_id/* net/sctp/sm_make_chunk.c 3315 */;
	union sctp_addr cocci_id/* net/sctp/sm_make_chunk.c 3314 */;
	struct sctp_transport *cocci_id/* net/sctp/sm_make_chunk.c 3313 */;
	struct sctp_sockaddr_entry *cocci_id/* net/sctp/sm_make_chunk.c 3312 */;
	union sctp_addr_param *cocci_id/* net/sctp/sm_make_chunk.c 3311 */;
	struct sctp_bind_addr *cocci_id/* net/sctp/sm_make_chunk.c 3310 */;
	struct sctp_association *cocci_id/* net/sctp/sm_make_chunk.c 3307 */;
	struct sctp_addiphdr *cocci_id/* net/sctp/sm_make_chunk.c 3229 */;
	struct sctp_addip_chunk *cocci_id/* net/sctp/sm_make_chunk.c 3226 */;
	struct sctp_ipv6addr_param cocci_id/* net/sctp/sm_make_chunk.c 3180 */;
	struct sctp_ipv4addr_param cocci_id/* net/sctp/sm_make_chunk.c 3170 */;
	struct sctp_paramhdr **cocci_id/* net/sctp/sm_make_chunk.c 3155 */;
	struct sctp_errhdr cocci_id/* net/sctp/sm_make_chunk.c 2974 */;
	struct sctp_addip_param cocci_id/* net/sctp/sm_make_chunk.c 2973 */;
	struct sctp_addip_param *cocci_id/* net/sctp/sm_make_chunk.c 2971 */;
	__be16 cocci_id/* net/sctp/sm_make_chunk.c 2970 */;
	__be32 cocci_id/* net/sctp/sm_make_chunk.c 2969 */;
	void cocci_id/* net/sctp/sm_make_chunk.c 2969 */;
	struct sockaddr *cocci_id/* net/sctp/sm_make_chunk.c 2813 */;
	union sctp_addr_param cocci_id/* net/sctp/sm_make_chunk.c 2762 */;
	__u32 cocci_id/* net/sctp/sm_make_chunk.c 2710 */;
	const struct sctp_endpoint *cocci_id/* net/sctp/sm_make_chunk.c 2710 */;
	u32 cocci_id/* net/sctp/sm_make_chunk.c 2502 */;
	struct sctp_transport cocci_id/* net/sctp/sm_make_chunk.c 2377 */;
	struct list_head *cocci_id/* net/sctp/sm_make_chunk.c 2312 */;
	struct net *cocci_id/* net/sctp/sm_make_chunk.c 2310 */;
	struct sctp_init_chunk *cocci_id/* net/sctp/sm_make_chunk.c 2308 */;
	const union sctp_addr *cocci_id/* net/sctp/sm_make_chunk.c 2307 */;
	enum sctp_cid cocci_id/* net/sctp/sm_make_chunk.c 2242 */;
	__be16 cocci_id/* net/sctp/sm_make_chunk.c 223 */[2];
	__u8 cocci_id/* net/sctp/sm_make_chunk.c 221 */[5];
	struct sctp_sock *cocci_id/* net/sctp/sm_make_chunk.c 220 */;
	union sctp_params cocci_id/* net/sctp/sm_make_chunk.c 219 */;
	struct sctp_inithdr cocci_id/* net/sctp/sm_make_chunk.c 218 */;
	struct sctp_endpoint *cocci_id/* net/sctp/sm_make_chunk.c 215 */;
	struct sctp_supported_addrs_param cocci_id/* net/sctp/sm_make_chunk.c 214 */;
	struct sctp_hmac_algo_param *cocci_id/* net/sctp/sm_make_chunk.c 2128 */;
	struct sctp_paramhdr *cocci_id/* net/sctp/sm_make_chunk.c 212 */;
	struct sctp_adaptation_ind_param cocci_id/* net/sctp/sm_make_chunk.c 211 */;
	struct sctp_supported_ext_param cocci_id/* net/sctp/sm_make_chunk.c 210 */;
	const struct sctp_bind_addr *cocci_id/* net/sctp/sm_make_chunk.c 207 */;
	enum sctp_ierror cocci_id/* net/sctp/sm_make_chunk.c 2067 */;
	struct sctp_chunk **cocci_id/* net/sctp/sm_make_chunk.c 1950 */;
	struct __sctp_missing cocci_id/* net/sctp/sm_make_chunk.c 1886 */;
	enum sctp_param cocci_id/* net/sctp/sm_make_chunk.c 1882 */;
	struct __sctp_missing {
		__be32 num_missing;
		__be16 type;
	}__packed cocci_id/* net/sctp/sm_make_chunk.c 1873 */;
	suseconds_t cocci_id/* net/sctp/sm_make_chunk.c 1795 */;
	ktime_t cocci_id/* net/sctp/sm_make_chunk.c 1708 */;
	unsigned int cocci_id/* net/sctp/sm_make_chunk.c 1707 */;
	struct sctp_cookie *cocci_id/* net/sctp/sm_make_chunk.c 1704 */;
	u8 *cocci_id/* net/sctp/sm_make_chunk.c 1677 */;
	struct sctp_cookie cocci_id/* net/sctp/sm_make_chunk.c 1620 */;
	struct sctp_signed_cookie cocci_id/* net/sctp/sm_make_chunk.c 1619 */;
	struct sctp_signed_cookie *cocci_id/* net/sctp/sm_make_chunk.c 1611 */;
	int *cocci_id/* net/sctp/sm_make_chunk.c 1608 */;
	enum sctp_scope cocci_id/* net/sctp/sm_make_chunk.c 1584 */;
	__u16 cocci_id/* net/sctp/sm_make_chunk.c 1535 */;
	struct sctp_datamsg *cocci_id/* net/sctp/sm_make_chunk.c 1534 */;
	struct sctp_stream *cocci_id/* net/sctp/sm_make_chunk.c 1532 */;
	struct iov_iter *cocci_id/* net/sctp/sm_make_chunk.c 1508 */;
	const void *cocci_id/* net/sctp/sm_make_chunk.c 1487 */;
	void *cocci_id/* net/sctp/sm_make_chunk.c 1487 */;
	size_t cocci_id/* net/sctp/sm_make_chunk.c 144 */;
	__u8 *cocci_id/* net/sctp/sm_make_chunk.c 1412 */;
	struct sock *cocci_id/* net/sctp/sm_make_chunk.c 1386 */;
	struct sk_buff *cocci_id/* net/sctp/sm_make_chunk.c 1385 */;
	struct sctp_chunkhdr *cocci_id/* net/sctp/sm_make_chunk.c 1383 */;
	gfp_t cocci_id/* net/sctp/sm_make_chunk.c 1381 */;
	__u8 cocci_id/* net/sctp/sm_make_chunk.c 1380 */;
	int cocci_id/* net/sctp/sm_make_chunk.c 1380 */;
	const struct sctp_association *cocci_id/* net/sctp/sm_make_chunk.c 1379 */;
	struct sctp_chunk *cocci_id/* net/sctp/sm_make_chunk.c 1379 */;
	union sctp_addr *cocci_id/* net/sctp/sm_make_chunk.c 1357 */;
	struct sctp_paramhdr cocci_id/* net/sctp/sm_make_chunk.c 133 */;
	const struct sctp_paramhdr cocci_id/* net/sctp/sm_make_chunk.c 131 */;
	struct sctp_hmac *cocci_id/* net/sctp/sm_make_chunk.c 1281 */;
	struct sctp_authhdr cocci_id/* net/sctp/sm_make_chunk.c 1280 */;
	const struct sctp_chunk *cocci_id/* net/sctp/sm_make_chunk.c 119 */;
	struct sctp_sender_hb_info cocci_id/* net/sctp/sm_make_chunk.c 1145 */;
	const struct sctp_transport *cocci_id/* net/sctp/sm_make_chunk.c 1143 */;
	const char cocci_id/* net/sctp/sm_make_chunk.c 1126 */[];
	const __u8 *cocci_id/* net/sctp/sm_make_chunk.c 1076 */;
	struct msghdr *cocci_id/* net/sctp/sm_make_chunk.c 1009 */;
}
