cocci_test_suite() {
	struct skcipher_walk cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 99 */;
	const struct chacha_ctx *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 97 */;
	int cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 84 */;
	const u8 *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 83 */;
	u8 *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 83 */;
	u32 *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 83 */;
	unsigned int cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 83 */;
	void cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 83 */;
	const u32 *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 77 */;
	u8 cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 49 */[CHACHA_BLOCK_SIZE];
	__ro_after_init cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 40 */(have_neon);
	void cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 38 */(const u32 *state,
								   u32 *out,
								   int nrounds);
	void cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 36 */(u32 *state,
								   u8 *dst,
								   const u8 *src,
								   int nrounds,
								   int bytes);
	void cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 34 */(u32 *state,
								   u8 *dst,
								   const u8 *src,
								   int nrounds);
	void __exit cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 218 */;
	int __init cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 207 */;
	struct chacha_ctx cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 161 */;
	struct skcipher_alg cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 155 */[];
	u8 cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 144 */[16];
	struct chacha_ctx *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 133 */;
	struct crypto_skcipher *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 132 */;
	struct skcipher_request *cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 130 */;
	u32 cocci_id/* arch/arm64/crypto/chacha-neon-glue.c 100 */[16];
}
