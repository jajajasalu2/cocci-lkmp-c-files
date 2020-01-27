cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-ti-qspi.c 843 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-ti-qspi.c 839 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-ti-qspi.c 673 */;
	struct device_node *cocci_id/* drivers/spi/spi-ti-qspi.c 670 */;
	struct resource *cocci_id/* drivers/spi/spi-ti-qspi.c 669 */;
	struct spi_master *cocci_id/* drivers/spi/spi-ti-qspi.c 668 */;
	struct platform_device *cocci_id/* drivers/spi/spi-ti-qspi.c 665 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-ti-qspi.c 658 */[];
	struct device *cocci_id/* drivers/spi/spi-ti-qspi.c 648 */;
	struct spi_message *cocci_id/* drivers/spi/spi-ti-qspi.c 583 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-ti-qspi.c 578 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-ti-qspi.c 531 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-ti-qspi.c 530 */;
	u8 cocci_id/* drivers/spi/spi-ti-qspi.c 506 */;
	struct spi_device *cocci_id/* drivers/spi/spi-ti-qspi.c 494 */;
	void cocci_id/* drivers/spi/spi-ti-qspi.c 494 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-ti-qspi.c 463 */;
	struct sg_table cocci_id/* drivers/spi/spi-ti-qspi.c 460 */;
	dma_addr_t cocci_id/* drivers/spi/spi-ti-qspi.c 436 */;
	void *cocci_id/* drivers/spi/spi-ti-qspi.c 434 */;
	size_t cocci_id/* drivers/spi/spi-ti-qspi.c 434 */;
	loff_t cocci_id/* drivers/spi/spi-ti-qspi.c 433 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-ti-qspi.c 401 */;
	enum dma_ctrl_flags cocci_id/* drivers/spi/spi-ti-qspi.c 400 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-ti-qspi.c 399 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-ti-qspi.c 398 */;
	struct ti_qspi {
		struct completion transfer_complete;
		struct mutex list_lock;
		struct spi_master *master;
		void __iomem *base;
		void __iomem *mmap_base;
		size_t mmap_size;
		struct regmap *ctrl_base;
		unsigned int ctrl_reg;
		struct clk *fclk;
		struct device *dev;
		struct ti_qspi_regs ctx_reg;
		dma_addr_t mmap_phys_base;
		dma_addr_t rx_bb_dma_addr;
		void *rx_bb_addr;
		struct dma_chan *rx_chan;
		u32 spi_max_frequency;
		u32 cmd;
		u32 dc;
		bool mmap_enabled;
		int current_cs;
	} cocci_id/* drivers/spi/spi-ti-qspi.c 38 */;
	u32 *cocci_id/* drivers/spi/spi-ti-qspi.c 354 */;
	u16 *cocci_id/* drivers/spi/spi-ti-qspi.c 351 */;
	struct ti_qspi_regs {
		u32 clkctrl;
	} cocci_id/* drivers/spi/spi-ti-qspi.c 34 */;
	u8 *cocci_id/* drivers/spi/spi-ti-qspi.c 319 */;
	unsigned int cocci_id/* drivers/spi/spi-ti-qspi.c 318 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-ti-qspi.c 314 */;
	int cocci_id/* drivers/spi/spi-ti-qspi.c 314 */;
	const u8 *cocci_id/* drivers/spi/spi-ti-qspi.c 250 */;
	unsigned long cocci_id/* drivers/spi/spi-ti-qspi.c 215 */;
	u32 cocci_id/* drivers/spi/spi-ti-qspi.c 212 */;
	struct ti_qspi *cocci_id/* drivers/spi/spi-ti-qspi.c 212 */;
	struct ti_qspi_regs *cocci_id/* drivers/spi/spi-ti-qspi.c 207 */;
}
