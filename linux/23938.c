cocci_test_suite() {
	struct lp {
		u32 flag;
		u32 sowd;
		u32 owd_min;
		u32 owd_max;
		u32 owd_max_rsv;
		u32 remote_hz;
		u32 remote_ref_time;
		u32 local_ref_time;
		u32 last_drop;
		u32 inference;
	} cocci_id/* net/ipv4/tcp_lp.c 77 */;
	enum tcp_lp_state{LP_VALID_RHZ=(1 << 0), LP_VALID_OWD=(1 << 1), LP_WITHIN_THR=(1 << 3), LP_WITHIN_INF=(1 << 4),} cocci_id/* net/ipv4/tcp_lp.c 53 */;
	void __exit cocci_id/* net/ipv4/tcp_lp.c 337 */;
	struct lp cocci_id/* net/ipv4/tcp_lp.c 333 */;
	int __init cocci_id/* net/ipv4/tcp_lp.c 331 */;
	struct tcp_congestion_ops cocci_id/* net/ipv4/tcp_lp.c 320 */;
	s32 cocci_id/* net/ipv4/tcp_lp.c 276 */;
	const struct ack_sample *cocci_id/* net/ipv4/tcp_lp.c 264 */;
	s64 cocci_id/* net/ipv4/tcp_lp.c 191 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_lp.c 189 */;
	struct lp *cocci_id/* net/ipv4/tcp_lp.c 121 */;
	u32 cocci_id/* net/ipv4/tcp_lp.c 119 */;
	struct sock *cocci_id/* net/ipv4/tcp_lp.c 119 */;
	void cocci_id/* net/ipv4/tcp_lp.c 119 */;
}
