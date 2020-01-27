cocci_test_suite() {
	const struct cc_alg_template cocci_id/* drivers/crypto/ccree/cc_cipher.c 933 */[];
	gfp_t cocci_id/* drivers/crypto/ccree/cc_cipher.c 829 */;
	struct cc_crypto_req cocci_id/* drivers/crypto/ccree/cc_cipher.c 826 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_cipher.c 825 */[MAX_SKCIPHER_SEQ_LEN];
	enum drv_crypto_direction cocci_id/* drivers/crypto/ccree/cc_cipher.c 813 */;
	unsigned int cocci_id/* drivers/crypto/ccree/cc_cipher.c 800 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/ccree/cc_cipher.c 799 */;
	struct cipher_req_ctx *cocci_id/* drivers/crypto/ccree/cc_cipher.c 798 */;
	struct scatterlist *cocci_id/* drivers/crypto/ccree/cc_cipher.c 796 */;
	struct skcipher_request *cocci_id/* drivers/crypto/ccree/cc_cipher.c 795 */;
	void *cocci_id/* drivers/crypto/ccree/cc_cipher.c 793 */;
	void cocci_id/* drivers/crypto/ccree/cc_cipher.c 793 */;
	u32 cocci_id/* drivers/crypto/ccree/cc_cipher.c 777 */;
	bool cocci_id/* drivers/crypto/ccree/cc_cipher.c 741 */;
	unsigned int *cocci_id/* drivers/crypto/ccree/cc_cipher.c 736 */;
	struct cc_hw_desc cocci_id/* drivers/crypto/ccree/cc_cipher.c 735 */[];
	enum cc_key_type cocci_id/* drivers/crypto/ccree/cc_cipher.c 67 */;
	void cocci_id/* drivers/crypto/ccree/cc_cipher.c 65 */(struct device *dev,
							       void *cc_req,
							       int err);
	dma_addr_t cocci_id/* drivers/crypto/ccree/cc_cipher.c 632 */;
	struct cc_cipher_ctx {
		struct cc_drvdata *drvdata;
		int keylen;
		int key_round_number;
		int cipher_mode;
		int flow_mode;
		unsigned int flags;
		enum cc_key_type key_type;
		struct cc_user_key_info user;
		union {
			struct cc_hw_key_info hw;
			struct cc_cpp_key_info cpp;
		};
		struct crypto_shash *shash_tfm;
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 49 */;
	enum cc_key_type{CC_UNPROTECTED_KEY, CC_HW_PROTECTED_KEY, CC_POLICY_PROTECTED_KEY, CC_INVALID_PROTECTED_KEY,} cocci_id/* drivers/crypto/ccree/cc_cipher.c 42 */;
	struct cc_cpp_key_info {
		u8 slot;
		enum cc_cpp_alg alg;
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 37 */;
	struct cc_hw_key_info {
		enum cc_hw_crypto_key key1_slot;
		enum cc_hw_crypto_key key2_slot;
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 32 */;
	u8 *cocci_id/* drivers/crypto/ccree/cc_cipher.c 287 */;
	struct cc_hkey_info cocci_id/* drivers/crypto/ccree/cc_cipher.c 283 */;
	const u8 *cocci_id/* drivers/crypto/ccree/cc_cipher.c 277 */;
	struct cc_user_key_info {
		u8 *key;
		dma_addr_t key_dma_addr;
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 27 */;
	u8 cocci_id/* drivers/crypto/ccree/cc_cipher.c 261 */;
	enum cc_hw_crypto_key cocci_id/* drivers/crypto/ccree/cc_cipher.c 246 */;
	struct tdes_keys {
		u8 key1[DES_KEY_SIZE];
		u8 key2[DES_KEY_SIZE];
		u8 key3[DES_KEY_SIZE];
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 240 */;
	struct cc_cipher_handle {
		struct list_head alg_list;
	} cocci_id/* drivers/crypto/ccree/cc_cipher.c 23 */;
	struct cc_cipher_ctx *cocci_id/* drivers/crypto/ccree/cc_cipher.c 217 */;
	struct cc_crypto_alg cocci_id/* drivers/crypto/ccree/cc_cipher.c 214 */;
	struct crypto_alg *cocci_id/* drivers/crypto/ccree/cc_cipher.c 212 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/ccree/cc_cipher.c 210 */;
	struct cipher_req_ctx cocci_id/* drivers/crypto/ccree/cc_cipher.c 172 */;
	struct device *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1650 */;
	struct cc_crypto_alg *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1649 */;
	struct cc_cipher_handle *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1648 */;
	struct cc_drvdata *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1646 */;
	int cocci_id/* drivers/crypto/ccree/cc_cipher.c 1646 */;
	struct cc_cipher_ctx cocci_id/* drivers/crypto/ccree/cc_cipher.c 1614 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1597 */;
	const struct cc_alg_template *cocci_id/* drivers/crypto/ccree/cc_cipher.c 1593 */;
}
