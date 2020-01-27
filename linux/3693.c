cocci_test_suite() {
	struct mtk_sha_hmac_ctx {
		struct crypto_shash *shash;
		u8 ipad[SHA512_BLOCK_SIZE]__aligned(sizeof(u32));
		u8 opad[SHA512_BLOCK_SIZE]__aligned(sizeof(u32));
	} cocci_id/* drivers/crypto/mediatek/mtk-sha.c 98 */;
	struct mtk_sha_ctx cocci_id/* drivers/crypto/mediatek/mtk-sha.c 935 */;
	struct mtk_sha_reqctx cocci_id/* drivers/crypto/mediatek/mtk-sha.c 928 */;
	struct ahash_alg cocci_id/* drivers/crypto/mediatek/mtk-sha.c 918 */[];
	struct mtk_sha_hmac_ctx *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 912 */;
	struct mtk_sha_ctx *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 909 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 907 */;
	const char *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 849 */;
	const void *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 840 */;
	const struct mtk_sha_reqctx *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 834 */;
	void *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 832 */;
	const u8 *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 799 */;
	struct ahash_request *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 794 */;
	struct mtk_sha_reqctx {
		struct mtk_sha_info info;
		unsigned long flags;
		unsigned long op;
		u64 digcnt;
		size_t bufcnt;
		dma_addr_t dma_addr;
		__le32 ct_hdr;
		u32 ct_size;
		dma_addr_t ct_dma;
		dma_addr_t tfm_dma;
		struct scatterlist *sg;
		u32 offset;
		u32 total;
		size_t ds;
		size_t bs;
		u8 *buffer;
	} cocci_id/* drivers/crypto/mediatek/mtk-sha.c 74 */;
	struct mtk_sha_rec *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 737 */;
	u32 cocci_id/* drivers/crypto/mediatek/mtk-sha.c 703 */;
	struct mtk_sha_info {
		__le32 ctrl[2];
		__le32 cmd[3];
		__le32 tfm[2];
		__le32 digest[SHA_MAX_DIGEST_BUF_SIZE];
	} cocci_id/* drivers/crypto/mediatek/mtk-sha.c 67 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 654 */;
	u8 cocci_id/* drivers/crypto/mediatek/mtk-sha.c 650 */;
	u32 *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 622 */;
	__le32 *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 621 */;
	struct scatterlist *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 517 */;
	struct mtk_desc *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 427 */;
	dma_addr_t cocci_id/* drivers/crypto/mediatek/mtk-sha.c 422 */;
	struct crypto_ahash *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 374 */;
	struct mtk_sha_info *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 278 */;
	u64 cocci_id/* drivers/crypto/mediatek/mtk-sha.c 243 */;
	u64 cocci_id/* drivers/crypto/mediatek/mtk-sha.c 242 */[2];
	size_t cocci_id/* drivers/crypto/mediatek/mtk-sha.c 183 */;
	struct mtk_sha_reqctx *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 181 */;
	int *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 141 */;
	struct mtk_desc **cocci_id/* drivers/crypto/mediatek/mtk-sha.c 139 */;
	struct mtk_ring *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 138 */;
	void cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1347 */;
	struct mtk_cryp *cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1296 */;
	int cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1296 */;
	int cocci_id/* drivers/crypto/mediatek/mtk-sha.c 124 */(struct mtk_cryp *cryp,
								u8 id,
								struct ahash_request *req);
	struct mtk_sha_rec **cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1211 */;
	struct mtk_sha_drv cocci_id/* drivers/crypto/mediatek/mtk-sha.c 119 */;
	irqreturn_t cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1185 */;
	unsigned long cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1176 */;
	struct mtk_sha_drv {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/mediatek/mtk-sha.c 113 */;
	struct mtk_sha_ctx {
		struct mtk_cryp *cryp;
		unsigned long flags;
		u8 id;
		u8 buf[SHA_BUF_SIZE]__aligned(sizeof(u32));
		struct mtk_sha_hmac_ctx base[0];
	} cocci_id/* drivers/crypto/mediatek/mtk-sha.c 104 */;
	struct mtk_sha_hmac_ctx cocci_id/* drivers/crypto/mediatek/mtk-sha.c 1007 */;
}
