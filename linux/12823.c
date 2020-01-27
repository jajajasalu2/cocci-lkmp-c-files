cocci_test_suite() {
	enum jz4780_nemc_bank_type cocci_id/* drivers/memory/jz4780-nemc.c 92 */;
	int cocci_id/* drivers/memory/jz4780-nemc.c 71 */;
	const __be32 *cocci_id/* drivers/memory/jz4780-nemc.c 68 */;
	struct jz4780_nemc {
		spinlock_t lock;
		struct device *dev;
		const struct jz_soc_info *soc_info;
		void __iomem *base;
		struct clk *clk;
		uint32_t clk_period;
		unsigned long banks_present;
	} cocci_id/* drivers/memory/jz4780-nemc.c 48 */;
	struct jz_soc_info {
		u8 tas_tah_cycles_max;
	} cocci_id/* drivers/memory/jz4780-nemc.c 44 */;
	int __init cocci_id/* drivers/memory/jz4780-nemc.c 402 */;
	struct platform_driver cocci_id/* drivers/memory/jz4780-nemc.c 393 */;
	const struct of_device_id cocci_id/* drivers/memory/jz4780-nemc.c 387 */[];
	const struct jz_soc_info cocci_id/* drivers/memory/jz4780-nemc.c 379 */;
	struct resource *cocci_id/* drivers/memory/jz4780-nemc.c 272 */;
	struct platform_device *cocci_id/* drivers/memory/jz4780-nemc.c 268 */;
	const u8 cocci_id/* drivers/memory/jz4780-nemc.c 166 */[];
	struct device_node *cocci_id/* drivers/memory/jz4780-nemc.c 158 */;
	unsigned long cocci_id/* drivers/memory/jz4780-nemc.c 141 */;
	uint32_t cocci_id/* drivers/memory/jz4780-nemc.c 126 */;
	struct jz4780_nemc *cocci_id/* drivers/memory/jz4780-nemc.c 125 */;
	bool cocci_id/* drivers/memory/jz4780-nemc.c 123 */;
	struct device *cocci_id/* drivers/memory/jz4780-nemc.c 123 */;
	unsigned int cocci_id/* drivers/memory/jz4780-nemc.c 123 */;
	void cocci_id/* drivers/memory/jz4780-nemc.c 123 */;
}
