cocci_test_suite() {
	struct spi_ppc4xx_regs {
		u8 mode;
		u8 rxd;
		u8 txd;
		u8 cr;
		u8 sr;
		u8 dummy;
		u8 cdm;
	} cocci_id/* drivers/spi/spi-ppc4xx.c 93 */;
	struct platform_driver cocci_id/* drivers/spi/spi-ppc4xx.c 571 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-ppc4xx.c 564 */[];
	struct spi_ppc4xx_regs cocci_id/* drivers/spi/spi-ppc4xx.c 492 */;
	enum of_gpio_flags cocci_id/* drivers/spi/spi-ppc4xx.c 419 */;
	const unsigned int *cocci_id/* drivers/spi/spi-ppc4xx.c 389 */;
	struct device *cocci_id/* drivers/spi/spi-ppc4xx.c 385 */;
	struct device_node *cocci_id/* drivers/spi/spi-ppc4xx.c 384 */;
	struct resource cocci_id/* drivers/spi/spi-ppc4xx.c 383 */;
	struct spi_bitbang *cocci_id/* drivers/spi/spi-ppc4xx.c 382 */;
	struct spi_master *cocci_id/* drivers/spi/spi-ppc4xx.c 381 */;
	struct platform_device *cocci_id/* drivers/spi/spi-ppc4xx.c 378 */;
	int cocci_id/* drivers/spi/spi-ppc4xx.c 365 */;
	struct ppc4xx_spi *cocci_id/* drivers/spi/spi-ppc4xx.c 362 */;
	void cocci_id/* drivers/spi/spi-ppc4xx.c 362 */;
	u8 cocci_id/* drivers/spi/spi-ppc4xx.c 287 */;
	irqreturn_t cocci_id/* drivers/spi/spi-ppc4xx.c 284 */;
	void *cocci_id/* drivers/spi/spi-ppc4xx.c 284 */;
	unsigned int cocci_id/* drivers/spi/spi-ppc4xx.c 266 */;
	struct spi_device *cocci_id/* drivers/spi/spi-ppc4xx.c 263 */;
	struct spi_ppc4xx_cs *cocci_id/* drivers/spi/spi-ppc4xx.c 222 */;
	u32 cocci_id/* drivers/spi/spi-ppc4xx.c 172 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-ppc4xx.c 166 */;
	struct spi_ppc4xx_cs {
		u8 mode;
	} cocci_id/* drivers/spi/spi-ppc4xx.c 138 */;
	struct ppc4xx_spi {
		struct spi_bitbang bitbang;
		struct completion done;
		u64 mapbase;
		u64 mapsize;
		int irqnum;
		unsigned int opb_freq;
		int len;
		int count;
		const unsigned char *tx;
		unsigned char *rx;
		int *gpios;
		struct spi_ppc4xx_regs __iomem *regs;
		struct spi_master *master;
		struct device *dev;
	} cocci_id/* drivers/spi/spi-ppc4xx.c 112 */;
}
