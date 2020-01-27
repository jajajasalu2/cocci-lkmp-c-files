cocci_test_suite() {
	u32 *cocci_id/* arch/arm/crypto/aes-ce-glue.c 94 */;
	struct aes_block *cocci_id/* arch/arm/crypto/aes-ce-glue.c 80 */;
	u32 cocci_id/* arch/arm/crypto/aes-ce-glue.c 79 */;
	const u8 cocci_id/* arch/arm/crypto/aes-ce-glue.c 75 */[];
	const char *cocci_id/* arch/arm/crypto/aes-ce-glue.c 707 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm/crypto/aes-ce-glue.c 706 */;
	int __init cocci_id/* arch/arm/crypto/aes-ce-glue.c 704 */;
	int cocci_id/* arch/arm/crypto/aes-ce-glue.c 696 */;
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 694 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm/crypto/aes-ce-glue.c 692 */[ARRAY_SIZE(aes_algs)];
	const u8 *cocci_id/* arch/arm/crypto/aes-ce-glue.c 69 */;
	struct crypto_aes_xts_ctx cocci_id/* arch/arm/crypto/aes-ce-glue.c 680 */;
	struct crypto_aes_ctx cocci_id/* arch/arm/crypto/aes-ce-glue.c 604 */;
	struct skcipher_alg cocci_id/* arch/arm/crypto/aes-ce-glue.c 598 */[];
	struct aes_block {
		u8 b[AES_BLOCK_SIZE];
	} cocci_id/* arch/arm/crypto/aes-ce-glue.c 53 */;
	struct crypto_aes_xts_ctx *cocci_id/* arch/arm/crypto/aes-ce-glue.c 529 */;
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 49 */(u8 out[],
							    const u8 in[],
							    const u32 rk1[],
							    int rounds,
							    int bytes,
							    u8 iv[],
							    const u32 rk2[],
							    int first);
	unsigned long cocci_id/* arch/arm/crypto/aes-ce-glue.c 434 */;
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 43 */(u8 out[],
							    const u8 in[],
							    const u32 rk[],
							    int rounds,
							    int blocks,
							    u8 ctr[]);
	u8 *cocci_id/* arch/arm/crypto/aes-ce-glue.c 413 */;
	u8 __aligned(8) cocci_id/* arch/arm/crypto/aes-ce-glue.c 411 */[AES_BLOCK_SIZE];
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 40 */(u8 out[],
							    const u8 in[],
							    const u32 rk[],
							    int rounds,
							    int bytes,
							    const u8 iv[]);
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 36 */(u8 out[],
							    const u8 in[],
							    const u32 rk[],
							    int rounds,
							    int blocks,
							    u8 iv[]);
	struct skcipher_request cocci_id/* arch/arm/crypto/aes-ce-glue.c 342 */;
	struct scatterlist cocci_id/* arch/arm/crypto/aes-ce-glue.c 341 */[2];
	struct scatterlist *cocci_id/* arch/arm/crypto/aes-ce-glue.c 340 */;
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 31 */(u8 out[],
							    const u8 in[],
							    const u32 rk[],
							    int rounds,
							    int blocks);
	void cocci_id/* arch/arm/crypto/aes-ce-glue.c 27 */(void *dst,
							    void *src);
	struct skcipher_walk cocci_id/* arch/arm/crypto/aes-ce-glue.c 268 */;
	struct skcipher_request *cocci_id/* arch/arm/crypto/aes-ce-glue.c 266 */;
	u32 cocci_id/* arch/arm/crypto/aes-ce-glue.c 26 */(u32 input);
	unsigned int cocci_id/* arch/arm/crypto/aes-ce-glue.c 252 */;
	struct crypto_aes_ctx *cocci_id/* arch/arm/crypto/aes-ce-glue.c 251 */;
	struct crypto_skcipher *cocci_id/* arch/arm/crypto/aes-ce-glue.c 250 */;
	struct skcipher_walk *cocci_id/* arch/arm/crypto/aes-ce-glue.c 248 */;
	struct crypto_aes_xts_ctx {
		struct crypto_aes_ctx key1;
		struct crypto_aes_ctx __aligned(8) key2;
	} cocci_id/* arch/arm/crypto/aes-ce-glue.c 151 */;
}
