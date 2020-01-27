cocci_test_suite() {
	union frame_map {
		struct {
			struct tpacket_hdr tp_h __aligned_tpacket;
			struct sockaddr_ll s_ll;
		} *v1;
		struct {
			struct tpacket2_hdr tp_h;
			struct sockaddr_ll s_ll;
		} *v2;
		void *raw;
	} cocci_id/* tools/testing/selftests/net/psock_tpacket.c 85 */;
	struct ring cocci_id/* tools/testing/selftests/net/psock_tpacket.c 805 */;
	const char *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 791 */[];
	struct block_desc {
		uint32_t version;
		uint32_t offset_to_priv;
		struct tpacket_hdr_v1 h1;
	} cocci_id/* tools/testing/selftests/net/psock_tpacket.c 79 */;
	ssize_t cocci_id/* tools/testing/selftests/net/psock_tpacket.c 761 */;
	char cocci_id/* tools/testing/selftests/net/psock_tpacket.c 759 */[512];
	struct sockaddr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 739 */;
	struct ring {
		struct iovec *rd;
		uint8_t *mm_space;
		size_t mm_len,rd_len;
		struct sockaddr_ll ll;
		void (*walk)(int sock, struct ring *ring);
		int type,rd_num,flen,version;
		union {
			struct tpacket_req req;
			struct tpacket_req3 req3;
		};
	} cocci_id/* tools/testing/selftests/net/psock_tpacket.c 66 */;
	struct ring *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 630 */;
	unsigned int cocci_id/* tools/testing/selftests/net/psock_tpacket.c 630 */;
	struct block_desc *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 575 */;
	uint8_t *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 551 */;
	unsigned long cocci_id/* tools/testing/selftests/net/psock_tpacket.c 546 */;
	const int cocci_id/* tools/testing/selftests/net/psock_tpacket.c 533 */;
	uint32_t cocci_id/* tools/testing/selftests/net/psock_tpacket.c 523 */;
	uint64_t cocci_id/* tools/testing/selftests/net/psock_tpacket.c 508 */;
	struct sockaddr_ll cocci_id/* tools/testing/selftests/net/psock_tpacket.c 377 */;
	char cocci_id/* tools/testing/selftests/net/psock_tpacket.c 375 */[1024];
	union frame_map cocci_id/* tools/testing/selftests/net/psock_tpacket.c 374 */;
	struct pollfd cocci_id/* tools/testing/selftests/net/psock_tpacket.c 371 */;
	void cocci_id/* tools/testing/selftests/net/psock_tpacket.c 327 */;
	void *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 312 */;
	int cocci_id/* tools/testing/selftests/net/psock_tpacket.c 312 */;
	struct tpacket3_hdr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 301 */;
	int cocci_id/* tools/testing/selftests/net/psock_tpacket.c 223 */[2];
	struct tpacket2_hdr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 184 */;
	struct tpacket_hdr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 173 */;
	uint8_t cocci_id/* tools/testing/selftests/net/psock_tpacket.c 157 */;
	struct iphdr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 145 */;
	struct ethhdr *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 144 */;
	size_t *cocci_id/* tools/testing/selftests/net/psock_tpacket.c 141 */;
	struct ethhdr cocci_id/* tools/testing/selftests/net/psock_tpacket.c 128 */;
	size_t cocci_id/* tools/testing/selftests/net/psock_tpacket.c 124 */;
}
