cocci_test_suite() {
	struct iphdr *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 99 */;
	__be32 *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 97 */;
	u64 cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 96 */;
	void *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 96 */;
	int cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 96 */;
	unsigned short *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 87 */;
	void cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 85 */;
	tx_port cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 82 */(".maps");
	exact_match cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 75 */(".maps");
	arp_table cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 67 */(".maps");
	rxcnt cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 59 */(".maps");
	lpm_map cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 51 */(".maps");
	struct direct_map {
		struct arp_entry arp;
		int ifindex;
		__be64 mac;
	} cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 38 */;
	struct arp_entry {
		__be64 mac;
		__be32 dst;
	} cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 33 */;
	union key_4 {
		u32 b32[2];
		u8 b8[8];
	} cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 28 */;
	struct trie_value {
		__u8 prefix[4];
		__be64 value;
		int ifindex;
		int metric;
		__be32 gw;
	} cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 19 */;
	__be32 cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 142 */;
	struct direct_map *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 141 */;
	struct vlan_hdr cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 133 */;
	struct vlan_hdr *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 130 */;
	u32 cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 120 */;
	u16 cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 119 */;
	long *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 118 */;
	union key_4 cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 117 */;
	struct ethhdr *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 116 */;
	struct trie_value *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 114 */;
	__be64 *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 112 */;
	long cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 111 */;
	struct xdp_md *cocci_id/* samples/bpf/xdp_router_ipv4_kern.c 109 */;
}
