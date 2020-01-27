cocci_test_suite() {
	bool cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7254 */;
	struct scatterlist cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7253 */;
	u8 *cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7252 */;
	size_t cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7251 */;
	enum{MAXIMUM_TEST_BUFFER_LEN=1UL << 12,} cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7250 */;
	bool __init cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7248 */;
	void cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7248 */;
	int cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7241 */;
	bool __init cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7240 */;
	const u8 cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7231 */[CHACHA20POLY1305_KEY_SIZE];
	const size_t cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7228 */;
	const u8 *cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7228 */;
	void __init cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7227 */;
	const struct chacha20poly1305_testvec cocci_id/* lib/crypto/chacha20poly1305-selftest.c 7004 */[]__initconst;
	const u8 cocci_id/* lib/crypto/chacha20poly1305-selftest.c 4648 */[]__initconst;
	struct chacha20poly1305_testvec {
		const u8 *input,*output,*assoc,*nonce,*key;
		size_t ilen,alen,nlen;
		bool failure;
	} cocci_id/* lib/crypto/chacha20poly1305-selftest.c 16 */;
}
