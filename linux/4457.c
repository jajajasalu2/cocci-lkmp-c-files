cocci_test_suite() {
	u32 *cocci_id/* drivers/char/hw_random/tx4939-rng.c 98 */;
	u32 cocci_id/* drivers/char/hw_random/tx4939-rng.c 83 */;
	struct tx4939_rng cocci_id/* drivers/char/hw_random/tx4939-rng.c 67 */;
	struct tx4939_rng *cocci_id/* drivers/char/hw_random/tx4939-rng.c 67 */;
	struct hwrng *cocci_id/* drivers/char/hw_random/tx4939-rng.c 65 */;
	int cocci_id/* drivers/char/hw_random/tx4939-rng.c 65 */;
	u64 cocci_id/* drivers/char/hw_random/tx4939-rng.c 55 */;
	void __iomem *cocci_id/* drivers/char/hw_random/tx4939-rng.c 55 */;
	unsigned int cocci_id/* drivers/char/hw_random/tx4939-rng.c 55 */;
	void cocci_id/* drivers/char/hw_random/tx4939-rng.c 48 */;
	struct tx4939_rng {
		struct hwrng rng;
		void __iomem *base;
		u64 databuf[3];
		unsigned int data_avail;
	} cocci_id/* drivers/char/hw_random/tx4939-rng.c 28 */;
	struct platform_driver cocci_id/* drivers/char/hw_random/tx4939-rng.c 148 */;
	struct platform_device *cocci_id/* drivers/char/hw_random/tx4939-rng.c 107 */;
	int __init cocci_id/* drivers/char/hw_random/tx4939-rng.c 107 */;
}
