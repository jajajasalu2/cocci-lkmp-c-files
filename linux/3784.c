cocci_test_suite() {
	unsigned int cocci_id/* drivers/crypto/ux500/hash/hash_core.c 933 */;
	unsigned long cocci_id/* drivers/crypto/ux500/hash/hash_core.c 867 */;
	u8 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 859 */[SHA256_DIGEST_SIZE];
	void cocci_id/* drivers/crypto/ux500/hash/hash_core.c 84 */(struct hash_device_data *device_data,
								    const u32 *message,
								    u8 index_bytes);
	struct hash_driver_data cocci_id/* drivers/crypto/ux500/hash/hash_core.c 71 */;
	struct hash_config *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 675 */;
	struct hash_driver_data {
		struct klist device_list;
		struct semaphore device_allocation;
	} cocci_id/* drivers/crypto/ux500/hash/hash_core.c 66 */;
	const u32 *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 614 */;
	struct hash_state cocci_id/* drivers/crypto/ux500/hash/hash_core.c 557 */;
	struct scatterlist *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 531 */;
	const u8 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 53 */[SHA256_DIGEST_SIZE];
	const u8 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 46 */[SHA1_DIGEST_SIZE];
	const u8 *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 426 */;
	struct hash_device_data cocci_id/* drivers/crypto/ux500/hash/hash_core.c 382 */;
	struct klist_node *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 369 */;
	struct klist_iter cocci_id/* drivers/crypto/ux500/hash/hash_core.c 368 */;
	struct hash_device_data **cocci_id/* drivers/crypto/ux500/hash/hash_core.c 365 */;
	struct device *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 286 */;
	bool cocci_id/* drivers/crypto/ux500/hash/hash_core.c 283 */;
	u8 *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 217 */;
	u32 *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 217 */;
	bool *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 217 */;
	void __exit cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1951 */;
	int __init cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1939 */;
	struct platform_driver cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1925 */;
	const struct of_device_id cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1919 */[];
	struct dma_chan *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 186 */;
	struct resource *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1653 */;
	struct platform_device *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1650 */;
	void cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1638 */;
	struct hash_device_data *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1613 */;
	int cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1613 */;
	struct hash_ctx cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1525 */;
	struct hash_algo_template cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1513 */[];
	struct hash_req_ctx cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1502 */;
	struct hash_algo_template cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1498 */;
	struct hash_algo_template *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1495 */;
	struct crypto_alg *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1494 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1491 */;
	struct hash_algo_template {
		struct hash_config conf;
		struct ahash_alg hash;
	} cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1486 */;
	void *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1413 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 141 */;
	const void *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1408 */;
	enum dma_data_direction cocci_id/* drivers/crypto/ux500/hash/hash_core.c 139 */;
	struct hash_ctx *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1355 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1354 */;
	struct hash_req_ctx *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1316 */;
	struct ahash_request *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1313 */;
	u8 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1282 */;
	u32 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1262 */;
	struct hash_state *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1184 */;
	s32 cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1129 */;
	const struct hash_state *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1126 */;
	struct dma_slave_config cocci_id/* drivers/crypto/ux500/hash/hash_core.c 110 */;
	struct hash_platform_data *cocci_id/* drivers/crypto/ux500/hash/hash_core.c 109 */;
	struct crypto_hash_walk cocci_id/* drivers/crypto/ux500/hash/hash_core.c 1073 */;
}
