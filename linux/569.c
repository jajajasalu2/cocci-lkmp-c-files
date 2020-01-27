cocci_test_suite() {
	struct pkcs1pad_inst_ctx {
		struct crypto_akcipher_spawn spawn;
		const struct rsa_asn1_template *digest_info;
	} cocci_id/* crypto/rsa-pkcs1pad.c 95 */;
	struct pkcs1pad_ctx {
		struct crypto_akcipher *child;
		unsigned int key_size;
	} cocci_id/* crypto/rsa-pkcs1pad.c 90 */;
	struct crypto_template cocci_id/* crypto/rsa-pkcs1pad.c 704 */;
	struct pkcs1pad_request cocci_id/* crypto/rsa-pkcs1pad.c 687 */;
	struct pkcs1pad_ctx cocci_id/* crypto/rsa-pkcs1pad.c 675 */;
	const struct rsa_asn1_template {
		const char *name;
		const u8 *data;
		size_t size;
	} cocci_id/* crypto/rsa-pkcs1pad.c 63 */[];
	const char *cocci_id/* crypto/rsa-pkcs1pad.c 605 */;
	struct akcipher_alg *cocci_id/* crypto/rsa-pkcs1pad.c 604 */;
	struct crypto_akcipher_spawn *cocci_id/* crypto/rsa-pkcs1pad.c 603 */;
	struct pkcs1pad_inst_ctx *cocci_id/* crypto/rsa-pkcs1pad.c 602 */;
	struct akcipher_instance *cocci_id/* crypto/rsa-pkcs1pad.c 601 */;
	struct crypto_attr_type *cocci_id/* crypto/rsa-pkcs1pad.c 600 */;
	const struct rsa_asn1_template *cocci_id/* crypto/rsa-pkcs1pad.c 599 */;
	struct crypto_template *cocci_id/* crypto/rsa-pkcs1pad.c 597 */;
	struct rtattr **cocci_id/* crypto/rsa-pkcs1pad.c 597 */;
	int cocci_id/* crypto/rsa-pkcs1pad.c 597 */;
	struct pkcs1pad_request *cocci_id/* crypto/rsa-pkcs1pad.c 349 */;
	struct pkcs1pad_ctx *cocci_id/* crypto/rsa-pkcs1pad.c 348 */;
	struct crypto_akcipher *cocci_id/* crypto/rsa-pkcs1pad.c 347 */;
	struct akcipher_request *cocci_id/* crypto/rsa-pkcs1pad.c 345 */;
	struct crypto_async_request cocci_id/* crypto/rsa-pkcs1pad.c 334 */;
	struct crypto_async_request *cocci_id/* crypto/rsa-pkcs1pad.c 331 */;
	void cocci_id/* crypto/rsa-pkcs1pad.c 330 */;
	u8 *cocci_id/* crypto/rsa-pkcs1pad.c 283 */;
	unsigned int cocci_id/* crypto/rsa-pkcs1pad.c 281 */;
	const u8 cocci_id/* crypto/rsa-pkcs1pad.c 21 */[];
	struct scatterlist *cocci_id/* crypto/rsa-pkcs1pad.c 161 */;
	void *cocci_id/* crypto/rsa-pkcs1pad.c 161 */;
	size_t cocci_id/* crypto/rsa-pkcs1pad.c 161 */;
	const void *cocci_id/* crypto/rsa-pkcs1pad.c 127 */;
	struct pkcs1pad_request {
		struct scatterlist in_sg[2],out_sg[1];
		uint8_t *in_buf,*out_buf;
		struct akcipher_request child_req;
	} cocci_id/* crypto/rsa-pkcs1pad.c 100 */;
}
