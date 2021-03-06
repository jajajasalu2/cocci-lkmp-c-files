cocci_test_suite() {
	unsigned short cocci_id/* drivers/mtd/nand/onenand/omap2.c 74 */;
	bool cocci_id/* drivers/mtd/nand/onenand/omap2.c 71 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/onenand/omap2.c 603 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/onenand/omap2.c 597 */[];
	irqreturn_t cocci_id/* drivers/mtd/nand/onenand/omap2.c 50 */;
	struct omap2_onenand cocci_id/* drivers/mtd/nand/onenand/omap2.c 481 */;
	struct device_node *cocci_id/* drivers/mtd/nand/onenand/omap2.c 467 */;
	struct device *cocci_id/* drivers/mtd/nand/onenand/omap2.c 466 */;
	struct gpmc_onenand_info cocci_id/* drivers/mtd/nand/onenand/omap2.c 465 */;
	struct resource *cocci_id/* drivers/mtd/nand/onenand/omap2.c 463 */;
	dma_cap_mask_t cocci_id/* drivers/mtd/nand/onenand/omap2.c 461 */;
	u32 cocci_id/* drivers/mtd/nand/onenand/omap2.c 460 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/onenand/omap2.c 458 */;
	void *cocci_id/* drivers/mtd/nand/onenand/omap2.c 45 */;
	void cocci_id/* drivers/mtd/nand/onenand/omap2.c 45 */;
	const unsigned char *cocci_id/* drivers/mtd/nand/onenand/omap2.c 408 */;
	unsigned char *cocci_id/* drivers/mtd/nand/onenand/omap2.c 360 */;
	struct omap2_onenand {
		struct platform_device *pdev;
		int gpmc_cs;
		unsigned long phys_base;
		struct gpio_desc *int_gpiod;
		struct mtd_info mtd;
		struct onenand_chip onenand;
		struct completion irq_done;
		struct completion dma_done;
		struct dma_chan *dma_chan;
	} cocci_id/* drivers/mtd/nand/onenand/omap2.c 33 */;
	dma_cookie_t cocci_id/* drivers/mtd/nand/onenand/omap2.c 329 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mtd/nand/onenand/omap2.c 328 */;
	size_t cocci_id/* drivers/mtd/nand/onenand/omap2.c 326 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/onenand/omap2.c 325 */;
	struct omap2_onenand *cocci_id/* drivers/mtd/nand/onenand/omap2.c 324 */;
	struct onenand_chip *cocci_id/* drivers/mtd/nand/onenand/omap2.c 312 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/onenand/omap2.c 310 */;
	int cocci_id/* drivers/mtd/nand/onenand/omap2.c 310 */;
	unsigned long cocci_id/* drivers/mtd/nand/onenand/omap2.c 148 */;
	unsigned int cocci_id/* drivers/mtd/nand/onenand/omap2.c 146 */;
	char *cocci_id/* drivers/mtd/nand/onenand/omap2.c 129 */;
}
