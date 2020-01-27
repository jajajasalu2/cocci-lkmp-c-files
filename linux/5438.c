cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/spi/spi-rspi.c 973 */;
	struct spi_message *cocci_id/* drivers/spi/spi-rspi.c 925 */;
	u16 cocci_id/* drivers/spi/spi-rspi.c 888 */;
	const struct spi_message *cocci_id/* drivers/spi/spi-rspi.c 884 */;
	struct spi_device *cocci_id/* drivers/spi/spi-rspi.c 841 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-rspi.c 840 */;
	u8 *cocci_id/* drivers/spi/spi-rspi.c 813 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-rspi.c 811 */;
	const u8 *cocci_id/* drivers/spi/spi-rspi.c 781 */;
	const struct spi_transfer *cocci_id/* drivers/spi/spi-rspi.c 661 */;
	bool cocci_id/* drivers/spi/spi-rspi.c 660 */;
	const struct rspi_data *cocci_id/* drivers/spi/spi-rspi.c 660 */;
	u8 cocci_id/* drivers/spi/spi-rspi.c 651 */;
	void cocci_id/* drivers/spi/spi-rspi.c 649 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-rspi.c 527 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-rspi.c 524 */;
	struct sg_table *cocci_id/* drivers/spi/spi-rspi.c 521 */;
	void *cocci_id/* drivers/spi/spi-rspi.c 513 */;
	unsigned int cocci_id/* drivers/spi/spi-rspi.c 411 */;
	struct rspi_data *cocci_id/* drivers/spi/spi-rspi.c 333 */;
	int cocci_id/* drivers/spi/spi-rspi.c 333 */;
	struct spi_ops {
		int (*set_config_register)(struct rspi_data *rspi,
					   int access_size);
		int (*transfer_one)(struct spi_controller *ctlr,
				    struct spi_device *spi,
				    struct spi_transfer *xfer);
		u16 mode_bits;
		u16 flags;
		u16 fifo_size;
	} cocci_id/* drivers/spi/spi-rspi.c 238 */;
	struct rspi_data {
		void __iomem *addr;
		u32 max_speed_hz;
		struct spi_controller *ctlr;
		wait_queue_head_t wait;
		struct clk *clk;
		u16 spcmd;
		u8 spsr;
		u8 sppcr;
		int rx_irq,tx_irq;
		const struct spi_ops *ops;
		unsigned dma_callbacked:1;
		unsigned byte_access:1;
	} cocci_id/* drivers/spi/spi-rspi.c 180 */;
	struct platform_driver cocci_id/* drivers/spi/spi-rspi.c 1345 */;
	const struct platform_device_id cocci_id/* drivers/spi/spi-rspi.c 1315 */[];
	struct spi_ops *cocci_id/* drivers/spi/spi-rspi.c 1213 */;
	struct rspi_data cocci_id/* drivers/spi/spi-rspi.c 1203 */;
	const struct spi_ops *cocci_id/* drivers/spi/spi-rspi.c 1201 */;
	const struct rspi_plat_data *cocci_id/* drivers/spi/spi-rspi.c 1200 */;
	struct resource *cocci_id/* drivers/spi/spi-rspi.c 1196 */;
	struct platform_device *cocci_id/* drivers/spi/spi-rspi.c 1194 */;
	irq_handler_t cocci_id/* drivers/spi/spi-rspi.c 1183 */;
	const char *cocci_id/* drivers/spi/spi-rspi.c 1183 */;
	u32 cocci_id/* drivers/spi/spi-rspi.c 1161 */;
	struct device *cocci_id/* drivers/spi/spi-rspi.c 1159 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-rspi.c 1147 */[];
	const struct spi_ops cocci_id/* drivers/spi/spi-rspi.c 1136 */;
	const struct resource *cocci_id/* drivers/spi/spi-rspi.c 1067 */;
	unsigned long cocci_id/* drivers/spi/spi-rspi.c 1039 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-rspi.c 1032 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-rspi.c 1030 */;
	dma_addr_t cocci_id/* drivers/spi/spi-rspi.c 1028 */;
	enum dma_transfer_direction cocci_id/* drivers/spi/spi-rspi.c 1026 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-rspi.c 1025 */;
}
