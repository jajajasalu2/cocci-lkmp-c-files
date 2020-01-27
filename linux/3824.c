cocci_test_suite() {
	u8 cocci_id/* drivers/crypto/vmx/aes_xts.c 84 */[AES_BLOCK_SIZE];
	unsigned int cocci_id/* drivers/crypto/vmx/aes_xts.c 83 */;
	struct skcipher_walk cocci_id/* drivers/crypto/vmx/aes_xts.c 82 */;
	const struct p8_aes_xts_ctx *cocci_id/* drivers/crypto/vmx/aes_xts.c 81 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/vmx/aes_xts.c 80 */;
	struct skcipher_request *cocci_id/* drivers/crypto/vmx/aes_xts.c 78 */;
	int cocci_id/* drivers/crypto/vmx/aes_xts.c 78 */;
	const u8 *cocci_id/* drivers/crypto/vmx/aes_xts.c 53 */;
	struct p8_aes_xts_ctx *cocci_id/* drivers/crypto/vmx/aes_xts.c 48 */;
	void cocci_id/* drivers/crypto/vmx/aes_xts.c 46 */;
	struct skcipher_request cocci_id/* drivers/crypto/vmx/aes_xts.c 40 */;
	struct p8_aes_xts_ctx {
		struct crypto_skcipher *fallback;
		struct aes_key enc_key;
		struct aes_key dec_key;
		struct aes_key tweak_key;
	} cocci_id/* drivers/crypto/vmx/aes_xts.c 19 */;
	struct p8_aes_xts_ctx cocci_id/* drivers/crypto/vmx/aes_xts.c 150 */;
	struct skcipher_alg cocci_id/* drivers/crypto/vmx/aes_xts.c 143 */;
}
