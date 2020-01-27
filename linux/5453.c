cocci_test_suite() {
	struct device *cocci_id/* drivers/spi/spi-s3c64xx.c 968 */;
	unsigned int cocci_id/* drivers/spi/spi-s3c64xx.c 930 */;
	struct s3c64xx_spi_info *cocci_id/* drivers/spi/spi-s3c64xx.c 928 */;
	irqreturn_t cocci_id/* drivers/spi/spi-s3c64xx.c 894 */;
	struct device_node *cocci_id/* drivers/spi/spi-s3c64xx.c 740 */;
	struct spi_device *cocci_id/* drivers/spi/spi-s3c64xx.c 737 */;
	struct s3c64xx_spi_csinfo *cocci_id/* drivers/spi/spi-s3c64xx.c 736 */;
	u8 cocci_id/* drivers/spi/spi-s3c64xx.c 644 */;
	const void *cocci_id/* drivers/spi/spi-s3c64xx.c 638 */;
	const unsigned int cocci_id/* drivers/spi/spi-s3c64xx.c 637 */;
	struct spi_message *cocci_id/* drivers/spi/spi-s3c64xx.c 620 */;
	u8 *cocci_id/* drivers/spi/spi-s3c64xx.c 493 */;
	u32 cocci_id/* drivers/spi/spi-s3c64xx.c 355 */;
	void __iomem *cocci_id/* drivers/spi/spi-s3c64xx.c 354 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-s3c64xx.c 352 */;
	int cocci_id/* drivers/spi/spi-s3c64xx.c 352 */;
	bool cocci_id/* drivers/spi/spi-s3c64xx.c 342 */;
	struct spi_master *cocci_id/* drivers/spi/spi-s3c64xx.c 342 */;
	struct s3c64xx_spi_driver_data cocci_id/* drivers/spi/spi-s3c64xx.c 278 */;
	void *cocci_id/* drivers/spi/spi-s3c64xx.c 277 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-s3c64xx.c 272 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-s3c64xx.c 271 */;
	struct s3c64xx_spi_driver_data *cocci_id/* drivers/spi/spi-s3c64xx.c 270 */;
	struct sg_table *cocci_id/* drivers/spi/spi-s3c64xx.c 268 */;
	struct s3c64xx_spi_dma_data *cocci_id/* drivers/spi/spi-s3c64xx.c 267 */;
	void cocci_id/* drivers/spi/spi-s3c64xx.c 267 */;
	unsigned long cocci_id/* drivers/spi/spi-s3c64xx.c 194 */;
	struct s3c64xx_spi_driver_data {
		void __iomem *regs;
		struct clk *clk;
		struct clk *src_clk;
		struct clk *ioclk;
		struct platform_device *pdev;
		struct spi_master *master;
		struct s3c64xx_spi_info *cntrlr_info;
		spinlock_t lock;
		unsigned long sfr_start;
		struct completion xfer_completion;
		unsigned state;
		unsigned cur_mode,cur_bpw;
		unsigned cur_speed;
		struct s3c64xx_spi_dma_data rx_dma;
		struct s3c64xx_spi_dma_data tx_dma;
		struct s3c64xx_spi_port_config *port_conf;
		unsigned int port_id;
	} cocci_id/* drivers/spi/spi-s3c64xx.c 171 */;
	struct platform_driver cocci_id/* drivers/spi/spi-s3c64xx.c 1430 */;
	struct s3c64xx_spi_port_config {
		int fifo_lvl_mask[MAX_SPI_PORTS];
		int rx_lvl_offset;
		int tx_st_done;
		int quirks;
		bool high_speed;
		bool clk_from_cmu;
		bool clk_ioclk;
	} cocci_id/* drivers/spi/spi-s3c64xx.c 142 */;
	const struct platform_device_id cocci_id/* drivers/spi/spi-s3c64xx.c 1396 */[];
	struct s3c64xx_spi_port_config cocci_id/* drivers/spi/spi-s3c64xx.c 1369 */;
	struct s3c64xx_spi_dma_data {
		struct dma_chan *ch;
		enum dma_transfer_direction direction;
	} cocci_id/* drivers/spi/spi-s3c64xx.c 123 */;
	char cocci_id/* drivers/spi/spi-s3c64xx.c 1025 */[16];
	struct resource *cocci_id/* drivers/spi/spi-s3c64xx.c 1020 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-s3c64xx.c 1009 */;
	struct platform_device *cocci_id/* drivers/spi/spi-s3c64xx.c 1005 */;
	struct s3c64xx_spi_port_config *cocci_id/* drivers/spi/spi-s3c64xx.c 1004 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-s3c64xx.c 1002 */[];
}