cocci_test_suite() {
	void (*cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 98 */)(u8 out[],
								     const u8 in[],
								     const u8 rk[],
								     int rounds,
								     int blocks);
	struct skcipher_request *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 97 */;
	int cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 97 */;
	struct aesbs_xts_ctx {
		struct aesbs_ctx key;
		u32 twkey[AES_MAX_KEYLENGTH_U32];
		struct crypto_aes_ctx cts;
	} cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 71 */;
	struct aesbs_ctr_ctx {
		struct aesbs_ctx key;
		struct crypto_aes_ctx fallback;
	} cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 66 */;
	struct aesbs_cbc_ctx {
		struct aesbs_ctx key;
		u32 enc[AES_MAX_KEYLENGTH_U32];
	} cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 61 */;
	struct aesbs_ctx {
		u8 rk[13 * (8 * AES_BLOCK_SIZE) + 32];
		int rounds;
	}__aligned(AES_BLOCK_SIZE) cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 56 */;
	const char *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 530 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 529 */;
	int __init cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 527 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 52 */(u8 out[],
								  const u8 in[],
								  const u32 rk1[],
								  int rounds,
								  int bytes,
								  const u32 rk2[],
								  u8 iv[],
								  int first);
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 516 */;
	struct simd_skcipher_alg *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 514 */[ARRAY_SIZE(aes_algs)];
	struct aesbs_xts_ctx cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 501 */;
	struct aesbs_ctr_ctx cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 485 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 47 */(u8 out[],
								  const u8 in[],
								  const u32 rk[],
								  int rounds,
								  int blocks,
								  u8 iv[]);
	struct aesbs_cbc_ctx cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 452 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 45 */(u8 out[],
								  const u8 in[],
								  const u32 rk[],
								  int rounds,
								  int blocks);
	struct aesbs_ctx cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 437 */;
	struct skcipher_alg cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 432 */[];
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 36 */(u8 out[],
								  const u8 in[],
								  const u8 rk[],
								  int rounds,
								  int blocks,
								  u8 iv[],
								  u8 final[]);
	u8 *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 330 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 33 */(u8 out[],
								  const u8 in[],
								  const u8 rk[],
								  int rounds,
								  int blocks,
								  u8 iv[]);
	struct scatterlist *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 326 */;
	struct skcipher_request cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 325 */;
	struct scatterlist cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 324 */[2];
	struct aesbs_xts_ctx *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 322 */;
	void (*cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 318 */)(u8 out[],
								      const u8 in[],
								      const u8 rk[],
								      int rounds,
								      int blocks,
								      u8 iv[]);
	bool cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 317 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 30 */(u8 out[],
								  const u8 in[],
								  const u8 rk[],
								  int rounds,
								  int blocks);
	unsigned long cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 297 */;
	void cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 26 */(u8 out[],
								  const u32 rk[],
								  int rounds);
	u8 cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 233 */[AES_BLOCK_SIZE];
	struct aesbs_ctr_ctx *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 212 */;
	struct crypto_aes_ctx cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 140 */;
	struct aesbs_cbc_ctx *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 139 */;
	const u8 *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 136 */;
	unsigned int cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 109 */;
	struct skcipher_walk cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 103 */;
	struct aesbs_ctx *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 102 */;
	struct crypto_skcipher *cocci_id/* arch/arm64/crypto/aes-neonbs-glue.c 101 */;
}
