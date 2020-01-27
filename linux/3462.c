cocci_test_suite() {
	struct uio_info *cocci_id/* drivers/uio/uio_pruss.c 98 */;
	struct uio_pruss_dev *cocci_id/* drivers/uio/uio_pruss.c 95 */;
	struct device *cocci_id/* drivers/uio/uio_pruss.c 95 */;
	void cocci_id/* drivers/uio/uio_pruss.c 95 */;
	void __iomem *cocci_id/* drivers/uio/uio_pruss.c 81 */;
	irqreturn_t cocci_id/* drivers/uio/uio_pruss.c 76 */;
	struct uio_pruss_dev {
		struct uio_info *info;
		struct clk *pruss_clk;
		dma_addr_t sram_paddr;
		dma_addr_t ddr_paddr;
		void __iomem *prussio_vaddr;
		unsigned long sram_vaddr;
		void *ddr_vaddr;
		unsigned int hostirq_start;
		unsigned int pintc_base;
		struct gen_pool *sram_pool;
	} cocci_id/* drivers/uio/uio_pruss.c 63 */;
	int cocci_id/* drivers/uio/uio_pruss.c 38 */;
	struct platform_driver cocci_id/* drivers/uio/uio_pruss.c 259 */;
	unsigned long cocci_id/* drivers/uio/uio_pruss.c 168 */;
	struct uio_pruss_dev cocci_id/* drivers/uio/uio_pruss.c 128 */;
	struct uio_pruss_pdata *cocci_id/* drivers/uio/uio_pruss.c 126 */;
	struct resource *cocci_id/* drivers/uio/uio_pruss.c 123 */;
	struct platform_device *cocci_id/* drivers/uio/uio_pruss.c 119 */;
}
