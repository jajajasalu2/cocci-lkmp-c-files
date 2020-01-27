cocci_test_suite() {
	unsigned char *cocci_id/* crypto/ansi_cprng.c 84 */;
	unsigned char cocci_id/* crypto/ansi_cprng.c 83 */[DEFAULT_BLK_SZ];
	struct prng_context *cocci_id/* crypto/ansi_cprng.c 80 */;
	int cocci_id/* crypto/ansi_cprng.c 80 */;
	void __exit cocci_id/* crypto/ansi_cprng.c 459 */;
	int __init cocci_id/* crypto/ansi_cprng.c 454 */;
	struct prng_context cocci_id/* crypto/ansi_cprng.c 431 */;
	struct rng_alg cocci_id/* crypto/ansi_cprng.c 423 */[];
	u8 cocci_id/* crypto/ansi_cprng.c 396 */[DEFAULT_BLK_SZ];
	struct prng_context {
		spinlock_t prng_lock;
		unsigned char rand_data[DEFAULT_BLK_SZ];
		unsigned char last_rand_data[DEFAULT_BLK_SZ];
		unsigned char DT[DEFAULT_BLK_SZ];
		unsigned char I[DEFAULT_BLK_SZ];
		unsigned char V[DEFAULT_BLK_SZ];
		u32 rand_data_valid;
		struct crypto_cipher *tfm;
		u32 flags;
	} cocci_id/* crypto/ansi_cprng.c 38 */;
	u8 *cocci_id/* crypto/ansi_cprng.c 350 */;
	const u8 *cocci_id/* crypto/ansi_cprng.c 349 */;
	unsigned int cocci_id/* crypto/ansi_cprng.c 349 */;
	struct crypto_rng *cocci_id/* crypto/ansi_cprng.c 348 */;
	struct crypto_tfm *cocci_id/* crypto/ansi_cprng.c 343 */;
	void cocci_id/* crypto/ansi_cprng.c 343 */;
	const unsigned char *cocci_id/* crypto/ansi_cprng.c 276 */;
	char *cocci_id/* crypto/ansi_cprng.c 180 */;
	size_t cocci_id/* crypto/ansi_cprng.c 180 */;
}
