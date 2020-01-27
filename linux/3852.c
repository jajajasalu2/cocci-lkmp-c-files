cocci_test_suite() {
	unsigned cocci_id/* drivers/crypto/sahara.c 839 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/sahara.c 764 */;
	void cocci_id/* drivers/crypto/sahara.c 764 */;
	struct sahara_aes_reqctx cocci_id/* drivers/crypto/sahara.c 759 */;
	const char *cocci_id/* drivers/crypto/sahara.c 749 */;
	struct sahara_ctx *cocci_id/* drivers/crypto/sahara.c 727 */;
	struct skcipher_request *cocci_id/* drivers/crypto/sahara.c 725 */;
	int cocci_id/* drivers/crypto/sahara.c 725 */;
	struct sahara_aes_reqctx *cocci_id/* drivers/crypto/sahara.c 635 */;
	unsigned long cocci_id/* drivers/crypto/sahara.c 633 */;
	unsigned int cocci_id/* drivers/crypto/sahara.c 601 */;
	const u8 *cocci_id/* drivers/crypto/sahara.c 600 */;
	struct scatterlist *cocci_id/* drivers/crypto/sahara.c 444 */;
	u16 cocci_id/* drivers/crypto/sahara.c 323 */;
	u8 cocci_id/* drivers/crypto/sahara.c 322 */;
	const char *cocci_id/* drivers/crypto/sahara.c 318 */[4];
	const char *cocci_id/* drivers/crypto/sahara.c 303 */[12];
	const char *cocci_id/* drivers/crypto/sahara.c 292 */[8];
	const char *cocci_id/* drivers/crypto/sahara.c 266 */[16];
	u32 cocci_id/* drivers/crypto/sahara.c 260 */;
	struct sahara_dev *cocci_id/* drivers/crypto/sahara.c 229 */;
	struct sahara_dev {
		struct device *device;
		unsigned int version;
		void __iomem *regs_base;
		struct clk *clk_ipg;
		struct clk *clk_ahb;
		struct mutex queue_mutex;
		struct task_struct *kthread;
		struct completion dma_completion;
		struct sahara_ctx *ctx;
		struct crypto_queue queue;
		unsigned long flags;
		struct sahara_hw_desc *hw_desc[SAHARA_MAX_HW_DESC];
		dma_addr_t hw_phys_desc[SAHARA_MAX_HW_DESC];
		u8 *key_base;
		dma_addr_t key_phys_base;
		u8 *iv_base;
		dma_addr_t iv_phys_base;
		u8 *context_base;
		dma_addr_t context_phys_base;
		struct sahara_hw_link *hw_link[SAHARA_MAX_HW_LINK];
		dma_addr_t hw_phys_link[SAHARA_MAX_HW_LINK];
		size_t total;
		struct scatterlist *in_sg;
		int nb_in_sg;
		struct scatterlist *out_sg;
		int nb_out_sg;
		u32 error;
	} cocci_id/* drivers/crypto/sahara.c 191 */;
	struct sahara_sha_reqctx {
		u8 buf[SAHARA_MAX_SHA_BLOCK_SIZE];
		u8 rembuf[SAHARA_MAX_SHA_BLOCK_SIZE];
		u8 context[SHA256_DIGEST_SIZE + 4];
		unsigned int mode;
		unsigned int digest_size;
		unsigned int context_size;
		unsigned int buf_cnt;
		unsigned int sg_in_idx;
		struct scatterlist *in_sg;
		struct scatterlist in_sg_chain[2];
		size_t total;
		unsigned int last;
		unsigned int first;
		unsigned int active;
	} cocci_id/* drivers/crypto/sahara.c 174 */;
	struct platform_driver cocci_id/* drivers/crypto/sahara.c 1548 */;
	struct sahara_aes_reqctx {
		unsigned long mode;
	} cocci_id/* drivers/crypto/sahara.c 152 */;
	struct sahara_hw_link cocci_id/* drivers/crypto/sahara.c 1456 */;
	struct sahara_ctx {
		unsigned long flags;
		int keylen;
		u8 key[AES_KEYSIZE_128];
		struct crypto_sync_skcipher *fallback;
	} cocci_id/* drivers/crypto/sahara.c 143 */;
	struct sahara_hw_desc cocci_id/* drivers/crypto/sahara.c 1425 */;
	struct platform_device *cocci_id/* drivers/crypto/sahara.c 1378 */;
	const struct of_device_id cocci_id/* drivers/crypto/sahara.c 1371 */[];
	struct sahara_hw_link {
		u32 len;
		u32 p;
		u32 next;
	} cocci_id/* drivers/crypto/sahara.c 137 */;
	const struct platform_device_id cocci_id/* drivers/crypto/sahara.c 1365 */[];
	irqreturn_t cocci_id/* drivers/crypto/sahara.c 1283 */;
	void *cocci_id/* drivers/crypto/sahara.c 1283 */;
	struct sahara_hw_desc {
		u32 hdr;
		u32 len1;
		u32 p1;
		u32 len2;
		u32 p2;
		u32 next;
	} cocci_id/* drivers/crypto/sahara.c 128 */;
	struct ahash_alg cocci_id/* drivers/crypto/sahara.c 1231 */[];
	struct sahara_ctx cocci_id/* drivers/crypto/sahara.c 1199 */;
	struct skcipher_alg cocci_id/* drivers/crypto/sahara.c 1192 */[];
	struct sahara_sha_reqctx cocci_id/* drivers/crypto/sahara.c 1186 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/sahara.c 1183 */;
	const void *cocci_id/* drivers/crypto/sahara.c 1174 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/sahara.c 1118 */;
	struct sahara_sha_reqctx *cocci_id/* drivers/crypto/sahara.c 1093 */;
	struct ahash_request *cocci_id/* drivers/crypto/sahara.c 1069 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/sahara.c 1051 */;
}
