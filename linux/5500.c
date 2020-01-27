cocci_test_suite() {
	void (*cocci_id/* drivers/spi/spi-sh-msiof.c 911 */)(u32 *,
							     const u32 *,
							     unsigned int);
	struct spi_transfer *cocci_id/* drivers/spi/spi-sh-msiof.c 908 */;
	unsigned long cocci_id/* drivers/spi/spi-sh-msiof.c 866 */;
	const u32 *cocci_id/* drivers/spi/spi-sh-msiof.c 863 */;
	u32 *cocci_id/* drivers/spi/spi-sh-msiof.c 863 */;
	unsigned int cocci_id/* drivers/spi/spi-sh-msiof.c 863 */;
	void cocci_id/* drivers/spi/spi-sh-msiof.c 863 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-sh-msiof.c 748 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-sh-msiof.c 747 */;
	u32 cocci_id/* drivers/spi/spi-sh-msiof.c 746 */;
	const void *cocci_id/* drivers/spi/spi-sh-msiof.c 743 */;
	struct sh_msiof_spi_priv *cocci_id/* drivers/spi/spi-sh-msiof.c 743 */;
	int cocci_id/* drivers/spi/spi-sh-msiof.c 743 */;
	void *cocci_id/* drivers/spi/spi-sh-msiof.c 738 */;
	void (*cocci_id/* drivers/spi/spi-sh-msiof.c 673 */)(struct sh_msiof_spi_priv *,
							     void *, int, int);
	void (*cocci_id/* drivers/spi/spi-sh-msiof.c 671 */)(struct sh_msiof_spi_priv *,
							     const void *,
							     int, int);
	struct completion *cocci_id/* drivers/spi/spi-sh-msiof.c 652 */;
	bool cocci_id/* drivers/spi/spi-sh-msiof.c 605 */;
	const struct spi_device *cocci_id/* drivers/spi/spi-sh-msiof.c 585 */;
	struct spi_message *cocci_id/* drivers/spi/spi-sh-msiof.c 582 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-sh-msiof.c 581 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sh-msiof.c 550 */;
	u16 *cocci_id/* drivers/spi/spi-sh-msiof.c 493 */;
	u8 *cocci_id/* drivers/spi/spi-sh-msiof.c 483 */;
	struct sh_msiof_spi_priv {
		struct spi_controller *ctlr;
		void __iomem *mapbase;
		struct clk *clk;
		struct platform_device *pdev;
		struct sh_msiof_spi_info *info;
		struct completion done;
		struct completion done_txdma;
		unsigned int tx_fifo_size;
		unsigned int rx_fifo_size;
		unsigned int min_div_pow;
		void *tx_dma_page;
		void *rx_dma_page;
		dma_addr_t tx_dma_addr;
		dma_addr_t rx_dma_addr;
		unsigned short unused_ss;
		bool native_cs_inited;
		bool native_cs_high;
		bool slave_aborted;
	} cocci_id/* drivers/spi/spi-sh-msiof.c 43 */;
	const u16 *cocci_id/* drivers/spi/spi-sh-msiof.c 423 */;
	const u8 *cocci_id/* drivers/spi/spi-sh-msiof.c 413 */;
	struct sh_msiof_chipdata {
		u32 bits_per_word_mask;
		u16 tx_fifo_size;
		u16 rx_fifo_size;
		u16 ctlr_flags;
		u16 min_div_pow;
	} cocci_id/* drivers/spi/spi-sh-msiof.c 35 */;
	const u32 cocci_id/* drivers/spi/spi-sh-msiof.c 259 */[];
	irqreturn_t cocci_id/* drivers/spi/spi-sh-msiof.c 235 */;
	struct platform_driver cocci_id/* drivers/spi/spi-sh-msiof.c 1453 */;
	const struct platform_device_id cocci_id/* drivers/spi/spi-sh-msiof.c 1425 */[];
	struct sh_msiof_spi_priv cocci_id/* drivers/spi/spi-sh-msiof.c 1322 */;
	const struct sh_msiof_chipdata *cocci_id/* drivers/spi/spi-sh-msiof.c 1301 */;
	const struct resource *cocci_id/* drivers/spi/spi-sh-msiof.c 1212 */;
	const struct sh_msiof_spi_info *cocci_id/* drivers/spi/spi-sh-msiof.c 1210 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sh-msiof.c 1208 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-sh-msiof.c 1172 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-sh-msiof.c 1170 */;
	dma_addr_t cocci_id/* drivers/spi/spi-sh-msiof.c 1168 */;
	enum dma_transfer_direction cocci_id/* drivers/spi/spi-sh-msiof.c 1168 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-sh-msiof.c 1167 */;
	struct gpio_desc *cocci_id/* drivers/spi/spi-sh-msiof.c 1141 */;
	struct device *cocci_id/* drivers/spi/spi-sh-msiof.c 1129 */;
	struct sh_msiof_spi_info cocci_id/* drivers/spi/spi-sh-msiof.c 1099 */;
	struct device_node *cocci_id/* drivers/spi/spi-sh-msiof.c 1096 */;
	struct sh_msiof_spi_info *cocci_id/* drivers/spi/spi-sh-msiof.c 1093 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-sh-msiof.c 1075 */[];
	const struct sh_msiof_chipdata cocci_id/* drivers/spi/spi-sh-msiof.c 1057 */;
}
