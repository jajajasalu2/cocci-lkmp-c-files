cocci_test_suite() {
	u8 *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 89 */;
	be128 cocci_id/* arch/arm/crypto/ghash-ce-glue.c 76 */;
	struct ghash_key *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 69 */;
	u64 cocci_id/* arch/arm/crypto/ghash-ce-glue.c 68 */[];
	const char *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 68 */;
	void (*cocci_id/* arch/arm/crypto/ghash-ce-glue.c 56 */)(int blocks,
								 u64 dg[],
								 const char *src,
								 const struct ghash_key *k,
								 const char *head);
	void cocci_id/* arch/arm/crypto/ghash-ce-glue.c 48 */(int blocks,
							      u64 dg[],
							      const char *src,
							      const struct ghash_key *k,
							      const char *head);
	struct ghash_async_ctx {
		struct cryptd_ahash *cryptd_tfm;
	} cocci_id/* arch/arm/crypto/ghash-ce-glue.c 44 */;
	void __exit cocci_id/* arch/arm/crypto/ghash-ce-glue.c 383 */;
	struct ghash_desc_ctx {
		u64 digest[GHASH_DIGEST_SIZE / sizeof(u64)];
		u8 buf[GHASH_BLOCK_SIZE];
		u32 count;
	} cocci_id/* arch/arm/crypto/ghash-ce-glue.c 38 */;
	int __init cocci_id/* arch/arm/crypto/ghash-ce-glue.c 357 */;
	struct ghash_async_ctx cocci_id/* arch/arm/crypto/ghash-ce-glue.c 350 */;
	struct ahash_alg cocci_id/* arch/arm/crypto/ghash-ce-glue.c 334 */;
	struct crypto_tfm *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 327 */;
	void cocci_id/* arch/arm/crypto/ghash-ce-glue.c 327 */;
	struct ahash_request cocci_id/* arch/arm/crypto/ghash-ce-glue.c 321 */;
	unsigned int cocci_id/* arch/arm/crypto/ghash-ce-glue.c 295 */;
	const u8 *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 294 */;
	struct ghash_key {
		u64 h[2];
		u64 h2[2];
		u64 h3[2];
		u64 h4[2];
		be128 k;
	} cocci_id/* arch/arm/crypto/ghash-ce-glue.c 29 */;
	void *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 286 */;
	const void *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 274 */;
	struct crypto_shash *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 267 */;
	struct shash_desc *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 266 */;
	struct cryptd_ahash *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 258 */;
	struct ghash_async_ctx *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 256 */;
	struct crypto_ahash *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 255 */;
	struct ahash_request *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 253 */;
	int cocci_id/* arch/arm/crypto/ghash-ce-glue.c 253 */;
	struct ghash_key cocci_id/* arch/arm/crypto/ghash-ce-glue.c 200 */;
	struct ghash_desc_ctx cocci_id/* arch/arm/crypto/ghash-ce-glue.c 194 */;
	struct shash_alg cocci_id/* arch/arm/crypto/ghash-ce-glue.c 188 */;
	u64 cocci_id/* arch/arm/crypto/ghash-ce-glue.c 151 */;
	const be128 *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 149 */;
	struct ghash_desc_ctx *cocci_id/* arch/arm/crypto/ghash-ce-glue.c 133 */;
}
