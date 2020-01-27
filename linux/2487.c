cocci_test_suite() {
	unsigned cocci_id/* drivers/dma/lpc18xx-dmamux.c 57 */;
	struct of_dma *cocci_id/* drivers/dma/lpc18xx-dmamux.c 52 */;
	struct of_phandle_args *cocci_id/* drivers/dma/lpc18xx-dmamux.c 51 */;
	unsigned long cocci_id/* drivers/dma/lpc18xx-dmamux.c 44 */;
	struct lpc18xx_dmamux *cocci_id/* drivers/dma/lpc18xx-dmamux.c 43 */;
	struct lpc18xx_dmamux_data *cocci_id/* drivers/dma/lpc18xx-dmamux.c 42 */;
	struct device *cocci_id/* drivers/dma/lpc18xx-dmamux.c 40 */;
	void *cocci_id/* drivers/dma/lpc18xx-dmamux.c 40 */;
	void cocci_id/* drivers/dma/lpc18xx-dmamux.c 40 */;
	struct lpc18xx_dmamux_data {
		struct dma_router dmarouter;
		struct lpc18xx_dmamux *muxes;
		u32 dma_master_requests;
		u32 dma_mux_requests;
		struct regmap *reg;
		spinlock_t lock;
	} cocci_id/* drivers/dma/lpc18xx-dmamux.c 31 */;
	struct lpc18xx_dmamux {
		u32 value;
		bool busy;
	} cocci_id/* drivers/dma/lpc18xx-dmamux.c 26 */;
	int __init cocci_id/* drivers/dma/lpc18xx-dmamux.c 175 */;
	struct platform_driver cocci_id/* drivers/dma/lpc18xx-dmamux.c 167 */;
	const struct of_device_id cocci_id/* drivers/dma/lpc18xx-dmamux.c 162 */[];
	struct lpc18xx_dmamux cocci_id/* drivers/dma/lpc18xx-dmamux.c 148 */;
	struct device_node *cocci_id/* drivers/dma/lpc18xx-dmamux.c 112 */;
	struct platform_device *cocci_id/* drivers/dma/lpc18xx-dmamux.c 110 */;
	int cocci_id/* drivers/dma/lpc18xx-dmamux.c 110 */;
}
