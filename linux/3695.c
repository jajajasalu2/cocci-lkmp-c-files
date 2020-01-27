cocci_test_suite() {
	char cocci_id/* drivers/crypto/axis/artpec6_crypto.c 900 */[3];
	struct artpec6_crypto_walk *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 823 */;
	struct artpec6_crypto_bounce_buffer cocci_id/* drivers/crypto/axis/artpec6_crypto.c 784 */;
	size_t cocci_id/* drivers/crypto/axis/artpec6_crypto.c 784 */;
	void *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 783 */;
	gfp_t cocci_id/* drivers/crypto/axis/artpec6_crypto.c 781 */;
	struct artpec6_crypto_bounce_buffer *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 780 */;
	struct pdma_descr *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 740 */;
	uintptr_t cocci_id/* drivers/crypto/axis/artpec6_crypto.c 637 */;
	dma_addr_t cocci_id/* drivers/crypto/axis/artpec6_crypto.c 609 */;
	struct artpec6_crypto_dma_map *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 608 */;
	dma_addr_t *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 604 */;
	enum dma_data_direction cocci_id/* drivers/crypto/axis/artpec6_crypto.c 603 */;
	struct page *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 601 */;
	struct artpec6_crypto *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 450 */;
	bool cocci_id/* drivers/crypto/axis/artpec6_crypto.c 448 */;
	const struct artpec6_crypto_walk *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 422 */;
	struct artpec6_crypto_walk {
		struct scatterlist *sg;
		size_t offset;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 380 */;
	void cocci_id/* drivers/crypto/axis/artpec6_crypto.c 377 */(struct artpec6_crypto_req_common *common);
	int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 374 */(struct artpec6_crypto_req_common *common);
	void cocci_id/* drivers/crypto/axis/artpec6_crypto.c 369 */(struct crypto_async_request *req);
	int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 361 */(struct ahash_request *areq);
	int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 360 */(struct skcipher_request *areq);
	int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 359 */(struct aead_request *areq);
	enum{ARTPEC6_CRYPTO_PREPARE_HASH_NO_START, ARTPEC6_CRYPTO_PREPARE_HASH_START,} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 354 */;
	struct device *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 347 */;
	struct artpec6_crypto_aead_req_ctx {
		struct artpec6_crypto_aead_hw_ctx hw_ctx;
		u32 cipher_md;
		bool decrypt;
		struct artpec6_crypto_req_common common;
		__u8 decryption_tag[AES_BLOCK_SIZE]____cacheline_aligned;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 338 */;
	struct artpec6_crypto_aead_hw_ctx {
		__be64 aad_length_bits;
		__be64 text_length_bits;
		__u8 J0[AES_BLOCK_SIZE];
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 332 */;
	struct artpec6_cryptotfm_context {
		unsigned char aes_key[2 * AES_MAX_KEY_SIZE];
		size_t key_length;
		u32 key_md;
		int crypto_type;
		struct crypto_sync_skcipher *fallback;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 324 */;
	struct artpec6_crypto_request_context {
		u32 cipher_md;
		bool decrypt;
		struct artpec6_crypto_req_common common;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 318 */;
	struct artpec6_hashalg_context {
		char hmac_key[SHA256_BLOCK_SIZE];
		size_t hmac_key_length;
		struct crypto_shash *child_hash;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 312 */;
	struct artpec6_hash_export_state {
		char partial_buffer[SHA256_BLOCK_SIZE];
		unsigned char digeststate[SHA256_DIGEST_SIZE];
		size_t partial_bytes;
		u64 digcnt;
		int oper;
		unsigned int hash_flags;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 303 */;
	struct platform_driver cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2984 */;
	unsigned long cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2905 */;
	struct artpec6_crypto_dma_descriptors cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2893 */;
	struct artpec6_hash_request_context {
		char partial_buffer[SHA256_BLOCK_SIZE];
		char partial_buffer_out[SHA256_BLOCK_SIZE];
		char key_buffer[SHA256_BLOCK_SIZE];
		char pad_buffer[SHA256_BLOCK_SIZE + 32];
		unsigned char digeststate[SHA256_DIGEST_SIZE];
		size_t partial_bytes;
		u64 digcnt;
		u32 key_md;
		u32 hash_md;
		enum artpec6_crypto_hash_flags hash_flags;
		struct artpec6_crypto_req_common common;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 289 */;
	struct artpec6_crypto cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2877 */;
	const struct of_device_id *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2852 */;
	struct platform_device *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2850 */;
	const struct of_device_id cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2843 */[];
	struct dentry *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2821 */;
	struct dbgfs_u32 {
		char *name;
		mode_t mode;
		u32 *flag;
		char *desc;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2814 */;
	struct artpec6_cryptotfm_context cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2805 */;
	struct artpec6_crypto_req_common {
		struct list_head list;
		struct list_head complete_in_progress;
		struct artpec6_crypto_dma_descriptors *dma;
		struct crypto_async_request *req;
		void (*complete)(struct crypto_async_request *req);
		gfp_t gfp_flags;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 280 */;
	struct aead_alg cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2789 */[];
	enum artpec6_crypto_hash_flags{HASH_FLAG_INIT_CTX=2, HASH_FLAG_UPDATE=4, HASH_FLAG_FINALIZE=8, HASH_FLAG_HMAC=16, HASH_FLAG_UPDATE_KEY=32,} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 272 */;
	struct skcipher_alg cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2702 */[];
	struct artpec6_hashalg_context cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2645 */;
	struct artpec6_hash_export_state cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2638 */;
	struct ahash_alg cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2628 */[];
	struct artpec6_crypto {
		void __iomem *base;
		spinlock_t queue_lock;
		struct list_head queue;
		struct list_head pending;
		struct tasklet_struct task;
		struct kmem_cache *dma_cache;
		int pending_count;
		struct timer_list timer;
		enum artpec6_crypto_variant variant;
		void *pad_buffer;
		void *zero_buffer;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 258 */;
	irqreturn_t cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2575 */;
	void __iomem *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2559 */;
	enum artpec6_crypto_variant cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2558 */;
	enum artpec6_crypto_variant{ARTPEC6_CRYPTO, ARTPEC7_CRYPTO,} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 253 */;
	const struct artpec6_hash_export_state *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2473 */;
	const void *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2470 */;
	struct artpec6_hash_export_state *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2445 */;
	const struct artpec6_hash_request_context *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2444 */;
	struct ahash_request *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2442 */;
	struct artpec6_hashalg_context *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2433 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2431 */;
	struct crypto_shash *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2407 */;
	struct artpec6_hash_request_context cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2403 */;
	const char *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2398 */;
	struct artpec6_crypto_dma_descriptors {
		struct pdma_descr out[PDMA_DESCR_COUNT]__aligned(64);
		struct pdma_descr in[PDMA_DESCR_COUNT]__aligned(64);
		u32 stat[PDMA_DESCR_COUNT]__aligned(64);
		struct list_head bounce_buffers;
		struct artpec6_crypto_dma_map maps[PDMA_DESCR_COUNT * 2 + 2];
		dma_addr_t out_dma_addr;
		dma_addr_t in_dma_addr;
		dma_addr_t stat_dma_addr;
		size_t out_cnt;
		size_t in_cnt;
		size_t map_count;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 238 */;
	struct artpec6_hash_request_context *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2335 */;
	struct artpec6_crypto_dma_map {
		dma_addr_t dma_addr;
		size_t size;
		enum dma_data_direction dir;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 232 */;
	u32 cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2272 */;
	u8 cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2267 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2230 */;
	struct artpec6_crypto_bounce_buffer {
		struct list_head list;
		size_t length;
		struct scatterlist *sg;
		size_t offset;
		void *buf;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 221 */;
	u8 cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2195 */[AES_BLOCK_SIZE];
	struct aead_request cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2190 */;
	struct skcipher_request cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2164 */;
	struct skcipher_request *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2163 */;
	struct list_head cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2088 */;
	struct timer_list *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2074 */;
	struct artpec6_crypto_req_common cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2053 */;
	struct list_head *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 2047 */;
	struct artpec6_crypto_walk cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1930 */;
	struct artpec6_crypto_aead_hw_ctx cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1925 */;
	struct pdma_stat_descr {
		unsigned char pad1:1;
		unsigned char pad2:1;
		unsigned char eop:1;
		unsigned char pad3:5;
		unsigned int len:24;
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 174 */;
	struct pdma_descr {
		struct pdma_descr_ctrl ctrl;
		union {
			struct pdma_data_descr data;
			struct pdma_short_descr shrt;
		};
	} cocci_id/* drivers/crypto/axis/artpec6_crypto.c 166 */;
	struct pdma_short_descr {
		unsigned char data[7];
	}__packed cocci_id/* drivers/crypto/axis/artpec6_crypto.c 162 */;
	void cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1588 */;
	struct pdma_data_descr {
		unsigned int len:24;
		unsigned int buf:32;
	}__packed cocci_id/* drivers/crypto/axis/artpec6_crypto.c 157 */;
	struct artpec6_crypto_request_context cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1565 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1561 */;
	struct pdma_descr_ctrl {
		unsigned char short_descr:1;
		unsigned char pad1:1;
		unsigned char eop:1;
		unsigned char intr:1;
		unsigned char short_len:3;
		unsigned char pad2:1;
	}__packed cocci_id/* drivers/crypto/axis/artpec6_crypto.c 148 */;
	u64 cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1455 */;
	struct artpec6_crypto_aead_req_ctx *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1287 */;
	struct aead_request *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1284 */;
	int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1284 */;
	unsigned int cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1248 */;
	const u8 *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1247 */;
	struct artpec6_crypto_aead_req_ctx cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1242 */;
	struct artpec6_cryptotfm_context *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1237 */;
	struct crypto_aead *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1235 */;
	__be32 *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1181 */;
	struct artpec6_crypto_request_context *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1135 */;
	struct artpec6_crypto_req_common *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1071 */;
	struct artpec6_crypto_dma_descriptors *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1060 */;
	struct scatterlist *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1041 */;
	void (*cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1040 */)(struct crypto_async_request *req);
	struct crypto_async_request *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1039 */;
	__be64 cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1003 */;
	unsigned char *cocci_id/* drivers/crypto/axis/artpec6_crypto.c 1000 */;
}
