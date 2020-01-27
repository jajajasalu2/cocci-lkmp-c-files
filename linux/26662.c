cocci_test_suite() {
	struct ipv6hdr cocci_id/* samples/bpf/sockex2_kern.c 90 */;
	__u64 *cocci_id/* samples/bpf/sockex2_kern.c 62 */;
	__u32 cocci_id/* samples/bpf/sockex2_kern.c 52 */;
	struct iphdr cocci_id/* samples/bpf/sockex2_kern.c 48 */;
	struct pair cocci_id/* samples/bpf/sockex2_kern.c 216 */;
	u32 cocci_id/* samples/bpf/sockex2_kern.c 205 */;
	struct pair *cocci_id/* samples/bpf/sockex2_kern.c 204 */;
	struct flow_key_record cocci_id/* samples/bpf/sockex2_kern.c 203 */;
	struct __sk_buff *cocci_id/* samples/bpf/sockex2_kern.c 201 */;
	int cocci_id/* samples/bpf/sockex2_kern.c 201 */;
	hash_map cocci_id/* samples/bpf/sockex2_kern.c 198 */(".maps");
	struct pair {
		long packets;
		long bytes;
	} cocci_id/* samples/bpf/sockex2_kern.c 188 */;
	__u16 cocci_id/* samples/bpf/sockex2_kern.c 183 */;
	struct flow_key_record {
		__be32 src;
		__be32 dst;
		union {
			__be32 ports;
			__be16 port16[2];
		};
		__u16 thoff;
		__u8 ip_proto;
	} cocci_id/* samples/bpf/sockex2_kern.c 18 */;
	struct gre_hdr cocci_id/* samples/bpf/sockex2_kern.c 135 */;
	struct vlan_hdr {
		__be16 h_vlan_TCI;
		__be16 h_vlan_encapsulated_proto;
	} cocci_id/* samples/bpf/sockex2_kern.c 13 */;
	struct gre_hdr {
		__be16 flags;
		__be16 proto;
	} cocci_id/* samples/bpf/sockex2_kern.c 129 */;
	struct vlan_hdr cocci_id/* samples/bpf/sockex2_kern.c 109 */;
	__u64 cocci_id/* samples/bpf/sockex2_kern.c 103 */;
	struct flow_key_record *cocci_id/* samples/bpf/sockex2_kern.c 101 */;
	bool cocci_id/* samples/bpf/sockex2_kern.c 100 */;
}
