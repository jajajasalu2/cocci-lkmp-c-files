cocci_test_suite() {
	struct sctp_flush_ctx *cocci_id/* net/sctp/outqueue.c 868 */;
	struct sctp_flush_ctx {
		struct sctp_outq *q;
		struct sctp_transport *transport;
		struct list_head transport_list;
		struct sctp_association *asoc;
		struct sctp_packet *packet;
		gfp_t gfp;
	} cocci_id/* net/sctp/outqueue.c 776 */;
	struct sctp_packet cocci_id/* net/sctp/outqueue.c 767 */;
	const __u32 cocci_id/* net/sctp/outqueue.c 766 */;
	const __u16 cocci_id/* net/sctp/outqueue.c 764 */;
	const struct sctp_association *cocci_id/* net/sctp/outqueue.c 763 */;
	struct sctp_stream_out_ext *cocci_id/* net/sctp/outqueue.c 61 */;
	enum sctp_xmit cocci_id/* net/sctp/outqueue.c 597 */;
	struct list_head *cocci_id/* net/sctp/outqueue.c 596 */;
	struct sctp_chunk *cocci_id/* net/sctp/outqueue.c 595 */;
	struct sctp_transport *cocci_id/* net/sctp/outqueue.c 594 */;
	gfp_t cocci_id/* net/sctp/outqueue.c 592 */;
	int *cocci_id/* net/sctp/outqueue.c 592 */;
	struct sctp_packet *cocci_id/* net/sctp/outqueue.c 591 */;
	struct sctp_outq *cocci_id/* net/sctp/outqueue.c 591 */;
	int cocci_id/* net/sctp/outqueue.c 591 */;
	void cocci_id/* net/sctp/outqueue.c 55 */(struct sctp_outq *q,
						  int rtx_timeout, gfp_t gfp);
	enum sctp_retransmit_reason cocci_id/* net/sctp/outqueue.c 534 */;
	void cocci_id/* net/sctp/outqueue.c 49 */(struct sctp_outq *q,
						  struct list_head *transmitted_queue,
						  struct sctp_transport *transport,
						  __u32 highest_new_tsn,
						  int count_of_newacks);
	struct sctp_sndrcvinfo *cocci_id/* net/sctp/outqueue.c 420 */;
	void cocci_id/* net/sctp/outqueue.c 42 */(struct sctp_outq *q,
						  struct list_head *transmitted_queue,
						  struct sctp_transport *transport,
						  union sctp_addr *saddr,
						  struct sctp_sackhdr *sack,
						  __u32 *highest_new_tsn);
	int cocci_id/* net/sctp/outqueue.c 41 */(struct sctp_sackhdr *sack,
						 __u32 tsn);
	struct sctp_stream_out *cocci_id/* net/sctp/outqueue.c 348 */;
	struct net *cocci_id/* net/sctp/outqueue.c 282 */;
	struct sctp_chunk cocci_id/* net/sctp/outqueue.c 215 */;
	void cocci_id/* net/sctp/outqueue.c 205 */;
	struct sctp_outq cocci_id/* net/sctp/outqueue.c 192 */;
	struct sctp_fwdtsn_skip cocci_id/* net/sctp/outqueue.c 1790 */[10];
	__be16 cocci_id/* net/sctp/outqueue.c 1774 */;
	struct sctp_fwdtsn_skip *cocci_id/* net/sctp/outqueue.c 1773 */;
	__u16 cocci_id/* net/sctp/outqueue.c 1741 */;
	union sctp_sack_variable *cocci_id/* net/sctp/outqueue.c 1740 */;
	__u32 cocci_id/* net/sctp/outqueue.c 1737 */;
	struct sctp_sackhdr *cocci_id/* net/sctp/outqueue.c 1737 */;
	char cocci_id/* net/sctp/outqueue.c 1681 */;
	struct sctp_association *cocci_id/* net/sctp/outqueue.c 1569 */;
	bool cocci_id/* net/sctp/outqueue.c 1415 */;
	__u8 cocci_id/* net/sctp/outqueue.c 1412 */;
	struct list_head cocci_id/* net/sctp/outqueue.c 1408 */;
	__u32 *cocci_id/* net/sctp/outqueue.c 1404 */;
	union sctp_addr *cocci_id/* net/sctp/outqueue.c 1402 */;
	const struct sctp_outq *cocci_id/* net/sctp/outqueue.c 1379 */;
	u8 cocci_id/* net/sctp/outqueue.c 1236 */;
	unsigned int cocci_id/* net/sctp/outqueue.c 1232 */;
	struct sctp_flush_ctx cocci_id/* net/sctp/outqueue.c 1167 */;
	struct sctp_transport cocci_id/* net/sctp/outqueue.c 1143 */;
}
