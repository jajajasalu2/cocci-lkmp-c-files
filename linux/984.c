cocci_test_suite() {
	struct nxp_spifi {
		struct device *dev;
		struct clk *clk_spifi;
		struct clk *clk_reg;
		void __iomem *io_base;
		void __iomem *flash_base;
		struct spi_nor nor;
		bool memory_mode;
		u32 mcmd;
	} cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 53 */;
	struct platform_driver cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 474 */;
	const struct of_device_id cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 468 */[];
	struct resource *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 384 */;
	struct device_node *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 382 */;
	struct platform_device *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 380 */;
	u16 cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 289 */;
	struct spi_nor_hwcaps cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 283 */;
	const struct spi_nor_controller_ops cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 272 */;
	u8 cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 267 */[SPI_NOR_MAX_ID_LEN];
	struct spi_nor *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 265 */;
	void cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 265 */;
	u32 cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 222 */;
	struct nxp_spifi *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 221 */;
	loff_t cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 219 */;
	int cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 219 */;
	const u_char *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 189 */;
	u_char *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 174 */;
	ssize_t cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 173 */;
	size_t cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 173 */;
	const u8 *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 149 */;
	u8 cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 126 */;
	u8 *cocci_id/* drivers/mtd/spi-nor/nxp-spifi.c 126 */;
}
