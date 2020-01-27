cocci_test_suite() {
	struct crypto_authenc_keys cocci_id/* crypto/authencesn.c 64 */;
	const u8 *cocci_id/* crypto/authencesn.c 58 */;
	void __exit cocci_id/* crypto/authencesn.c 516 */;
	int __init cocci_id/* crypto/authencesn.c 511 */;
	struct crypto_template cocci_id/* crypto/authencesn.c 505 */;
	struct crypto_authenc_esn_ctx cocci_id/* crypto/authencesn.c 471 */;
	const char *cocci_id/* crypto/authencesn.c 409 */;
	struct authenc_esn_instance_ctx *cocci_id/* crypto/authencesn.c 408 */;
	struct skcipher_alg *cocci_id/* crypto/authencesn.c 407 */;
	struct crypto_alg *cocci_id/* crypto/authencesn.c 406 */;
	struct hash_alg_common *cocci_id/* crypto/authencesn.c 405 */;
	struct aead_instance *cocci_id/* crypto/authencesn.c 404 */;
	struct crypto_attr_type *cocci_id/* crypto/authencesn.c 403 */;
	struct rtattr **cocci_id/* crypto/authencesn.c 401 */;
	struct crypto_template *cocci_id/* crypto/authencesn.c 400 */;
	struct skcipher_request cocci_id/* crypto/authencesn.c 370 */;
	struct authenc_esn_request_ctx {
		struct scatterlist src[2];
		struct scatterlist dst[2];
		char tail[];
	} cocci_id/* crypto/authencesn.c 37 */;
	struct ahash_request cocci_id/* crypto/authencesn.c 369 */;
	struct authenc_esn_request_ctx cocci_id/* crypto/authencesn.c 365 */;
	struct crypto_sync_skcipher *cocci_id/* crypto/authencesn.c 339 */;
	struct crypto_authenc_esn_ctx {
		unsigned int reqoff;
		struct crypto_ahash *auth;
		struct crypto_skcipher *enc;
		struct crypto_sync_skcipher *null;
	} cocci_id/* crypto/authencesn.c 30 */;
	u32 cocci_id/* crypto/authencesn.c 294 */[2];
	struct scatterlist *cocci_id/* crypto/authencesn.c 293 */;
	u8 *cocci_id/* crypto/authencesn.c 288 */;
	struct crypto_ahash *cocci_id/* crypto/authencesn.c 287 */;
	struct ahash_request *cocci_id/* crypto/authencesn.c 285 */;
	void *cocci_id/* crypto/authencesn.c 285 */;
	struct authenc_esn_request_ctx *cocci_id/* crypto/authencesn.c 283 */;
	struct authenc_esn_instance_ctx {
		struct crypto_ahash_spawn auth;
		struct crypto_skcipher_spawn enc;
	} cocci_id/* crypto/authencesn.c 25 */;
	struct skcipher_request *cocci_id/* crypto/authencesn.c 236 */;
	struct crypto_skcipher *cocci_id/* crypto/authencesn.c 198 */;
	struct crypto_authenc_esn_ctx *cocci_id/* crypto/authencesn.c 180 */;
	struct crypto_aead *cocci_id/* crypto/authencesn.c 179 */;
	unsigned int cocci_id/* crypto/authencesn.c 177 */;
	struct aead_request *cocci_id/* crypto/authencesn.c 123 */;
	int cocci_id/* crypto/authencesn.c 121 */;
	struct crypto_async_request *cocci_id/* crypto/authencesn.c 120 */;
	void cocci_id/* crypto/authencesn.c 120 */;
}
