cocci_test_suite() {
	struct img_spfi {
		struct device *dev;
		struct spi_master *master;
		spinlock_t lock;
		void __iomem *regs;
		phys_addr_t phys;
		int irq;
		struct clk *spfi_clk;
		struct clk *sys_clk;
		struct dma_chan *rx_ch;
		struct dma_chan *tx_ch;
		bool tx_dma_busy;
		bool rx_dma_busy;
	} cocci_id/* drivers/spi/spi-img-spfi.c 88 */;
	struct platform_driver cocci_id/* drivers/spi/spi-img-spfi.c 795 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-img-spfi.c 789 */[];
	struct device *cocci_id/* drivers/spi/spi-img-spfi.c 767 */;
	struct resource *cocci_id/* drivers/spi/spi-img-spfi.c 582 */;
	struct platform_device *cocci_id/* drivers/spi/spi-img-spfi.c 578 */;
	irqreturn_t cocci_id/* drivers/spi/spi-img-spfi.c 563 */;
	int cocci_id/* drivers/spi/spi-img-spfi.c 563 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-img-spfi.c 556 */;
	bool cocci_id/* drivers/spi/spi-img-spfi.c 555 */;
	struct spi_master *cocci_id/* drivers/spi/spi-img-spfi.c 555 */;
	struct spi_device *cocci_id/* drivers/spi/spi-img-spfi.c 555 */;
	u32 cocci_id/* drivers/spi/spi-img-spfi.c 497 */;
	struct img_spfi *cocci_id/* drivers/spi/spi-img-spfi.c 496 */;
	struct img_spfi_device_data *cocci_id/* drivers/spi/spi-img-spfi.c 483 */;
	void cocci_id/* drivers/spi/spi-img-spfi.c 481 */;
	struct spi_message *cocci_id/* drivers/spi/spi-img-spfi.c 393 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-img-spfi.c 317 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-img-spfi.c 316 */;
	unsigned long cocci_id/* drivers/spi/spi-img-spfi.c 286 */;
	void *cocci_id/* drivers/spi/spi-img-spfi.c 283 */;
	const void *cocci_id/* drivers/spi/spi-img-spfi.c 235 */;
	unsigned int cocci_id/* drivers/spi/spi-img-spfi.c 234 */;
	u8 *cocci_id/* drivers/spi/spi-img-spfi.c 210 */;
	u32 *cocci_id/* drivers/spi/spi-img-spfi.c 191 */;
	const u8 *cocci_id/* drivers/spi/spi-img-spfi.c 173 */;
	const u32 *cocci_id/* drivers/spi/spi-img-spfi.c 155 */;
	struct img_spfi_device_data {
		bool gpio_requested;
	} cocci_id/* drivers/spi/spi-img-spfi.c 105 */;
}
