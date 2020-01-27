cocci_test_suite() {
	unsigned int cocci_id/* drivers/crypto/vmx/aes_ctr.c 95 */;
	struct skcipher_walk cocci_id/* drivers/crypto/vmx/aes_ctr.c 94 */;
	const struct p8_aes_ctr_ctx *cocci_id/* drivers/crypto/vmx/aes_ctr.c 93 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/vmx/aes_ctr.c 92 */;
	struct skcipher_request *cocci_id/* drivers/crypto/vmx/aes_ctr.c 90 */;
	int cocci_id/* drivers/crypto/vmx/aes_ctr.c 90 */;
	u8 cocci_id/* drivers/crypto/vmx/aes_ctr.c 73 */[AES_BLOCK_SIZE];
	u8 *cocci_id/* drivers/crypto/vmx/aes_ctr.c 72 */;
	struct skcipher_walk *cocci_id/* drivers/crypto/vmx/aes_ctr.c 70 */;
	const u8 *cocci_id/* drivers/crypto/vmx/aes_ctr.c 50 */;
	struct p8_aes_ctr_ctx *cocci_id/* drivers/crypto/vmx/aes_ctr.c 45 */;
	void cocci_id/* drivers/crypto/vmx/aes_ctr.c 43 */;
	struct skcipher_request cocci_id/* drivers/crypto/vmx/aes_ctr.c 37 */;
	struct p8_aes_ctr_ctx {
		struct crypto_skcipher *fallback;
		struct aes_key enc_key;
	} cocci_id/* drivers/crypto/vmx/aes_ctr.c 18 */;
	struct p8_aes_ctr_ctx cocci_id/* drivers/crypto/vmx/aes_ctr.c 139 */;
	struct skcipher_alg cocci_id/* drivers/crypto/vmx/aes_ctr.c 132 */;
}
