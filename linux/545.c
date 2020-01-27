cocci_test_suite() {
	struct crypto_authenc_keys cocci_id/* crypto/authenc.c 90 */;
	void __exit cocci_id/* crypto/authenc.c 501 */;
	struct crypto_authenc_key_param *cocci_id/* crypto/authenc.c 50 */;
	int __init cocci_id/* crypto/authenc.c 496 */;
	struct crypto_template cocci_id/* crypto/authenc.c 490 */;
	struct rtattr *cocci_id/* crypto/authenc.c 49 */;
	const u8 *cocci_id/* crypto/authenc.c 46 */;
	struct crypto_authenc_keys *cocci_id/* crypto/authenc.c 46 */;
	struct crypto_authenc_ctx cocci_id/* crypto/authenc.c 457 */;
	const char *cocci_id/* crypto/authenc.c 391 */;
	struct skcipher_alg *cocci_id/* crypto/authenc.c 389 */;
	struct crypto_alg *cocci_id/* crypto/authenc.c 388 */;
	struct hash_alg_common *cocci_id/* crypto/authenc.c 387 */;
	struct crypto_attr_type *cocci_id/* crypto/authenc.c 385 */;
	struct rtattr **cocci_id/* crypto/authenc.c 383 */;
	struct crypto_template *cocci_id/* crypto/authenc.c 382 */;
	struct skcipher_request cocci_id/* crypto/authenc.c 352 */;
	struct ahash_request cocci_id/* crypto/authenc.c 351 */;
	struct authenc_request_ctx cocci_id/* crypto/authenc.c 347 */;
	struct authenc_request_ctx {
		struct scatterlist src[2];
		struct scatterlist dst[2];
		char tail[];
	} cocci_id/* crypto/authenc.c 34 */;
	struct crypto_sync_skcipher *cocci_id/* crypto/authenc.c 324 */;
	unsigned long cocci_id/* crypto/authenc.c 301 */;
	u8 *cocci_id/* crypto/authenc.c 298 */;
	struct crypto_ahash *cocci_id/* crypto/authenc.c 295 */;
	unsigned int cocci_id/* crypto/authenc.c 291 */;
	struct crypto_authenc_ctx {
		struct crypto_ahash *auth;
		struct crypto_skcipher *enc;
		struct crypto_sync_skcipher *null;
	} cocci_id/* crypto/authenc.c 28 */;
	struct scatterlist *cocci_id/* crypto/authenc.c 252 */;
	struct skcipher_request *cocci_id/* crypto/authenc.c 248 */;
	struct authenc_instance_ctx {
		struct crypto_ahash_spawn auth;
		struct crypto_skcipher_spawn enc;
		unsigned int reqoff;
	} cocci_id/* crypto/authenc.c 22 */;
	struct crypto_skcipher *cocci_id/* crypto/authenc.c 209 */;
	struct crypto_authenc_ctx *cocci_id/* crypto/authenc.c 190 */;
	struct ahash_request *cocci_id/* crypto/authenc.c 129 */;
	void *cocci_id/* crypto/authenc.c 129 */;
	struct authenc_request_ctx *cocci_id/* crypto/authenc.c 128 */;
	struct authenc_instance_ctx *cocci_id/* crypto/authenc.c 127 */;
	struct aead_instance *cocci_id/* crypto/authenc.c 126 */;
	struct crypto_aead *cocci_id/* crypto/authenc.c 125 */;
	struct aead_request *cocci_id/* crypto/authenc.c 124 */;
	struct crypto_async_request *cocci_id/* crypto/authenc.c 122 */;
	int cocci_id/* crypto/authenc.c 122 */;
	void cocci_id/* crypto/authenc.c 122 */;
}
