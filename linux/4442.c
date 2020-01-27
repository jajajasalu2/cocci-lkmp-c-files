cocci_test_suite() {
	u32 cocci_id/* drivers/char/hw_random/bcm2835-rng.c 89 */;
	int cocci_id/* drivers/char/hw_random/bcm2835-rng.c 85 */;
	u32 *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 80 */;
	bool cocci_id/* drivers/char/hw_random/bcm2835-rng.c 63 */;
	void *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 62 */;
	size_t cocci_id/* drivers/char/hw_random/bcm2835-rng.c 62 */;
	struct bcm2835_rng_priv cocci_id/* drivers/char/hw_random/bcm2835-rng.c 39 */;
	struct bcm2835_rng_priv {
		struct hwrng rng;
		void __iomem *base;
		bool mask_interrupts;
		struct clk *clk;
	} cocci_id/* drivers/char/hw_random/bcm2835-rng.c 30 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/bcm2835-rng.c 198 */;
	struct platform_device_id cocci_id/* drivers/char/hw_random/bcm2835-rng.c 191 */[];
	const struct of_device_id *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 143 */;
	struct device_node *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 142 */;
	struct device *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 141 */;
	const struct bcm2835_rng_of_data *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 140 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 138 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/bcm2835-rng.c 130 */[];
	const struct bcm2835_rng_of_data cocci_id/* drivers/char/hw_random/bcm2835-rng.c 126 */;
	struct bcm2835_rng_of_data {
		bool mask_interrupts;
	} cocci_id/* drivers/char/hw_random/bcm2835-rng.c 122 */;
	struct bcm2835_rng_priv *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 113 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/bcm2835-rng.c 111 */;
	void cocci_id/* drivers/char/hw_random/bcm2835-rng.c 111 */;
}
