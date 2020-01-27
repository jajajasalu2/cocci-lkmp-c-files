cocci_test_suite() {
	const char *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 79 */;
	const struct cpu_feature cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 681 */[];
	void __exit cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 672 */;
	void cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 66 */(int bytes,
								u8 dst[],
								const u8 src[],
								const struct ghash_key *k,
								u64 dg[],
								u8 ctr[],
								const u32 rk[],
								int rounds,
								u8 tag[]);
	int __init cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 646 */;
	struct gcm_aes_ctx cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 642 */;
	struct aead_alg cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 629 */;
	void cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 53 */(int blocks,
								u64 dg[],
								const char *src,
								const struct ghash_key *k,
								const char *head);
	u128 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 522 */;
	u64 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 521 */[2];
	u8 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 519 */[AES_BLOCK_SIZE];
	struct skcipher_walk cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 518 */;
	struct gcm_aes_ctx {
		struct crypto_aes_ctx aes_key;
		struct ghash_key ghash_key;
	} cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 48 */;
	struct ghash_desc_ctx {
		u64 digest[GHASH_DIGEST_SIZE / sizeof(u64)];
		u8 buf[GHASH_BLOCK_SIZE];
		u32 count;
	} cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 42 */;
	u8 *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 376 */;
	u32 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 369 */;
	struct scatter_walk cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 368 */;
	u8 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 367 */[GHASH_BLOCK_SIZE];
	struct gcm_aes_ctx *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 366 */;
	struct crypto_aead *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 365 */;
	u64 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 363 */[];
	struct aead_request *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 363 */;
	void cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 363 */;
	int *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 333 */;
	u8 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 332 */[];
	struct ghash_key {
		u64 h[2];
		u64 h2[2];
		u64 h3[2];
		u64 h4[2];
		be128 k;
	} cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 33 */;
	struct crypto_aes_ctx *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 289 */;
	struct ghash_desc_ctx cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 272 */;
	struct ghash_key cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 264 */;
	struct shash_alg cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 259 */[];
	struct crypto_shash *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 246 */;
	be128 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 226 */;
	const u8 *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 224 */;
	unsigned int cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 224 */;
	struct ghash_key *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 223 */;
	int cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 223 */;
	u64 cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 214 */;
	const be128 *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 212 */;
	struct ghash_desc_ctx *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 123 */;
	void (*cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 118 */)(int blocks,
								    u64 dg[],
								    const char *src,
								    const struct ghash_key *k,
								    const char *head);
	struct shash_desc *cocci_id/* arch/arm64/crypto/ghash-ce-glue.c 116 */;
}
