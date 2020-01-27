cocci_test_suite() {
	struct atmel_aes_dev cocci_id/* drivers/crypto/atmel-aes.c 99 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/atmel-aes.c 936 */;
	struct atmel_aes_caps {
		bool has_dualbuff;
		bool has_cfb64;
		bool has_ctr32;
		bool has_gcm;
		bool has_xts;
		bool has_authenc;
		u32 max_burst_size;
	} cocci_id/* drivers/crypto/atmel-aes.c 89 */;
	enum dma_slave_buswidth cocci_id/* drivers/crypto/atmel-aes.c 860 */;
	dma_async_tx_callback cocci_id/* drivers/crypto/atmel-aes.c 788 */;
	struct dma_slave_config cocci_id/* drivers/crypto/atmel-aes.c 787 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/atmel-aes.c 786 */;
	enum dma_transfer_direction cocci_id/* drivers/crypto/atmel-aes.c 783 */;
	const struct atmel_aes_dma *cocci_id/* drivers/crypto/atmel-aes.c 672 */;
	struct atmel_aes_dma *cocci_id/* drivers/crypto/atmel-aes.c 642 */;
	size_t cocci_id/* drivers/crypto/atmel-aes.c 641 */;
	void cocci_id/* drivers/crypto/atmel-aes.c 637 */(void *data);
	u32 *cocci_id/* drivers/crypto/atmel-aes.c 629 */;
	atmel_aes_fn_t cocci_id/* drivers/crypto/atmel-aes.c 616 */;
	void cocci_id/* drivers/crypto/atmel-aes.c 491 */(struct atmel_aes_dev *dd,
							  int err);
	const struct atmel_aes_dev *cocci_id/* drivers/crypto/atmel-aes.c 485 */;
	const struct atmel_aes_reqctx *cocci_id/* drivers/crypto/atmel-aes.c 479 */;
	char cocci_id/* drivers/crypto/atmel-aes.c 352 */[16];
	struct platform_driver cocci_id/* drivers/crypto/atmel-aes.c 2775 */;
	struct resource *cocci_id/* drivers/crypto/atmel-aes.c 2617 */;
	struct device *cocci_id/* drivers/crypto/atmel-aes.c 2616 */;
	struct device_node *cocci_id/* drivers/crypto/atmel-aes.c 2583 */;
	struct platform_device *cocci_id/* drivers/crypto/atmel-aes.c 2581 */;
	const struct of_device_id cocci_id/* drivers/crypto/atmel-aes.c 2575 */[];
	irqreturn_t cocci_id/* drivers/crypto/atmel-aes.c 2431 */;
	dma_cap_mask_t cocci_id/* drivers/crypto/atmel-aes.c 2383 */;
	struct at_dma_slave *cocci_id/* drivers/crypto/atmel-aes.c 2382 */;
	struct crypto_platform_data *cocci_id/* drivers/crypto/atmel-aes.c 2380 */;
	struct dma_chan *cocci_id/* drivers/crypto/atmel-aes.c 2367 */;
	void *cocci_id/* drivers/crypto/atmel-aes.c 2350 */;
	const char *cocci_id/* drivers/crypto/atmel-aes.c 235 */;
	char *cocci_id/* drivers/crypto/atmel-aes.c 235 */;
	struct atmel_aes_drv cocci_id/* drivers/crypto/atmel-aes.c 229 */;
	struct atmel_aes_authenc_ctx cocci_id/* drivers/crypto/atmel-aes.c 2258 */;
	struct aead_alg cocci_id/* drivers/crypto/atmel-aes.c 2242 */[];
	struct atmel_aes_drv {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/atmel-aes.c 224 */;
	struct aead_request *cocci_id/* drivers/crypto/atmel-aes.c 2237 */;
	int cocci_id/* drivers/crypto/atmel-aes.c 2237 */;
	bool cocci_id/* drivers/crypto/atmel-aes.c 2205 */;
	u32 cocci_id/* drivers/crypto/atmel-aes.c 2204 */;
	struct atmel_aes_base_ctx *cocci_id/* drivers/crypto/atmel-aes.c 2203 */;
	struct crypto_aead *cocci_id/* drivers/crypto/atmel-aes.c 2202 */;
	unsigned long cocci_id/* drivers/crypto/atmel-aes.c 2199 */;
	struct atmel_aes_authenc_ctx *cocci_id/* drivers/crypto/atmel-aes.c 2193 */;
	struct atmel_aes_authenc_reqctx cocci_id/* drivers/crypto/atmel-aes.c 2159 */;
	unsigned int cocci_id/* drivers/crypto/atmel-aes.c 2153 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/atmel-aes.c 2115 */;
	const u8 *cocci_id/* drivers/crypto/atmel-aes.c 2111 */;
	u32 cocci_id/* drivers/crypto/atmel-aes.c 2089 */[SHA512_DIGEST_SIZE / sizeof(u32)];
	__be32 cocci_id/* drivers/crypto/atmel-aes.c 2034 */[AES_BLOCK_SIZE / sizeof(u32)];
	struct scatterlist *cocci_id/* drivers/crypto/atmel-aes.c 2033 */;
	struct atmel_aes_authenc_reqctx *cocci_id/* drivers/crypto/atmel-aes.c 1981 */;
	struct atmel_aes_dev *cocci_id/* drivers/crypto/atmel-aes.c 1978 */;
	void cocci_id/* drivers/crypto/atmel-aes.c 1978 */;
	int cocci_id/* drivers/crypto/atmel-aes.c 1975 */(struct atmel_aes_dev *dd,
							  int err,
							  bool is_async);
	int cocci_id/* drivers/crypto/atmel-aes.c 1974 */(struct atmel_aes_dev *dd);
	struct atmel_aes_xts_ctx cocci_id/* drivers/crypto/atmel-aes.c 1953 */;
	u8 cocci_id/* drivers/crypto/atmel-aes.c 1891 */;
	const __le32 cocci_id/* drivers/crypto/atmel-aes.c 1879 */[AES_BLOCK_SIZE / sizeof(u32)];
	u32 cocci_id/* drivers/crypto/atmel-aes.c 1878 */[AES_BLOCK_SIZE / sizeof(u32)];
	struct atmel_aes_xts_ctx *cocci_id/* drivers/crypto/atmel-aes.c 1840 */;
	struct atmel_aes_gcm_ctx cocci_id/* drivers/crypto/atmel-aes.c 1831 */;
	struct atmel_aes_dev {
		struct list_head list;
		unsigned long phys_base;
		void __iomem *io_base;
		struct crypto_async_request *areq;
		struct atmel_aes_base_ctx *ctx;
		bool is_async;
		atmel_aes_fn_t resume;
		atmel_aes_fn_t cpu_transfer_complete;
		struct device *dev;
		struct clk *iclk;
		int irq;
		unsigned long flags;
		spinlock_t lock;
		struct crypto_queue queue;
		struct tasklet_struct done_task;
		struct tasklet_struct queue_task;
		size_t total;
		size_t datalen;
		u32 *data;
		struct atmel_aes_dma src;
		struct atmel_aes_dma dst;
		size_t buflen;
		void *buf;
		struct scatterlist aligned_sg;
		struct scatterlist *real_dst;
		struct atmel_aes_caps caps;
		u32 hw_version;
	} cocci_id/* drivers/crypto/atmel-aes.c 183 */;
	struct aead_alg cocci_id/* drivers/crypto/atmel-aes.c 1816 */;
	struct atmel_aes_dma {
		struct dma_chan *chan;
		struct scatterlist *sg;
		int nents;
		unsigned int remainder;
		unsigned int sg_len;
	} cocci_id/* drivers/crypto/atmel-aes.c 175 */;
	struct atmel_aes_authenc_reqctx {
		struct atmel_aes_reqctx base;
		struct scatterlist src[2];
		struct scatterlist dst[2];
		size_t textlen;
		u32 digest[SHA512_DIGEST_SIZE / sizeof(u32)];
		struct ahash_request auth_req;
	} cocci_id/* drivers/crypto/atmel-aes.c 162 */;
	__be32 cocci_id/* drivers/crypto/atmel-aes.c 1585 */;
	struct atmel_aes_reqctx {
		unsigned long mode;
		u8 lastc[AES_BLOCK_SIZE];
	} cocci_id/* drivers/crypto/atmel-aes.c 156 */;
	__be64 *cocci_id/* drivers/crypto/atmel-aes.c 1552 */;
	const void *cocci_id/* drivers/crypto/atmel-aes.c 1529 */;
	struct atmel_aes_authenc_ctx {
		struct atmel_aes_base_ctx base;
		struct atmel_sha_authenc_ctx *auth;
	} cocci_id/* drivers/crypto/atmel-aes.c 150 */;
	const __be32 *cocci_id/* drivers/crypto/atmel-aes.c 1465 */;
	__be32 *cocci_id/* drivers/crypto/atmel-aes.c 1465 */;
	const u32 *cocci_id/* drivers/crypto/atmel-aes.c 1464 */;
	struct atmel_aes_gcm_ctx *cocci_id/* drivers/crypto/atmel-aes.c 1457 */;
	int cocci_id/* drivers/crypto/atmel-aes.c 1442 */(struct atmel_aes_dev *dd,
							  const u32 *data,
							  size_t datalen,
							  const __be32 *ghash_in,
							  __be32 *ghash_out,
							  atmel_aes_fn_t resume);
	struct atmel_aes_xts_ctx {
		struct atmel_aes_base_ctx base;
		u32 key2[AES_KEYSIZE_256 / sizeof(u32)];
	} cocci_id/* drivers/crypto/atmel-aes.c 143 */;
	struct skcipher_alg cocci_id/* drivers/crypto/atmel-aes.c 1420 */;
	struct atmel_aes_ctr_ctx cocci_id/* drivers/crypto/atmel-aes.c 1406 */;
	struct atmel_aes_ctx cocci_id/* drivers/crypto/atmel-aes.c 1281 */;
	struct skcipher_alg cocci_id/* drivers/crypto/atmel-aes.c 1274 */[];
	struct atmel_aes_gcm_ctx {
		struct atmel_aes_base_ctx base;
		struct scatterlist src[2];
		struct scatterlist dst[2];
		__be32 j0[AES_BLOCK_SIZE / sizeof(u32)];
		u32 tag[AES_BLOCK_SIZE / sizeof(u32)];
		__be32 ghash[AES_BLOCK_SIZE / sizeof(u32)];
		size_t textlen;
		const __be32 *ghash_in;
		__be32 *ghash_out;
		atmel_aes_fn_t ghash_resume;
	} cocci_id/* drivers/crypto/atmel-aes.c 127 */;
	struct atmel_aes_reqctx cocci_id/* drivers/crypto/atmel-aes.c 1268 */;
	struct atmel_aes_ctx *cocci_id/* drivers/crypto/atmel-aes.c 1266 */;
	struct atmel_aes_ctr_ctx {
		struct atmel_aes_base_ctx base;
		__be32 iv[AES_BLOCK_SIZE / sizeof(u32)];
		size_t offset;
		struct scatterlist src[2];
		struct scatterlist dst[2];
	} cocci_id/* drivers/crypto/atmel-aes.c 118 */;
	struct skcipher_request *cocci_id/* drivers/crypto/atmel-aes.c 1179 */;
	struct atmel_aes_ctx {
		struct atmel_aes_base_ctx base;
	} cocci_id/* drivers/crypto/atmel-aes.c 114 */;
	struct atmel_aes_reqctx *cocci_id/* drivers/crypto/atmel-aes.c 1101 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/atmel-aes.c 1099 */;
	u8 *cocci_id/* drivers/crypto/atmel-aes.c 1067 */;
	struct atmel_aes_base_ctx {
		struct atmel_aes_dev *dd;
		atmel_aes_fn_t start;
		int keylen;
		u32 key[AES_KEYSIZE_256 / sizeof(u32)];
		u16 block_size;
		bool is_aead;
	} cocci_id/* drivers/crypto/atmel-aes.c 105 */;
	u16 cocci_id/* drivers/crypto/atmel-aes.c 1043 */;
	int (*cocci_id/* drivers/crypto/atmel-aes.c 102 */)(struct atmel_aes_dev *);
	struct atmel_aes_ctr_ctx *cocci_id/* drivers/crypto/atmel-aes.c 1007 */;
}
