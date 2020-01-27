cocci_test_suite() {
	const u8 *cocci_id/* crypto/cts.c 76 */;
	struct crypto_cts_reqctx {
		struct scatterlist sg[2];
		unsigned offset;
		struct skcipher_request subreq;
	} cocci_id/* crypto/cts.c 59 */;
	struct crypto_cts_ctx {
		struct crypto_skcipher *child;
	} cocci_id/* crypto/cts.c 55 */;
	void __exit cocci_id/* crypto/cts.c 421 */;
	int __init cocci_id/* crypto/cts.c 416 */;
	struct crypto_template cocci_id/* crypto/cts.c 410 */;
	struct crypto_cts_ctx cocci_id/* crypto/cts.c 385 */;
	const char *cocci_id/* crypto/cts.c 334 */;
	struct skcipher_alg *cocci_id/* crypto/cts.c 333 */;
	struct crypto_attr_type *cocci_id/* crypto/cts.c 332 */;
	struct skcipher_instance *cocci_id/* crypto/cts.c 331 */;
	struct crypto_skcipher_spawn *cocci_id/* crypto/cts.c 330 */;
	struct crypto_template *cocci_id/* crypto/cts.c 328 */;
	struct rtattr **cocci_id/* crypto/cts.c 328 */;
	int cocci_id/* crypto/cts.c 328 */;
	struct crypto_cts_reqctx cocci_id/* crypto/cts.c 305 */;
	unsigned cocci_id/* crypto/cts.c 293 */;
	u8 *cocci_id/* crypto/cts.c 250 */;
	unsigned int cocci_id/* crypto/cts.c 248 */;
	struct crypto_cts_ctx *cocci_id/* crypto/cts.c 245 */;
	struct crypto_cts_reqctx *cocci_id/* crypto/cts.c 244 */;
	struct crypto_skcipher *cocci_id/* crypto/cts.c 243 */;
	struct skcipher_request *cocci_id/* crypto/cts.c 241 */;
	struct crypto_async_request *cocci_id/* crypto/cts.c 226 */;
	void cocci_id/* crypto/cts.c 226 */;
	struct scatterlist *cocci_id/* crypto/cts.c 190 */;
	u8 cocci_id/* crypto/cts.c 189 */[MAX_CIPHER_BLOCKSIZE * 2]__aligned(__alignof__(u32));
}
