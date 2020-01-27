cocci_test_suite() {
	u32 cocci_id/* drivers/crypto/exynos-rng.c 87 */;
	struct exynos_rng_dev *cocci_id/* drivers/crypto/exynos-rng.c 85 */;
	struct exynos_rng_dev {
		struct device *dev;
		enum exynos_prng_type type;
		void __iomem *mem;
		struct clk *clk;
		struct mutex lock;
		u8 seed_save[EXYNOS_RNG_SEED_SIZE];
		unsigned int seed_save_len;
		unsigned long last_seeding;
		unsigned long bytes_seeding;
	} cocci_id/* drivers/crypto/exynos-rng.c 70 */;
	struct exynos_rng_ctx {
		struct exynos_rng_dev *rng;
	} cocci_id/* drivers/crypto/exynos-rng.c 65 */;
	enum exynos_prng_type{EXYNOS_PRNG_UNKNOWN=0, EXYNOS_PRNG_EXYNOS4, EXYNOS_PRNG_EXYNOS5,} cocci_id/* drivers/crypto/exynos-rng.c 44 */;
	struct platform_driver cocci_id/* drivers/crypto/exynos-rng.c 387 */;
	const void *cocci_id/* drivers/crypto/exynos-rng.c 378 */;
	const struct of_device_id cocci_id/* drivers/crypto/exynos-rng.c 375 */[];
	struct device *cocci_id/* drivers/crypto/exynos-rng.c 348 */;
	int __maybe_unused cocci_id/* drivers/crypto/exynos-rng.c 348 */;
	enum exynos_prng_type cocci_id/* drivers/crypto/exynos-rng.c 280 */;
	struct platform_device *cocci_id/* drivers/crypto/exynos-rng.c 268 */;
	struct exynos_rng_ctx cocci_id/* drivers/crypto/exynos-rng.c 262 */;
	struct rng_alg cocci_id/* drivers/crypto/exynos-rng.c 254 */;
	struct crypto_tfm *cocci_id/* drivers/crypto/exynos-rng.c 245 */;
	struct exynos_rng_ctx *cocci_id/* drivers/crypto/exynos-rng.c 198 */;
	u8 *cocci_id/* drivers/crypto/exynos-rng.c 196 */;
	const u8 *cocci_id/* drivers/crypto/exynos-rng.c 195 */;
	unsigned int cocci_id/* drivers/crypto/exynos-rng.c 195 */;
	struct crypto_rng *cocci_id/* drivers/crypto/exynos-rng.c 194 */;
	int cocci_id/* drivers/crypto/exynos-rng.c 194 */;
	u8 cocci_id/* drivers/crypto/exynos-rng.c 178 */[EXYNOS_RNG_SEED_SIZE];
	unsigned long cocci_id/* drivers/crypto/exynos-rng.c 174 */;
	void cocci_id/* drivers/crypto/exynos-rng.c 172 */;
	size_t cocci_id/* drivers/crypto/exynos-rng.c 164 */;
	unsigned int *cocci_id/* drivers/crypto/exynos-rng.c 142 */;
}
