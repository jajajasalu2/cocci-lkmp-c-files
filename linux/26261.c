cocci_test_suite() {
	const __u32 cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 92 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 81 */;
	struct tcphdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 78 */;
	struct v4hdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 77 */;
	__u16 cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 73 */;
	__u8 cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 72 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 60 */;
	__u16 *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 59 */;
	struct iphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 57 */;
	void cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 57 */;
	struct ipv6hdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 512 */;
	struct v6hdr {
		struct ipv6hdr ip;
		union l4hdr l4hdr;
		__u8 pad[16];
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 51 */;
	struct iphdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 497 */;
	struct udphdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 451 */;
	struct gre_hdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 450 */;
	struct v4hdr {
		struct iphdr ip;
		union l4hdr l4hdr;
		__u8 pad[16];
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 45 */;
	char cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 449 */[sizeof(struct v6hdr)];
	char cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 447 */;
	union l4hdr {
		struct udphdr udp;
		struct gre_hdr gre;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 40 */;
	struct gre_hdr {
		__be16 flags;
		__be16 protocol;
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 35 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 340 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 340 */;
	const int cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 23 */;
	struct v6hdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 222 */;
	struct ethhdr cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 205 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 196 */;
	__u8 *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 176 */;
	__u32 *cocci_id/* tools/testing/selftests/bpf/progs/test_tc_tunnel.c 176 */;
}
