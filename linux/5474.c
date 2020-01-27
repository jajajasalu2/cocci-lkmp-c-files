cocci_test_suite() {
	struct mpc52xx_spi *cocci_id/* drivers/spi/spi-mpc52xx.c 95 */;
	int cocci_id/* drivers/spi/spi-mpc52xx.c 95 */;
	void cocci_id/* drivers/spi/spi-mpc52xx.c 95 */;
	struct mpc52xx_spi {
		struct spi_master *master;
		void __iomem *regs;
		int irq0;
		int irq1;
		unsigned int ipb_freq;
		int msg_count;
		int wcol_count;
		int wcol_ticks;
		u32 wcol_tx_timestamp;
		int modf_count;
		int byte_count;
		struct list_head queue;
		spinlock_t lock;
		struct work_struct work;
		struct spi_message *message;
		struct spi_transfer *transfer;
		int (*state)(int irq, struct mpc52xx_spi *ms, u8 status,
			     u8 data);
		int len;
		int timestamp;
		u8 *rx_buf;
		const u8 *tx_buf;
		int cs_change;
		int gpio_cs_count;
		unsigned int *gpio_cs;
	} cocci_id/* drivers/spi/spi-mpc52xx.c 60 */;
	struct platform_driver cocci_id/* drivers/spi/spi-mpc52xx.c 542 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-mpc52xx.c 536 */[];
	void __iomem *cocci_id/* drivers/spi/spi-mpc52xx.c 383 */;
	struct spi_master *cocci_id/* drivers/spi/spi-mpc52xx.c 381 */;
	struct platform_device *cocci_id/* drivers/spi/spi-mpc52xx.c 379 */;
	unsigned long cocci_id/* drivers/spi/spi-mpc52xx.c 363 */;
	struct spi_message *cocci_id/* drivers/spi/spi-mpc52xx.c 360 */;
	struct mpc52xx_spi cocci_id/* drivers/spi/spi-mpc52xx.c 348 */;
	struct work_struct *cocci_id/* drivers/spi/spi-mpc52xx.c 346 */;
	irqreturn_t cocci_id/* drivers/spi/spi-mpc52xx.c 334 */;
	void *cocci_id/* drivers/spi/spi-mpc52xx.c 334 */;
	u8 cocci_id/* drivers/spi/spi-mpc52xx.c 317 */;
	struct spi_transfer cocci_id/* drivers/spi/spi-mpc52xx.c 193 */;
	struct spi_message cocci_id/* drivers/spi/spi-mpc52xx.c 158 */;
	struct spi_device *cocci_id/* drivers/spi/spi-mpc52xx.c 145 */;
	int cocci_id/* drivers/spi/spi-mpc52xx.c 131 */(int irq,
							struct mpc52xx_spi *ms,
							u8 status, u8 data);
}
