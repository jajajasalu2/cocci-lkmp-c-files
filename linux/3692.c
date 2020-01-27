cocci_test_suite() {
	const u8 *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 996 */;
	struct mtk_aes_gcm_ctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 970 */;
	struct aead_request *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 967 */;
	struct mtk_aes_info {
		__le32 cmd[AES_MAX_CT_SIZE];
		__le32 tfm[2];
		__le32 state[AES_MAX_STATE_BUF_SIZE];
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 96 */;
	u32 cocci_id/* drivers/crypto/mediatek/mtk-aes.c 952 */[4];
	const u32 *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 896 */;
	struct mtk_aes_info *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 868 */;
	struct mtk_aes_ctx cocci_id/* drivers/crypto/mediatek/mtk-aes.c 758 */;
	struct skcipher_alg cocci_id/* drivers/crypto/mediatek/mtk-aes.c 751 */[];
	struct mtk_aes_reqctx cocci_id/* drivers/crypto/mediatek/mtk-aes.c 746 */;
	struct mtk_aes_ctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 744 */;
	struct skcipher_request *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 698 */;
	int cocci_id/* drivers/crypto/mediatek/mtk-aes.c 698 */;
	struct mtk_aes_reqctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 669 */;
	struct mtk_aes_base_ctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 668 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 667 */;
	u64 cocci_id/* drivers/crypto/mediatek/mtk-aes.c 665 */;
	u8 *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 615 */;
	struct mtk_aes_ctr_ctx cocci_id/* drivers/crypto/mediatek/mtk-aes.c 568 */;
	struct mtk_aes_ctr_ctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 565 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 511 */;
	u8 cocci_id/* drivers/crypto/mediatek/mtk-aes.c 510 */;
	void *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 454 */;
	struct mtk_desc *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 281 */;
	struct mtk_ring *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 280 */;
	struct mtk_aes_rec *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 264 */;
	struct mtk_cryp *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 263 */;
	__be32 *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 255 */;
	__le32 *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 247 */;
	const struct mtk_aes_dma *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 230 */;
	const struct mtk_aes_reqctx *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 224 */;
	u32 cocci_id/* drivers/crypto/mediatek/mtk-aes.c 201 */;
	struct mtk_aes_dma *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 193 */;
	bool cocci_id/* drivers/crypto/mediatek/mtk-aes.c 192 */;
	struct scatterlist *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 192 */;
	size_t cocci_id/* drivers/crypto/mediatek/mtk-aes.c 192 */;
	struct mtk_aes_drv cocci_id/* drivers/crypto/mediatek/mtk-aes.c 150 */;
	struct mtk_aes_drv {
		struct list_head dev_list;
		spinlock_t lock;
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 144 */;
	struct mtk_aes_gcm_ctx {
		struct mtk_aes_base_ctx base;
		u32 authsize;
		size_t textlen;
		struct crypto_skcipher *ctr;
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 135 */;
	struct mtk_aes_ctr_ctx {
		struct mtk_aes_base_ctx base;
		u32 iv[AES_BLOCK_SIZE / sizeof(u32)];
		size_t offset;
		struct scatterlist src[2];
		struct scatterlist dst[2];
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 126 */;
	struct mtk_aes_ctx {
		struct mtk_aes_base_ctx base;
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 122 */;
	struct mtk_aes_rec **cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1187 */;
	irqreturn_t cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1159 */;
	unsigned long cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1150 */;
	void cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1150 */;
	struct mtk_aes_gcm_ctx cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1137 */;
	struct aead_alg cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1121 */;
	struct crypto_aead *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1114 */;
	struct mtk_aes_base_ctx {
		struct mtk_cryp *cryp;
		u32 keylen;
		__le32 key[12];
		__le32 keymode;
		mtk_aes_fn start;
		struct mtk_aes_info info;
		dma_addr_t ct_dma;
		dma_addr_t tfm_dma;
		__le32 ct_hdr;
		u32 ct_size;
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 106 */;
	struct mtk_aes_reqctx {
		u64 mode;
	} cocci_id/* drivers/crypto/mediatek/mtk-aes.c 102 */;
	struct {
		u32 hash[4];
		u8 iv[8];
		struct crypto_wait wait;
		struct scatterlist sg[1];
		struct skcipher_request req;
	} *cocci_id/* drivers/crypto/mediatek/mtk-aes.c 1002 */;
}
