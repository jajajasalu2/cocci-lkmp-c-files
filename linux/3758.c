cocci_test_suite() {
	unsigned int cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 72 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 71 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 68 */;
	bool cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 66 */;
	struct ccp_crypto_skcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 40 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 312 */;
	const struct ccp_aes_def *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 309 */;
	struct list_head *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 308 */;
	struct ccp_aes_req_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 26 */;
	struct ccp_aes_def cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 251 */[];
	struct ccp_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 25 */;
	struct ccp_aes_def {
		enum ccp_aes_mode mode;
		unsigned int version;
		const char *name;
		const char *driver_name;
		unsigned int blocksize;
		unsigned int ivsize;
		const struct skcipher_alg *alg_defaults;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 241 */;
	struct skcipher_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 24 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 22 */;
	int cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 22 */;
	struct ccp_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 219 */;
	const struct skcipher_alg cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 207 */;
	__be32 *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 176 */;
	u8 *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 166 */;
	const u8 *cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 147 */;
	struct ccp_aes_req_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-aes.c 130 */;
}
