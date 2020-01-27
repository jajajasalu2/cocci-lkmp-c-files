cocci_test_suite() {
	u32 cocci_id/* drivers/nvmem/sc27xx-efuse.c 88 */;
	void cocci_id/* drivers/nvmem/sc27xx-efuse.c 82 */;
	struct sc27xx_efuse *cocci_id/* drivers/nvmem/sc27xx-efuse.c 65 */;
	int cocci_id/* drivers/nvmem/sc27xx-efuse.c 65 */;
	struct sc27xx_efuse {
		struct device *dev;
		struct regmap *regmap;
		struct hwspinlock *hwlock;
		struct mutex mutex;
		u32 base;
	} cocci_id/* drivers/nvmem/sc27xx-efuse.c 52 */;
	struct platform_driver cocci_id/* drivers/nvmem/sc27xx-efuse.c 245 */;
	const struct of_device_id cocci_id/* drivers/nvmem/sc27xx-efuse.c 240 */[];
	struct nvmem_device *cocci_id/* drivers/nvmem/sc27xx-efuse.c 188 */;
	struct nvmem_config cocci_id/* drivers/nvmem/sc27xx-efuse.c 187 */;
	struct device_node *cocci_id/* drivers/nvmem/sc27xx-efuse.c 186 */;
	struct platform_device *cocci_id/* drivers/nvmem/sc27xx-efuse.c 184 */;
	void *cocci_id/* drivers/nvmem/sc27xx-efuse.c 106 */;
	size_t cocci_id/* drivers/nvmem/sc27xx-efuse.c 106 */;
}
