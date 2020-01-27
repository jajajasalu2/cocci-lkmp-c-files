cocci_test_suite() {
	struct device *cocci_id/* drivers/crypto/mxs-dcp.c 976 */;
	struct platform_device *cocci_id/* drivers/crypto/mxs-dcp.c 974 */;
	irqreturn_t cocci_id/* drivers/crypto/mxs-dcp.c 952 */;
	struct dcp_export_state cocci_id/* drivers/crypto/mxs-dcp.c 909 */;
	struct ahash_alg cocci_id/* drivers/crypto/mxs-dcp.c 899 */;
	struct dcp_async_ctx {
		enum dcp_chan chan;
		uint32_t fill;
		struct mutex mutex;
		uint32_t alg;
		unsigned int hot:1;
		struct crypto_sync_skcipher *fallback;
		unsigned int key_len;
		uint8_t key[AES_KEYSIZE_128];
	} cocci_id/* drivers/crypto/mxs-dcp.c 88 */;
	struct dcp_async_ctx cocci_id/* drivers/crypto/mxs-dcp.c 866 */;
	struct skcipher_alg cocci_id/* drivers/crypto/mxs-dcp.c 857 */[];
	struct crypto_tfm *cocci_id/* drivers/crypto/mxs-dcp.c 852 */;
	void cocci_id/* drivers/crypto/mxs-dcp.c 852 */;
	struct dcp_sha_req_ctx cocci_id/* drivers/crypto/mxs-dcp.c 848 */;
	struct dcp_export_state *cocci_id/* drivers/crypto/mxs-dcp.c 837 */;
	struct dcp_async_ctx *cocci_id/* drivers/crypto/mxs-dcp.c 836 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/mxs-dcp.c 835 */;
	struct dcp_sha_req_ctx *cocci_id/* drivers/crypto/mxs-dcp.c 834 */;
	enum dcp_chan{DCP_CHAN_HASH_SHA=0, DCP_CHAN_CRYPTO=2,} cocci_id/* drivers/crypto/mxs-dcp.c 83 */;
	const struct dcp_export_state *cocci_id/* drivers/crypto/mxs-dcp.c 822 */;
	const void *cocci_id/* drivers/crypto/mxs-dcp.c 817 */;
	struct ahash_request *cocci_id/* drivers/crypto/mxs-dcp.c 806 */;
	struct hash_alg_common *cocci_id/* drivers/crypto/mxs-dcp.c 731 */;
	struct dcp {
		struct device *dev;
		void __iomem *base;
		uint32_t caps;
		struct dcp_coherent_block *coh;
		struct completion completion[DCP_MAX_CHANS];
		spinlock_t lock[DCP_MAX_CHANS];
		struct task_struct *thread[DCP_MAX_CHANS];
		struct crypto_queue queue[DCP_MAX_CHANS];
		struct clk *dcp_clk;
	} cocci_id/* drivers/crypto/mxs-dcp.c 68 */;
	unsigned int cocci_id/* drivers/crypto/mxs-dcp.c 633 */;
	struct scatterlist *cocci_id/* drivers/crypto/mxs-dcp.c 631 */;
	uint8_t *cocci_id/* drivers/crypto/mxs-dcp.c 626 */;
	const uint8_t *cocci_id/* drivers/crypto/mxs-dcp.c 587 */;
	struct dcp_coherent_block {
		uint8_t aes_in_buf[DCP_BUF_SZ];
		uint8_t aes_out_buf[DCP_BUF_SZ];
		uint8_t sha_in_buf[DCP_BUF_SZ];
		uint8_t sha_out_buf[DCP_SHA_PAY_SZ];
		uint8_t aes_key[2 * AES_KEYSIZE_128];
		struct dcp_dma_desc desc[DCP_MAX_CHANS];
	} cocci_id/* drivers/crypto/mxs-dcp.c 57 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/mxs-dcp.c 543 */;
	struct dcp_aes_req_ctx cocci_id/* drivers/crypto/mxs-dcp.c 539 */;
	struct crypto_sync_skcipher *cocci_id/* drivers/crypto/mxs-dcp.c 532 */;
	const char *cocci_id/* drivers/crypto/mxs-dcp.c 530 */;
	const u8 *cocci_id/* drivers/crypto/mxs-dcp.c 491 */;
	struct dcp_dma_desc {
		uint32_t next_cmd_addr;
		uint32_t control0;
		uint32_t control1;
		uint32_t source;
		uint32_t destination;
		uint32_t size;
		uint32_t payload;
		uint32_t status;
	} cocci_id/* drivers/crypto/mxs-dcp.c 45 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/mxs-dcp.c 393 */;
	const int cocci_id/* drivers/crypto/mxs-dcp.c 391 */;
	struct dcp *cocci_id/* drivers/crypto/mxs-dcp.c 390 */;
	void *cocci_id/* drivers/crypto/mxs-dcp.c 388 */;
	int cocci_id/* drivers/crypto/mxs-dcp.c 388 */;
	const uint8_t cocci_id/* drivers/crypto/mxs-dcp.c 34 */[];
	bool cocci_id/* drivers/crypto/mxs-dcp.c 299 */;
	uint32_t cocci_id/* drivers/crypto/mxs-dcp.c 290 */;
	struct dcp_aes_req_ctx *cocci_id/* drivers/crypto/mxs-dcp.c 279 */;
	struct skcipher_request *cocci_id/* drivers/crypto/mxs-dcp.c 277 */;
	dma_addr_t cocci_id/* drivers/crypto/mxs-dcp.c 221 */;
	struct dcp_dma_desc *cocci_id/* drivers/crypto/mxs-dcp.c 217 */;
	unsigned long cocci_id/* drivers/crypto/mxs-dcp.c 173 */;
	struct platform_driver cocci_id/* drivers/crypto/mxs-dcp.c 1179 */;
	const struct of_device_id cocci_id/* drivers/crypto/mxs-dcp.c 1171 */[];
	struct dcp_export_state {
		struct dcp_sha_req_ctx req_ctx;
		struct dcp_async_ctx async_ctx;
	} cocci_id/* drivers/crypto/mxs-dcp.c 114 */;
	struct dcp_sha_req_ctx {
		unsigned int init:1;
		unsigned int fini:1;
	} cocci_id/* drivers/crypto/mxs-dcp.c 109 */;
	struct dcp_aes_req_ctx {
		unsigned int enc:1;
		unsigned int ecb:1;
	} cocci_id/* drivers/crypto/mxs-dcp.c 104 */;
}
