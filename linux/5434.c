cocci_test_suite() {
	struct bcm63xx_hsspi {
		struct completion done;
		struct mutex bus_mutex;
		struct platform_device *pdev;
		struct clk *clk;
		struct clk *pll_clk;
		void __iomem *regs;
		u8 __iomem *fifo;
		u32 speed_hz;
		u8 cs_polarity;
	} cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 98 */;
	struct platform_driver cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 505 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 499 */[];
	u8 __iomem *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 388 */;
	u32 cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 336 */;
	struct clk *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 334 */;
	struct device *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 333 */;
	void __iomem *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 332 */;
	struct spi_master *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 330 */;
	struct platform_device *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 328 */;
	irqreturn_t cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 313 */;
	void *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 313 */;
	struct spi_message *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 261 */;
	u8 *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 163 */;
	const u8 *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 162 */;
	u16 cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 159 */;
	unsigned int cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 158 */;
	struct bcm63xx_hsspi *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 157 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 155 */;
	struct spi_device *cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 155 */;
	int cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 155 */;
	void cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 128 */;
	bool cocci_id/* drivers/spi/spi-bcm63xx-hsspi.c 113 */;
}
