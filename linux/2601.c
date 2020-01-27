cocci_test_suite() {
	struct sprd_efuse *cocci_id/* drivers/nvmem/sprd-efuse.c 83 */;
	int cocci_id/* drivers/nvmem/sprd-efuse.c 83 */;
	const struct sprd_efuse_variant_data cocci_id/* drivers/nvmem/sprd-efuse.c 72 */;
	struct sprd_efuse {
		struct device *dev;
		struct clk *clk;
		struct hwspinlock *hwlock;
		struct mutex mutex;
		void __iomem *base;
		const struct sprd_efuse_variant_data *data;
	} cocci_id/* drivers/nvmem/sprd-efuse.c 63 */;
	struct sprd_efuse_variant_data {
		u32 blk_nums;
		u32 blk_offset;
		bool blk_double;
	} cocci_id/* drivers/nvmem/sprd-efuse.c 57 */;
	struct platform_driver cocci_id/* drivers/nvmem/sprd-efuse.c 412 */;
	const struct of_device_id cocci_id/* drivers/nvmem/sprd-efuse.c 407 */[];
	const struct sprd_efuse_variant_data *cocci_id/* drivers/nvmem/sprd-efuse.c 350 */;
	struct nvmem_config cocci_id/* drivers/nvmem/sprd-efuse.c 348 */;
	struct nvmem_device *cocci_id/* drivers/nvmem/sprd-efuse.c 347 */;
	struct device_node *cocci_id/* drivers/nvmem/sprd-efuse.c 346 */;
	struct platform_device *cocci_id/* drivers/nvmem/sprd-efuse.c 344 */;
	void *cocci_id/* drivers/nvmem/sprd-efuse.c 292 */;
	size_t cocci_id/* drivers/nvmem/sprd-efuse.c 292 */;
	u32 *cocci_id/* drivers/nvmem/sprd-efuse.c 195 */;
	u32 cocci_id/* drivers/nvmem/sprd-efuse.c 194 */;
	bool cocci_id/* drivers/nvmem/sprd-efuse.c 194 */;
	void cocci_id/* drivers/nvmem/sprd-efuse.c 158 */;
}
