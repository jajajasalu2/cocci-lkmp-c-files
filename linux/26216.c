cocci_test_suite() {
	uint8_t *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 58 */;
	struct ip6_t *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 57 */;
	struct sr6_tlv_t {
		unsigned char type;
		unsigned char len;
		unsigned char value[0];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 47 */;
	struct ip6_srh_t {
		unsigned char nexthdr;
		unsigned char hdrlen;
		unsigned char type;
		unsigned char segments_left;
		unsigned char first_segment;
		unsigned char flags;
		unsigned short tag;
		struct ip6_addr_t segments[0];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 35 */;
	struct ip6_addr_t {
		unsigned long long hi;
		unsigned long long lo;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 30 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 248 */;
	struct ip6_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 246 */;
	struct ip6_srh_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 246 */;
	struct sr6_tlv_t *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 242 */;
	uint8_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 238 */[20];
	struct ip6_addr_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 232 */;
	uint8_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 231 */;
	struct ip6_srh_t *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 230 */;
	unsigned long long cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 228 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 226 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 226 */;
	char *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 183 */;
	long cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 183 */;
	uint32_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 180 */;
	struct ip6_t {
		unsigned int ver:4;
		unsigned int priority:8;
		unsigned int flow_label:20;
		unsigned short payload_len;
		unsigned char next_header;
		unsigned char hop_limit;
		unsigned long long src_hi;
		unsigned long long src_lo;
		unsigned long long dst_hi;
		unsigned long long dst_lo;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 17 */;
	struct sr6_tlv_t cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 139 */;
	uint32_t *cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 119 */;
	char cocci_id/* tools/testing/selftests/bpf/progs/test_seg6_loop.c 101 */[16];
}
