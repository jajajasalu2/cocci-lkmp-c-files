cocci_test_suite() {
	struct simd_skcipher_ctx *cocci_id/* crypto/simd.c 90 */;
	struct skcipher_request *cocci_id/* crypto/simd.c 87 */;
	struct simd_aead_alg **cocci_id/* crypto/simd.c 483 */;
	char cocci_id/* crypto/simd.c 465 */[CRYPTO_MAX_ALG_NAME];
	const char *cocci_id/* crypto/simd.c 462 */;
	struct simd_aead_alg *cocci_id/* crypto/simd.c 462 */;
	struct simd_skcipher_ctx {
		struct cryptd_skcipher *cryptd_tfm;
	} cocci_id/* crypto/simd.c 46 */;
	struct simd_aead_ctx cocci_id/* crypto/simd.c 433 */;
	struct simd_skcipher_alg {
		const char *ialg_name;
		struct skcipher_alg alg;
	} cocci_id/* crypto/simd.c 41 */;
	int cocci_id/* crypto/simd.c 401 */;
	struct aead_alg *cocci_id/* crypto/simd.c 399 */;
	struct crypto_aead *cocci_id/* crypto/simd.c 398 */;
	struct aead_request cocci_id/* crypto/simd.c 386 */;
	struct simd_aead_alg cocci_id/* crypto/simd.c 375 */;
	unsigned cocci_id/* crypto/simd.c 372 */;
	struct cryptd_aead *cocci_id/* crypto/simd.c 369 */;
	void cocci_id/* crypto/simd.c 359 */;
	struct simd_aead_ctx *cocci_id/* crypto/simd.c 341 */;
	struct aead_request *cocci_id/* crypto/simd.c 338 */;
	unsigned int cocci_id/* crypto/simd.c 309 */;
	const u8 *cocci_id/* crypto/simd.c 293 */;
	struct simd_aead_ctx {
		struct cryptd_aead *cryptd_tfm;
	} cocci_id/* crypto/simd.c 289 */;
	struct simd_aead_alg {
		const char *ialg_name;
		struct aead_alg alg;
	} cocci_id/* crypto/simd.c 284 */;
	struct simd_skcipher_alg *cocci_id/* crypto/simd.c 240 */;
	struct simd_skcipher_alg **cocci_id/* crypto/simd.c 233 */;
	struct skcipher_alg *cocci_id/* crypto/simd.c 232 */;
	struct simd_skcipher_ctx cocci_id/* crypto/simd.c 183 */;
	struct crypto_skcipher *cocci_id/* crypto/simd.c 148 */;
	struct skcipher_request cocci_id/* crypto/simd.c 136 */;
	struct simd_skcipher_alg cocci_id/* crypto/simd.c 124 */;
	struct cryptd_skcipher *cocci_id/* crypto/simd.c 118 */;
}
