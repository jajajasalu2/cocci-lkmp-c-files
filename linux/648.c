cocci_test_suite() {
	struct crypto_rfc4543_req_ctx *cocci_id/* crypto/gcm.c 992 */;
	struct {
		be128 hash;
		u8 iv[16];
		struct crypto_wait wait;
		struct scatterlist sg[1];
		struct skcipher_request req;
	} *cocci_id/* crypto/gcm.c 99 */;
	const u8 *cocci_id/* crypto/gcm.c 93 */;
	struct crypto_rfc4106_ctx cocci_id/* crypto/gcm.c 924 */;
	u8 *cocci_id/* crypto/gcm.c 90 */;
	void *cocci_id/* crypto/gcm.c 90 */;
	struct aead_alg *cocci_id/* crypto/gcm.c 872 */;
	struct crypto_aead_spawn *cocci_id/* crypto/gcm.c 871 */;
	struct crypto_rfc4106_req_ctx cocci_id/* crypto/gcm.c 846 */;
	int cocci_id/* crypto/gcm.c 83 */(struct aead_request *req, bool enc);
	struct {
		u8 buf[16];
		struct scatterlist sg;
	} *cocci_id/* crypto/gcm.c 78 */;
	struct crypto_rfc4106_ctx *cocci_id/* crypto/gcm.c 765 */;
	struct crypto_rfc4106_req_ctx *cocci_id/* crypto/gcm.c 763 */;
	const char *cocci_id/* crypto/gcm.c 711 */;
	struct rtattr **cocci_id/* crypto/gcm.c 709 */;
	struct crypto_template *cocci_id/* crypto/gcm.c 708 */;
	int cocci_id/* crypto/gcm.c 708 */;
	char cocci_id/* crypto/gcm.c 695 */[CRYPTO_MAX_ALG_NAME];
	struct crypto_gcm_ctx cocci_id/* crypto/gcm.c 662 */;
	struct crypto_gcm_req_priv_ctx {
		u8 iv[16];
		u8 auth_tag[16];
		u8 iauth_tag[16];
		struct scatterlist src[3];
		struct scatterlist dst[3];
		struct scatterlist sg;
		struct crypto_gcm_ghash_ctx ghash_ctx;
		union {
			struct ahash_request ahreq;
			struct skcipher_request skreq;
		} u;
	} cocci_id/* crypto/gcm.c 64 */;
	struct gcm_instance_ctx *cocci_id/* crypto/gcm.c 592 */;
	struct hash_alg_common *cocci_id/* crypto/gcm.c 591 */;
	struct crypto_alg *cocci_id/* crypto/gcm.c 590 */;
	struct skcipher_alg *cocci_id/* crypto/gcm.c 589 */;
	struct aead_instance *cocci_id/* crypto/gcm.c 588 */;
	struct crypto_attr_type *cocci_id/* crypto/gcm.c 587 */;
	struct crypto_gcm_ghash_ctx {
		unsigned int cryptlen;
		struct scatterlist *src;
		int (*complete)(struct aead_request *req, u32 flags);
	} cocci_id/* crypto/gcm.c 58 */;
	struct crypto_gcm_ctx *cocci_id/* crypto/gcm.c 567 */;
	void cocci_id/* crypto/gcm.c 565 */;
	struct ahash_request cocci_id/* crypto/gcm.c 555 */;
	struct skcipher_request cocci_id/* crypto/gcm.c 553 */;
	struct crypto_gcm_req_priv_ctx cocci_id/* crypto/gcm.c 552 */;
	struct crypto_rfc4543_req_ctx {
		struct aead_request subreq;
	} cocci_id/* crypto/gcm.c 54 */;
	unsigned long cocci_id/* crypto/gcm.c 534 */;
	struct crypto_ahash *cocci_id/* crypto/gcm.c 533 */;
	struct crypto_skcipher *cocci_id/* crypto/gcm.c 532 */;
	u32 cocci_id/* crypto/gcm.c 514 */;
	unsigned int cocci_id/* crypto/gcm.c 512 */;
	struct crypto_gcm_ghash_ctx *cocci_id/* crypto/gcm.c 511 */;
	struct crypto_gcm_req_priv_ctx *cocci_id/* crypto/gcm.c 510 */;
	struct crypto_aead *cocci_id/* crypto/gcm.c 509 */;
	struct aead_request *cocci_id/* crypto/gcm.c 507 */;
	struct crypto_async_request *cocci_id/* crypto/gcm.c 486 */;
	struct crypto_rfc4543_ctx {
		struct crypto_aead *child;
		struct crypto_sync_skcipher *null;
		u8 nonce[4];
	} cocci_id/* crypto/gcm.c 48 */;
	struct skcipher_request *cocci_id/* crypto/gcm.c 460 */;
	struct crypto_rfc4543_instance_ctx {
		struct crypto_aead_spawn aead;
	} cocci_id/* crypto/gcm.c 44 */;
	struct ahash_request *cocci_id/* crypto/gcm.c 407 */;
	struct crypto_rfc4106_req_ctx {
		struct scatterlist src[3];
		struct scatterlist dst[3];
		struct aead_request subreq;
	} cocci_id/* crypto/gcm.c 38 */;
	struct crypto_rfc4106_ctx {
		struct crypto_aead *child;
		u8 nonce[4];
	} cocci_id/* crypto/gcm.c 33 */;
	struct crypto_gcm_ctx {
		struct crypto_skcipher *ctr;
		struct crypto_ahash *ghash;
	} cocci_id/* crypto/gcm.c 28 */;
	struct gcm_instance_ctx {
		struct crypto_skcipher_spawn ctr;
		struct crypto_ahash_spawn ghash;
	} cocci_id/* crypto/gcm.c 23 */;
	crypto_completion_t cocci_id/* crypto/gcm.c 224 */;
	void cocci_id/* crypto/gcm.c 206 */(struct crypto_async_request *areq,
					    int err);
	struct scatterlist *cocci_id/* crypto/gcm.c 162 */;
	__be32 cocci_id/* crypto/gcm.c 161 */;
	be128 cocci_id/* crypto/gcm.c 143 */;
	void __exit cocci_id/* crypto/gcm.c 1230 */;
	int __init cocci_id/* crypto/gcm.c 1212 */;
	struct crypto_template cocci_id/* crypto/gcm.c 1192 */[];
	struct crypto_rfc4543_ctx cocci_id/* crypto/gcm.c 1162 */;
	struct crypto_rfc4543_instance_ctx *cocci_id/* crypto/gcm.c 1109 */;
	struct crypto_rfc4543_req_ctx cocci_id/* crypto/gcm.c 1074 */;
	struct crypto_sync_skcipher *cocci_id/* crypto/gcm.c 1054 */;
	struct crypto_rfc4543_ctx *cocci_id/* crypto/gcm.c 1022 */;
	bool cocci_id/* crypto/gcm.c 1019 */;
}
