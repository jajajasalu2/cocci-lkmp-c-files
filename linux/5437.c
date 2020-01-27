cocci_test_suite() {
	struct omap1_spi100k_cs {
		void __iomem *base;
		int word_len;
	} cocci_id/* drivers/spi/spi-omap-100k.c 76 */;
	struct omap1_spi100k {
		struct clk *ick;
		struct clk *fck;
		void __iomem *base;
	} cocci_id/* drivers/spi/spi-omap-100k.c 68 */;
	struct platform_driver cocci_id/* drivers/spi/spi-omap-100k.c 479 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-omap-100k.c 474 */;
	struct device *cocci_id/* drivers/spi/spi-omap-100k.c 451 */;
	void __iomem *cocci_id/* drivers/spi/spi-omap-100k.c 380 */;
	struct spi_master *cocci_id/* drivers/spi/spi-omap-100k.c 348 */;
	struct platform_device *cocci_id/* drivers/spi/spi-omap-100k.c 346 */;
	unsigned cocci_id/* drivers/spi/spi-omap-100k.c 313 */;
	struct spi_message *cocci_id/* drivers/spi/spi-omap-100k.c 290 */;
	struct omap1_spi100k_cs *cocci_id/* drivers/spi/spi-omap-100k.c 264 */;
	struct spi_device *cocci_id/* drivers/spi/spi-omap-100k.c 260 */;
	u8 cocci_id/* drivers/spi/spi-omap-100k.c 238 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-omap-100k.c 234 */;
	const u32 *cocci_id/* drivers/spi/spi-omap-100k.c 217 */;
	u32 *cocci_id/* drivers/spi/spi-omap-100k.c 216 */;
	const u16 *cocci_id/* drivers/spi/spi-omap-100k.c 204 */;
	u16 *cocci_id/* drivers/spi/spi-omap-100k.c 203 */;
	const u8 *cocci_id/* drivers/spi/spi-omap-100k.c 191 */;
	u8 *cocci_id/* drivers/spi/spi-omap-100k.c 190 */;
	unsigned int cocci_id/* drivers/spi/spi-omap-100k.c 182 */;
	struct omap1_spi100k *cocci_id/* drivers/spi/spi-omap-100k.c 170 */;
	int cocci_id/* drivers/spi/spi-omap-100k.c 170 */;
	void cocci_id/* drivers/spi/spi-omap-100k.c 170 */;
}
