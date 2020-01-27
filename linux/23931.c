cocci_test_suite() {
	struct bictcp {
		u32 cnt;
		u32 last_max_cwnd;
		u32 last_cwnd;
		u32 last_time;
		u32 bic_origin_point;
		u32 bic_K;
		u32 delay_min;
		u32 epoch_start;
		u32 ack_cnt;
		u32 tcp_cwnd;
		u16 unused;
		u8 sample_cnt;
		u8 found;
		u32 round_start;
		u32 end_seq;
		u32 last_ack;
		u32 curr_rtt;
	} cocci_id/* net/ipv4/tcp_cubic.c 84 */;
	u32 cocci_id/* net/ipv4/tcp_cubic.c 59 */;
	void __exit cocci_id/* net/ipv4/tcp_cubic.c 505 */;
	int cocci_id/* net/ipv4/tcp_cubic.c 48 */;
	struct bictcp cocci_id/* net/ipv4/tcp_cubic.c 472 */;
	int __init cocci_id/* net/ipv4/tcp_cubic.c 470 */;
	struct tcp_congestion_ops cocci_id/* net/ipv4/tcp_cubic.c 458 */;
	s32 cocci_id/* net/ipv4/tcp_cubic.c 441 */;
	struct bictcp *cocci_id/* net/ipv4/tcp_cubic.c 433 */;
	const struct tcp_sock *cocci_id/* net/ipv4/tcp_cubic.c 432 */;
	const struct ack_sample *cocci_id/* net/ipv4/tcp_cubic.c 430 */;
	struct sock *cocci_id/* net/ipv4/tcp_cubic.c 430 */;
	void cocci_id/* net/ipv4/tcp_cubic.c 430 */;
	u8 cocci_id/* net/ipv4/tcp_cubic.c 371 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_cubic.c 337 */;
	u64 cocci_id/* net/ipv4/tcp_cubic.c 228 */;
	const u8 cocci_id/* net/ipv4/tcp_cubic.c 189 */[];
	enum tcp_ca_event cocci_id/* net/ipv4/tcp_cubic.c 153 */;
}
