cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/char/hw_random/xgene-rng.c 90 */;
	struct xgene_rng_dev {
		u32 irq;
		void __iomem *csr_base;
		u32 revision;
		u32 datum_size;
		u32 failure_cnt;
		unsigned long failure_ts;
		struct timer_list failure_timer;
		struct device *dev;
		struct clk *clk;
	} cocci_id/* drivers/char/hw_random/xgene-rng.c 78 */;
	u32 cocci_id/* drivers/char/hw_random/xgene-rng.c 54 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/xgene-rng.c 403 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/xgene-rng.c 396 */[];
	unsigned long cocci_id/* drivers/char/hw_random/xgene-rng.c 360 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/xgene-rng.c 314 */;
	struct hwrng cocci_id/* drivers/char/hw_random/xgene-rng.c 307 */;
	const struct acpi_device_id cocci_id/* drivers/char/hw_random/xgene-rng.c 300 */[];
	u32 *cocci_id/* drivers/char/hw_random/xgene-rng.c 226 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/xgene-rng.c 211 */;
	int cocci_id/* drivers/char/hw_random/xgene-rng.c 211 */;
	irqreturn_t cocci_id/* drivers/char/hw_random/xgene-rng.c 201 */;
	void *cocci_id/* drivers/char/hw_random/xgene-rng.c 201 */;
	struct xgene_rng_dev *cocci_id/* drivers/char/hw_random/xgene-rng.c 118 */;
	void cocci_id/* drivers/char/hw_random/xgene-rng.c 118 */;
}
