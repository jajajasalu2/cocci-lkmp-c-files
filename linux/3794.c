cocci_test_suite() {
	struct caam_hash_ctx {
		u32 sh_desc_update[DESC_HASH_MAX_USED_LEN]____cacheline_aligned;
		u32 sh_desc_update_first[DESC_HASH_MAX_USED_LEN]____cacheline_aligned;
		u32 sh_desc_fin[DESC_HASH_MAX_USED_LEN]____cacheline_aligned;
		u32 sh_desc_digest[DESC_HASH_MAX_USED_LEN]____cacheline_aligned;
		u8 key[CAAM_MAX_HASH_KEY_SIZE]____cacheline_aligned;
		dma_addr_t sh_desc_update_dma ____cacheline_aligned;
		dma_addr_t sh_desc_update_first_dma;
		dma_addr_t sh_desc_fin_dma;
		dma_addr_t sh_desc_digest_dma;
		enum dma_data_direction dir;
		enum dma_data_direction key_dir;
		struct device *jrdev;
		int ctx_len;
		struct alginfo adata;
	} cocci_id/* drivers/crypto/caam/caamhash.c 88 */;
	struct list_head cocci_id/* drivers/crypto/caam/caamhash.c 85 */;
	int *cocci_id/* drivers/crypto/caam/caamhash.c 790 */;
	struct sec4_sg_entry *cocci_id/* drivers/crypto/caam/caamhash.c 754 */;
	dma_addr_t cocci_id/* drivers/crypto/caam/caamhash.c 750 */;
	size_t cocci_id/* drivers/crypto/caam/caamhash.c 748 */;
	struct sec4_sg_entry cocci_id/* drivers/crypto/caam/caamhash.c 730 */;
	struct ahash_edesc cocci_id/* drivers/crypto/caam/caamhash.c 613 */;
	void *cocci_id/* drivers/crypto/caam/caamhash.c 601 */;
	u32 cocci_id/* drivers/crypto/caam/caamhash.c 600 */;
	void cocci_id/* drivers/crypto/caam/caamhash.c 600 */;
	struct ahash_edesc {
		dma_addr_t sec4_sg_dma;
		int src_nents;
		int sec4_sg_bytes;
		u32 hw_desc[DESC_JOB_IO_LEN_MAX / sizeof(u32)]____cacheline_aligned;
		struct sec4_sg_entry sec4_sg[0];
	} cocci_id/* drivers/crypto/caam/caamhash.c 559 */;
	unsigned int cocci_id/* drivers/crypto/caam/caamhash.c 530 */;
	const u8 *cocci_id/* drivers/crypto/caam/caamhash.c 529 */;
	struct split_key_result cocci_id/* drivers/crypto/caam/caamhash.c 386 */;
	u32 *cocci_id/* drivers/crypto/caam/caamhash.c 335 */;
	struct device *cocci_id/* drivers/crypto/caam/caamhash.c 334 */;
	struct caam_hash_ctx *cocci_id/* drivers/crypto/caam/caamhash.c 332 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/caam/caamhash.c 330 */;
	int cocci_id/* drivers/crypto/caam/caamhash.c 330 */;
	struct caam_drv_private *cocci_id/* drivers/crypto/caam/caamhash.c 227 */;
	struct caam_hash_template *cocci_id/* drivers/crypto/caam/caamhash.c 2021 */;
	struct caam_hash_ctx cocci_id/* drivers/crypto/caam/caamhash.c 1971 */;
	struct crypto_alg *cocci_id/* drivers/crypto/caam/caamhash.c 1944 */;
	struct ahash_alg *cocci_id/* drivers/crypto/caam/caamhash.c 1943 */;
	bool cocci_id/* drivers/crypto/caam/caamhash.c 1940 */;
	struct caam_hash_alg *cocci_id/* drivers/crypto/caam/caamhash.c 1926 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/caam/caamhash.c 1910 */;
	struct caam_hash_state cocci_id/* drivers/crypto/caam/caamhash.c 1901 */;
	const u8 cocci_id/* drivers/crypto/caam/caamhash.c 1818 */[];
	struct caam_hash_alg cocci_id/* drivers/crypto/caam/caamhash.c 1815 */;
	struct ahash_alg cocci_id/* drivers/crypto/caam/caamhash.c 1813 */;
	struct hash_alg_common cocci_id/* drivers/crypto/caam/caamhash.c 1811 */;
	struct hash_alg_common *cocci_id/* drivers/crypto/caam/caamhash.c 1810 */;
	struct caam_hash_alg {
		struct list_head entry;
		int alg_type;
		struct ahash_alg ahash_alg;
	} cocci_id/* drivers/crypto/caam/caamhash.c 1800 */;
	struct caam_export_state cocci_id/* drivers/crypto/caam/caamhash.c 1650 */;
	struct caam_hash_template cocci_id/* drivers/crypto/caam/caamhash.c 1632 */[];
	struct caam_hash_template {
		char name[CRYPTO_MAX_ALG_NAME];
		char driver_name[CRYPTO_MAX_ALG_NAME];
		char hmac_name[CRYPTO_MAX_ALG_NAME];
		char hmac_driver_name[CRYPTO_MAX_ALG_NAME];
		unsigned int blocksize;
		struct ahash_alg template_ahash;
		u32 alg_type;
	} cocci_id/* drivers/crypto/caam/caamhash.c 1621 */;
	const struct caam_export_state *cocci_id/* drivers/crypto/caam/caamhash.c 1608 */;
	const void *cocci_id/* drivers/crypto/caam/caamhash.c 1605 */;
	u8 *cocci_id/* drivers/crypto/caam/caamhash.c 1585 */;
	struct caam_export_state *cocci_id/* drivers/crypto/caam/caamhash.c 1583 */;
	struct caam_export_state {
		u8 buf[CAAM_MAX_HASH_BLOCK_SIZE];
		u8 caam_ctx[MAX_CTX_LEN];
		int buflen;
		int (*update)(struct ahash_request *req);
		int (*final)(struct ahash_request *req);
		int (*finup)(struct ahash_request *req);
	} cocci_id/* drivers/crypto/caam/caamhash.c 121 */;
	struct ahash_edesc *cocci_id/* drivers/crypto/caam/caamhash.c 1077 */;
	gfp_t cocci_id/* drivers/crypto/caam/caamhash.c 1072 */;
	struct caam_hash_state *cocci_id/* drivers/crypto/caam/caamhash.c 1070 */;
	struct ahash_request *cocci_id/* drivers/crypto/caam/caamhash.c 1066 */;
	struct caam_hash_state {
		dma_addr_t buf_dma;
		dma_addr_t ctx_dma;
		int ctx_dma_len;
		u8 buf_0[CAAM_MAX_HASH_BLOCK_SIZE]____cacheline_aligned;
		int buflen_0;
		u8 buf_1[CAAM_MAX_HASH_BLOCK_SIZE]____cacheline_aligned;
		int buflen_1;
		u8 caam_ctx[MAX_CTX_LEN]____cacheline_aligned;
		int (*update)(struct ahash_request *req);
		int (*final)(struct ahash_request *req);
		int (*finup)(struct ahash_request *req);
		int current_buf;
	} cocci_id/* drivers/crypto/caam/caamhash.c 106 */;
}
