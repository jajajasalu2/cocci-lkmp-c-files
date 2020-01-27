cocci_test_suite() {
	void cocci_id/* arch/sparc/crypto/des_glue.c 92 */(const u64 *input,
							   u64 *output,
							   unsigned int len);
	struct des_sparc64_ctx *cocci_id/* arch/sparc/crypto/des_glue.c 48 */;
	void __exit cocci_id/* arch/sparc/crypto/des_glue.c 468 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 468 */;
	int __init cocci_id/* arch/sparc/crypto/des_glue.c 449 */;
	unsigned long cocci_id/* arch/sparc/crypto/des_glue.c 437 */;
	bool __init cocci_id/* arch/sparc/crypto/des_glue.c 435 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 43 */(const u32 *input_key,
							   u64 *key);
	struct skcipher_alg cocci_id/* arch/sparc/crypto/des_glue.c 377 */[];
	struct des3_ede_sparc64_ctx cocci_id/* arch/sparc/crypto/des_glue.c 362 */;
	struct des_sparc64_ctx cocci_id/* arch/sparc/crypto/des_glue.c 344 */;
	u64 *cocci_id/* arch/sparc/crypto/des_glue.c 34 */;
	struct crypto_alg cocci_id/* arch/sparc/crypto/des_glue.c 337 */[];
	unsigned int cocci_id/* arch/sparc/crypto/des_glue.c 296 */;
	const u64 *cocci_id/* arch/sparc/crypto/des_glue.c 295 */;
	struct skcipher_walk cocci_id/* arch/sparc/crypto/des_glue.c 294 */;
	const struct des3_ede_sparc64_ctx *cocci_id/* arch/sparc/crypto/des_glue.c 293 */;
	struct crypto_skcipher *cocci_id/* arch/sparc/crypto/des_glue.c 292 */;
	bool cocci_id/* arch/sparc/crypto/des_glue.c 290 */;
	struct skcipher_request *cocci_id/* arch/sparc/crypto/des_glue.c 290 */;
	int cocci_id/* arch/sparc/crypto/des_glue.c 290 */;
	struct des3_ede_sparc64_ctx {
		u64 encrypt_expkey[DES3_EDE_EXPKEY_WORDS / 2];
		u64 decrypt_expkey[DES3_EDE_EXPKEY_WORDS / 2];
	} cocci_id/* arch/sparc/crypto/des_glue.c 29 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 286 */(const u64 *expkey,
							    const u64 *input,
							    u64 *output,
							    unsigned int len,
							    u64 *iv);
	void cocci_id/* arch/sparc/crypto/des_glue.c 241 */(const u64 *expkey,
							    const u64 *input,
							    u64 *output,
							    unsigned int len);
	struct des_sparc64_ctx {
		u64 encrypt_expkey[DES_EXPKEY_WORDS / 2];
		u64 decrypt_expkey[DES_EXPKEY_WORDS / 2];
	} cocci_id/* arch/sparc/crypto/des_glue.c 24 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 239 */(const u64 *key);
	u8 *cocci_id/* arch/sparc/crypto/des_glue.c 231 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 220 */(const u64 *key,
							    const u64 *input,
							    u64 *output);
	const u32 *cocci_id/* arch/sparc/crypto/des_glue.c 194 */;
	u64 cocci_id/* arch/sparc/crypto/des_glue.c 185 */[DES_EXPKEY_WORDS / 2];
	struct des3_ede_sparc64_ctx *cocci_id/* arch/sparc/crypto/des_glue.c 184 */;
	const u8 *cocci_id/* arch/sparc/crypto/des_glue.c 181 */;
	struct crypto_tfm *cocci_id/* arch/sparc/crypto/des_glue.c 181 */;
	const struct des_sparc64_ctx *cocci_id/* arch/sparc/crypto/des_glue.c 139 */;
	void cocci_id/* arch/sparc/crypto/des_glue.c 133 */(const u64 *input,
							    u64 *output,
							    unsigned int len,
							    u64 *iv);
}
