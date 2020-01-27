cocci_test_suite() {
	__u8 *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 98 */;
	long cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 95 */;
	__u16 cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 92 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 91 */;
	__be32 *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 88 */;
	__be32 cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 86 */;
	const struct ipv6hdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 86 */;
	struct bpf_flow_keys cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 78 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 77 */;
	last_dissection cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 72 */(".maps");
	jmp_table cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 65 */(".maps");
	struct frag_hdr {
		__u8 nexthdr;
		__u8 reserved;
		__be16 frag_off;
		__be32 identification;
	} cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 53 */;
	struct gre_hdr {
		__be16 flags;
		__be16 proto;
	} cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 48 */;
	struct vlan_hdr {
		__be16 h_vlan_TCI;
		__be16 h_vlan_encapsulated_proto;
	} cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 43 */;
	enum{IP, IPV6, IPV6OP, IPV6FR, MPLS, VLAN,} cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 29 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 22 */("version");
	struct udphdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 159 */;
	struct tcphdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 158 */;
	struct ethhdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 157 */;
	struct gre_hdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 156 */;
	struct icmphdr *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 155 */;
	__u8 cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 151 */;
	struct bpf_flow_keys *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 145 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 143 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 143 */;
	__be16 cocci_id/* tools/testing/selftests/bpf/progs/bpf_flow.c 115 */;
}
