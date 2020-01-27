cocci_test_suite() {
	u32 cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 95 */;
	u32 *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 67 */;
	const unsigned char *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 62 */;
	const void *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 59 */;
	struct eth_hdr cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 462 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 459 */;
	struct eth_hdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 458 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 456 */;
	long cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 456 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 454 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 454 */;
	struct ipv6hdr cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 354 */;
	__u8 cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 344 */;
	__u16 cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 341 */;
	struct vip cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 338 */;
	struct ctl_value *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 334 */;
	struct real_definition *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 332 */;
	struct vip_stats *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 331 */;
	struct bpf_tunnel_key cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 330 */;
	struct packet_description cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 328 */;
	struct tcphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 305 */;
	struct udphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 286 */;
	struct icmphdr cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 270 */;
	struct iphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 262 */;
	struct icmphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 261 */;
	unsigned int cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 26 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 258 */;
	struct icmp6hdr cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 247 */;
	struct ipv6hdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 240 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 24 */("version");
	struct icmp6hdr *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 239 */;
	__u32 *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 224 */;
	struct vip_meta *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 219 */;
	struct packet_description *cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 218 */;
	bool cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 217 */;
	struct real_definition **cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 217 */;
	ctl_array cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 205 */(".maps");
	stats cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 198 */(".maps");
	reals cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 191 */(".maps");
	ch_rings cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 184 */(".maps");
	vip_map cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 177 */(".maps");
	struct eth_hdr {
		unsigned char eth_dest[ETH_ALEN];
		unsigned char eth_source[ETH_ALEN];
		unsigned short eth_proto;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 166 */;
	struct vip_stats {
		__u64 bytes;
		__u64 pkts;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 161 */;
	struct real_definition {
		union {
			__be32 dst;
			__be32 dstv6[4];
		};
		__u8 flags;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 153 */;
	struct vip_meta {
		__u32 flags;
		__u32 vip_num;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 148 */;
	struct ctl_value {
		union {
			__u64 value;
			__u32 ifindex;
			__u8 mac[6];
		};
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 140 */;
	struct packet_description {
		union {
			__be32 src;
			__be32 srcv6[4];
		};
		union {
			__be32 dst;
			__be32 dstv6[4];
		};
		union {
			__u32 ports;
			__u16 port16[2];
		};
		__u8 proto;
		__u8 flags;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_l4lb.c 123 */;
}
