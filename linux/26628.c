cocci_test_suite() {
	struct globals {
		struct flow_key_record flow;
	} cocci_id/* samples/bpf/sockex3_kern.c 91 */;
	__u32 cocci_id/* samples/bpf/sockex3_kern.c 81 */;
	struct iphdr cocci_id/* samples/bpf/sockex3_kern.c 77 */;
	__u64 cocci_id/* samples/bpf/sockex3_kern.c 75 */;
	struct __sk_buff *cocci_id/* samples/bpf/sockex3_kern.c 75 */;
	int cocci_id/* samples/bpf/sockex3_kern.c 75 */;
	struct flow_key_record {
		__be32 src;
		__be32 dst;
		union {
			__be32 ports;
			__be16 port16[2];
		};
		__u32 ip_proto;
	} cocci_id/* samples/bpf/sockex3_kern.c 65 */;
	struct vlan_hdr {
		__be16 h_vlan_TCI;
		__be16 h_vlan_encapsulated_proto;
	} cocci_id/* samples/bpf/sockex3_kern.c 60 */;
	u32 cocci_id/* samples/bpf/sockex3_kern.c 40 */;
	void cocci_id/* samples/bpf/sockex3_kern.c 40 */;
	struct gre_hdr cocci_id/* samples/bpf/sockex3_kern.c 153 */;
	struct gre_hdr {
		__be16 flags;
		__be16 proto;
	} cocci_id/* samples/bpf/sockex3_kern.c 147 */;
	struct globals *cocci_id/* samples/bpf/sockex3_kern.c 140 */;
	struct pair cocci_id/* samples/bpf/sockex3_kern.c 133 */;
	struct pair *cocci_id/* samples/bpf/sockex3_kern.c 126 */;
	struct flow_key_record cocci_id/* samples/bpf/sockex3_kern.c 125 */;
	struct pair {
		__u64 packets;
		__u64 bytes;
	} cocci_id/* samples/bpf/sockex3_kern.c 111 */;
}
