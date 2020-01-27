cocci_test_suite() {
	size_t cocci_id/* drivers/base/regmap/regmap-mmio.c 44 */;
	void cocci_id/* drivers/base/regmap/regmap-mmio.c 368 */;
	struct clk *cocci_id/* drivers/base/regmap/regmap-mmio.c 357 */;
	int cocci_id/* drivers/base/regmap/regmap-mmio.c 357 */;
	struct regmap_mmio_context *cocci_id/* drivers/base/regmap/regmap-mmio.c 346 */;
	struct lock_class_key *cocci_id/* drivers/base/regmap/regmap-mmio.c 343 */;
	const struct regmap_config *cocci_id/* drivers/base/regmap/regmap-mmio.c 342 */;
	void __iomem *cocci_id/* drivers/base/regmap/regmap-mmio.c 341 */;
	const char *cocci_id/* drivers/base/regmap/regmap-mmio.c 340 */;
	struct regmap *cocci_id/* drivers/base/regmap/regmap-mmio.c 339 */;
	struct device *cocci_id/* drivers/base/regmap/regmap-mmio.c 339 */;
	const struct regmap_bus cocci_id/* drivers/base/regmap/regmap-mmio.c 203 */;
	void *cocci_id/* drivers/base/regmap/regmap-mmio.c 191 */;
	unsigned int *cocci_id/* drivers/base/regmap/regmap-mmio.c 172 */;
	unsigned int cocci_id/* drivers/base/regmap/regmap-mmio.c 172 */;
	struct regmap_mmio_context {
		void __iomem *regs;
		unsigned val_bytes;
		bool attached_clk;
		struct clk *clk;
		void (*reg_write)(struct regmap_mmio_context *ctx,
				  unsigned int reg, unsigned int val);
		unsigned int (*reg_read)(struct regmap_mmio_context *ctx,
					 unsigned int reg);
	} cocci_id/* drivers/base/regmap/regmap-mmio.c 16 */;
}
