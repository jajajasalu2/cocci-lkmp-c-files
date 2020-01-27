cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 553 */;
	const struct of_device_id cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 547 */[];
	const struct dev_pm_ops cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 537 */;
	struct device *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 530 */;
	struct resource *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 462 */;
	struct device_node *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 461 */;
	struct platform_device *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 459 */;
	struct spi_nor *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 439 */;
	const struct spi_nor_hwcaps cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 432 */;
	const struct spi_nor_controller_ops cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 422 */;
	struct mtk_nor *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 399 */;
	void cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 399 */;
	const u_char *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 318 */;
	u_char *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 264 */;
	loff_t cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 263 */;
	ssize_t cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 263 */;
	u32 cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 249 */;
	const u8 cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 196 */;
	const u8 *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 154 */;
	u8 *cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 154 */;
	size_t cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 154 */;
	u8 cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 153 */;
	int cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 153 */;
	struct mtk_nor {
		struct spi_nor nor;
		struct device *dev;
		void __iomem *base;
		struct clk *spi_clk;
		struct clk *nor_clk;
	} cocci_id/* drivers/mtd/spi-nor/mtk-quadspi.c 105 */;
}
