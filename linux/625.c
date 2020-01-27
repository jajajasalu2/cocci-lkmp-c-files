cocci_test_suite() {
	struct adiantum_request_ctx {
		union {
			u8 bytes[XCHACHA_IV_SIZE];
			__le32 words[XCHACHA_IV_SIZE / sizeof(__le32)];
			le128 bignum;
		} rbuf;
		bool enc;
		le128 header_hash;
		union {
			struct shash_desc hash_desc;
			struct skcipher_request streamcipher_req;
		} u;
	} cocci_id/* crypto/adiantum.c 78 */;
	struct adiantum_tfm_ctx {
		struct crypto_skcipher *streamcipher;
		struct crypto_cipher *blockcipher;
		struct crypto_shash *hash;
		struct poly1305_key header_hash_key;
	} cocci_id/* crypto/adiantum.c 71 */;
	void __exit cocci_id/* crypto/adiantum.c 657 */;
	int __init cocci_id/* crypto/adiantum.c 652 */;
	struct adiantum_instance_ctx {
		struct crypto_skcipher_spawn streamcipher_spawn;
		struct crypto_spawn blockcipher_spawn;
		struct crypto_shash_spawn hash_spawn;
	} cocci_id/* crypto/adiantum.c 65 */;
	struct crypto_template cocci_id/* crypto/adiantum.c 646 */;
	struct adiantum_tfm_ctx cocci_id/* crypto/adiantum.c 601 */;
	struct shash_alg *cocci_id/* crypto/adiantum.c 512 */;
	struct crypto_alg *cocci_id/* crypto/adiantum.c 510 */;
	struct skcipher_alg *cocci_id/* crypto/adiantum.c 509 */;
	struct adiantum_instance_ctx *cocci_id/* crypto/adiantum.c 508 */;
	struct skcipher_instance *cocci_id/* crypto/adiantum.c 507 */;
	const char *cocci_id/* crypto/adiantum.c 504 */;
	struct crypto_attr_type *cocci_id/* crypto/adiantum.c 503 */;
	struct crypto_template *cocci_id/* crypto/adiantum.c 501 */;
	struct rtattr **cocci_id/* crypto/adiantum.c 501 */;
	int cocci_id/* crypto/adiantum.c 501 */;
	struct adiantum_tfm_ctx *cocci_id/* crypto/adiantum.c 460 */;
	void cocci_id/* crypto/adiantum.c 458 */;
	struct adiantum_request_ctx cocci_id/* crypto/adiantum.c 437 */;
	struct crypto_shash *cocci_id/* crypto/adiantum.c 413 */;
	struct crypto_cipher *cocci_id/* crypto/adiantum.c 412 */;
	le128 cocci_id/* crypto/adiantum.c 338 */;
	unsigned int cocci_id/* crypto/adiantum.c 337 */;
	const unsigned int cocci_id/* crypto/adiantum.c 336 */;
	struct adiantum_request_ctx *cocci_id/* crypto/adiantum.c 335 */;
	const struct adiantum_tfm_ctx *cocci_id/* crypto/adiantum.c 334 */;
	struct crypto_skcipher *cocci_id/* crypto/adiantum.c 333 */;
	bool cocci_id/* crypto/adiantum.c 331 */;
	struct skcipher_request *cocci_id/* crypto/adiantum.c 331 */;
	struct crypto_async_request *cocci_id/* crypto/adiantum.c 320 */;
	u8 *cocci_id/* crypto/adiantum.c 287 */;
	struct sg_mapping_iter cocci_id/* crypto/adiantum.c 264 */;
	struct shash_desc *cocci_id/* crypto/adiantum.c 263 */;
	le128 *cocci_id/* crypto/adiantum.c 257 */;
	struct scatterlist *cocci_id/* crypto/adiantum.c 257 */;
	struct poly1305_state cocci_id/* crypto/adiantum.c 240 */;
	u64 cocci_id/* crypto/adiantum.c 238 */;
	struct {
		__le64 message_bits;
		__le64 padding;
	} cocci_id/* crypto/adiantum.c 234 */;
	const le128 *cocci_id/* crypto/adiantum.c 195 */;
	struct {
		u8 iv[XCHACHA_IV_SIZE];
		u8 derived_keys[BLOCKCIPHER_KEY_SIZE + HASH_KEY_SIZE];
		struct scatterlist sg;
		struct crypto_wait wait;
		struct skcipher_request req;
	} *cocci_id/* crypto/adiantum.c 122 */;
	const u8 *cocci_id/* crypto/adiantum.c 118 */;
}
