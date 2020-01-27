cocci_test_suite() {
	void __exit cocci_id/* crypto/essiv.c 652 */;
	int __init cocci_id/* crypto/essiv.c 647 */;
	struct crypto_template cocci_id/* crypto/essiv.c 641 */;
	struct essiv_aead_request_ctx {
		struct scatterlist sg[4];
		u8 *assoc;
		struct aead_request aead_req;
	} cocci_id/* crypto/essiv.c 59 */;
	struct essiv_tfm_ctx cocci_id/* crypto/essiv.c 584 */;
	struct essiv_tfm_ctx {
		union {
			struct crypto_skcipher *skcipher;
			struct crypto_aead *aead;
		} u;
		struct crypto_cipher *essiv_cipher;
		struct crypto_shash *hash;
		int ivoffset;
	} cocci_id/* crypto/essiv.c 49 */;
	u32 cocci_id/* crypto/essiv.c 470 */;
	struct shash_alg *cocci_id/* crypto/essiv.c 468 */;
	struct aead_alg *cocci_id/* crypto/essiv.c 466 */;
	struct skcipher_alg *cocci_id/* crypto/essiv.c 465 */;
	struct crypto_alg *cocci_id/* crypto/essiv.c 463 */;
	struct crypto_instance *cocci_id/* crypto/essiv.c 462 */;
	struct skcipher_instance *cocci_id/* crypto/essiv.c 460 */;
	const char *cocci_id/* crypto/essiv.c 458 */;
	struct crypto_attr_type *cocci_id/* crypto/essiv.c 457 */;
	struct crypto_template *cocci_id/* crypto/essiv.c 455 */;
	struct rtattr **cocci_id/* crypto/essiv.c 455 */;
	char *cocci_id/* crypto/essiv.c 401 */;
	struct essiv_instance_ctx {
		union {
			struct crypto_skcipher_spawn skcipher_spawn;
			struct crypto_aead_spawn aead_spawn;
		} u;
		char essiv_cipher_name[CRYPTO_MAX_ALG_NAME];
		char shash_driver_name[CRYPTO_MAX_ALG_NAME];
	} cocci_id/* crypto/essiv.c 40 */;
	struct essiv_instance_ctx *cocci_id/* crypto/essiv.c 395 */;
	struct aead_instance *cocci_id/* crypto/essiv.c 393 */;
	struct essiv_tfm_ctx *cocci_id/* crypto/essiv.c 378 */;
	struct essiv_aead_request_ctx cocci_id/* crypto/essiv.c 343 */;
	unsigned int cocci_id/* crypto/essiv.c 340 */;
	struct skcipher_request cocci_id/* crypto/essiv.c 321 */;
	struct crypto_shash *cocci_id/* crypto/essiv.c 286 */;
	struct crypto_cipher *cocci_id/* crypto/essiv.c 285 */;
	u8 *cocci_id/* crypto/essiv.c 217 */;
	struct scatterlist *cocci_id/* crypto/essiv.c 201 */;
	struct essiv_aead_request_ctx *cocci_id/* crypto/essiv.c 199 */;
	const struct essiv_tfm_ctx *cocci_id/* crypto/essiv.c 198 */;
	struct crypto_aead *cocci_id/* crypto/essiv.c 197 */;
	bool cocci_id/* crypto/essiv.c 195 */;
	struct aead_request *cocci_id/* crypto/essiv.c 195 */;
	int cocci_id/* crypto/essiv.c 195 */;
	struct crypto_async_request *cocci_id/* crypto/essiv.c 186 */;
	void cocci_id/* crypto/essiv.c 186 */;
	struct crypto_skcipher *cocci_id/* crypto/essiv.c 160 */;
	struct skcipher_request *cocci_id/* crypto/essiv.c 158 */;
	u8 cocci_id/* crypto/essiv.c 108 */[HASH_MAX_DIGESTSIZE];
	struct crypto_authenc_keys cocci_id/* crypto/essiv.c 107 */;
	const u8 *cocci_id/* crypto/essiv.c 102 */;
}
