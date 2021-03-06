cocci_test_suite() {
	struct pic32_spi {
		dma_addr_t dma_base;
		struct pic32_spi_regs __iomem *regs;
		int fault_irq;
		int rx_irq;
		int tx_irq;
		u32 fifo_n_byte;
		struct clk *clk;
		struct spi_master *master;
		u32 speed_hz;
		u32 mode;
		u32 bits_per_word;
		u32 fifo_n_elm;
#define PIC32F_DMA_PREP 0
		unsigned long flags;
		struct completion xfer_done;
		const void *tx;
		const void *tx_end;
		const void *rx;
		const void *rx_end;
		int len;
		void (*rx_fifo)(struct pic32_spi *);
		void (*tx_fifo)(struct pic32_spi *);
	} cocci_id/* drivers/spi/spi-pic32.c 95 */;
	struct platform_driver cocci_id/* drivers/spi/spi-pic32.c 866 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-pic32.c 860 */[];
	struct resource *cocci_id/* drivers/spi/spi-pic32.c 713 */;
	struct platform_device *cocci_id/* drivers/spi/spi-pic32.c 710 */;
	struct device *cocci_id/* drivers/spi/spi-pic32.c 609 */;
	const void *cocci_id/* drivers/spi/spi-pic32.c 536 */;
	unsigned long cocci_id/* drivers/spi/spi-pic32.c 502 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-pic32.c 487 */;
	struct spi_device *cocci_id/* drivers/spi/spi-pic32.c 486 */;
	bool cocci_id/* drivers/spi/spi-pic32.c 485 */;
	struct spi_master *cocci_id/* drivers/spi/spi-pic32.c 485 */;
	struct spi_message *cocci_id/* drivers/spi/spi-pic32.c 444 */;
	enum dma_slave_buswidth cocci_id/* drivers/spi/spi-pic32.c 391 */;
	u8 cocci_id/* drivers/spi/spi-pic32.c 389 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-pic32.c 361 */;
	struct pic32_spi_regs cocci_id/* drivers/spi/spi-pic32.c 359 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-pic32.c 306 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-pic32.c 304 */;
	void *cocci_id/* drivers/spi/spi-pic32.c 293 */;
	struct pic32_spi_regs {
		u32 ctrl;
		u32 ctrl_clr;
		u32 ctrl_set;
		u32 ctrl_inv;
		u32 status;
		u32 status_clr;
		u32 status_set;
		u32 status_inv;
		u32 buf;
		u32 dontuse[3];
		u32 baud;
		u32 dontuse2[3];
		u32 ctrl2;
		u32 ctrl2_clr;
		u32 ctrl2_set;
		u32 ctrl2_inv;
	} cocci_id/* drivers/spi/spi-pic32.c 26 */;
	irqreturn_t cocci_id/* drivers/spi/spi-pic32.c 233 */;
	const char *cocci_id/* drivers/spi/spi-pic32.c 219 */;
	struct pic32_spi *cocci_id/* drivers/spi/spi-pic32.c 219 */;
	void cocci_id/* drivers/spi/spi-pic32.c 219 */;
	int cocci_id/* drivers/spi/spi-pic32.c 182 */;
	u32 cocci_id/* drivers/spi/spi-pic32.c 146 */;
}
