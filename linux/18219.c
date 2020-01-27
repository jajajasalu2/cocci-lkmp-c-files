cocci_test_suite() {
	unsigned int cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 98 */;
	struct skcipher_walk cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 92 */;
	struct aesbs_ctx *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 91 */;
	struct crypto_skcipher *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 90 */;
	void (*cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 87 */)(u8 out[],
								   const u8 in[],
								   const u8 rk[],
								   int rounds,
								   int blocks);
	struct skcipher_request *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 86 */;
	int cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 86 */;
	struct aesbs_ctr_ctx {
		struct aesbs_ctx key;
		struct crypto_aes_ctx fallback;
	} cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 61 */;
	struct aesbs_xts_ctx {
		struct aesbs_ctx key;
		struct crypto_cipher *cts_tfm;
		struct crypto_cipher *tweak_tfm;
	} cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 55 */;
	const char *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 513 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 512 */;
	int __init cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 510 */;
	struct aesbs_cbc_ctx {
		struct aesbs_ctx key;
		struct crypto_cipher *enc_tfm;
	} cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 50 */;
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 499 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 497 */[ARRAY_SIZE(aes_algs)];
	struct aesbs_xts_ctx cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 482 */;
	struct aesbs_ctr_ctx cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 466 */;
	struct aesbs_ctx {
		int rounds;
		u8 rk[13 * (8 * AES_BLOCK_SIZE) + 32]__aligned(AES_BLOCK_SIZE);
	} cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 45 */;
	struct aesbs_cbc_ctx cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 431 */;
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 42 */(u8 out[],
								const u8 in[],
								const u8 rk[],
								int rounds,
								int blocks,
								u8 iv[], int);
	struct aesbs_ctx cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 416 */;
	struct skcipher_alg cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 411 */[];
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 37 */(u8 out[],
								const u8 in[],
								const u8 rk[],
								int rounds,
								int blocks,
								u8 ctr[],
								u8 final[]);
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 34 */(u8 out[],
								const u8 in[],
								const u8 rk[],
								int rounds,
								int blocks,
								u8 iv[]);
	u8 cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 337 */[2 * AES_BLOCK_SIZE];
	struct skcipher_request cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 336 */;
	struct aesbs_xts_ctx *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 334 */;
	void (*cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 330 */)(u8 out[],
								    const u8 in[],
								    const u8 rk[],
								    int rounds,
								    int blocks,
								    u8 iv[],
								    int);
	bool cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 329 */;
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 31 */(u8 out[],
								const u8 in[],
								const u8 rk[],
								int rounds,
								int blocks);
	void cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 27 */(u8 out[],
								const u32 rk[],
								int rounds);
	unsigned long cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 265 */;
	u8 cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 225 */[AES_BLOCK_SIZE];
	struct aesbs_ctr_ctx *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 204 */;
	struct crypto_tfm *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 194 */;
	u8 *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 145 */;
	struct crypto_aes_ctx cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 129 */;
	struct aesbs_cbc_ctx *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 128 */;
	const u8 *cocci_id/* arch/arm/crypto/aes-neonbs-glue.c 125 */;
}
