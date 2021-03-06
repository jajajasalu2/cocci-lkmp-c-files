cocci_test_suite() {
	struct atmel_sha_reqctx {
		struct atmel_sha_dev *dd;
		unsigned long flags;
		unsigned long op;
		u8 digest[SHA512_DIGEST_SIZE]__aligned(sizeof(u32));
		u64 digcnt[2];
		size_t bufcnt;
		size_t buflen;
		dma_addr_t dma_addr;
		struct scatterlist *sg;
		unsigned int offset;
		unsigned int total;
		size_t block_size;
		size_t hash_size;
		u8 buffer[SHA_BUFFER_LEN + SHA512_BLOCK_SIZE]__aligned(sizeof(u32));
	} cocci_id/* drivers/crypto/atmel-sha.c 87 */;
	struct atmel_sha_dev cocci_id/* drivers/crypto/atmel-sha.c 81 */;
	struct atmel_sha_caps {
		bool has_dma;
		bool has_dualbuff;
		bool has_sha224;
		bool has_sha_384_512;
		bool has_uihv;
		bool has_hmac;
	} cocci_id/* drivers/crypto/atmel-sha.c 72 */;
	struct scatterlist cocci_id/* drivers/crypto/atmel-sha.c 642 */[2];
	dma_addr_t cocci_id/* drivers/crypto/atmel-sha.c 637 */;
	void *cocci_id/* drivers/crypto/atmel-sha.c 627 */;
	u64 cocci_id/* drivers/crypto/atmel-sha.c 364 */[2];
	__be64 cocci_id/* drivers/crypto/atmel-sha.c 363 */[2];
	struct atmel_sha_reqctx *cocci_id/* drivers/crypto/atmel-sha.c 302 */;
	size_t cocci_id/* drivers/crypto/atmel-sha.c 302 */;
	struct platform_driver cocci_id/* drivers/crypto/atmel-sha.c 2894 */;
	struct resource *cocci_id/* drivers/crypto/atmel-sha.c 2747 */;
	struct device *cocci_id/* drivers/crypto/atmel-sha.c 2746 */;
	struct device_node *cocci_id/* drivers/crypto/atmel-sha.c 2715 */;
	struct platform_device *cocci_id/* drivers/crypto/atmel-sha.c 2713 */;
	const struct of_device_id cocci_id/* drivers/crypto/atmel-sha.c 2706 */[];
	dma_cap_mask_t cocci_id/* drivers/crypto/atmel-sha.c 2626 */;
	struct crypto_platform_data *cocci_id/* drivers/crypto/atmel-sha.c 2624 */;
	struct at_dma_slave *cocci_id/* drivers/crypto/atmel-sha.c 2613 */;
	char cocci_id/* drivers/crypto/atmel-sha.c 258 */[16];
	struct atmel_sha_dev *cocci_id/* drivers/crypto/atmel-sha.c 2527 */;
	struct atmel_sha_authenc_reqctx *cocci_id/* drivers/crypto/atmel-sha.c 2525 */;
	struct ahash_request *cocci_id/* drivers/crypto/atmel-sha.c 2523 */;
	void cocci_id/* drivers/crypto/atmel-sha.c 2523 */;
	u32 cocci_id/* drivers/crypto/atmel-sha.c 2515 */;
	struct atmel_aes_dev *cocci_id/* drivers/crypto/atmel-sha.c 2470 */;
	atmel_aes_authenc_fn_t cocci_id/* drivers/crypto/atmel-sha.c 2469 */;
	u32 *cocci_id/* drivers/crypto/atmel-sha.c 2468 */;
	unsigned int cocci_id/* drivers/crypto/atmel-sha.c 2468 */;
	struct atmel_sha_hmac_ctx *cocci_id/* drivers/crypto/atmel-sha.c 2405 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/atmel-sha.c 2404 */;
	struct scatterlist *cocci_id/* drivers/crypto/atmel-sha.c 2397 */;
	struct atmel_sha_ctx *cocci_id/* drivers/crypto/atmel-sha.c 2373 */;
	const u8 *cocci_id/* drivers/crypto/atmel-sha.c 2350 */;
	struct atmel_sha_authenc_ctx *cocci_id/* drivers/crypto/atmel-sha.c 2341 */;
	const char *cocci_id/* drivers/crypto/atmel-sha.c 2288 */;
	unsigned long cocci_id/* drivers/crypto/atmel-sha.c 2283 */;
	struct atmel_sha_authenc_reqctx cocci_id/* drivers/crypto/atmel-sha.c 2279 */;
	struct atmel_sha_ctx cocci_id/* drivers/crypto/atmel-sha.c 2270 */;
	bool cocci_id/* drivers/crypto/atmel-sha.c 2268 */;
	int cocci_id/* drivers/crypto/atmel-sha.c 2244 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/atmel-sha.c 2243 */;
	struct atmel_sha_authenc_reqctx {
		struct atmel_sha_reqctx base;
		atmel_aes_authenc_fn_t cb;
		struct atmel_aes_dev *aes_dev;
		struct scatterlist *assoc;
		u32 assoclen;
		u32 textlen;
		u32 *digest;
		unsigned int digestlen;
	} cocci_id/* drivers/crypto/atmel-sha.c 2227 */;
	struct atmel_sha_authenc_ctx {
		struct crypto_ahash *tfm;
	} cocci_id/* drivers/crypto/atmel-sha.c 2223 */;
	int cocci_id/* drivers/crypto/atmel-sha.c 2220 */(struct atmel_sha_dev *dd);
	struct atmel_sha_hmac_ctx cocci_id/* drivers/crypto/atmel-sha.c 2105 */;
	u8 *cocci_id/* drivers/crypto/atmel-sha.c 1826 */;
	int cocci_id/* drivers/crypto/atmel-sha.c 1738 */(struct atmel_sha_dev *dd,
							  const u8 *key,
							  unsigned int keylen);
	int cocci_id/* drivers/crypto/atmel-sha.c 1736 */(struct atmel_sha_dev *dd,
							  atmel_sha_fn_t resume);
	struct atmel_sha_hmac_ctx {
		struct atmel_sha_ctx base;
		struct atmel_sha_hmac_key hkey;
		u32 ipad[SHA512_BLOCK_SIZE / sizeof(u32)];
		u32 opad[SHA512_BLOCK_SIZE / sizeof(u32)];
		atmel_sha_fn_t resume;
	} cocci_id/* drivers/crypto/atmel-sha.c 1727 */;
	unsigned int *cocci_id/* drivers/crypto/atmel-sha.c 1716 */;
	const u8 **cocci_id/* drivers/crypto/atmel-sha.c 1715 */;
	const struct atmel_sha_hmac_key *cocci_id/* drivers/crypto/atmel-sha.c 1714 */;
	char *cocci_id/* drivers/crypto/atmel-sha.c 169 */;
	struct atmel_sha_hmac_key *cocci_id/* drivers/crypto/atmel-sha.c 1683 */;
	struct atmel_sha_hmac_key {
		bool valid;
		unsigned int keylen;
		u8 buffer[SHA512_BLOCK_SIZE];
		u8 *keydup;
	} cocci_id/* drivers/crypto/atmel-sha.c 1676 */;
	atmel_sha_fn_t cocci_id/* drivers/crypto/atmel-sha.c 1653 */;
	const void *cocci_id/* drivers/crypto/atmel-sha.c 1651 */;
	struct atmel_sha_drv cocci_id/* drivers/crypto/atmel-sha.c 163 */;
	struct atmel_sha_drv {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/atmel-sha.c 158 */;
	const u32 *cocci_id/* drivers/crypto/atmel-sha.c 1571 */;
	dma_cookie_t cocci_id/* drivers/crypto/atmel-sha.c 1517 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/atmel-sha.c 1516 */;
	struct dma_chan *cocci_id/* drivers/crypto/atmel-sha.c 1515 */;
	struct dma_slave_config *cocci_id/* drivers/crypto/atmel-sha.c 1514 */;
	struct atmel_sha_dma *cocci_id/* drivers/crypto/atmel-sha.c 1492 */;
	irqreturn_t cocci_id/* drivers/crypto/atmel-sha.c 1429 */;
	struct ahash_alg cocci_id/* drivers/crypto/atmel-sha.c 1302 */;
	struct atmel_sha_dev {
		struct list_head list;
		unsigned long phys_base;
		struct device *dev;
		struct clk *iclk;
		int irq;
		void __iomem *io_base;
		spinlock_t lock;
		int err;
		struct tasklet_struct done_task;
		struct tasklet_struct queue_task;
		unsigned long flags;
		struct crypto_queue queue;
		struct ahash_request *req;
		bool is_async;
		bool force_complete;
		atmel_sha_fn_t resume;
		atmel_sha_fn_t cpu_transfer_complete;
		struct atmel_sha_dma dma_lch_in;
		struct atmel_sha_caps caps;
		struct scatterlist tmp;
		u32 hw_version;
	} cocci_id/* drivers/crypto/atmel-sha.c 128 */;
	struct ahash_alg cocci_id/* drivers/crypto/atmel-sha.c 1251 */[];
	struct atmel_sha_reqctx cocci_id/* drivers/crypto/atmel-sha.c 1245 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/atmel-sha.c 1240 */;
	const struct atmel_sha_reqctx *cocci_id/* drivers/crypto/atmel-sha.c 1226 */;
	struct atmel_sha_dma {
		struct dma_chan *chan;
		struct dma_slave_config dma_conf;
		struct scatterlist *sg;
		int nents;
		unsigned int last_sg_length;
	} cocci_id/* drivers/crypto/atmel-sha.c 120 */;
	struct atmel_sha_ctx {
		struct atmel_sha_dev *dd;
		atmel_sha_fn_t start;
		unsigned long flags;
	} cocci_id/* drivers/crypto/atmel-sha.c 111 */;
	int (*cocci_id/* drivers/crypto/atmel-sha.c 109 */)(struct atmel_sha_dev *);
}
