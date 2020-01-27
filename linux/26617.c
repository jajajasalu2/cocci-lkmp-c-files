cocci_test_suite() {
	struct udphdr *cocci_id/* samples/bpf/parse_simple.c 32 */;
	struct iphdr *cocci_id/* samples/bpf/parse_simple.c 31 */;
	struct eth_hdr *cocci_id/* samples/bpf/parse_simple.c 30 */;
	void *cocci_id/* samples/bpf/parse_simple.c 29 */;
	long cocci_id/* samples/bpf/parse_simple.c 29 */;
	struct __sk_buff *cocci_id/* samples/bpf/parse_simple.c 27 */;
	int cocci_id/* samples/bpf/parse_simple.c 27 */;
	struct eth_hdr {
		unsigned char h_dest[ETH_ALEN];
		unsigned char h_source[ETH_ALEN];
		unsigned short h_proto;
	} cocci_id/* samples/bpf/parse_simple.c 20 */;
}
