cocci_test_suite() {
	struct of_dma *cocci_id/* drivers/dma/ti/dma-crossbar.c 77 */;
	struct of_phandle_args *cocci_id/* drivers/dma/ti/dma-crossbar.c 76 */;
	struct ti_am335x_xbar_map *cocci_id/* drivers/dma/ti/dma-crossbar.c 67 */;
	struct ti_am335x_xbar_data *cocci_id/* drivers/dma/ti/dma-crossbar.c 66 */;
	struct device *cocci_id/* drivers/dma/ti/dma-crossbar.c 64 */;
	void *cocci_id/* drivers/dma/ti/dma-crossbar.c 64 */;
	int cocci_id/* drivers/dma/ti/dma-crossbar.c 472 */;
	void cocci_id/* drivers/dma/ti/dma-crossbar.c 472 */;
	struct platform_driver cocci_id/* drivers/dma/ti/dma-crossbar.c 464 */;
	struct ti_am335x_xbar_map {
		u16 dma_line;
		u8 mux_val;
	} cocci_id/* drivers/dma/ti/dma-crossbar.c 46 */;
	u32 *cocci_id/* drivers/dma/ti/dma-crossbar.c 448 */;
	size_t cocci_id/* drivers/dma/ti/dma-crossbar.c 382 */;
	u32 *cocci_id/* drivers/dma/ti/dma-crossbar.c 381 */[2];
	const char cocci_id/* drivers/dma/ti/dma-crossbar.c 380 */[];
	struct ti_am335x_xbar_data {
		void __iomem *iomem;
		struct dma_router dmarouter;
		u32 xbar_events;
		u32 dma_requests;
	} cocci_id/* drivers/dma/ti/dma-crossbar.c 37 */;
	unsigned long cocci_id/* drivers/dma/ti/dma-crossbar.c 363 */;
	u32 cocci_id/* drivers/dma/ti/dma-crossbar.c 327 */;
	struct property *cocci_id/* drivers/dma/ti/dma-crossbar.c 325 */;
	unsigned long *cocci_id/* drivers/dma/ti/dma-crossbar.c 313 */;
	const u32 cocci_id/* drivers/dma/ti/dma-crossbar.c 292 */[];
	struct ti_dra7_xbar_map *cocci_id/* drivers/dma/ti/dma-crossbar.c 228 */;
	struct ti_dra7_xbar_data *cocci_id/* drivers/dma/ti/dma-crossbar.c 227 */;
	struct ti_dra7_xbar_map {
		u16 xbar_in;
		int xbar_out;
	} cocci_id/* drivers/dma/ti/dma-crossbar.c 215 */;
	struct ti_dra7_xbar_data {
		void __iomem *iomem;
		struct dma_router dmarouter;
		struct mutex mutex;
		unsigned long *dma_inuse;
		u16 safe_val;
		u32 xbar_requests;
		u32 dma_requests;
		u32 dma_offset;
	} cocci_id/* drivers/dma/ti/dma-crossbar.c 202 */;
	void __iomem *cocci_id/* drivers/dma/ti/dma-crossbar.c 137 */;
	struct resource *cocci_id/* drivers/dma/ti/dma-crossbar.c 136 */;
	const struct of_device_id *cocci_id/* drivers/dma/ti/dma-crossbar.c 133 */;
	struct device_node *cocci_id/* drivers/dma/ti/dma-crossbar.c 132 */;
	struct platform_device *cocci_id/* drivers/dma/ti/dma-crossbar.c 130 */;
	const struct of_device_id cocci_id/* drivers/dma/ti/dma-crossbar.c 125 */[];
	u8 cocci_id/* drivers/dma/ti/dma-crossbar.c 112 */;
	u16 cocci_id/* drivers/dma/ti/dma-crossbar.c 111 */;
}
