cocci_test_suite() {
	struct rsa_key cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 961 */;
	unsigned int cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 96 */;
	u16 cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 949 */;
	struct rsa_key *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 947 */;
	size_t cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 843 */;
	const char *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 839 */;
	char *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 839 */;
	struct hpre_asym_request {
		char *src;
		char *dst;
		struct hpre_sqe req;
		struct hpre_ctx *ctx;
		union {
			struct akcipher_request *rsa;
			struct kpp_request *dh;
		} areq;
		int err;
		int req_id;
		hpre_cb cb;
	} cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 81 */;
	struct crypto_akcipher *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 711 */;
	struct hpre_ctx {
		struct hisi_qp *qp;
		struct hpre_asym_request **req_list;
		spinlock_t req_lock;
		unsigned int key_sz;
		bool crt_g2_mode;
		struct idr req_idr;
		union {
			struct hpre_rsa_ctx rsa;
			struct hpre_dh_ctx dh;
		};
	} cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 68 */;
	const char **cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 626 */;
	size_t *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 626 */;
	struct dh cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 581 */;
	const void *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 577 */;
	struct device *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 555 */;
	struct hpre_dh_ctx {
		char *xa_p;
		dma_addr_t dma_xa_p;
		char *g;
		dma_addr_t dma_g;
	} cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 53 */;
	struct dh *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 514 */;
	struct crypto_kpp *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 449 */;
	u64 cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 430 */;
	struct akcipher_request *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 403 */;
	struct hpre_sqe *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 376 */;
	struct hisi_qp *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 373 */;
	void *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 373 */;
	void cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 373 */;
	struct hpre_rsa_ctx {
		char *pubkey;
		dma_addr_t dma_pubkey;
		char *prikey;
		dma_addr_t dma_prikey;
		char *crt_prikey;
		dma_addr_t dma_crt_prikey;
		struct crypto_akcipher *soft_tfm;
	} cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 37 */;
	struct kpp_request *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 350 */;
	void (*cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 35 */)(struct hpre_ctx *ctx,
									     void *sqe);
	bool cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 335 */;
	void **cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 291 */;
	dma_addr_t cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 261 */;
	enum dma_data_direction cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 182 */;
	dma_addr_t *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 178 */;
	struct scatterlist *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 177 */;
	struct hpre *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 150 */;
	struct hpre_ctx *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 121 */;
	struct hpre_asym_request *cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 119 */;
	int cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 119 */;
	struct hpre_ctx cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 1094 */;
	struct hpre_asym_request cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 1092 */;
	struct kpp_alg cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 1085 */;
	struct akcipher_alg cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 1064 */;
	unsigned long cocci_id/* drivers/crypto/hisilicon/hpre/hpre_crypto.c 100 */;
}
