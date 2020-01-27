cocci_test_suite() {
	struct in_addr cocci_id/* samples/bpf/sockex3_user.c 75 */;
	struct pair cocci_id/* samples/bpf/sockex3_user.c 68 */;
	struct flow_key_record cocci_id/* samples/bpf/sockex3_user.c 67 */;
	void cocci_id/* samples/bpf/sockex3_user.c 64 */;
	__u32 cocci_id/* samples/bpf/sockex3_user.c 58 */;
	uint32_t cocci_id/* samples/bpf/sockex3_user.c 38 */;
	struct bpf_prog_info cocci_id/* samples/bpf/sockex3_user.c 37 */;
	FILE *cocci_id/* samples/bpf/sockex3_user.c 35 */;
	char cocci_id/* samples/bpf/sockex3_user.c 34 */[256];
	struct rlimit cocci_id/* samples/bpf/sockex3_user.c 33 */;
	char **cocci_id/* samples/bpf/sockex3_user.c 31 */;
	int cocci_id/* samples/bpf/sockex3_user.c 31 */;
	struct pair {
		__u64 packets;
		__u64 bytes;
	} cocci_id/* samples/bpf/sockex3_user.c 26 */;
	struct flow_key_record {
		__be32 src;
		__be32 dst;
		union {
			__be32 ports;
			__be16 port16[2];
		};
		__u32 ip_proto;
	} cocci_id/* samples/bpf/sockex3_user.c 16 */;
}
