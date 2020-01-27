cocci_test_suite() {
	struct tcpnv {
		unsigned long nv_min_rtt_reset_jiffies;
		s8 cwnd_growth_factor;
		u8 available8;
		u16 available16;
		u8 nv_allow_cwnd_growth:1,nv_reset:1,nv_catchup:1;
		u8 nv_eval_call_cnt;
		u8 nv_min_cwnd;
		u8 nv_rtt_cnt;
		;
		u32 nv_last_rtt;
		u32 nv_min_rtt;
		u32 nv_min_rtt_new;
		u32 nv_base_rtt;
		u32 nv_lower_bound_rtt;
		u32 nv_rtt_max_rate;
		u32 nv_rtt_start_seq;
		u32 nv_last_snd_una;
		u32 nv_no_cong_cnt;
	} cocci_id/* net/ipv4/tcp_nv.c 83 */;
	int cocci_id/* net/ipv4/tcp_nv.c 62 */;
	void __exit cocci_id/* net/ipv4/tcp_nv.c 491 */;
	struct tcpnv cocci_id/* net/ipv4/tcp_nv.c 486 */;
	int __init cocci_id/* net/ipv4/tcp_nv.c 484 */;
	struct tcp_congestion_ops cocci_id/* net/ipv4/tcp_nv.c 471 */;
	struct tcpvegas_info cocci_id/* net/ipv4/tcp_nv.c 466 */;
	const struct tcpnv *cocci_id/* net/ipv4/tcp_nv.c 457 */;
	union tcp_cc_info *cocci_id/* net/ipv4/tcp_nv.c 455 */;
	int *cocci_id/* net/ipv4/tcp_nv.c 454 */;
	size_t cocci_id/* net/ipv4/tcp_nv.c 454 */;
	unsigned char cocci_id/* net/ipv4/tcp_nv.c 324 */;
	u64 cocci_id/* net/ipv4/tcp_nv.c 246 */;
	unsigned long cocci_id/* net/ipv4/tcp_nv.c 245 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_nv.c 243 */;
	const struct inet_connection_sock *cocci_id/* net/ipv4/tcp_nv.c 242 */;
	const struct ack_sample *cocci_id/* net/ipv4/tcp_nv.c 240 */;
	struct sock *cocci_id/* net/ipv4/tcp_nv.c 240 */;
	void cocci_id/* net/ipv4/tcp_nv.c 240 */;
	u8 cocci_id/* net/ipv4/tcp_nv.c 216 */;
	const struct tcp_sock *cocci_id/* net/ipv4/tcp_nv.c 211 */;
	u32 cocci_id/* net/ipv4/tcp_nv.c 171 */;
	struct tcpnv *cocci_id/* net/ipv4/tcp_nv.c 171 */;
}
