cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-armada-3700.c 926 */;
	unsigned long cocci_id/* drivers/spi/spi-armada-3700.c 884 */;
	struct a3700_spi cocci_id/* drivers/spi/spi-armada-3700.c 853 */;
	struct device_node *cocci_id/* drivers/spi/spi-armada-3700.c 819 */;
	struct device *cocci_id/* drivers/spi/spi-armada-3700.c 818 */;
	struct platform_device *cocci_id/* drivers/spi/spi-armada-3700.c 816 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-armada-3700.c 809 */[];
	struct spi_transfer *cocci_id/* drivers/spi/spi-armada-3700.c 789 */;
	struct spi_device *cocci_id/* drivers/spi/spi-armada-3700.c 574 */;
	struct spi_message *cocci_id/* drivers/spi/spi-armada-3700.c 571 */;
	u32 cocci_id/* drivers/spi/spi-armada-3700.c 512 */;
	struct a3700_spi *cocci_id/* drivers/spi/spi-armada-3700.c 510 */;
	int cocci_id/* drivers/spi/spi-armada-3700.c 510 */;
	u32 *cocci_id/* drivers/spi/spi-armada-3700.c 501 */;
	irqreturn_t cocci_id/* drivers/spi/spi-armada-3700.c 318 */;
	void *cocci_id/* drivers/spi/spi-armada-3700.c 318 */;
	struct spi_master *cocci_id/* drivers/spi/spi-armada-3700.c 281 */;
	bool cocci_id/* drivers/spi/spi-armada-3700.c 186 */;
	unsigned int cocci_id/* drivers/spi/spi-armada-3700.c 136 */;
	void cocci_id/* drivers/spi/spi-armada-3700.c 136 */;
	struct a3700_spi {
		struct spi_master *master;
		void __iomem *base;
		struct clk *clk;
		unsigned int irq;
		unsigned int flags;
		bool xmit_data;
		const u8 *tx_buf;
		u8 *rx_buf;
		size_t buf_len;
		u8 byte_len;
		u32 wait_mask;
		struct completion done;
	} cocci_id/* drivers/spi/spi-armada-3700.c 102 */;
}
