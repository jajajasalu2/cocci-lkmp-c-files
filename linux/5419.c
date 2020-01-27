cocci_test_suite() {
	struct spi_imx_devtype_data cocci_id/* drivers/spi/spi-imx.c 910 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-imx.c 879 */;
	struct spi_device *cocci_id/* drivers/spi/spi-imx.c 878 */;
	struct spi_message *cocci_id/* drivers/spi/spi-imx.c 872 */;
	unsigned int cocci_id/* drivers/spi/spi-imx.c 852 */;
	void cocci_id/* drivers/spi/spi-imx.c 850 */;
	struct spi_imx_data {
		struct spi_bitbang bitbang;
		struct device *dev;
		struct completion xfer_done;
		void __iomem *base;
		unsigned long base_phys;
		struct clk *clk_per;
		struct clk *clk_ipg;
		unsigned long spi_clk;
		unsigned int spi_bus_clk;
		unsigned int bits_per_word;
		unsigned int spi_drctl;
		unsigned int count,remainder;
		void (*tx)(struct spi_imx_data *);
		void (*rx)(struct spi_imx_data *);
		void *rx_buf;
		const void *tx_buf;
		unsigned int txfifo;
		unsigned int dynamic_burst;
		bool slave_mode;
		bool slave_aborted;
		unsigned int slave_burst;
		bool usedma;
		u32 wml;
		struct completion dma_rx_completion;
		struct completion dma_tx_completion;
		const struct spi_imx_devtype_data *devtype_data;
	} cocci_id/* drivers/spi/spi-imx.c 81 */;
	struct spi_imx_devtype_data {
		void (*intctrl)(struct spi_imx_data *, int);
		int (*prepare_message)(struct spi_imx_data *,
				       struct spi_message *);
		int (*prepare_transfer)(struct spi_imx_data *,
					struct spi_device *,
					struct spi_transfer *);
		void (*trigger)(struct spi_imx_data *);
		int (*rx_available)(struct spi_imx_data *);
		void (*reset)(struct spi_imx_data *);
		void (*setup_wml)(struct spi_imx_data *);
		void (*disable)(struct spi_imx_data *);
		bool has_dmamode;
		bool has_slavemode;
		unsigned int fifo_size;
		bool dynamic_burst;
		enum spi_imx_devtype devtype;
	} cocci_id/* drivers/spi/spi-imx.c 64 */;
	struct spi_imx_data cocci_id/* drivers/spi/spi-imx.c 62 */;
	enum spi_imx_devtype{IMX1_CSPI, IMX21_CSPI, IMX27_CSPI, IMX31_CSPI, IMX35_CSPI, IMX51_ECSPI, IMX53_ECSPI,} cocci_id/* drivers/spi/spi-imx.c 52 */;
	u32 cocci_id/* drivers/spi/spi-imx.c 490 */;
	unsigned cocci_id/* drivers/spi/spi-imx.c 465 */;
	unsigned int *cocci_id/* drivers/spi/spi-imx.c 426 */;
	u8 *cocci_id/* drivers/spi/spi-imx.c 395 */;
	bool cocci_id/* drivers/spi/spi-imx.c 32 */;
	u32 *cocci_id/* drivers/spi/spi-imx.c 297 */;
	struct spi_master *cocci_id/* drivers/spi/spi-imx.c 221 */;
	const int cocci_id/* drivers/spi/spi-imx.c 211 */;
	struct platform_driver cocci_id/* drivers/spi/spi-imx.c 1798 */;
	int cocci_id/* drivers/spi/spi-imx.c 177 */[];
	struct spi_imx_devtype_data *cocci_id/* drivers/spi/spi-imx.c 1593 */;
	const struct spi_imx_devtype_data *cocci_id/* drivers/spi/spi-imx.c 1592 */;
	struct resource *cocci_id/* drivers/spi/spi-imx.c 1590 */;
	struct spi_imx_master *cocci_id/* drivers/spi/spi-imx.c 1586 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-imx.c 1584 */;
	struct device_node *cocci_id/* drivers/spi/spi-imx.c 1583 */;
	struct platform_device *cocci_id/* drivers/spi/spi-imx.c 1581 */;
	type cocci_id/* drivers/spi/spi-imx.c 146 */;
	type *cocci_id/* drivers/spi/spi-imx.c 145 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-imx.c 1341 */;
	struct sg_table *cocci_id/* drivers/spi/spi-imx.c 1340 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-imx.c 1336 */;
	unsigned long cocci_id/* drivers/spi/spi-imx.c 1321 */;
	void *cocci_id/* drivers/spi/spi-imx.c 1305 */;
	struct device *cocci_id/* drivers/spi/spi-imx.c 1263 */;
	struct spi_imx_data *cocci_id/* drivers/spi/spi-imx.c 119 */;
	int cocci_id/* drivers/spi/spi-imx.c 119 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-imx.c 1154 */;
	enum dma_slave_buswidth cocci_id/* drivers/spi/spi-imx.c 1153 */;
	irqreturn_t cocci_id/* drivers/spi/spi-imx.c 1120 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-imx.c 1039 */[];
	const struct platform_device_id cocci_id/* drivers/spi/spi-imx.c 1012 */[];
}
