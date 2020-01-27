cocci_test_suite() {
	void cocci_id/* drivers/crypto/ccree/cc_hash.c 96 */(struct ahash_req_ctx *areq_ctx,
							     struct cc_hash_ctx *ctx,
							     unsigned int flow_mode,
							     struct cc_hw_desc desc[],
							     bool is_not_last_data,
							     unsigned int *seq_size);
	struct cc_hash_ctx {
		struct cc_drvdata *drvdata;
		u8 digest_buff[CC_MAX_HASH_DIGEST_SIZE]____cacheline_aligned;
		u8 opad_tmp_keys_buff[CC_MAX_OPAD_KEYS_SIZE]____cacheline_aligned;
		dma_addr_t opad_tmp_keys_dma_addr ____cacheline_aligned;
		dma_addr_t digest_buff_dma_addr;
		struct hash_key_req_ctx key_params;
		int hash_mode;
		int hw_mode;
		int inter_digestsize;
		unsigned int hash_len;
		struct completion setkey_comp;
		bool is_hmac;
	} cocci_id/* drivers/crypto/ccree/cc_hash.c 76 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_hash.c 722 */[2];
	struct hash_key_req_ctx {
		u32 keylen;
		dma_addr_t key_dma_addr;
		u8 *key;
	} cocci_id/* drivers/crypto/ccree/cc_hash.c 69 */;
	gfp_t cocci_id/* drivers/crypto/ccree/cc_hash.c 640 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_hash.c 637 */[CC_MAX_HASH_SEQ_LEN];
	struct cc_crypto_req cocci_id/* drivers/crypto/ccree/cc_hash.c 636 */;
	u8 *cocci_id/* drivers/crypto/ccree/cc_hash.c 633 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccree/cc_hash.c 631 */;
	struct cc_hash_alg {
		struct list_head entry;
		int hash_mode;
		int hw_mode;
		int inter_digestsize;
		struct cc_drvdata *drvdata;
		struct ahash_alg ahash_alg;
	} cocci_id/* drivers/crypto/ccree/cc_hash.c 60 */;
	const void *cocci_id/* drivers/crypto/ccree/cc_hash.c 58 */(struct device *dev,
								    u32 mode);
	void cocci_id/* drivers/crypto/ccree/cc_hash.c 55 */(struct ahash_request *areq,
							     struct cc_hw_desc desc[],
							     unsigned int *seq_size);
	u64 cocci_id/* drivers/crypto/ccree/cc_hash.c 42 */[];
	struct cc_hw_desc *cocci_id/* drivers/crypto/ccree/cc_hash.c 358 */;
	u32 cocci_id/* drivers/crypto/ccree/cc_hash.c 300 */;
	struct ahash_req_ctx *cocci_id/* drivers/crypto/ccree/cc_hash.c 297 */;
	struct ahash_request *cocci_id/* drivers/crypto/ccree/cc_hash.c 296 */;
	const u32 cocci_id/* drivers/crypto/ccree/cc_hash.c 28 */[];
	struct cc_hash_handle *cocci_id/* drivers/crypto/ccree/cc_hash.c 2352 */;
	struct cc_drvdata *cocci_id/* drivers/crypto/ccree/cc_hash.c 2351 */;
	cc_sram_addr_t cocci_id/* drivers/crypto/ccree/cc_hash.c 2348 */;
	unsigned int *cocci_id/* drivers/crypto/ccree/cc_hash.c 2217 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_hash.c 2216 */[];
	struct cc_hash_handle {
		cc_sram_addr_t digest_len_sram_addr;
		cc_sram_addr_t larval_digest_sram_addr;
		struct list_head hash_list;
	} cocci_id/* drivers/crypto/ccree/cc_hash.c 22 */;
	u32 *cocci_id/* drivers/crypto/ccree/cc_hash.c 1990 */;
	void __init cocci_id/* drivers/crypto/ccree/cc_hash.c 1988 */;
	unsigned long cocci_id/* drivers/crypto/ccree/cc_hash.c 1972 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_hash.c 1871 */[CC_DIGEST_SIZE_MAX / sizeof(u32)];
	struct cc_hash_ctx cocci_id/* drivers/crypto/ccree/cc_hash.c 1850 */;
	struct ahash_alg *cocci_id/* drivers/crypto/ccree/cc_hash.c 1827 */;
	struct crypto_alg *cocci_id/* drivers/crypto/ccree/cc_hash.c 1826 */;
	bool cocci_id/* drivers/crypto/ccree/cc_hash.c 1823 */;
	struct cc_hash_template *cocci_id/* drivers/crypto/ccree/cc_hash.c 1822 */;
	struct cc_hash_alg *cocci_id/* drivers/crypto/ccree/cc_hash.c 1822 */;
	struct cc_hash_template cocci_id/* drivers/crypto/ccree/cc_hash.c 1580 */[];
	struct cc_hash_template {
		char name[CRYPTO_MAX_ALG_NAME];
		char driver_name[CRYPTO_MAX_ALG_NAME];
		char mac_name[CRYPTO_MAX_ALG_NAME];
		char mac_driver_name[CRYPTO_MAX_ALG_NAME];
		unsigned int blocksize;
		bool is_mac;
		bool synchronize;
		struct ahash_alg template_ahash;
		int hash_mode;
		int hw_mode;
		int inter_digestsize;
		struct cc_drvdata *drvdata;
		u32 min_hw_rev;
		enum cc_std_body std_body;
	} cocci_id/* drivers/crypto/ccree/cc_hash.c 1559 */;
	const void *cocci_id/* drivers/crypto/ccree/cc_hash.c 1526 */;
	const u32 cocci_id/* drivers/crypto/ccree/cc_hash.c 1507 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/ccree/cc_hash.c 1140 */;
	void cocci_id/* drivers/crypto/ccree/cc_hash.c 1140 */;
	struct ahash_req_ctx cocci_id/* drivers/crypto/ccree/cc_hash.c 1130 */;
	struct cc_hash_alg cocci_id/* drivers/crypto/ccree/cc_hash.c 1127 */;
	struct ahash_alg cocci_id/* drivers/crypto/ccree/cc_hash.c 1125 */;
	struct hash_alg_common cocci_id/* drivers/crypto/ccree/cc_hash.c 1123 */;
	struct hash_alg_common *cocci_id/* drivers/crypto/ccree/cc_hash.c 1122 */;
	void *cocci_id/* drivers/crypto/ccree/cc_hash.c 1076 */;
	struct device *cocci_id/* drivers/crypto/ccree/cc_hash.c 1071 */;
	struct cc_hash_ctx *cocci_id/* drivers/crypto/ccree/cc_hash.c 1069 */;
	int cocci_id/* drivers/crypto/ccree/cc_hash.c 1069 */;
	const u8 *cocci_id/* drivers/crypto/ccree/cc_hash.c 1007 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_hash.c 1007 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/ccree/cc_hash.c 1006 */;
}
