cocci_test_suite() {
	const u32 *cocci_id/* drivers/crypto/stm32/stm32-hash.c 992 */;
	const void *cocci_id/* drivers/crypto/stm32/stm32-hash.c 987 */;
	enum stm32_hash_data_format{HASH_DATA_32_BITS=0x0, HASH_DATA_16_BITS=0x1, HASH_DATA_8_BITS=0x2, HASH_DATA_1_BIT=0x3,} cocci_id/* drivers/crypto/stm32/stm32-hash.c 98 */;
	struct ahash_request cocci_id/* drivers/crypto/stm32/stm32-hash.c 858 */;
	struct crypto_engine *cocci_id/* drivers/crypto/stm32/stm32-hash.c 856 */;
	int cocci_id/* drivers/crypto/stm32/stm32-hash.c 826 */(struct crypto_engine *engine,
								void *areq);
	u32 cocci_id/* drivers/crypto/stm32/stm32-hash.c 770 */;
	unsigned int cocci_id/* drivers/crypto/stm32/stm32-hash.c 751 */;
	u32 *cocci_id/* drivers/crypto/stm32/stm32-hash.c 750 */;
	struct ahash_request *cocci_id/* drivers/crypto/stm32/stm32-hash.c 747 */;
	struct stm32_hash_dev *cocci_id/* drivers/crypto/stm32/stm32-hash.c 657 */;
	struct scatterlist *cocci_id/* drivers/crypto/stm32/stm32-hash.c 655 */;
	bool cocci_id/* drivers/crypto/stm32/stm32-hash.c 653 */;
	struct scatterlist cocci_id/* drivers/crypto/stm32/stm32-hash.c 543 */[1];
	struct dma_slave_config cocci_id/* drivers/crypto/stm32/stm32-hash.c 509 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/stm32/stm32-hash.c 479 */;
	void *cocci_id/* drivers/crypto/stm32/stm32-hash.c 467 */;
	dma_cookie_t cocci_id/* drivers/crypto/stm32/stm32-hash.c 411 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/crypto/stm32/stm32-hash.c 410 */;
	size_t cocci_id/* drivers/crypto/stm32/stm32-hash.c 297 */;
	struct stm32_hash_request_ctx *cocci_id/* drivers/crypto/stm32/stm32-hash.c 295 */;
	void cocci_id/* drivers/crypto/stm32/stm32-hash.c 295 */;
	void cocci_id/* drivers/crypto/stm32/stm32-hash.c 192 */(void *param);
	struct stm32_hash_drv cocci_id/* drivers/crypto/stm32/stm32-hash.c 187 */;
	struct stm32_hash_drv {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 182 */;
	struct platform_driver cocci_id/* drivers/crypto/stm32/stm32-hash.c 1611 */;
	struct stm32_hash_dev {
		struct list_head list;
		struct device *dev;
		struct clk *clk;
		struct reset_control *rst;
		void __iomem *io_base;
		phys_addr_t phys_base;
		u32 dma_mode;
		u32 dma_maxburst;
		struct ahash_request *req;
		struct crypto_engine *engine;
		int err;
		unsigned long flags;
		struct dma_chan *dma_lch;
		struct completion dma_completion;
		const struct stm32_hash_pdata *pdata;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 160 */;
	struct stm32_hash_pdata {
		struct stm32_hash_algs_info *algs_info;
		size_t algs_info_size;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 155 */;
	struct stm32_hash_algs_info {
		struct ahash_alg *algs_list;
		size_t size;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 150 */;
	struct resource *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1434 */;
	struct platform_device *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1430 */;
	struct device *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1413 */;
	const struct of_device_id cocci_id/* drivers/crypto/stm32/stm32-hash.c 1398 */[];
	const struct stm32_hash_pdata cocci_id/* drivers/crypto/stm32/stm32-hash.c 1377 */;
	struct stm32_hash_algs_info cocci_id/* drivers/crypto/stm32/stm32-hash.c 1370 */[];
	struct stm32_hash_request_ctx {
		struct stm32_hash_dev *hdev;
		unsigned long flags;
		unsigned long op;
		u8 digest[SHA256_DIGEST_SIZE]__aligned(sizeof(u32));
		size_t digcnt;
		size_t bufcnt;
		size_t buflen;
		struct scatterlist *sg;
		unsigned int offset;
		unsigned int total;
		struct scatterlist sg_key;
		dma_addr_t dma_addr;
		size_t dma_ct;
		int nents;
		u8 data_type;
		u8 buffer[HASH_BUFLEN]__aligned(sizeof(u32));
		u32 *hw_context;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 122 */;
	struct stm32_hash_ctx cocci_id/* drivers/crypto/stm32/stm32-hash.c 1140 */;
	struct stm32_hash_request_ctx cocci_id/* drivers/crypto/stm32/stm32-hash.c 1132 */;
	struct stm32_hash_ctx {
		struct crypto_engine_ctx enginectx;
		struct stm32_hash_dev *hdev;
		unsigned long flags;
		u8 key[HASH_MAX_KEY_SIZE];
		int keylen;
	} cocci_id/* drivers/crypto/stm32/stm32-hash.c 113 */;
	struct ahash_alg cocci_id/* drivers/crypto/stm32/stm32-hash.c 1121 */[];
	irqreturn_t cocci_id/* drivers/crypto/stm32/stm32-hash.c 1103 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1053 */;
	int cocci_id/* drivers/crypto/stm32/stm32-hash.c 1053 */;
	struct stm32_hash_ctx *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1037 */;
	const char *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1035 */;
	const u8 *cocci_id/* drivers/crypto/stm32/stm32-hash.c 1020 */;
}
