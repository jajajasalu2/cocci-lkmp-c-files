cocci_test_suite() {
	struct dw_spi_mscc *cocci_id/* drivers/spi/spi-dw-mmio.c 82 */;
	u32 cocci_id/* drivers/spi/spi-dw-mmio.c 80 */;
	const char *cocci_id/* drivers/spi/spi-dw-mmio.c 80 */;
	bool cocci_id/* drivers/spi/spi-dw-mmio.c 59 */;
	struct spi_device *cocci_id/* drivers/spi/spi-dw-mmio.c 59 */;
	void cocci_id/* drivers/spi/spi-dw-mmio.c 59 */;
	struct dw_spi_mscc {
		struct regmap *syscon;
		void __iomem *spi_mst;
	} cocci_id/* drivers/spi/spi-dw-mmio.c 47 */;
	struct dw_spi_mmio {
		struct dw_spi dws;
		struct clk *clk;
		struct clk *pclk;
		void *priv;
	} cocci_id/* drivers/spi/spi-dw-mmio.c 28 */;
	struct platform_driver cocci_id/* drivers/spi/spi-dw-mmio.c 242 */;
	const struct acpi_device_id cocci_id/* drivers/spi/spi-dw-mmio.c 236 */[];
	const struct of_device_id cocci_id/* drivers/spi/spi-dw-mmio.c 226 */[];
	struct dw_spi_mmio cocci_id/* drivers/spi/spi-dw-mmio.c 143 */;
	struct dw_spi *cocci_id/* drivers/spi/spi-dw-mmio.c 139 */;
	int (*cocci_id/* drivers/spi/spi-dw-mmio.c 136 */)(struct platform_device *pdev,
							   struct dw_spi_mmio *dwsmmio);
	struct dw_spi_mmio *cocci_id/* drivers/spi/spi-dw-mmio.c 127 */;
	struct platform_device *cocci_id/* drivers/spi/spi-dw-mmio.c 126 */;
	int cocci_id/* drivers/spi/spi-dw-mmio.c 126 */;
}
