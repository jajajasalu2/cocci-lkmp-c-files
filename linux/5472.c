cocci_test_suite() {
	u16 cocci_id/* drivers/spi/spi-mpc512x-psc.c 99 */;
	int cocci_id/* drivers/spi/spi-mpc512x-psc.c 98 */;
	u32 cocci_id/* drivers/spi/spi-mpc512x-psc.c 96 */;
	struct mpc512x_psc_spi *cocci_id/* drivers/spi/spi-mpc512x-psc.c 95 */;
	struct mpc512x_psc_spi_cs *cocci_id/* drivers/spi/spi-mpc512x-psc.c 94 */;
	struct spi_device *cocci_id/* drivers/spi/spi-mpc512x-psc.c 92 */;
	void cocci_id/* drivers/spi/spi-mpc512x-psc.c 92 */;
	struct mpc512x_psc_spi_cs {
		int bits_per_word;
		int speed_hz;
	} cocci_id/* drivers/spi/spi-mpc512x-psc.c 71 */;
	struct platform_driver cocci_id/* drivers/spi/spi-mpc512x-psc.c 615 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-mpc512x-psc.c 607 */[];
	u64 cocci_id/* drivers/spi/spi-mpc512x-psc.c 589 */;
	const u32 *cocci_id/* drivers/spi/spi-mpc512x-psc.c 588 */;
	struct platform_device *cocci_id/* drivers/spi/spi-mpc512x-psc.c 586 */;
	struct mpc512x_psc_spi {
		void (*cs_control)(struct spi_device *spi, bool on);
		int type;
		void __iomem *psc;
		struct mpc512x_psc_fifo __iomem *fifo;
		unsigned int irq;
		u8 bits_per_word;
		struct clk *clk_mclk;
		struct clk *clk_ipg;
		u32 mclk_rate;
		struct completion txisrdone;
	} cocci_id/* drivers/spi/spi-mpc512x-psc.c 54 */;
	struct mpc52xx_psc cocci_id/* drivers/spi/spi-mpc512x-psc.c 527 */;
	struct mpc512x_psc_fifo *cocci_id/* drivers/spi/spi-mpc512x-psc.c 527 */;
	struct clk *cocci_id/* drivers/spi/spi-mpc512x-psc.c 492 */;
	void *cocci_id/* drivers/spi/spi-mpc512x-psc.c 491 */;
	struct spi_master *cocci_id/* drivers/spi/spi-mpc512x-psc.c 489 */;
	struct fsl_spi_platform_data *cocci_id/* drivers/spi/spi-mpc512x-psc.c 487 */;
	unsigned int cocci_id/* drivers/spi/spi-mpc512x-psc.c 485 */;
	struct device *cocci_id/* drivers/spi/spi-mpc512x-psc.c 484 */;
	bool cocci_id/* drivers/spi/spi-mpc512x-psc.c 479 */;
	struct mpc5125_psc __iomem *cocci_id/* drivers/spi/spi-mpc512x-psc.c 47 */;
	struct mpc512x_psc_fifo __iomem *cocci_id/* drivers/spi/spi-mpc512x-psc.c 466 */;
	irqreturn_t cocci_id/* drivers/spi/spi-mpc512x-psc.c 463 */;
	struct mpc52xx_psc __iomem *cocci_id/* drivers/spi/spi-mpc512x-psc.c 42 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-mpc512x-psc.c 295 */;
	unsigned cocci_id/* drivers/spi/spi-mpc512x-psc.c 293 */;
	struct spi_message *cocci_id/* drivers/spi/spi-mpc512x-psc.c 290 */;
	enum{TYPE_MPC5121, TYPE_MPC5125,} cocci_id/* drivers/spi/spi-mpc512x-psc.c 29 */;
	u8 cocci_id/* drivers/spi/spi-mpc512x-psc.c 164 */;
	u8 *cocci_id/* drivers/spi/spi-mpc512x-psc.c 156 */;
	size_t cocci_id/* drivers/spi/spi-mpc512x-psc.c 154 */;
}
