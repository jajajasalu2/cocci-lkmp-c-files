cocci_test_suite() {
	struct cdg {
		struct cdg_minmax rtt;
		struct cdg_minmax rtt_prev;
		struct cdg_minmax *gradients;
		struct cdg_minmax gsum;
		bool gfilled;
		u8 tail;
		u8 state;
		u8 delack;
		u32 rtt_seq;
		u32 shadow_wnd;
		u16 backoff_cnt;
		u16 sample_cnt;
		s32 delay_min;
		u32 last_ack;
		u32 round_start;
	} cocci_id/* net/ipv4/tcp_cdg.c 79 */;
	enum cdg_state{CDG_UNKNOWN=0, CDG_NONFULL=1, CDG_FULL=2, CDG_BACKOFF=3,} cocci_id/* net/ipv4/tcp_cdg.c 72 */;
	struct cdg_minmax {
		union {
			struct {
				s32 min;
				s32 max;
			};
			u64 v64;
		};
	} cocci_id/* net/ipv4/tcp_cdg.c 62 */;
	bool cocci_id/* net/ipv4/tcp_cdg.c 57 */;
	void __exit cocci_id/* net/ipv4/tcp_cdg.c 417 */;
	struct cdg cocci_id/* net/ipv4/tcp_cdg.c 412 */;
	int __init cocci_id/* net/ipv4/tcp_cdg.c 405 */;
	struct tcp_congestion_ops cocci_id/* net/ipv4/tcp_cdg.c 393 */;
	unsigned int cocci_id/* net/ipv4/tcp_cdg.c 39 */;
	struct cdg_minmax *cocci_id/* net/ipv4/tcp_cdg.c 349 */;
	const enum tcp_ca_event cocci_id/* net/ipv4/tcp_cdg.c 345 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_cdg.c 302 */;
	struct cdg *cocci_id/* net/ipv4/tcp_cdg.c 301 */;
	const struct ack_sample *cocci_id/* net/ipv4/tcp_cdg.c 299 */;
	struct sock *cocci_id/* net/ipv4/tcp_cdg.c 299 */;
	void cocci_id/* net/ipv4/tcp_cdg.c 299 */;
	s32 cocci_id/* net/ipv4/tcp_cdg.c 273 */;
	u64 cocci_id/* net/ipv4/tcp_cdg.c 126 */;
	int cocci_id/* net/ipv4/tcp_cdg.c 113 */;
	const u16 cocci_id/* net/ipv4/tcp_cdg.c 105 */[];
	u32 __pure cocci_id/* net/ipv4/tcp_cdg.c 103 */;
	u32 cocci_id/* net/ipv4/tcp_cdg.c 103 */;
}
