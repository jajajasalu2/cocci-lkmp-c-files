cocci_test_suite() {
	const u8 *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 82 */;
	struct scatter_walk cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 73 */;
	struct scatterlist *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 70 */;
	struct aegis_state *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 70 */;
	struct aegis_crypt_ops {
		int (*skcipher_walk_init)(struct skcipher_walk *walk,
					  struct aead_request *req,
					  bool atomic);
		void (*crypt_blocks)(void *state, unsigned int length,
				     const void *src, void *dst);
		void (*crypt_tail)(void *state, unsigned int length,
				   const void *src, void *dst);
	} cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 59 */;
	struct aegis_ctx {
		struct aegis_block key;
	} cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 55 */;
	struct aegis_state {
		struct aegis_block blocks[AEGIS128_STATE_BLOCKS];
	} cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 51 */;
	struct aegis_block {
		u8 bytes[AEGIS128_BLOCK_SIZE]__aligned(AEGIS128_BLOCK_ALIGN);
	} cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 47 */;
	void cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 43 */(void *state,
								    void *tag_xor,
								    unsigned int cryptlen,
								    unsigned int assoclen);
	void cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 34 */(void *state,
								    unsigned int length,
								    const void *src,
								    void *dst);
	void __exit cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 281 */;
	void cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 28 */(void *state,
								    unsigned int length,
								    const void *data);
	int __init cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 270 */;
	struct simd_aead_alg *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 268 */;
	void cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 26 */(void *state,
								    void *key,
								    void *iv);
	struct aegis_ctx cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 256 */;
	struct aead_alg cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 241 */;
	struct aegis_block cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 220 */;
	const struct aegis_crypt_ops cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 213 */;
	const struct aegis_block cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 211 */;
	int cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 209 */;
	struct aegis_state cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 175 */;
	struct skcipher_walk cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 174 */;
	struct aegis_ctx *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 173 */;
	struct crypto_aead *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 172 */;
	const struct aegis_crypt_ops *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 170 */;
	unsigned int cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 169 */;
	struct aegis_block *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 168 */;
	struct aead_request *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 167 */;
	void cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 167 */;
	void *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 139 */;
	u8 *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 137 */;
	struct skcipher_walk *cocci_id/* arch/x86/crypto/aegis128-aesni-glue.c 118 */;
}
