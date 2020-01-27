cocci_test_suite() {
	struct test {
		const char *name;
		union {
			struct ipv4_pkt ipv4;
			struct svlan_ipv4_pkt svlan_ipv4;
			struct ipip_pkt ipip;
			struct ipv6_pkt ipv6;
			struct ipv6_frag_pkt ipv6_frag;
			struct dvlan_ipv6_pkt dvlan_ipv6;
		} pkt;
		struct bpf_flow_keys keys;
		__u32 flags;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 87 */;
	struct dvlan_ipv6_pkt {
		struct ethhdr eth;
		__u16 vlan_tci;
		__u16 vlan_proto;
		__u16 vlan_tci2;
		__u16 vlan_proto2;
		struct ipv6hdr iph;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 77 */;
	struct ipv6_frag_pkt {
		struct ethhdr eth;
		struct ipv6hdr iph;
		struct frag_hdr {
			__u8 nexthdr;
			__u8 reserved;
			__be16 frag_off;
			__be32 identification;
		} ipf;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 65 */;
	struct ipv6_pkt {
		struct ethhdr eth;
		struct ipv6hdr iph;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 59 */;
	struct svlan_ipv4_pkt {
		struct ethhdr eth;
		__u16 vlan_tci;
		__u16 vlan_proto;
		struct iphdr iph;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 51 */;
	struct bpf_prog_test_run_attr cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 459 */;
	struct bpf_flow_keys cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 458 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 450 */;
	struct bpf_object *cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 449 */;
	void cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 446 */;
	struct ipip_pkt {
		struct ethhdr eth;
		struct iphdr iph;
		struct iphdr iph_inner;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 44 */;
	struct iovec cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 409 */[];
	void *cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 407 */;
	size_t cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 407 */;
	struct ifreq cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 389 */;
	const char *cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 387 */;
	int cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 387 */;
	struct ipv4_pkt {
		struct ethhdr eth;
		struct iphdr iph;
		struct tcphdr tcp;
	}__packed cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 38 */;
	struct frag_hdr cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 253 */;
	struct ipv6hdr cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 137 */;
	struct iphdr cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 117 */;
	struct test cocci_id/* tools/testing/selftests/bpf/prog_tests/flow_dissector.c 103 */[];
}
