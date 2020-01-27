cocci_test_suite() {
	struct at91_usart_spi {
		struct platform_device *mpdev;
		struct spi_transfer *current_transfer;
		void __iomem *regs;
		struct device *dev;
		struct clk *clk;
		struct completion xfer_completion;
		spinlock_t lock;
		phys_addr_t phybase;
		int irq;
		unsigned int current_tx_remaining_bytes;
		unsigned int current_rx_remaining_bytes;
		u32 spi_clk;
		u32 status;
		bool xfer_failed;
		bool use_dma;
	} cocci_id/* drivers/spi/spi-at91-usart.c 79 */;
	struct platform_driver cocci_id/* drivers/spi/spi-at91-usart.c 691 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-at91-usart.c 684 */[];
	struct clk *cocci_id/* drivers/spi/spi-at91-usart.c 517 */;
	struct resource *cocci_id/* drivers/spi/spi-at91-usart.c 514 */;
	struct device_node *cocci_id/* drivers/spi/spi-at91-usart.c 485 */;
	struct platform_device *cocci_id/* drivers/spi/spi-at91-usart.c 483 */;
	int cocci_id/* drivers/spi/spi-at91-usart.c 483 */;
	struct at91_usart_spi_device *cocci_id/* drivers/spi/spi-at91-usart.c 471 */;
	void cocci_id/* drivers/spi/spi-at91-usart.c 469 */;
	u32 *cocci_id/* drivers/spi/spi-at91-usart.c 449 */;
	struct spi_message *cocci_id/* drivers/spi/spi-at91-usart.c 445 */;
	unsigned int cocci_id/* drivers/spi/spi-at91-usart.c 364 */;
	irqreturn_t cocci_id/* drivers/spi/spi-at91-usart.c 334 */;
	void *cocci_id/* drivers/spi/spi-at91-usart.c 334 */;
	u8 *cocci_id/* drivers/spi/spi-at91-usart.c 317 */;
	const u8 *cocci_id/* drivers/spi/spi-at91-usart.c 302 */;
	u32 cocci_id/* drivers/spi/spi-at91-usart.c 287 */;
	unsigned long cocci_id/* drivers/spi/spi-at91-usart.c 271 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-at91-usart.c 224 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-at91-usart.c 222 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-at91-usart.c 220 */;
	dma_addr_t cocci_id/* drivers/spi/spi-at91-usart.c 163 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-at91-usart.c 129 */;
	phys_addr_t cocci_id/* drivers/spi/spi-at91-usart.c 128 */;
	struct device *cocci_id/* drivers/spi/spi-at91-usart.c 127 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-at91-usart.c 126 */;
	struct at91_usart_spi *cocci_id/* drivers/spi/spi-at91-usart.c 118 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-at91-usart.c 116 */;
	struct spi_device *cocci_id/* drivers/spi/spi-at91-usart.c 115 */;
	bool cocci_id/* drivers/spi/spi-at91-usart.c 114 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-at91-usart.c 114 */;
}