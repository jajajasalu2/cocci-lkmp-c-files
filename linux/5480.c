cocci_test_suite() {
	struct sifive_spi {
		void __iomem *regs;
		struct clk *clk;
		unsigned int fifo_depth;
		u32 cs_inactive;
		struct completion done;
	} cocci_id/* drivers/spi/spi-sifive.c 91 */;
	struct platform_driver cocci_id/* drivers/spi/spi-sifive.c 436 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-sifive.c 430 */[];
	struct sifive_spi cocci_id/* drivers/spi/spi-sifive.c 299 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sifive.c 292 */;
	const u8 *cocci_id/* drivers/spi/spi-sifive.c 260 */;
	u8 *cocci_id/* drivers/spi/spi-sifive.c 246 */;
	u32 cocci_id/* drivers/spi/spi-sifive.c 211 */;
	irqreturn_t cocci_id/* drivers/spi/spi-sifive.c 208 */;
	void *cocci_id/* drivers/spi/spi-sifive.c 208 */;
	int cocci_id/* drivers/spi/spi-sifive.c 208 */;
	unsigned int cocci_id/* drivers/spi/spi-sifive.c 171 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-sifive.c 168 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sifive.c 167 */;
	bool cocci_id/* drivers/spi/spi-sifive.c 153 */;
	struct spi_message *cocci_id/* drivers/spi/spi-sifive.c 131 */;
	struct spi_master *cocci_id/* drivers/spi/spi-sifive.c 131 */;
	struct sifive_spi *cocci_id/* drivers/spi/spi-sifive.c 109 */;
	void cocci_id/* drivers/spi/spi-sifive.c 109 */;
}
