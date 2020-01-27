cocci_test_suite() {
	const u8 *cocci_id/* drivers/crypto/vmx/ghash.c 95 */;
	unsigned int cocci_id/* drivers/crypto/vmx/ghash.c 95 */;
	be128 *cocci_id/* drivers/crypto/vmx/ghash.c 89 */;
	u8 *cocci_id/* drivers/crypto/vmx/ghash.c 88 */;
	struct p8_ghash_desc_ctx *cocci_id/* drivers/crypto/vmx/ghash.c 76 */;
	struct p8_ghash_ctx *cocci_id/* drivers/crypto/vmx/ghash.c 75 */;
	void cocci_id/* drivers/crypto/vmx/ghash.c 75 */;
	const u64 *cocci_id/* drivers/crypto/vmx/ghash.c 65 */;
	struct crypto_shash *cocci_id/* drivers/crypto/vmx/ghash.c 54 */;
	struct p8_ghash_desc_ctx {
		u64 shash[2];
		u8 buffer[GHASH_DIGEST_SIZE];
		int bytes;
	} cocci_id/* drivers/crypto/vmx/ghash.c 39 */;
	struct p8_ghash_ctx {
		u128 htable[16];
		be128 key;
	} cocci_id/* drivers/crypto/vmx/ghash.c 32 */;
	void cocci_id/* drivers/crypto/vmx/ghash.c 29 */(u64 Xi[2],
							 const u128 htable[16],
							 const u8 *in,
							 size_t len);
	void cocci_id/* drivers/crypto/vmx/ghash.c 28 */(u64 Xi[2],
							 const u128 htable[16]);
	void cocci_id/* drivers/crypto/vmx/ghash.c 27 */(u128 htable[16],
							 const u64 Xi[2]);
	struct p8_ghash_ctx cocci_id/* drivers/crypto/vmx/ghash.c 181 */;
	struct ghash_desc_ctx cocci_id/* drivers/crypto/vmx/ghash.c 175 */;
	struct p8_ghash_desc_ctx cocci_id/* drivers/crypto/vmx/ghash.c 174 */;
	struct shash_alg cocci_id/* drivers/crypto/vmx/ghash.c 168 */;
	struct shash_desc *cocci_id/* drivers/crypto/vmx/ghash.c 152 */;
	int cocci_id/* drivers/crypto/vmx/ghash.c 152 */;
}
