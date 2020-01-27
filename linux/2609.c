cocci_test_suite() {
	const struct snvs_lpgpr_cfg *cocci_id/* drivers/nvmem/snvs_lpgpr.c 96 */;
	struct nvmem_device *cocci_id/* drivers/nvmem/snvs_lpgpr.c 95 */;
	struct nvmem_config *cocci_id/* drivers/nvmem/snvs_lpgpr.c 94 */;
	struct snvs_lpgpr_priv *cocci_id/* drivers/nvmem/snvs_lpgpr.c 93 */;
	struct device_node *cocci_id/* drivers/nvmem/snvs_lpgpr.c 91 */;
	struct device *cocci_id/* drivers/nvmem/snvs_lpgpr.c 90 */;
	struct platform_device *cocci_id/* drivers/nvmem/snvs_lpgpr.c 88 */;
	int cocci_id/* drivers/nvmem/snvs_lpgpr.c 88 */;
	size_t cocci_id/* drivers/nvmem/snvs_lpgpr.c 79 */;
	void *cocci_id/* drivers/nvmem/snvs_lpgpr.c 78 */;
	unsigned int cocci_id/* drivers/nvmem/snvs_lpgpr.c 78 */;
	const struct snvs_lpgpr_cfg cocci_id/* drivers/nvmem/snvs_lpgpr.c 38 */;
	struct snvs_lpgpr_priv {
		struct device_d *dev;
		struct regmap *regmap;
		struct nvmem_config cfg;
		const struct snvs_lpgpr_cfg *dcfg;
	} cocci_id/* drivers/nvmem/snvs_lpgpr.c 31 */;
	struct snvs_lpgpr_cfg {
		int offset;
		int offset_hplr;
		int offset_lplr;
		int size;
	} cocci_id/* drivers/nvmem/snvs_lpgpr.c 24 */;
	struct platform_driver cocci_id/* drivers/nvmem/snvs_lpgpr.c 145 */;
	const struct of_device_id cocci_id/* drivers/nvmem/snvs_lpgpr.c 136 */[];
}
