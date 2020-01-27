cocci_test_suite() {
	unsigned int cocci_id/* arch/x86/crypto/chacha_glue.c 43 */;
	__ro_after_init cocci_id/* arch/x86/crypto/chacha_glue.c 41 */(chacha_use_avx512vl);
	__ro_after_init cocci_id/* arch/x86/crypto/chacha_glue.c 40 */(chacha_use_avx2);
	__ro_after_init cocci_id/* arch/x86/crypto/chacha_glue.c 39 */(chacha_use_simd);
	void __exit cocci_id/* arch/x86/crypto/chacha_glue.c 306 */;
	int __init cocci_id/* arch/x86/crypto/chacha_glue.c 284 */;
	void cocci_id/* arch/x86/crypto/chacha_glue.c 25 */(u32 *state,
							    u8 *dst,
							    const u8 *src,
							    unsigned int len,
							    int nrounds);
	struct chacha_ctx cocci_id/* arch/x86/crypto/chacha_glue.c 241 */;
	struct skcipher_alg cocci_id/* arch/x86/crypto/chacha_glue.c 235 */[];
	void cocci_id/* arch/x86/crypto/chacha_glue.c 23 */(const u32 *state,
							    u32 *out,
							    int nrounds);
	u8 cocci_id/* arch/x86/crypto/chacha_glue.c 215 */[16];
	struct chacha_ctx *cocci_id/* arch/x86/crypto/chacha_glue.c 204 */;
	struct crypto_skcipher *cocci_id/* arch/x86/crypto/chacha_glue.c 203 */;
	struct skcipher_request *cocci_id/* arch/x86/crypto/chacha_glue.c 201 */;
	struct skcipher_walk cocci_id/* arch/x86/crypto/chacha_glue.c 167 */;
	const struct chacha_ctx *cocci_id/* arch/x86/crypto/chacha_glue.c 164 */;
	int cocci_id/* arch/x86/crypto/chacha_glue.c 149 */;
	const u8 *cocci_id/* arch/x86/crypto/chacha_glue.c 148 */;
	u8 *cocci_id/* arch/x86/crypto/chacha_glue.c 148 */;
	u32 *cocci_id/* arch/x86/crypto/chacha_glue.c 148 */;
	void cocci_id/* arch/x86/crypto/chacha_glue.c 148 */;
	const u32 *cocci_id/* arch/x86/crypto/chacha_glue.c 140 */;
}
