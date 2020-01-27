cocci_test_suite() {
	struct tegra_spi_client_data *cocci_id/* drivers/spi/spi-tegra114.c 946 */;
	void cocci_id/* drivers/spi/spi-tegra114.c 944 */;
	struct device_node *cocci_id/* drivers/spi/spi-tegra114.c 925 */;
	struct spi_delay *cocci_id/* drivers/spi/spi-tegra114.c 726 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-tegra114.c 703 */;
	dma_addr_t cocci_id/* drivers/spi/spi-tegra114.c 702 */;
	u32 *cocci_id/* drivers/spi/spi-tegra114.c 701 */;
	bool cocci_id/* drivers/spi/spi-tegra114.c 699 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-tegra114.c 542 */;
	struct completion *cocci_id/* drivers/spi/spi-tegra114.c 468 */;
	void *cocci_id/* drivers/spi/spi-tegra114.c 466 */;
	unsigned char *cocci_id/* drivers/spi/spi-tegra114.c 442 */;
	u8 *cocci_id/* drivers/spi/spi-tegra114.c 403 */;
	unsigned int cocci_id/* drivers/spi/spi-tegra114.c 401 */;
	u8 cocci_id/* drivers/spi/spi-tegra114.c 368 */;
	struct spi_device *cocci_id/* drivers/spi/spi-tegra114.c 259 */;
	u32 cocci_id/* drivers/spi/spi-tegra114.c 245 */;
	int cocci_id/* drivers/spi/spi-tegra114.c 225 */(struct device *dev);
	struct tegra_spi_data {
		struct device *dev;
		struct spi_master *master;
		spinlock_t lock;
		struct clk *clk;
		struct reset_control *rst;
		void __iomem *base;
		phys_addr_t phys;
		unsigned irq;
		u32 cur_speed;
		struct spi_device *cur_spi;
		struct spi_device *cs_control;
		unsigned cur_pos;
		unsigned words_per_32bit;
		unsigned bytes_per_word;
		unsigned curr_dma_words;
		unsigned cur_direction;
		unsigned cur_rx_pos;
		unsigned cur_tx_pos;
		unsigned dma_buf_size;
		unsigned max_buf_size;
		bool is_curr_dma_xfer;
		bool use_hw_based_cs;
		struct completion rx_dma_complete;
		struct completion tx_dma_complete;
		u32 tx_status;
		u32 rx_status;
		u32 status_reg;
		bool is_packed;
		u32 command1_reg;
		u32 dma_control_reg;
		u32 def_command1_reg;
		u32 def_command2_reg;
		u32 spi_cs_timing1;
		u32 spi_cs_timing2;
		u8 last_used_cs;
		struct completion xfer_completion;
		struct spi_transfer *curr_xfer;
		struct dma_chan *rx_dma_chan;
		u32 *rx_dma_buf;
		dma_addr_t rx_dma_phys;
		struct dma_async_tx_descriptor *rx_dma_desc;
		struct dma_chan *tx_dma_chan;
		u32 *tx_dma_buf;
		dma_addr_t tx_dma_phys;
		struct dma_async_tx_descriptor *tx_dma_desc;
		const struct tegra_spi_soc_data *soc_data;
	} cocci_id/* drivers/spi/spi-tegra114.c 166 */;
	struct tegra_spi_client_data {
		int tx_clk_tap_delay;
		int rx_clk_tap_delay;
	} cocci_id/* drivers/spi/spi-tegra114.c 161 */;
	struct tegra_spi_soc_data {
		bool has_intr_mask_reg;
	} cocci_id/* drivers/spi/spi-tegra114.c 157 */;
	struct platform_driver cocci_id/* drivers/spi/spi-tegra114.c 1524 */;
	struct device *cocci_id/* drivers/spi/spi-tegra114.c 1473 */;
	struct resource *cocci_id/* drivers/spi/spi-tegra114.c 1309 */;
	struct spi_master *cocci_id/* drivers/spi/spi-tegra114.c 1307 */;
	struct platform_device *cocci_id/* drivers/spi/spi-tegra114.c 1305 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-tegra114.c 1290 */[];
	struct tegra_spi_soc_data cocci_id/* drivers/spi/spi-tegra114.c 1278 */;
	unsigned cocci_id/* drivers/spi/spi-tegra114.c 1176 */;
	int cocci_id/* drivers/spi/spi-tegra114.c 1175 */;
	long cocci_id/* drivers/spi/spi-tegra114.c 1174 */;
	unsigned long cocci_id/* drivers/spi/spi-tegra114.c 1133 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-tegra114.c 1132 */;
	irqreturn_t cocci_id/* drivers/spi/spi-tegra114.c 1130 */;
	struct tegra_spi_data *cocci_id/* drivers/spi/spi-tegra114.c 1130 */;
	struct spi_message *cocci_id/* drivers/spi/spi-tegra114.c 1039 */;
}
