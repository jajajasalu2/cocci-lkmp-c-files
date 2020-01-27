cocci_test_suite() {
	struct ipu_pre {
		struct list_head list;
		struct device *dev;
		void __iomem *regs;
		struct clk *clk_axi;
		struct gen_pool *iram;
		dma_addr_t buffer_paddr;
		void *buffer_virt;
		bool in_use;
		unsigned int safe_window_end;
		unsigned int last_bufaddr;
	} cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 89 */;
	struct platform_driver cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 339 */;
	const struct of_device_id cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 334 */[];
	unsigned long cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 329 */;
	struct resource *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 274 */;
	struct platform_device *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 271 */;
	bool cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 260 */;
	unsigned short cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 236 */;
	const struct drm_format_info *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 169 */;
	uint64_t cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 167 */;
	u32 cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 166 */;
	struct ipu_pre *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 165 */;
	unsigned int cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 165 */;
	void cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 165 */;
	struct device_node *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 116 */;
	const char *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 114 */;
	struct device *cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 114 */;
	int cocci_id/* drivers/gpu/ipu-v3/ipu-pre.c 106 */;
}
