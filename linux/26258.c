cocci_test_suite() {
	const struct sock *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 93 */;
	struct inet_sock *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 93 */;
	struct pt_regs {
		long di;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 89 */;
	struct inet_sock {
		struct sock sk;
#define inet_daddr sk.__sk_common.skc_daddr
#define inet_dport sk.__sk_common.skc_dport
		__be32 inet_saddr;
		__be16 inet_sport;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 81 */;
	struct sock {
		struct sock_common __sk_common;
#define sk_family __sk_common.skc_family
#define sk_v6_daddr __sk_common.skc_v6_daddr
#define sk_v6_rcv_saddr __sk_common.skc_v6_rcv_saddr
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 74 */;
	struct sock_common {
		unsigned short skc_family;
		union {
			__addrpair skc_addrpair;
			struct {
				__be32 skc_daddr;
				__be32 skc_rcv_saddr;
			};
		};
		union {
			__portpair skc_portpair;
			struct {
				__be16 skc_dport;
				__u16 skc_num;
			};
		};
		struct in6_addr skc_v6_daddr;
		struct in6_addr skc_v6_rcv_saddr;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 54 */;
	__u64 __bitwise cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 52 */;
	__u32 __bitwise cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 51 */;
	typeof(P) cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 41 */;
	struct dummy_tracepoint_args *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 248 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 248 */;
	struct tcp_estats_basic_event cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 239 */;
	enum tcp_estats_event_type cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 237 */;
	struct sock *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 236 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 194 */;
	__u8 *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 184 */;
	__be32 *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 180 */;
	struct tcp_estats_conn_id *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 179 */;
	void cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 179 */;
	unsigned char *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 171 */;
	struct tcp_estats_event *cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 163 */;
	struct dummy_tracepoint_args {
		unsigned long long pad;
		struct sock *sock;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 158 */;
	ev_record_map cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 156 */(".maps");
	struct tcp_estats_basic_event {
		struct tcp_estats_event event;
		struct tcp_estats_conn_id conn_id;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 146 */;
	struct tcp_estats_conn_id {
		unsigned int localaddressType;
		struct {
			unsigned char data[16];
		} localaddress;
		struct {
			unsigned char data[16];
		} remaddress;
		unsigned short localport;
		unsigned short remport;
	}__attribute__((__packed__)) cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 134 */;
	struct tcp_estats_event {
		int pid;
		int cpu;
		unsigned long ts;
		unsigned int magic;
		enum tcp_estats_event_type event_type;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 123 */;
	enum tcp_estats_event_type{TCP_ESTATS_ESTABLISH, TCP_ESTATS_PERIODIC, TCP_ESTATS_TIMEOUT, TCP_ESTATS_RETRANSMIT_TIMEOUT, TCP_ESTATS_RETRANSMIT_OTHER, TCP_ESTATS_SYN_RETRANSMIT, TCP_ESTATS_SYNACK_RETRANSMIT, TCP_ESTATS_TERM, TCP_ESTATS_TX_RESET, TCP_ESTATS_RX_RESET, TCP_ESTATS_WRITE_TIMEOUT, TCP_ESTATS_CONN_TIMEOUT, TCP_ESTATS_ACK_LATENCY, TCP_ESTATS_NEVENTS,} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 106 */;
	enum tcp_estats_addrtype{TCP_ESTATS_ADDRTYPE_IPV4=1, TCP_ESTATS_ADDRTYPE_IPV6=2,} cocci_id/* tools/testing/selftests/bpf/progs/test_tcp_estats.c 101 */;
}
