cocci_test_suite() {
	struct sockaddr_in6 cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 91 */;
	struct sockaddr_in cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 84 */;
	char cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 81 */[ETH_DATA_LEN];
	char **cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 775 */;
	char cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 74 */;
	bool cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 68 */;
	struct sockaddr_in *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 602 */;
	void __attribute__((noreturn)) cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 581 */;
	struct pollfd cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 477 */;
	short cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 475 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 462 */;
	struct grehdr {
		uint16_t unused;
		uint16_t protocol;
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 39 */;
	struct udphdr cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 291 */;
	struct guehdr cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 291 */;
	struct grehdr cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 289 */;
	struct grehdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 263 */;
	uint16_t cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 261 */;
	void *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 261 */;
	void cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 261 */;
	struct guehdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 256 */;
	uint8_t cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 254 */;
	struct ipv6hdr cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 250 */;
	struct iphdr cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 247 */;
	struct udphdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 239 */;
	const struct ipv6hdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 223 */;
	const struct udphdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 211 */;
	const struct iphdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 210 */;
	struct ipv6hdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 198 */;
	struct sockaddr_in6 *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 194 */;
	uint16_t *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 185 */;
	struct iphdr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 169 */;
	uint32_t cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 166 */;
	const uint16_t *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 143 */;
	unsigned long cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 143 */;
	int cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 143 */;
	char cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 122 */[INET6_ADDRSTRLEN];
	struct sockaddr *cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 119 */;
	struct timeval cocci_id/* tools/testing/selftests/bpf/test_flow_dissector.c 113 */;
	struct guehdr {
		union {
			struct {
#if defined(__LITTLE_ENDIAN_BITFIELD)
				__u8 hlen:5,control:1,version:2;
#elif defined (__BIG_ENDIAN_BITFIELD)
				__u8 version:2,control:1,hlen:5;
#else
#error  "Please fix <asm/byteorder.h>"

#endif
				__u8 proto_ctype;
				__be16 flags;
			};
			__be32 word;
		};
	} cocci_id/*  1 */;
}
