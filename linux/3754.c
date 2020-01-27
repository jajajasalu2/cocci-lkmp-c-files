cocci_test_suite() {
	unsigned int cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 66 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 65 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 62 */;
	bool cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 60 */;
	struct ccp_crypto_skcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 39 */;
	const u8 *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 36 */;
	struct ccp_des3_req_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 25 */;
	struct ccp_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 24 */;
	struct skcipher_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 23 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 21 */;
	int cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 21 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 182 */;
	const struct ccp_des3_def *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 179 */;
	struct list_head *cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 178 */;
	const struct ccp_des3_def cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 157 */[];
	struct ccp_des3_def {
		enum ccp_des3_mode mode;
		unsigned int version;
		const char *name;
		const char *driver_name;
		unsigned int blocksize;
		unsigned int ivsize;
		const struct skcipher_alg *alg_defaults;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 147 */;
	struct ccp_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 142 */;
	const struct skcipher_alg cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 130 */;
	struct ccp_des3_req_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-des3.c 125 */;
}
