cocci_test_suite() {
	struct device *cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 81 */;
	int __maybe_unused cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 81 */;
	u32 cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 40 */;
	bool cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 37 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 37 */;
	void *cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 37 */;
	size_t cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 37 */;
	struct omap_rom_rng {
		struct clk *clk;
		struct device *dev;
		struct hwrng ops;
		u32 (*rom_rng_call)(u32 ptr, u32 count, u32 flag);
	} cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 30 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 167 */;
	const struct dev_pm_ops cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 162 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 156 */[];
	unsigned long cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 121 */;
	struct omap_rom_rng *cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 113 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 111 */;
	int cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 111 */;
	void cocci_id/* drivers/char/hw_random/omap3-rom-rng.c 103 */;
}
