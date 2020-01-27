cocci_test_suite() {
	void (*cocci_id/* arch/x86/crypto/blowfish_glue.c 72 */)(struct bf_ctx *,
								 u8 *,
								 const u8 *);
	struct crypto_skcipher *cocci_id/* arch/x86/crypto/blowfish_glue.c 65 */;
	int cocci_id/* arch/x86/crypto/blowfish_glue.c 65 */;
	const u8 *cocci_id/* arch/x86/crypto/blowfish_glue.c 60 */;
	struct crypto_tfm *cocci_id/* arch/x86/crypto/blowfish_glue.c 60 */;
	void cocci_id/* arch/x86/crypto/blowfish_glue.c 60 */;
	void __exit cocci_id/* arch/x86/crypto/blowfish_glue.c 449 */;
	int __init cocci_id/* arch/x86/crypto/blowfish_glue.c 425 */;
	bool cocci_id/* arch/x86/crypto/blowfish_glue.c 404 */;
	struct skcipher_alg cocci_id/* arch/x86/crypto/blowfish_glue.c 361 */[];
	struct bf_ctx cocci_id/* arch/x86/crypto/blowfish_glue.c 347 */;
	struct crypto_alg cocci_id/* arch/x86/crypto/blowfish_glue.c 341 */;
	__be64 cocci_id/* arch/x86/crypto/blowfish_glue.c 271 */[4];
	__be64 *cocci_id/* arch/x86/crypto/blowfish_glue.c 270 */;
	u8 cocci_id/* arch/x86/crypto/blowfish_glue.c 253 */[BF_BLOCK_SIZE];
	void cocci_id/* arch/x86/crypto/blowfish_glue.c 24 */(struct bf_ctx *ctx,
							      u8 *dst,
							      const u8 *src);
	struct skcipher_walk cocci_id/* arch/x86/crypto/blowfish_glue.c 236 */;
	struct skcipher_request *cocci_id/* arch/x86/crypto/blowfish_glue.c 232 */;
	void cocci_id/* arch/x86/crypto/blowfish_glue.c 22 */(struct bf_ctx *ctx,
							      u8 *dst,
							      const u8 *src,
							      bool xor);
	u8 *cocci_id/* arch/x86/crypto/blowfish_glue.c 196 */;
	u64 cocci_id/* arch/x86/crypto/blowfish_glue.c 177 */;
	u64 cocci_id/* arch/x86/crypto/blowfish_glue.c 176 */[4 - 1];
	u64 *cocci_id/* arch/x86/crypto/blowfish_glue.c 174 */;
	struct skcipher_walk *cocci_id/* arch/x86/crypto/blowfish_glue.c 170 */;
	struct bf_ctx *cocci_id/* arch/x86/crypto/blowfish_glue.c 169 */;
	unsigned int cocci_id/* arch/x86/crypto/blowfish_glue.c 169 */;
}
