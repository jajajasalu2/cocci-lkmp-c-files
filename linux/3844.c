cocci_test_suite() {
	struct cc_hmac_s *cocci_id/* drivers/crypto/ccree/cc_aead.c 99 */;
	struct cc_xcbc_s *cocci_id/* drivers/crypto/ccree/cc_aead.c 87 */;
	cc_sram_addr_t cocci_id/* drivers/crypto/ccree/cc_aead.c 807 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccree/cc_aead.c 786 */;
	enum cc_req_dma_buf_type cocci_id/* drivers/crypto/ccree/cc_aead.c 777 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_aead.c 681 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/ccree/cc_aead.c 561 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_aead.c 549 */[MAX_AEAD_SETKEY_SEQ];
	struct cc_crypto_req cocci_id/* drivers/crypto/ccree/cc_aead.c 548 */;
	const u8 *cocci_id/* drivers/crypto/ccree/cc_aead.c 544 */;
	struct cc_aead_ctx {
		struct cc_drvdata *drvdata;
		u8 ctr_nonce[MAX_NONCE_SIZE];
		u8 *enckey;
		dma_addr_t enckey_dma_addr;
		union {
			struct cc_hmac_s hmac;
			struct cc_xcbc_s xcbc;
		} auth_state;
		unsigned int enc_keylen;
		unsigned int auth_keylen;
		unsigned int authsize;
		unsigned int hash_len;
		enum drv_cipher_mode cipher_mode;
		enum cc_flow_mode flow_mode;
		enum drv_hash_mode auth_mode;
	} cocci_id/* drivers/crypto/ccree/cc_aead.c 45 */;
	u8 *cocci_id/* drivers/crypto/ccree/cc_aead.c 427 */;
	struct cc_xcbc_s {
		u8 *xcbc_keys;
		dma_addr_t xcbc_keys_dma_addr;
	} cocci_id/* drivers/crypto/ccree/cc_aead.c 40 */;
	struct cc_hmac_s {
		u8 *padded_authkey;
		u8 *ipad_opad;
		dma_addr_t padded_authkey_dma_addr;
		dma_addr_t ipad_opad_dma_addr;
	} cocci_id/* drivers/crypto/ccree/cc_aead.c 33 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_aead.c 299 */[2];
	struct cc_hw_desc *cocci_id/* drivers/crypto/ccree/cc_aead.c 296 */;
	struct cc_aead_handle {
		cc_sram_addr_t sram_workspace_addr;
		struct list_head aead_list;
	} cocci_id/* drivers/crypto/ccree/cc_aead.c 28 */;
	struct device *cocci_id/* drivers/crypto/ccree/cc_aead.c 2679 */;
	struct cc_crypto_alg *cocci_id/* drivers/crypto/ccree/cc_aead.c 2676 */;
	struct cc_aead_handle *cocci_id/* drivers/crypto/ccree/cc_aead.c 2675 */;
	struct cc_drvdata *cocci_id/* drivers/crypto/ccree/cc_aead.c 2673 */;
	int cocci_id/* drivers/crypto/ccree/cc_aead.c 2673 */;
	struct cc_aead_ctx cocci_id/* drivers/crypto/ccree/cc_aead.c 2638 */;
	struct cc_alg_template *cocci_id/* drivers/crypto/ccree/cc_aead.c 2620 */;
	u32 cocci_id/* drivers/crypto/ccree/cc_aead.c 245 */;
	struct cc_alg_template cocci_id/* drivers/crypto/ccree/cc_aead.c 2357 */[];
	struct cc_aead_ctx *cocci_id/* drivers/crypto/ccree/cc_aead.c 217 */;
	struct crypto_aead *cocci_id/* drivers/crypto/ccree/cc_aead.c 216 */;
	struct aead_req_ctx *cocci_id/* drivers/crypto/ccree/cc_aead.c 215 */;
	struct aead_request *cocci_id/* drivers/crypto/ccree/cc_aead.c 214 */;
	void *cocci_id/* drivers/crypto/ccree/cc_aead.c 212 */;
	void cocci_id/* drivers/crypto/ccree/cc_aead.c 212 */;
	__be32 *cocci_id/* drivers/crypto/ccree/cc_aead.c 1952 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_aead.c 1910 */[MAX_AEAD_PROCESS_SEQ];
	__be64 cocci_id/* drivers/crypto/ccree/cc_aead.c 1869 */;
	__be32 cocci_id/* drivers/crypto/ccree/cc_aead.c 1852 */;
	dma_addr_t *cocci_id/* drivers/crypto/ccree/cc_aead.c 175 */;
	const unsigned int cocci_id/* drivers/crypto/ccree/cc_aead.c 161 */;
	struct aead_req_ctx cocci_id/* drivers/crypto/ccree/cc_aead.c 145 */;
	dma_addr_t cocci_id/* drivers/crypto/ccree/cc_aead.c 1428 */;
	unsigned int *cocci_id/* drivers/crypto/ccree/cc_aead.c 1421 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_aead.c 1420 */[];
	struct cc_crypto_alg cocci_id/* drivers/crypto/ccree/cc_aead.c 134 */;
	struct aead_alg *cocci_id/* drivers/crypto/ccree/cc_aead.c 131 */;
	bool cocci_id/* drivers/crypto/ccree/cc_aead.c 1198 */;
	enum drv_crypto_direction cocci_id/* drivers/crypto/ccree/cc_aead.c 1196 */;
	enum cc_flow_mode cocci_id/* drivers/crypto/ccree/cc_aead.c 1196 */;
}
