cocci_test_suite() {
	struct stm32_qspi {
		struct device *dev;
		struct spi_controller *ctrl;
		phys_addr_t phys_base;
		void __iomem *io_base;
		void __iomem *mm_base;
		resource_size_t mm_size;
		struct clk *clk;
		u32 clk_rate;
		struct stm32_qspi_flash flash[STM32_QSPI_MAX_NORCHIP];
		struct completion data_completion;
		u32 fmode;
		struct dma_chan *dma_chtx;
		struct dma_chan *dma_chrx;
		struct completion dma_completion;
		u32 cr_reg;
		u32 dcr_reg;
		struct mutex lock;
	} cocci_id/* drivers/spi/spi-stm32-qspi.c 97 */;
	struct stm32_qspi_flash {
		struct stm32_qspi *qspi;
		u32 cs;
		u32 presc;
	} cocci_id/* drivers/spi/spi-stm32-qspi.c 91 */;
	struct platform_driver cocci_id/* drivers/spi/spi-stm32-qspi.c 672 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-stm32-qspi.c 666 */[];
	int __maybe_unused cocci_id/* drivers/spi/spi-stm32-qspi.c 651 */;
	struct resource *cocci_id/* drivers/spi/spi-stm32-qspi.c 539 */;
	struct reset_control *cocci_id/* drivers/spi/spi-stm32-qspi.c 537 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-stm32-qspi.c 536 */;
	struct platform_device *cocci_id/* drivers/spi/spi-stm32-qspi.c 533 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-stm32-qspi.c 520 */;
	struct stm32_qspi *cocci_id/* drivers/spi/spi-stm32-qspi.c 508 */;
	struct device *cocci_id/* drivers/spi/spi-stm32-qspi.c 476 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-stm32-qspi.c 475 */;
	struct spi_device *cocci_id/* drivers/spi/spi-stm32-qspi.c 441 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-stm32-qspi.c 429 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-stm32-qspi.c 429 */;
	int cocci_id/* drivers/spi/spi-stm32-qspi.c 429 */;
	struct stm32_qspi_flash *cocci_id/* drivers/spi/spi-stm32-qspi.c 330 */;
	u8 cocci_id/* drivers/spi/spi-stm32-qspi.c 319 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-stm32-qspi.c 206 */;
	struct sg_table cocci_id/* drivers/spi/spi-stm32-qspi.c 205 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-stm32-qspi.c 204 */;
	enum dma_transfer_direction cocci_id/* drivers/spi/spi-stm32-qspi.c 203 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-stm32-qspi.c 202 */;
	struct completion *cocci_id/* drivers/spi/spi-stm32-qspi.c 194 */;
	void *cocci_id/* drivers/spi/spi-stm32-qspi.c 192 */;
	void cocci_id/* drivers/spi/spi-stm32-qspi.c 192 */;
	void (*cocci_id/* drivers/spi/spi-stm32-qspi.c 155 */)(u8 *val,
							       void __iomem *addr);
	u8 *cocci_id/* drivers/spi/spi-stm32-qspi.c 142 */;
	void __iomem *cocci_id/* drivers/spi/spi-stm32-qspi.c 142 */;
	u32 cocci_id/* drivers/spi/spi-stm32-qspi.c 127 */;
	irqreturn_t cocci_id/* drivers/spi/spi-stm32-qspi.c 124 */;
}
