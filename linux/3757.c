cocci_test_suite() {
	struct ccp_crypto_cmd **cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 97 */;
	struct ccp_crypto_cmd *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 96 */;
	struct ccp_crypto_cpu {
		struct work_struct work;
		struct completion completion;
		struct ccp_crypto_cmd *crypto_cmd;
		int err;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 81 */;
	struct ccp_crypto_cmd {
		struct list_head entry;
		struct ccp_cmd *cmd;
		struct crypto_async_request *req;
		struct crypto_tfm *tfm;
		int ret;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 64 */;
	spinlock_t cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 62 */;
	struct ccp_crypto_queue cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 61 */;
	struct ccp_crypto_queue {
		struct list_head cmds;
		struct list_head *backlog;
		unsigned int cmd_count;
	} cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 53 */;
	struct ccp_crypto_akcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 376 */;
	struct ccp_crypto_aead *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 375 */;
	struct ccp_crypto_skcipher_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 374 */;
	struct ccp_crypto_ahash_alg *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 373 */;
	struct sg_table *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 306 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 306 */;
	gfp_t cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 278 */;
	struct ccp_cmd *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 275 */;
	unsigned int cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 26 */;
	bool cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 215 */;
	struct ccp_ctx *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 149 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 148 */;
	void *cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 144 */;
	int cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 144 */;
	void cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 144 */;
	struct ccp_crypto_cmd cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 127 */;
	unsigned long cocci_id/* drivers/crypto/ccp/ccp-crypto-main.c 100 */;
}
