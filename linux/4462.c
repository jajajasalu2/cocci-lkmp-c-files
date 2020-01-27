cocci_test_suite() {
	unsigned long cocci_id/* drivers/char/hw_random/ks-sa-rng.c 93 */;
	unsigned int cocci_id/* drivers/char/hw_random/ks-sa-rng.c 93 */;
	struct ks_sa_rng {
		struct device *dev;
		struct hwrng rng;
		struct clk *clk;
		struct regmap *regmap_cfg;
		struct trng_regs __iomem *reg_rng;
		u64 ready_ts;
		unsigned int refill_delay_ns;
	} cocci_id/* drivers/char/hw_random/ks-sa-rng.c 83 */;
	struct trng_regs {
		u32 output_l;
		u32 output_h;
		u32 status;
		u32 intmask;
		u32 intack;
		u32 control;
		u32 config;
	} cocci_id/* drivers/char/hw_random/ks-sa-rng.c 73 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/ks-sa-rng.c 272 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/ks-sa-rng.c 264 */[];
	struct hwrng cocci_id/* drivers/char/hw_random/ks-sa-rng.c 221 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/ks-sa-rng.c 210 */;
	u32 cocci_id/* drivers/char/hw_random/ks-sa-rng.c 186 */;
	u64 cocci_id/* drivers/char/hw_random/ks-sa-rng.c 184 */;
	int cocci_id/* drivers/char/hw_random/ks-sa-rng.c 180 */;
	u32 *cocci_id/* drivers/char/hw_random/ks-sa-rng.c 165 */;
	struct ks_sa_rng *cocci_id/* drivers/char/hw_random/ks-sa-rng.c 157 */;
	struct device *cocci_id/* drivers/char/hw_random/ks-sa-rng.c 156 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/ks-sa-rng.c 154 */;
	void cocci_id/* drivers/char/hw_random/ks-sa-rng.c 154 */;
}
