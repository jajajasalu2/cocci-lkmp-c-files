cocci_test_suite() {
	struct device_node *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 87 */;
	const char *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 85 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 85 */;
	struct ipu_prg {
		struct list_head list;
		struct device *dev;
		int id;
		void __iomem *regs;
		struct clk *clk_ipg,*clk_axi;
		struct regmap *iomuxc_gpr;
		struct ipu_pre *pres[3];
		struct ipu_prg_channel chan[3];
	} cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 68 */;
	struct ipu_prg_channel {
		bool enabled;
		int used_pre;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 63 */;
	struct platform_driver cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 475 */;
	const struct of_device_id cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 470 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 466 */;
	struct resource *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 361 */;
	struct platform_device *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 358 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 342 */;
	struct ipu_prg_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 280 */;
	struct ipu_prg *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 279 */;
	uint64_t cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 276 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 276 */;
	unsigned long *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 276 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 274 */;
	struct ipuv3_channel *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 273 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 273 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 242 */;
	struct ipu_soc *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 154 */;
	const struct drm_format_info *cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 127 */;
	uint32_t cocci_id/* drivers/gpu/ipu-v3/ipu-prg.c 124 */;
}
