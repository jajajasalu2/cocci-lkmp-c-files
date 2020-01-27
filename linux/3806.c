cocci_test_suite() {
	struct nx_sg cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 93 */;
	u8 cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 65 */[32];
	u8 cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 64 */[2][AES_BLOCK_SIZE];
	struct nx_sg *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 63 */;
	u8 *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 59 */;
	struct shash_desc *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 59 */;
	struct nx_crypto_ctx cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 375 */;
	struct xcbc_state cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 367 */;
	struct shash_alg cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 361 */;
	unsigned int cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 30 */;
	unsigned long cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 298 */;
	struct xcbc_state *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 294 */;
	const u8 *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 29 */;
	struct crypto_shash *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 28 */;
	struct xcbc_state {
		u8 state[AES_BLOCK_SIZE];
		unsigned int count;
		u8 buffer[AES_BLOCK_SIZE];
	} cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 22 */;
	u32 cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 174 */;
	struct nx_csbcpb *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 141 */;
	struct nx_crypto_ctx *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 140 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 138 */;
	int cocci_id/* drivers/crypto/nx/nx-aes-xcbc.c 138 */;
}
