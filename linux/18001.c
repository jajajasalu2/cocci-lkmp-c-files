cocci_test_suite() {
	void cocci_id/* arch/sparc/crypto/aes_glue.c 88 */(const u64 *key,
							   const u64 *input,
							   u64 *output,
							   unsigned int len);
	void cocci_id/* arch/sparc/crypto/aes_glue.c 77 */(const u64 *key);
	void cocci_id/* arch/sparc/crypto/aes_glue.c 66 */(const u64 *key,
							   const u32 *input,
							   u32 *output);
	struct crypto_sparc64_aes_ctx {
		struct aes_ops *ops;
		u64 key[AES_MAX_KEYLENGTH / sizeof(u64)];
		u32 key_length;
		u32 expanded_key_length;
	} cocci_id/* arch/sparc/crypto/aes_glue.c 52 */;
	void __exit cocci_id/* arch/sparc/crypto/aes_glue.c 463 */;
	void cocci_id/* arch/sparc/crypto/aes_glue.c 463 */;
	int __init cocci_id/* arch/sparc/crypto/aes_glue.c 444 */;
	unsigned long cocci_id/* arch/sparc/crypto/aes_glue.c 432 */;
	bool __init cocci_id/* arch/sparc/crypto/aes_glue.c 430 */;
	struct skcipher_alg cocci_id/* arch/sparc/crypto/aes_glue.c 384 */[];
	struct crypto_sparc64_aes_ctx cocci_id/* arch/sparc/crypto/aes_glue.c 370 */;
	struct crypto_alg cocci_id/* arch/sparc/crypto/aes_glue.c 364 */;
	struct aes_ops {
		void (*encrypt)(const u64 *key, const u32 *input, u32 *output);
		void (*decrypt)(const u64 *key, const u32 *input, u32 *output);
		void (*load_encrypt_keys)(const u64 *key);
		void (*load_decrypt_keys)(const u64 *key);
		void (*ecb_encrypt)(const u64 *key, const u64 *input,
				    u64 *output, unsigned int len);
		void (*ecb_decrypt)(const u64 *key, const u64 *input,
				    u64 *output, unsigned int len);
		void (*cbc_encrypt)(const u64 *key, const u64 *input,
				    u64 *output, unsigned int len, u64 *iv);
		void (*cbc_decrypt)(const u64 *key, const u64 *input,
				    u64 *output, unsigned int len, u64 *iv);
		void (*ctr_crypt)(const u64 *key, const u64 *input,
				  u64 *output, unsigned int len, u64 *iv);
	} cocci_id/* arch/sparc/crypto/aes_glue.c 35 */;
	u64 cocci_id/* arch/sparc/crypto/aes_glue.c 325 */[AES_BLOCK_SIZE / sizeof(u64)];
	struct skcipher_walk *cocci_id/* arch/sparc/crypto/aes_glue.c 322 */;
	u64 cocci_id/* arch/sparc/crypto/aes_glue.c 308 */;
	struct skcipher_walk cocci_id/* arch/sparc/crypto/aes_glue.c 299 */;
	const u64 *cocci_id/* arch/sparc/crypto/aes_glue.c 298 */;
	const struct crypto_sparc64_aes_ctx *cocci_id/* arch/sparc/crypto/aes_glue.c 297 */;
	struct skcipher_request *cocci_id/* arch/sparc/crypto/aes_glue.c 294 */;
	u8 *cocci_id/* arch/sparc/crypto/aes_glue.c 214 */;
	struct crypto_skcipher *cocci_id/* arch/sparc/crypto/aes_glue.c 201 */;
	const u32 *cocci_id/* arch/sparc/crypto/aes_glue.c 195 */;
	u32 *cocci_id/* arch/sparc/crypto/aes_glue.c 172 */;
	struct crypto_sparc64_aes_ctx *cocci_id/* arch/sparc/crypto/aes_glue.c 171 */;
	unsigned int cocci_id/* arch/sparc/crypto/aes_glue.c 169 */;
	const u8 *cocci_id/* arch/sparc/crypto/aes_glue.c 168 */;
	struct crypto_tfm *cocci_id/* arch/sparc/crypto/aes_glue.c 168 */;
	int cocci_id/* arch/sparc/crypto/aes_glue.c 168 */;
	void cocci_id/* arch/sparc/crypto/aes_glue.c 165 */(const u32 *in_key,
							    u64 *output_key,
							    unsigned int key_len);
	struct aes_ops cocci_id/* arch/sparc/crypto/aes_glue.c 129 */;
	void cocci_id/* arch/sparc/crypto/aes_glue.c 107 */(const u64 *key,
							    const u64 *input,
							    u64 *output,
							    unsigned int len,
							    u64 *iv);
}
