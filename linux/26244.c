cocci_test_suite() {
	struct _vlan_hdr *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 72 */;
	struct _vlan_hdr cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 64 */;
	__u8 cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 60 */;
	__u16 cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 59 */;
	bool cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 57 */;
	struct parse_pkt *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 57 */;
	struct ethhdr *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 57 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 57 */;
	struct parse_pkt {
		__u16 l3_proto;
		__u16 l3_offset;
		__u16 vlan_outer;
		__u16 vlan_inner;
		__u8 vlan_outer_offset;
		__u8 vlan_inner_offset;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 45 */;
	struct _vlan_hdr {
		__be16 h_vlan_TCI;
		__be16 h_vlan_encapsulated_proto;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 34 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 271 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 271 */;
	__u32 *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 228 */;
	__u16 *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 215 */;
	void cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 213 */;
	char *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 187 */;
	struct parse_pkt cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 110 */;
	long cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 108 */;
	struct xdp_md *cocci_id/* tools/testing/selftests/bpf/progs/test_xdp_vlan.c 106 */;
}
