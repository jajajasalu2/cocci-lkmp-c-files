cocci_test_suite() {
	const struct kernel_param_ops cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 97 */;
	const struct kernel_param *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 82 */;
	struct hisi_zip_ctx {
#define QPC_COMP 0
#define QPC_DECOMP 1
		struct hisi_zip_qp_ctx qp_ctx[HZIP_CTX_Q_NUM];
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 76 */;
	struct hisi_zip_qp_ctx {
		struct hisi_qp *qp;
		struct hisi_zip_sqe zip_sqe;
		struct hisi_zip_req_q req_q;
		struct hisi_acc_sgl_pool *sgl_pool;
		struct hisi_zip *zip_dev;
		struct hisi_zip_ctx *ctx;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 67 */;
	struct hisi_zip_ctx cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 652 */;
	struct acomp_alg cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 642 */;
	struct hisi_zip_req_q {
		struct hisi_zip_req *q;
		unsigned long *req_bitmap;
		rwlock_t req_lock;
		u16 size;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 60 */;
	dma_addr_t cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 542 */;
	struct hisi_acc_sgl_pool *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 541 */;
	struct scatterlist *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 478 */[2];
	bool cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 473 */;
	struct hisi_zip_req {
		struct acomp_req *req;
		struct scatterlist *src;
		struct scatterlist *dst;
		size_t slen;
		size_t dlen;
		struct hisi_acc_hw_sgl *hw_src;
		struct hisi_acc_hw_sgl *hw_dst;
		dma_addr_t dma_src;
		dma_addr_t dma_dst;
		int req_id;
	} cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 47 */;
	int cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 462 */[SPLIT_NUM];
	size_t cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 461 */[SPLIT_NUM];
	struct scatterlist **cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 458 */;
	size_t cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 444 */;
	char cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 437 */[HZIP_GZIP_HEAD_BUF];
	struct scatterlist *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 422 */;
	int cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 422 */;
	struct hisi_zip_ctx *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 414 */;
	struct crypto_acomp *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 412 */;
	const char *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 385 */;
	void (*cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 375 */)(struct hisi_qp *, void *);
	struct device *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 348 */;
	struct acomp_req *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 347 */;
	struct hisi_zip_req *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 346 */;
	struct hisi_zip_req_q *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 345 */;
	struct hisi_zip_qp_ctx *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 344 */;
	struct hisi_zip_sqe *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 343 */;
	struct hisi_qp *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 341 */;
	void *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 341 */;
	void cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 341 */;
	enum hisi_zip_alg_type{HZIP_ALG_TYPE_COMP=0, HZIP_ALG_TYPE_DECOMP=1,} cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 30 */;
	const u8 cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 28 */[HZIP_GZIP_HEAD_SIZE];
	const u8 cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 27 */[HZIP_ZLIB_HEAD_SIZE];
	struct hisi_zip_req cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 258 */;
	long cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 248 */;
	u8 cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 223 */;
	u32 cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 221 */;
	const u8 *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 221 */;
	u16 *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 208 */;
	u16 cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 206 */;
	struct hisi_zip *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 168 */;
	struct hisi_qm *cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 135 */;
	struct hisi_zip_sqe cocci_id/* drivers/crypto/hisilicon/zip/zip_crypto.c 124 */;
}
