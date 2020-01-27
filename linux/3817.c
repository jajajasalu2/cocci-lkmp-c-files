cocci_test_suite() {
	unsigned long cocci_id/* drivers/crypto/picoxcell_crypto.c 942 */;
	struct spacc_ablk_ctx *cocci_id/* drivers/crypto/picoxcell_crypto.c 915 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/picoxcell_crypto.c 913 */;
	bool cocci_id/* drivers/crypto/picoxcell_crypto.c 911 */;
	struct spacc_aead {
		unsigned long ctrl_default;
		unsigned long type;
		struct aead_alg alg;
		struct spacc_engine *engine;
		struct list_head entry;
		int key_offs;
		int iv_offs;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 91 */;
	u32 cocci_id/* drivers/crypto/picoxcell_crypto.c 884 */;
	struct skcipher_request *cocci_id/* drivers/crypto/picoxcell_crypto.c 862 */;
	struct spacc_req *cocci_id/* drivers/crypto/picoxcell_crypto.c 860 */;
	struct spacc_req {
		struct list_head list;
		struct spacc_engine *engine;
		struct crypto_async_request *req;
		int result;
		bool is_encrypt;
		unsigned ctx_id;
		dma_addr_t src_addr,dst_addr;
		struct spacc_ddt *src_ddt,*dst_ddt;
		void (*complete)(struct spacc_req *req);
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 79 */;
	struct spacc_aead_ctx *cocci_id/* drivers/crypto/picoxcell_crypto.c 727 */;
	struct crypto_aead *cocci_id/* drivers/crypto/picoxcell_crypto.c 725 */;
	struct aead_request cocci_id/* drivers/crypto/picoxcell_crypto.c 715 */;
	struct spacc_aead *cocci_id/* drivers/crypto/picoxcell_crypto.c 700 */;
	struct aead_alg *cocci_id/* drivers/crypto/picoxcell_crypto.c 699 */;
	struct aead_request *cocci_id/* drivers/crypto/picoxcell_crypto.c 684 */;
	struct spacc_ddt {
		dma_addr_t p;
		u32 len;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 68 */;
	unsigned int cocci_id/* drivers/crypto/picoxcell_crypto.c 499 */;
	struct crypto_authenc_keys cocci_id/* drivers/crypto/picoxcell_crypto.c 461 */;
	const u8 *cocci_id/* drivers/crypto/picoxcell_crypto.c 457 */;
	enum dma_data_direction cocci_id/* drivers/crypto/picoxcell_crypto.c 444 */;
	struct scatterlist *cocci_id/* drivers/crypto/picoxcell_crypto.c 318 */;
	dma_addr_t *cocci_id/* drivers/crypto/picoxcell_crypto.c 277 */;
	dma_addr_t cocci_id/* drivers/crypto/picoxcell_crypto.c 262 */;
	struct spacc_ddt *cocci_id/* drivers/crypto/picoxcell_crypto.c 262 */;
	size_t cocci_id/* drivers/crypto/picoxcell_crypto.c 262 */;
	void cocci_id/* drivers/crypto/picoxcell_crypto.c 262 */;
	void __iomem *cocci_id/* drivers/crypto/picoxcell_crypto.c 220 */;
	struct spacc_generic_ctx *cocci_id/* drivers/crypto/picoxcell_crypto.c 219 */;
	const u32 *cocci_id/* drivers/crypto/picoxcell_crypto.c 213 */;
	unsigned cocci_id/* drivers/crypto/picoxcell_crypto.c 211 */;
	const void *cocci_id/* drivers/crypto/picoxcell_crypto.c 210 */;
	u32 __iomem *cocci_id/* drivers/crypto/picoxcell_crypto.c 210 */;
	struct spacc_aead cocci_id/* drivers/crypto/picoxcell_crypto.c 183 */;
	struct spacc_alg cocci_id/* drivers/crypto/picoxcell_crypto.c 178 */;
	struct platform_driver cocci_id/* drivers/crypto/picoxcell_crypto.c 1775 */;
	int cocci_id/* drivers/crypto/picoxcell_crypto.c 174 */(struct spacc_req *req);
	struct spacc_ddt cocci_id/* drivers/crypto/picoxcell_crypto.c 1651 */;
	struct spacc_aead_ctx {
		struct spacc_generic_ctx generic;
		u8 cipher_key[AES_MAX_KEY_SIZE];
		u8 hash_ctx[SPACC_CRYPTO_IPSEC_HASH_PG_SZ];
		u8 cipher_key_len;
		u8 hash_key_len;
		struct crypto_aead *sw_cipher;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 165 */;
	struct device_node *cocci_id/* drivers/crypto/picoxcell_crypto.c 1602 */;
	struct resource *cocci_id/* drivers/crypto/picoxcell_crypto.c 1601 */;
	struct platform_device *cocci_id/* drivers/crypto/picoxcell_crypto.c 1598 */;
	const struct of_device_id cocci_id/* drivers/crypto/picoxcell_crypto.c 1590 */[];
	struct spacc_ablk_ctx {
		struct spacc_generic_ctx generic;
		u8 key[AES_MAX_KEY_SIZE];
		u8 key_len;
		struct crypto_sync_skcipher *sw_cipher;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 153 */;
	struct spacc_generic_ctx {
		struct spacc_engine *engine;
		int flags;
		int key_offs;
		int iv_offs;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 145 */;
	struct spacc_aead_ctx cocci_id/* drivers/crypto/picoxcell_crypto.c 1395 */;
	struct spacc_aead cocci_id/* drivers/crypto/picoxcell_crypto.c 1377 */[];
	struct spacc_alg {
		unsigned long ctrl_default;
		unsigned long type;
		struct skcipher_alg alg;
		struct spacc_engine *engine;
		struct list_head entry;
		int key_offs;
		int iv_offs;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 134 */;
	struct spacc_ablk_ctx cocci_id/* drivers/crypto/picoxcell_crypto.c 1244 */;
	struct spacc_alg cocci_id/* drivers/crypto/picoxcell_crypto.c 1231 */[];
	const char *cocci_id/* drivers/crypto/picoxcell_crypto.c 1212 */;
	char *cocci_id/* drivers/crypto/picoxcell_crypto.c 1203 */;
	struct device_attribute *cocci_id/* drivers/crypto/picoxcell_crypto.c 1202 */;
	ssize_t cocci_id/* drivers/crypto/picoxcell_crypto.c 1201 */;
	struct device *cocci_id/* drivers/crypto/picoxcell_crypto.c 1196 */;
	const struct dev_pm_ops cocci_id/* drivers/crypto/picoxcell_crypto.c 1190 */;
	struct crypto_alg *cocci_id/* drivers/crypto/picoxcell_crypto.c 1138 */;
	struct timer_list *cocci_id/* drivers/crypto/picoxcell_crypto.c 1129 */;
	irqreturn_t cocci_id/* drivers/crypto/picoxcell_crypto.c 1118 */;
	void *cocci_id/* drivers/crypto/picoxcell_crypto.c 1118 */;
	struct spacc_alg *cocci_id/* drivers/crypto/picoxcell_crypto.c 1059 */;
	struct skcipher_alg *cocci_id/* drivers/crypto/picoxcell_crypto.c 1058 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/picoxcell_crypto.c 1057 */;
	int cocci_id/* drivers/crypto/picoxcell_crypto.c 1055 */;
	struct spacc_req cocci_id/* drivers/crypto/picoxcell_crypto.c 1034 */;
	struct spacc_engine *cocci_id/* drivers/crypto/picoxcell_crypto.c 1018 */;
	struct spacc_engine {
		void __iomem *regs;
		struct list_head pending;
		int next_ctx;
		spinlock_t hw_lock;
		int in_flight;
		struct list_head completed;
		struct list_head in_progress;
		struct tasklet_struct complete;
		unsigned long fifo_sz;
		void __iomem *cipher_ctx_base;
		void __iomem *hash_key_base;
		struct spacc_alg *algs;
		unsigned num_algs;
		struct list_head registered_algs;
		struct spacc_aead *aeads;
		unsigned num_aeads;
		struct list_head registered_aeads;
		size_t cipher_pg_sz;
		size_t hash_pg_sz;
		const char *name;
		struct clk *clk;
		struct device *dev;
		unsigned max_ctxs;
		struct timer_list packet_timeout;
		unsigned stat_irq_thresh;
		struct dma_pool *req_pool;
	} cocci_id/* drivers/crypto/picoxcell_crypto.c 101 */;
}