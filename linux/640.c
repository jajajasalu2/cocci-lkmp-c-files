cocci_test_suite() {
	__le32 cocci_id/* crypto/chacha20poly1305.c 89 */;
	u32 cocci_id/* crypto/chacha20poly1305.c 86 */;
	u8 *cocci_id/* crypto/chacha20poly1305.c 86 */;
	struct chachapoly_req_ctx *cocci_id/* crypto/chacha20poly1305.c 76 */;
	int (*cocci_id/* crypto/chacha20poly1305.c 73 */)(struct aead_request *);
	struct aead_request *cocci_id/* crypto/chacha20poly1305.c 72 */;
	int cocci_id/* crypto/chacha20poly1305.c 72 */;
	void cocci_id/* crypto/chacha20poly1305.c 72 */;
	void __exit cocci_id/* crypto/chacha20poly1305.c 709 */;
	int __init cocci_id/* crypto/chacha20poly1305.c 703 */;
	struct crypto_template cocci_id/* crypto/chacha20poly1305.c 691 */[];
	struct chachapoly_ctx cocci_id/* crypto/chacha20poly1305.c 650 */;
	struct chachapoly_instance_ctx *cocci_id/* crypto/chacha20poly1305.c 570 */;
	struct hash_alg_common *cocci_id/* crypto/chacha20poly1305.c 569 */;
	struct crypto_alg *cocci_id/* crypto/chacha20poly1305.c 568 */;
	struct skcipher_alg *cocci_id/* crypto/chacha20poly1305.c 567 */;
	struct aead_instance *cocci_id/* crypto/chacha20poly1305.c 566 */;
	struct crypto_attr_type *cocci_id/* crypto/chacha20poly1305.c 565 */;
	const char *cocci_id/* crypto/chacha20poly1305.c 563 */;
	unsigned int cocci_id/* crypto/chacha20poly1305.c 563 */;
	struct crypto_template *cocci_id/* crypto/chacha20poly1305.c 562 */;
	struct rtattr **cocci_id/* crypto/chacha20poly1305.c 562 */;
	struct crypto_aead *cocci_id/* crypto/chacha20poly1305.c 545 */;
	struct ahash_request cocci_id/* crypto/chacha20poly1305.c 539 */;
	struct poly_req cocci_id/* crypto/chacha20poly1305.c 538 */;
	struct skcipher_request cocci_id/* crypto/chacha20poly1305.c 536 */;
	struct chacha_req cocci_id/* crypto/chacha20poly1305.c 535 */;
	struct chachapoly_req_ctx cocci_id/* crypto/chacha20poly1305.c 534 */;
	struct chachapoly_req_ctx {
		struct scatterlist src[2];
		struct scatterlist dst[2];
		u8 key[POLY1305_KEY_SIZE];
		u8 tag[POLY1305_DIGEST_SIZE];
		unsigned int cryptlen;
		unsigned int assoclen;
		u32 flags;
		union {
			struct poly_req poly;
			struct chacha_req chacha;
		} u;
	} cocci_id/* crypto/chacha20poly1305.c 53 */;
	unsigned long cocci_id/* crypto/chacha20poly1305.c 514 */;
	struct crypto_ahash *cocci_id/* crypto/chacha20poly1305.c 513 */;
	struct crypto_skcipher *cocci_id/* crypto/chacha20poly1305.c 512 */;
	const u8 *cocci_id/* crypto/chacha20poly1305.c 476 */;
	struct chacha_req {
		u8 iv[CHACHA_IV_SIZE];
		struct scatterlist src[1];
		struct skcipher_request req;
	} cocci_id/* crypto/chacha20poly1305.c 47 */;
	struct poly_req {
		u8 pad[POLY1305_BLOCK_SIZE];
		struct {
			__le64 assoclen;
			__le64 cryptlen;
		} tail;
		struct scatterlist src[1];
		struct ahash_request req;
	} cocci_id/* crypto/chacha20poly1305.c 35 */;
	struct poly_req *cocci_id/* crypto/chacha20poly1305.c 293 */;
	struct chachapoly_ctx {
		struct crypto_skcipher *chacha;
		struct crypto_ahash *poly;
		unsigned int saltlen;
		u8 salt[];
	} cocci_id/* crypto/chacha20poly1305.c 27 */;
	struct chachapoly_instance_ctx {
		struct crypto_skcipher_spawn chacha;
		struct crypto_ahash_spawn poly;
		unsigned int saltlen;
	} cocci_id/* crypto/chacha20poly1305.c 21 */;
	struct scatterlist *cocci_id/* crypto/chacha20poly1305.c 130 */;
	struct chacha_req *cocci_id/* crypto/chacha20poly1305.c 129 */;
	struct chachapoly_ctx *cocci_id/* crypto/chacha20poly1305.c 127 */;
	struct crypto_async_request *cocci_id/* crypto/chacha20poly1305.c 120 */;
	u8 cocci_id/* crypto/chacha20poly1305.c 100 */[sizeof(rctx->tag)];
}
