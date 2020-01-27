cocci_test_suite() {
	u32 cocci_id/* lib/crypto/chacha20poly1305.c 88 */;
	union {
		u8 block0[POLY1305_KEY_SIZE];
		__le64 lens[2];
	} cocci_id/* lib/crypto/chacha20poly1305.c 64 */;
	void cocci_id/* lib/crypto/chacha20poly1305.c 58 */;
	u8 cocci_id/* lib/crypto/chacha20poly1305.c 41 */[CHACHA_IV_SIZE];
	int __init cocci_id/* lib/crypto/chacha20poly1305.c 358 */;
	bool __init cocci_id/* lib/crypto/chacha20poly1305.c 24 */(void);
	union {
		struct {
			u32 k[CHACHA_KEY_WORDS];
			__le64 iv[2];
		};
		u8 block0[POLY1305_KEY_SIZE];
		u8 chacha_stream[CHACHA_BLOCK_SIZE];
		struct {
			u8 mac[2][POLY1305_DIGEST_SIZE];
		};
		__le64 lens[2];
	} cocci_id/* lib/crypto/chacha20poly1305.c 225 */;
	unsigned int cocci_id/* lib/crypto/chacha20poly1305.c 222 */;
	struct sg_mapping_iter cocci_id/* lib/crypto/chacha20poly1305.c 220 */;
	u32 cocci_id/* lib/crypto/chacha20poly1305.c 219 */[CHACHA_STATE_WORDS];
	const u8 cocci_id/* lib/crypto/chacha20poly1305.c 214 */[CHACHA20POLY1305_KEY_SIZE];
	const u64 cocci_id/* lib/crypto/chacha20poly1305.c 213 */;
	struct scatterlist *cocci_id/* lib/crypto/chacha20poly1305.c 210 */;
	const u8 cocci_id/* lib/crypto/chacha20poly1305.c 198 */[XCHACHA20POLY1305_NONCE_SIZE];
	__le64 cocci_id/* lib/crypto/chacha20poly1305.c 177 */[2];
	u32 cocci_id/* lib/crypto/chacha20poly1305.c 176 */[CHACHA_KEY_WORDS];
	union {
		u8 block0[POLY1305_KEY_SIZE];
		u8 mac[POLY1305_DIGEST_SIZE];
		__le64 lens[2];
	} cocci_id/* lib/crypto/chacha20poly1305.c 134 */;
	int cocci_id/* lib/crypto/chacha20poly1305.c 133 */;
	size_t cocci_id/* lib/crypto/chacha20poly1305.c 132 */;
	struct poly1305_desc_ctx cocci_id/* lib/crypto/chacha20poly1305.c 131 */;
	u32 *cocci_id/* lib/crypto/chacha20poly1305.c 128 */;
	const size_t cocci_id/* lib/crypto/chacha20poly1305.c 127 */;
	const u8 *cocci_id/* lib/crypto/chacha20poly1305.c 127 */;
	u8 *cocci_id/* lib/crypto/chacha20poly1305.c 127 */;
	bool cocci_id/* lib/crypto/chacha20poly1305.c 126 */;
}
