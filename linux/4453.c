cocci_test_suite() {
	int cocci_id/* drivers/char/hw_random/stm32-rng.c 82 */;
	u32 *cocci_id/* drivers/char/hw_random/stm32-rng.c 69 */;
	u32 cocci_id/* drivers/char/hw_random/stm32-rng.c 42 */;
	bool cocci_id/* drivers/char/hw_random/stm32-rng.c 38 */;
	void *cocci_id/* drivers/char/hw_random/stm32-rng.c 38 */;
	size_t cocci_id/* drivers/char/hw_random/stm32-rng.c 38 */;
	struct stm32_rng_private {
		struct hwrng rng;
		void __iomem *base;
		struct clk *clk;
		struct reset_control *rst;
		bool ced;
	} cocci_id/* drivers/char/hw_random/stm32-rng.c 30 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/stm32-rng.c 205 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/stm32-rng.c 197 */[];
	unsigned long cocci_id/* drivers/char/hw_random/stm32-rng.c 154 */;
	struct resource cocci_id/* drivers/char/hw_random/stm32-rng.c 118 */;
	struct device_node *cocci_id/* drivers/char/hw_random/stm32-rng.c 116 */;
	struct device *cocci_id/* drivers/char/hw_random/stm32-rng.c 115 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/stm32-rng.c 113 */;
	struct stm32_rng_private cocci_id/* drivers/char/hw_random/stm32-rng.c 107 */;
	struct stm32_rng_private *cocci_id/* drivers/char/hw_random/stm32-rng.c 106 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/stm32-rng.c 104 */;
	void cocci_id/* drivers/char/hw_random/stm32-rng.c 104 */;
}
