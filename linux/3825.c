cocci_test_suite() {
	unsigned int cocci_id/* drivers/crypto/vmx/aes_cbc.c 76 */;
	struct skcipher_walk cocci_id/* drivers/crypto/vmx/aes_cbc.c 75 */;
	const struct p8_aes_cbc_ctx *cocci_id/* drivers/crypto/vmx/aes_cbc.c 74 */;
	struct crypto_skcipher *cocci_id/* drivers/crypto/vmx/aes_cbc.c 73 */;
	struct skcipher_request *cocci_id/* drivers/crypto/vmx/aes_cbc.c 71 */;
	int cocci_id/* drivers/crypto/vmx/aes_cbc.c 71 */;
	const u8 *cocci_id/* drivers/crypto/vmx/aes_cbc.c 51 */;
	struct p8_aes_cbc_ctx *cocci_id/* drivers/crypto/vmx/aes_cbc.c 46 */;
	void cocci_id/* drivers/crypto/vmx/aes_cbc.c 44 */;
	struct skcipher_request cocci_id/* drivers/crypto/vmx/aes_cbc.c 38 */;
	struct p8_aes_cbc_ctx {
		struct crypto_skcipher *fallback;
		struct aes_key enc_key;
		struct aes_key dec_key;
	} cocci_id/* drivers/crypto/vmx/aes_cbc.c 18 */;
	struct p8_aes_cbc_ctx cocci_id/* drivers/crypto/vmx/aes_cbc.c 124 */;
	struct skcipher_alg cocci_id/* drivers/crypto/vmx/aes_cbc.c 117 */;
}
