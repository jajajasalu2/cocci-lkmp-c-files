cocci_test_suite() {
	struct skcipher_walk cocci_id/* crypto/xts.c 93 */;
	const int cocci_id/* crypto/xts.c 92 */;
	const bool cocci_id/* crypto/xts.c 91 */;
	bool cocci_id/* crypto/xts.c 87 */;
	void __exit cocci_id/* crypto/xts.c 469 */;
	void cocci_id/* crypto/xts.c 469 */;
	int __init cocci_id/* crypto/xts.c 464 */;
	struct crypto_template cocci_id/* crypto/xts.c 458 */;
	struct priv cocci_id/* crypto/xts.c 433 */;
	unsigned int cocci_id/* crypto/xts.c 41 */;
	unsigned cocci_id/* crypto/xts.c 404 */;
	const u8 *cocci_id/* crypto/xts.c 40 */;
	u32 cocci_id/* crypto/xts.c 344 */;
	const char *cocci_id/* crypto/xts.c 343 */;
	struct skcipher_alg *cocci_id/* crypto/xts.c 342 */;
	struct xts_instance_ctx *cocci_id/* crypto/xts.c 341 */;
	struct crypto_attr_type *cocci_id/* crypto/xts.c 340 */;
	struct skcipher_instance *cocci_id/* crypto/xts.c 339 */;
	struct crypto_template *cocci_id/* crypto/xts.c 337 */;
	struct rtattr **cocci_id/* crypto/xts.c 337 */;
	int cocci_id/* crypto/xts.c 337 */;
	struct rctx {
		le128 t;
		struct scatterlist *tail;
		struct scatterlist sg[2];
		struct skcipher_request subreq;
	} cocci_id/* crypto/xts.c 33 */;
	struct crypto_skcipher *cocci_id/* crypto/xts.c 323 */;
	struct rctx cocci_id/* crypto/xts.c 318 */;
	struct crypto_cipher *cocci_id/* crypto/xts.c 301 */;
	struct xts_instance_ctx {
		struct crypto_skcipher_spawn spawn;
		char name[CRYPTO_MAX_ALG_NAME];
	} cocci_id/* crypto/xts.c 28 */;
	u8 *cocci_id/* crypto/xts.c 256 */;
	crypto_completion_t cocci_id/* crypto/xts.c 241 */;
	struct priv {
		struct crypto_skcipher *child;
		struct crypto_cipher *tweak;
	} cocci_id/* crypto/xts.c 23 */;
	le128 cocci_id/* crypto/xts.c 171 */[2];
	struct priv *cocci_id/* crypto/xts.c 166 */;
	int (*cocci_id/* crypto/xts.c 164 */)(struct skcipher_request *req);
	struct rctx *cocci_id/* crypto/xts.c 153 */;
	le128 cocci_id/* crypto/xts.c 150 */;
	struct skcipher_request *cocci_id/* crypto/xts.c 149 */;
	struct crypto_async_request *cocci_id/* crypto/xts.c 147 */;
	le128 *cocci_id/* crypto/xts.c 106 */;
}
