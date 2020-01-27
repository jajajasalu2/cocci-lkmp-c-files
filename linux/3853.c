cocci_test_suite() {
	unsigned long cocci_id/* drivers/crypto/talitos.c 98 */;
	enum dma_data_direction cocci_id/* drivers/crypto/talitos.c 97 */;
	void *cocci_id/* drivers/crypto/talitos.c 96 */;
	unsigned int cocci_id/* drivers/crypto/talitos.c 96 */;
	struct talitos_ptr *cocci_id/* drivers/crypto/talitos.c 95 */;
	struct device *cocci_id/* drivers/crypto/talitos.c 94 */;
	void cocci_id/* drivers/crypto/talitos.c 94 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/talitos.c 927 */;
	const u8 *cocci_id/* drivers/crypto/talitos.c 923 */;
	struct talitos_export_state {
		u32 hw_context[TALITOS_MDEU_MAX_CONTEXT_SIZE / sizeof(u32)];
		u8 buf[HASH_MAX_BLOCK_SIZE];
		unsigned int swinit;
		unsigned int first;
		unsigned int last;
		unsigned int to_hash_later;
		unsigned int nbuf;
	} cocci_id/* drivers/crypto/talitos.c 878 */;
	struct talitos_ahash_req_ctx {
		u32 hw_context[TALITOS_MDEU_MAX_CONTEXT_SIZE / sizeof(u32)];
		unsigned int hw_context_size;
		u8 buf[2][HASH_MAX_BLOCK_SIZE];
		int buf_idx;
		unsigned int swinit;
		unsigned int first;
		unsigned int last;
		unsigned int to_hash_later;
		unsigned int nbuf;
		struct scatterlist bufsl[2];
		struct scatterlist *psrc;
	} cocci_id/* drivers/crypto/talitos.c 864 */;
	u8 cocci_id/* drivers/crypto/talitos.c 85 */;
	struct talitos_ctx {
		struct device *dev;
		int ch;
		__be32 desc_hdr_template;
		u8 key[TALITOS_MAX_KEY_SIZE];
		u8 iv[TALITOS_MAX_IV_LENGTH];
		dma_addr_t dma_key;
		unsigned int keylen;
		unsigned int enckeylen;
		unsigned int authkeylen;
	} cocci_id/* drivers/crypto/talitos.c 849 */;
	u32 *cocci_id/* drivers/crypto/talitos.c 770 */;
	struct hwrng *cocci_id/* drivers/crypto/talitos.c 752 */;
	unsigned short cocci_id/* drivers/crypto/talitos.c 69 */;
	irqreturn_t cocci_id/* drivers/crypto/talitos.c 676 */;
	u64 cocci_id/* drivers/crypto/talitos.c 469 */;
	u32 cocci_id/* drivers/crypto/talitos.c 463 */;
	__be32 cocci_id/* drivers/crypto/talitos.c 353 */;
	struct platform_driver cocci_id/* drivers/crypto/talitos.c 3499 */;
	const struct of_device_id cocci_id/* drivers/crypto/talitos.c 3484 */[];
	struct talitos_request *cocci_id/* drivers/crypto/talitos.c 344 */;
	struct talitos_request cocci_id/* drivers/crypto/talitos.c 3400 */;
	struct talitos_channel cocci_id/* drivers/crypto/talitos.c 3380 */;
	struct talitos_private cocci_id/* drivers/crypto/talitos.c 3280 */;
	struct resource *cocci_id/* drivers/crypto/talitos.c 3278 */;
	struct device_node *cocci_id/* drivers/crypto/talitos.c 3274 */;
	struct platform_device *cocci_id/* drivers/crypto/talitos.c 3271 */;
	struct talitos_ctx cocci_id/* drivers/crypto/talitos.c 3209 */;
	struct talitos_crypto_alg cocci_id/* drivers/crypto/talitos.c 3134 */;
	struct crypto_alg *cocci_id/* drivers/crypto/talitos.c 3132 */;
	struct talitos_alg_template *cocci_id/* drivers/crypto/talitos.c 3127 */;
	struct talitos_crypto_alg *cocci_id/* drivers/crypto/talitos.c 3126 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/talitos.c 3059 */;
	struct talitos_ahash_req_ctx cocci_id/* drivers/crypto/talitos.c 3054 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/talitos.c 3032 */;
	struct aead_alg *cocci_id/* drivers/crypto/talitos.c 3020 */;
	struct talitos_crypto_alg {
		struct list_head entry;
		struct device *dev;
		struct talitos_alg_template algt;
	} cocci_id/* drivers/crypto/talitos.c 2990 */;
	struct talitos_export_state cocci_id/* drivers/crypto/talitos.c 2811 */;
	struct talitos_alg_template cocci_id/* drivers/crypto/talitos.c 2267 */[];
	struct talitos_alg_template {
		u32 type;
		u32 priority;
		union {
			struct skcipher_alg skcipher;
			struct ahash_alg hash;
			struct aead_alg aead;
		} alg;
		__be32 desc_hdr_template;
	} cocci_id/* drivers/crypto/talitos.c 2256 */;
	u8 cocci_id/* drivers/crypto/talitos.c 2228 */[SHA512_DIGEST_SIZE];
	struct crypto_wait cocci_id/* drivers/crypto/talitos.c 2195 */;
	struct scatterlist cocci_id/* drivers/crypto/talitos.c 2193 */[1];
	const struct talitos_export_state *cocci_id/* drivers/crypto/talitos.c 2164 */;
	const void *cocci_id/* drivers/crypto/talitos.c 2158 */;
	struct talitos_export_state *cocci_id/* drivers/crypto/talitos.c 2136 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/talitos.c 2125 */;
	struct talitos_ahash_req_ctx *cocci_id/* drivers/crypto/talitos.c 2124 */;
	struct ahash_request *cocci_id/* drivers/crypto/talitos.c 2122 */;
	u8 cocci_id/* drivers/crypto/talitos.c 1775 */[64];
	struct talitos_edesc cocci_id/* drivers/crypto/talitos.c 1752 */;
	struct talitos_desc *cocci_id/* drivers/crypto/talitos.c 1747 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/talitos.c 1576 */;
	void (*cocci_id/* drivers/crypto/talitos.c 1572 */)(struct device *dev,
							    struct talitos_desc *desc,
							    void *context,
							    int error);
	struct skcipher_request *cocci_id/* drivers/crypto/talitos.c 1571 */;
	struct talitos_edesc *cocci_id/* drivers/crypto/talitos.c 1457 */;
	struct talitos_ctx *cocci_id/* drivers/crypto/talitos.c 1455 */;
	struct crypto_aead *cocci_id/* drivers/crypto/talitos.c 1453 */;
	struct aead_request *cocci_id/* drivers/crypto/talitos.c 1451 */;
	int cocci_id/* drivers/crypto/talitos.c 1451 */;
	u8 *cocci_id/* drivers/crypto/talitos.c 1419 */;
	struct talitos_desc cocci_id/* drivers/crypto/talitos.c 1395 */;
	struct talitos_ptr cocci_id/* drivers/crypto/talitos.c 1386 */;
	gfp_t cocci_id/* drivers/crypto/talitos.c 1336 */;
	struct scatterlist *cocci_id/* drivers/crypto/talitos.c 1098 */;
	char *cocci_id/* drivers/crypto/talitos.c 1054 */;
	bool cocci_id/* drivers/crypto/talitos.c 102 */;
	struct talitos_private *cocci_id/* drivers/crypto/talitos.c 101 */;
	dma_addr_t cocci_id/* drivers/crypto/talitos.c 100 */;
}
