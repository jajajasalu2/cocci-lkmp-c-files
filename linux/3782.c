cocci_test_suite() {
	u32 *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 954 */;
	const u8 *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 951 */;
	unsigned int cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 951 */;
	struct cryp_driver_data cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 92 */;
	unsigned long cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 895 */;
	struct cryp_device_data *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 894 */;
	struct cryp_ctx *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 893 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 892 */;
	struct skcipher_walk cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 891 */;
	struct skcipher_request *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 889 */;
	int cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 889 */;
	struct cryp_ctx {
		struct cryp_config config;
		u8 key[CRYP_MAX_KEY_SIZE];
		u32 keylen;
		u8 *iv;
		const u8 *indata;
		u8 *outdata;
		u32 datalen;
		u32 outlen;
		u32 blocksize;
		u8 updated;
		struct cryp_device_context dev_ctx;
		struct cryp_device_data *device;
		u32 session_id;
	} cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 76 */;
	bool cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 676 */;
	struct device *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 674 */;
	struct scatterlist *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 642 */;
	struct dma_chan *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 612 */;
	struct cryp_driver_data {
		struct klist device_list;
		struct semaphore device_allocation;
	} cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 56 */;
	dma_cookie_t cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 528 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 526 */;
	enum dma_data_direction cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 524 */;
	void *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 513 */;
	struct stedma40_chan_cfg *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 48 */;
	struct dma_slave_config cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 479 */;
	atomic_t cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 45 */;
	struct cryp_device_data cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 444 */;
	struct klist_node *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 429 */;
	struct klist_iter cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 428 */;
	struct cryp_device_data **cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 425 */;
	enum cryp_key_reg_index cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 359 */;
	u8 *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 347 */;
	u32 cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 341 */[CRYP_MAX_KEY_SIZE / 4];
	struct cryp_key_value cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 319 */;
	u32 cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 287 */[AES_BLOCK_SIZE / 4];
	struct cryp_init_vector_value cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 270 */;
	enum cryp_init_vector_index cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 268 */;
	u32 cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 267 */;
	enum cryp_algo_mode cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 259 */;
	irqreturn_t cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 192 */;
	void cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 180 */;
	void __exit cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1607 */;
	int __init cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1598 */;
	struct platform_driver cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1587 */;
	const struct of_device_id cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1581 */[];
	struct cryp_platform_data *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1287 */;
	struct cryp_protection_config cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1271 */;
	u8 cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 127 */;
	struct resource *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1268 */;
	struct platform_device *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1265 */;
	struct cryp_ctx cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1086 */;
	struct cryp_algo_template cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1077 */[];
	struct cryp_algo_template cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1068 */;
	struct cryp_algo_template *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1067 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1066 */;
	struct cryp_algo_template {
		enum cryp_algo_mode algomode;
		struct skcipher_alg skcipher;
	} cocci_id/* drivers/crypto/ux500/cryp/cryp_core.c 1058 */;
}