cocci_test_suite() {
	struct mv_cesa_aes_ctx cocci_id/* drivers/crypto/marvell/cipher.c 794 */;
	struct skcipher_alg cocci_id/* drivers/crypto/marvell/cipher.c 781 */;
	struct mv_cesa_op_ctx cocci_id/* drivers/crypto/marvell/cipher.c 774 */;
	struct mv_cesa_skcipher_req *cocci_id/* drivers/crypto/marvell/cipher.c 75 */;
	void cocci_id/* drivers/crypto/marvell/cipher.c 73 */;
	u32 cocci_id/* drivers/crypto/marvell/cipher.c 687 */;
	u32 *cocci_id/* drivers/crypto/marvell/cipher.c 686 */;
	struct mv_cesa_aes_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 684 */;
	struct mv_cesa_op_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 682 */;
	struct skcipher_request *cocci_id/* drivers/crypto/marvell/cipher.c 681 */;
	int cocci_id/* drivers/crypto/marvell/cipher.c 681 */;
	struct mv_cesa_des3_ctx cocci_id/* drivers/crypto/marvell/cipher.c 673 */;
	struct mv_cesa_des3_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 573 */;
	struct mv_cesa_des_ctx cocci_id/* drivers/crypto/marvell/cipher.c 562 */;
	struct mv_cesa_skcipher_dma_iter *cocci_id/* drivers/crypto/marvell/cipher.c 39 */;
	struct mv_cesa_skcipher_dma_iter {
		struct mv_cesa_dma_iter base;
		struct mv_cesa_sg_dma_iter src;
		struct mv_cesa_sg_dma_iter dst;
	} cocci_id/* drivers/crypto/marvell/cipher.c 32 */;
	bool cocci_id/* drivers/crypto/marvell/cipher.c 310 */;
	struct mv_cesa_skcipher_dma_iter cocci_id/* drivers/crypto/marvell/cipher.c 309 */;
	gfp_t cocci_id/* drivers/crypto/marvell/cipher.c 306 */;
	const struct mv_cesa_op_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 303 */;
	struct mv_cesa_des_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 290 */;
	struct mv_cesa_aes_ctx {
		struct mv_cesa_ctx base;
		struct crypto_aes_ctx aes;
	} cocci_id/* drivers/crypto/marvell/cipher.c 27 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/marvell/cipher.c 250 */;
	unsigned int cocci_id/* drivers/crypto/marvell/cipher.c 248 */;
	const u8 *cocci_id/* drivers/crypto/marvell/cipher.c 247 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/marvell/cipher.c 247 */;
	struct mv_cesa_skcipher_req cocci_id/* drivers/crypto/marvell/cipher.c 242 */;
	struct mv_cesa_ctx *cocci_id/* drivers/crypto/marvell/cipher.c 237 */;
	void *cocci_id/* drivers/crypto/marvell/cipher.c 230 */;
	const struct mv_cesa_req_ops cocci_id/* drivers/crypto/marvell/cipher.c 221 */;
	struct mv_cesa_des3_ctx {
		struct mv_cesa_ctx base;
		u8 key[DES3_EDE_KEY_SIZE];
	} cocci_id/* drivers/crypto/marvell/cipher.c 22 */;
	struct mv_cesa_req *cocci_id/* drivers/crypto/marvell/cipher.c 209 */;
	struct mv_cesa_engine *cocci_id/* drivers/crypto/marvell/cipher.c 202 */;
	struct crypto_async_request *cocci_id/* drivers/crypto/marvell/cipher.c 198 */;
	struct mv_cesa_skcipher_std_req *cocci_id/* drivers/crypto/marvell/cipher.c 170 */;
	struct mv_cesa_des_ctx {
		struct mv_cesa_ctx base;
		u8 key[DES_KEY_SIZE];
	} cocci_id/* drivers/crypto/marvell/cipher.c 17 */;
	size_t cocci_id/* drivers/crypto/marvell/cipher.c 120 */;
}
