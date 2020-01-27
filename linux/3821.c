cocci_test_suite() {
	struct p8_aes_ctx *cocci_id/* drivers/crypto/vmx/aes.c 99 */;
	const u8 *cocci_id/* drivers/crypto/vmx/aes.c 97 */;
	u8 *cocci_id/* drivers/crypto/vmx/aes.c 97 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/vmx/aes.c 97 */;
	void cocci_id/* drivers/crypto/vmx/aes.c 97 */;
	unsigned int cocci_id/* drivers/crypto/vmx/aes.c 61 */;
	struct crypto_cipher *cocci_id/* drivers/crypto/vmx/aes.c 30 */;
	const char *cocci_id/* drivers/crypto/vmx/aes.c 29 */;
	int cocci_id/* drivers/crypto/vmx/aes.c 27 */;
	struct p8_aes_ctx {
		struct crypto_cipher *fallback;
		struct aes_key enc_key;
		struct aes_key dec_key;
	} cocci_id/* drivers/crypto/vmx/aes.c 21 */;
	struct p8_aes_ctx cocci_id/* drivers/crypto/vmx/aes.c 123 */;
	struct crypto_alg cocci_id/* drivers/crypto/vmx/aes.c 114 */;
}
