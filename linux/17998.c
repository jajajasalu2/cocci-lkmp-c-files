cocci_test_suite() {
	unsigned int cocci_id/* arch/sparc/crypto/camellia_glue.c 98 */;
	const u64 *cocci_id/* arch/sparc/crypto/camellia_glue.c 97 */;
	ecb_crypt_op *cocci_id/* arch/sparc/crypto/camellia_glue.c 96 */;
	struct skcipher_walk cocci_id/* arch/sparc/crypto/camellia_glue.c 95 */;
	const struct camellia_sparc64_ctx *cocci_id/* arch/sparc/crypto/camellia_glue.c 94 */;
	struct crypto_skcipher *cocci_id/* arch/sparc/crypto/camellia_glue.c 93 */;
	bool cocci_id/* arch/sparc/crypto/camellia_glue.c 91 */;
	struct skcipher_request *cocci_id/* arch/sparc/crypto/camellia_glue.c 91 */;
	int cocci_id/* arch/sparc/crypto/camellia_glue.c 91 */;
	ecb_crypt_op cocci_id/* arch/sparc/crypto/camellia_glue.c 88 */;
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 85 */(const u64 *input,
								u64 *output,
								unsigned int len,
								const u64 *key);
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 83 */(const u64 *key,
								unsigned int key_len);
	u32 *cocci_id/* arch/sparc/crypto/camellia_glue.c 80 */;
	const u32 *cocci_id/* arch/sparc/crypto/camellia_glue.c 79 */;
	struct camellia_sparc64_ctx *cocci_id/* arch/sparc/crypto/camellia_glue.c 76 */;
	const u8 *cocci_id/* arch/sparc/crypto/camellia_glue.c 74 */;
	u8 *cocci_id/* arch/sparc/crypto/camellia_glue.c 74 */;
	struct crypto_tfm *cocci_id/* arch/sparc/crypto/camellia_glue.c 74 */;
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 74 */;
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 62 */(const u64 *key,
								const u32 *input,
								u32 *output,
								unsigned int key_len);
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 34 */(const u32 *in_key,
								u64 *encrypt_key,
								unsigned int key_len,
								u64 *decrypt_key);
	void __exit cocci_id/* arch/sparc/crypto/camellia_glue.c 283 */;
	struct camellia_sparc64_ctx {
		u64 encrypt_key[CAMELLIA_TABLE_BYTE_LEN / sizeof(u64)];
		u64 decrypt_key[CAMELLIA_TABLE_BYTE_LEN / sizeof(u64)];
		int key_len;
	} cocci_id/* arch/sparc/crypto/camellia_glue.c 28 */;
	int __init cocci_id/* arch/sparc/crypto/camellia_glue.c 264 */;
	unsigned long cocci_id/* arch/sparc/crypto/camellia_glue.c 252 */;
	bool __init cocci_id/* arch/sparc/crypto/camellia_glue.c 250 */;
	struct skcipher_alg cocci_id/* arch/sparc/crypto/camellia_glue.c 219 */[];
	struct camellia_sparc64_ctx cocci_id/* arch/sparc/crypto/camellia_glue.c 205 */;
	struct crypto_alg cocci_id/* arch/sparc/crypto/camellia_glue.c 199 */;
	cbc_crypt_op *cocci_id/* arch/sparc/crypto/camellia_glue.c 175 */;
	cbc_crypt_op cocci_id/* arch/sparc/crypto/camellia_glue.c 138 */;
	void cocci_id/* arch/sparc/crypto/camellia_glue.c 133 */(const u64 *input,
								 u64 *output,
								 unsigned int len,
								 const u64 *key,
								 u64 *iv);
}
