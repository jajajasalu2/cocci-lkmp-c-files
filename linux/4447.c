cocci_test_suite() {
	u32 cocci_id/* drivers/char/hw_random/exynos-trng.c 80 */;
	unsigned long cocci_id/* drivers/char/hw_random/exynos-trng.c 79 */;
	struct exynos_trng_dev *cocci_id/* drivers/char/hw_random/exynos-trng.c 58 */;
	bool cocci_id/* drivers/char/hw_random/exynos-trng.c 56 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/exynos-trng.c 55 */;
	void *cocci_id/* drivers/char/hw_random/exynos-trng.c 55 */;
	int cocci_id/* drivers/char/hw_random/exynos-trng.c 55 */;
	size_t cocci_id/* drivers/char/hw_random/exynos-trng.c 55 */;
	struct exynos_trng_dev {
		struct device *dev;
		void __iomem *mem;
		struct clk *clk;
		struct hwrng rng;
	} cocci_id/* drivers/char/hw_random/exynos-trng.c 48 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/exynos-trng.c 220 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/exynos-trng.c 212 */[];
	struct device *cocci_id/* drivers/char/hw_random/exynos-trng.c 195 */;
	int __maybe_unused cocci_id/* drivers/char/hw_random/exynos-trng.c 195 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/exynos-trng.c 109 */;
}
