cocci_test_suite() {
	struct of_dma *cocci_id/* drivers/dma/stm32-dmamux.c 83 */;
	struct of_phandle_args *cocci_id/* drivers/dma/stm32-dmamux.c 82 */;
	unsigned long cocci_id/* drivers/dma/stm32-dmamux.c 64 */;
	struct stm32_dmamux *cocci_id/* drivers/dma/stm32-dmamux.c 63 */;
	struct stm32_dmamux_data *cocci_id/* drivers/dma/stm32-dmamux.c 62 */;
	struct device *cocci_id/* drivers/dma/stm32-dmamux.c 60 */;
	void *cocci_id/* drivers/dma/stm32-dmamux.c 60 */;
	void cocci_id/* drivers/dma/stm32-dmamux.c 60 */;
	struct stm32_dmamux_data {
		struct dma_router dmarouter;
		struct clk *clk;
		struct reset_control *rst;
		void __iomem *iomem;
		u32 dma_requests;
		u32 dmamux_requests;
		spinlock_t lock;
		unsigned long *dma_inuse;
		u32 dma_reqs[];
	} cocci_id/* drivers/dma/stm32-dmamux.c 35 */;
	int __init cocci_id/* drivers/dma/stm32-dmamux.c 340 */;
	struct platform_driver cocci_id/* drivers/dma/stm32-dmamux.c 331 */;
	const struct of_device_id cocci_id/* drivers/dma/stm32-dmamux.c 326 */[];
	const struct dev_pm_ops cocci_id/* drivers/dma/stm32-dmamux.c 321 */;
	struct stm32_dmamux {
		u32 master;
		u32 request;
		u32 chan_id;
	} cocci_id/* drivers/dma/stm32-dmamux.c 29 */;
	u32 cocci_id/* drivers/dma/stm32-dmamux.c 183 */;
	void __iomem *cocci_id/* drivers/dma/stm32-dmamux.c 181 */;
	struct resource *cocci_id/* drivers/dma/stm32-dmamux.c 180 */;
	const struct of_device_id *cocci_id/* drivers/dma/stm32-dmamux.c 177 */;
	struct device_node *cocci_id/* drivers/dma/stm32-dmamux.c 176 */;
	struct platform_device *cocci_id/* drivers/dma/stm32-dmamux.c 174 */;
	int cocci_id/* drivers/dma/stm32-dmamux.c 174 */;
}
