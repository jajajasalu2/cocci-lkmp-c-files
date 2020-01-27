cocci_test_suite() {
	struct ccp_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 67 */;
	struct crypto_akcipher *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 66 */;
	bool cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 64 */;
	struct ccp_rsa_req_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 47 */;
	const u8 *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 29 */;
	size_t cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 29 */;
	u8 **cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 28 */;
	unsigned int *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 28 */;
	struct akcipher_request cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 25 */;
	struct akcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 249 */;
	struct ccp_crypto_akcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 248 */;
	const struct ccp_rsa_def *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 246 */;
	struct list_head *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 245 */;
	struct ccp_rsa_def cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 235 */[];
	struct crypto_async_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 23 */;
	struct ccp_rsa_def {
		unsigned int version;
		const char *name;
		const char *driver_name;
		unsigned int reqsize;
		struct akcipher_alg *alg_defaults;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 227 */;
	struct ccp_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 223 */;
	struct akcipher_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 22 */;
	struct akcipher_alg cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 210 */;
	void cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 203 */;
	struct ccp_rsa_req_ctx cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 197 */;
	struct rsa_key cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 130 */;
	const void *cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 126 */;
	unsigned int cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 104 */;
	int cocci_id/* drivers/crypto/ccp/ccp-crypto-rsa.c 104 */;
}
