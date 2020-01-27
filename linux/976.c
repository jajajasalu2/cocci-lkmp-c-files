cocci_test_suite() {
	struct hifmc_host {
		struct device *dev;
		struct mutex lock;
		void __iomem *regbase;
		void __iomem *iobase;
		struct clk *clk;
		void *buffer;
		dma_addr_t dma_buffer;
		struct spi_nor *nor[HIFMC_MAX_CHIP_NUM];
		u32 num_chip;
	} cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 89 */;
	struct hifmc_priv {
		u32 chipselect;
		u32 clkrate;
		struct hifmc_host *host;
	} cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 82 */;
	enum hifmc_iftype{IF_TYPE_STD, IF_TYPE_DUAL, IF_TYPE_DIO, IF_TYPE_QUAD, IF_TYPE_QIO,} cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 74 */;
	struct platform_driver cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 488 */;
	const struct of_device_id cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 482 */[];
	struct resource *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 422 */;
	struct device *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 421 */;
	struct platform_device *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 419 */;
	struct mtd_info *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 339 */;
	const struct spi_nor_hwcaps cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 329 */;
	struct device_node *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 326 */;
	const struct spi_nor_controller_ops cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 314 */;
	const u_char *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 292 */;
	u_char *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 269 */;
	ssize_t cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 268 */;
	u32 cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 235 */;
	struct hifmc_host *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 233 */;
	struct hifmc_priv *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 232 */;
	u8 cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 230 */;
	dma_addr_t cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 230 */;
	size_t cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 230 */;
	loff_t cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 229 */;
	struct spi_nor *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 229 */;
	int cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 229 */;
	const u8 *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 218 */;
	u8 *cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 202 */;
	enum spi_nor_ops cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 147 */;
	void cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 137 */;
	enum hifmc_iftype cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 113 */;
	enum spi_nor_protocol cocci_id/* drivers/mtd/spi-nor/hisi-sfc.c 111 */;
}
