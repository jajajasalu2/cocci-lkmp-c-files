cocci_test_suite() {
	struct bictcp {
		u32 cnt;
		u32 last_max_cwnd;
		u32 last_cwnd;
		u32 last_time;
		u32 epoch_start;
#define ACK_RATIO_SHIFT 4
		u32 delayed_ack;
	} cocci_id/* net/ipv4/tcp_bic.c 50 */;
	int cocci_id/* net/ipv4/tcp_bic.c 32 */;
	void __exit cocci_id/* net/ipv4/tcp_bic.c 218 */;
	struct bictcp cocci_id/* net/ipv4/tcp_bic.c 214 */;
	int __init cocci_id/* net/ipv4/tcp_bic.c 212 */;
	struct tcp_congestion_ops cocci_id/* net/ipv4/tcp_bic.c 201 */;
	struct bictcp *cocci_id/* net/ipv4/tcp_bic.c 194 */;
	const struct inet_connection_sock *cocci_id/* net/ipv4/tcp_bic.c 191 */;
	const struct ack_sample *cocci_id/* net/ipv4/tcp_bic.c 189 */;
	struct sock *cocci_id/* net/ipv4/tcp_bic.c 189 */;
	void cocci_id/* net/ipv4/tcp_bic.c 189 */;
	u8 cocci_id/* net/ipv4/tcp_bic.c 180 */;
	const struct tcp_sock *cocci_id/* net/ipv4/tcp_bic.c 162 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_bic.c 142 */;
	u32 cocci_id/* net/ipv4/tcp_bic.c 140 */;
	__u32 cocci_id/* net/ipv4/tcp_bic.c 103 */;
}
