cocci_test_suite() {
	enum hrtimer_restart cocci_id/* drivers/char/hw_random/timeriomem-rng.c 92 */;
	struct hrtimer *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 92 */;
	u32 cocci_id/* drivers/char/hw_random/timeriomem-rng.c 75 */;
	u32 *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 74 */;
	bool cocci_id/* drivers/char/hw_random/timeriomem-rng.c 45 */;
	size_t cocci_id/* drivers/char/hw_random/timeriomem-rng.c 45 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 44 */;
	void *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 44 */;
	struct timeriomem_rng_private {
		void __iomem *io_base;
		ktime_t period;
		unsigned int present:1;
		struct hrtimer timer;
		struct completion completion;
		struct hwrng rng_ops;
	} cocci_id/* drivers/char/hw_random/timeriomem-rng.c 33 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/timeriomem-rng.c 200 */;
	const struct of_device_id cocci_id/* drivers/char/hw_random/timeriomem-rng.c 194 */[];
	struct timeriomem_rng_private cocci_id/* drivers/char/hw_random/timeriomem-rng.c 128 */;
	struct resource *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 107 */;
	struct timeriomem_rng_private *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 106 */;
	struct timeriomem_rng_data *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 105 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/timeriomem-rng.c 103 */;
	int cocci_id/* drivers/char/hw_random/timeriomem-rng.c 103 */;
}
