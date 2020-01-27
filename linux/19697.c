cocci_test_suite() {
	struct chacha_ctx cocci_id/* arch/mips/crypto/chacha-glue.c 86 */;
	struct skcipher_alg cocci_id/* arch/mips/crypto/chacha-glue.c 80 */[];
	u8 cocci_id/* arch/mips/crypto/chacha-glue.c 68 */[16];
	struct chacha_ctx *cocci_id/* arch/mips/crypto/chacha-glue.c 57 */;
	struct crypto_skcipher *cocci_id/* arch/mips/crypto/chacha-glue.c 56 */;
	struct skcipher_request *cocci_id/* arch/mips/crypto/chacha-glue.c 54 */;
	int cocci_id/* arch/mips/crypto/chacha-glue.c 54 */;
	unsigned int cocci_id/* arch/mips/crypto/chacha-glue.c 41 */;
	u32 cocci_id/* arch/mips/crypto/chacha-glue.c 33 */[16];
	struct skcipher_walk cocci_id/* arch/mips/crypto/chacha-glue.c 32 */;
	const struct chacha_ctx *cocci_id/* arch/mips/crypto/chacha-glue.c 30 */;
	const u8 *cocci_id/* arch/mips/crypto/chacha-glue.c 23 */;
	const u32 *cocci_id/* arch/mips/crypto/chacha-glue.c 23 */;
	u32 *cocci_id/* arch/mips/crypto/chacha-glue.c 23 */;
	void cocci_id/* arch/mips/crypto/chacha-glue.c 23 */;
	void cocci_id/* arch/mips/crypto/chacha-glue.c 20 */(const u32 *state,
							     u32 *stream,
							     int nrounds);
	void cocci_id/* arch/mips/crypto/chacha-glue.c 16 */(u32 *state,
							     u8 *dst,
							     const u8 *src,
							     unsigned int bytes,
							     int nrounds);
	void __exit cocci_id/* arch/mips/crypto/chacha-glue.c 135 */;
	int __init cocci_id/* arch/mips/crypto/chacha-glue.c 129 */;
}
