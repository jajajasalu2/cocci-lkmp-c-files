cocci_test_suite() {
	enum{RNG_OUTPUT_0_REG=0, RNG_OUTPUT_1_REG, RNG_OUTPUT_2_REG, RNG_OUTPUT_3_REG, RNG_STATUS_REG, RNG_INTMASK_REG, RNG_INTACK_REG, RNG_CONTROL_REG, RNG_CONFIG_REG, RNG_ALARMCNT_REG, RNG_FROENABLE_REG, RNG_FRODETUNE_REG, RNG_ALARMMASK_REG, RNG_ALARMSTOP_REG, RNG_REV_REG, RNG_SYSCONFIG_REG,} cocci_id/* drivers/char/hw_random/omap-rng.c 76 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/omap-rng.c 574 */;
	int __maybe_unused cocci_id/* drivers/char/hw_random/omap-rng.c 555 */;
	unsigned long cocci_id/* drivers/char/hw_random/omap-rng.c 454 */;
	struct omap_rng_dev cocci_id/* drivers/char/hw_random/omap-rng.c 445 */;
	struct device *cocci_id/* drivers/char/hw_random/omap-rng.c 382 */;
	const struct of_device_id *cocci_id/* drivers/char/hw_random/omap-rng.c 381 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/omap-rng.c 379 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/omap-rng.c 361 */[];
	u16 *cocci_id/* drivers/char/hw_random/omap-rng.c 354 */;
	struct omap_rng_pdata cocci_id/* drivers/char/hw_random/omap-rng.c 353 */;
	irqreturn_t cocci_id/* drivers/char/hw_random/omap-rng.c 318 */;
	void *cocci_id/* drivers/char/hw_random/omap-rng.c 318 */;
	u32 cocci_id/* drivers/char/hw_random/omap-rng.c 254 */;
	struct omap_rng_dev *cocci_id/* drivers/char/hw_random/omap-rng.c 252 */;
	int cocci_id/* drivers/char/hw_random/omap-rng.c 252 */;
	void cocci_id/* drivers/char/hw_random/omap-rng.c 233 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/omap-rng.c 213 */;
	bool cocci_id/* drivers/char/hw_random/omap-rng.c 176 */;
	size_t cocci_id/* drivers/char/hw_random/omap-rng.c 175 */;
	u16 cocci_id/* drivers/char/hw_random/omap-rng.c 163 */;
	struct omap_rng_dev {
		void __iomem *base;
		struct device *dev;
		const struct omap_rng_pdata *pdata;
		struct hwrng rng;
		struct clk *clk;
		struct clk *clk_reg;
	} cocci_id/* drivers/char/hw_random/omap-rng.c 154 */;
	struct omap_rng_pdata {
		u16 *regs;
		u32 data_size;
		u32 (*data_present)(struct omap_rng_dev *priv);
		int (*init)(struct omap_rng_dev *priv);
		void (*cleanup)(struct omap_rng_dev *priv);
	} cocci_id/* drivers/char/hw_random/omap-rng.c 146 */;
	const u16 cocci_id/* drivers/char/hw_random/omap-rng.c 120 */[];
}
