cocci_test_suite() {
	unsigned int cocci_id/* drivers/spi/spi-st-ssc4.c 96 */;
	struct spi_st {
		void __iomem *base;
		struct clk *clk;
		struct device *dev;
		const u8 *tx_ptr;
		u8 *rx_ptr;
		u16 bytes_per_word;
		unsigned int words_remaining;
		unsigned int baud;
		struct completion done;
	} cocci_id/* drivers/spi/spi-st-ssc4.c 54 */;
	struct platform_driver cocci_id/* drivers/spi/spi-st-ssc4.c 469 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-st-ssc4.c 463 */[];
	struct device *cocci_id/* drivers/spi/spi-st-ssc4.c 445 */;
	u32 cocci_id/* drivers/spi/spi-st-ssc4.c 303 */;
	struct spi_master *cocci_id/* drivers/spi/spi-st-ssc4.c 300 */;
	struct device_node *cocci_id/* drivers/spi/spi-st-ssc4.c 299 */;
	struct platform_device *cocci_id/* drivers/spi/spi-st-ssc4.c 297 */;
	struct spi_st *cocci_id/* drivers/spi/spi-st-ssc4.c 275 */;
	irqreturn_t cocci_id/* drivers/spi/spi-st-ssc4.c 273 */;
	void *cocci_id/* drivers/spi/spi-st-ssc4.c 273 */;
	int cocci_id/* drivers/spi/spi-st-ssc4.c 273 */;
	struct spi_device *cocci_id/* drivers/spi/spi-st-ssc4.c 174 */;
	void cocci_id/* drivers/spi/spi-st-ssc4.c 174 */;
	uint32_t cocci_id/* drivers/spi/spi-st-ssc4.c 123 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-st-ssc4.c 120 */;
	uint8_t cocci_id/* drivers/spi/spi-st-ssc4.c 109 */;
}
