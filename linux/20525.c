cocci_test_suite() {
	u32 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 73 */;
	struct twofish_xts_ctx {
		struct twofish_ctx tweak_ctx;
		struct twofish_ctx crypt_ctx;
	} cocci_id/* arch/x86/crypto/twofish_avx_glue.c 64 */;
	const u128 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 58 */;
	u128 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 58 */;
	le128 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 58 */;
	void *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 58 */;
	const u8 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 47 */;
	u8 *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 46 */;
	struct twofish_ctx *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 46 */;
	void cocci_id/* arch/x86/crypto/twofish_avx_glue.c 46 */;
	unsigned int cocci_id/* arch/x86/crypto/twofish_avx_glue.c 41 */;
	struct crypto_skcipher *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 40 */;
	void cocci_id/* arch/x86/crypto/twofish_avx_glue.c 32 */(struct twofish_ctx *ctx,
								 u8 *dst,
								 const u8 *src,
								 le128 *iv);
	void __exit cocci_id/* arch/x86/crypto/twofish_avx_glue.c 302 */;
	void cocci_id/* arch/x86/crypto/twofish_avx_glue.c 30 */(struct twofish_ctx *ctx,
								 u8 *dst,
								 const u8 *src);
	const char *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 290 */;
	int __init cocci_id/* arch/x86/crypto/twofish_avx_glue.c 288 */;
	struct simd_skcipher_alg *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 286 */[ARRAY_SIZE(twofish_algs)];
	struct twofish_xts_ctx cocci_id/* arch/x86/crypto/twofish_avx_glue.c 275 */;
	struct twofish_ctx cocci_id/* arch/x86/crypto/twofish_avx_glue.c 233 */;
	struct skcipher_alg cocci_id/* arch/x86/crypto/twofish_avx_glue.c 226 */[];
	struct twofish_xts_ctx *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 219 */;
	struct skcipher_request *cocci_id/* arch/x86/crypto/twofish_avx_glue.c 196 */;
	int cocci_id/* arch/x86/crypto/twofish_avx_glue.c 196 */;
	const struct common_glue_ctx cocci_id/* arch/x86/crypto/twofish_avx_glue.c 106 */;
}
