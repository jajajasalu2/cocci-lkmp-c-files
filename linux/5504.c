cocci_test_suite() {
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-pl022.c 933 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-pl022.c 931 */;
	unsigned int cocci_id/* drivers/spi/spi-pl022.c 928 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-pl022.c 918 */;
	struct sg_table *cocci_id/* drivers/spi/spi-pl022.c 865 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-pl022.c 820 */;
	struct spi_message *cocci_id/* drivers/spi/spi-pl022.c 808 */;
	void *cocci_id/* drivers/spi/spi-pl022.c 805 */;
	void cocci_id/* drivers/spi/spi-pl022.c 805 */;
	u32 *cocci_id/* drivers/spi/spi-pl022.c 702 */;
	u16 *cocci_id/* drivers/spi/spi-pl022.c 698 */;
	u8 *cocci_id/* drivers/spi/spi-pl022.c 694 */;
	struct chip_data {
		u32 cr0;
		u16 cr1;
		u16 dmacr;
		u16 cpsr;
		u8 n_bytes;
		bool enable_dma;
		enum ssp_reading read;
		enum ssp_writing write;
		void (*cs_control)(u32 command);
		int xfer_type;
	} cocci_id/* drivers/spi/spi-pl022.c 417 */;
	struct pl022 {
		struct amba_device *adev;
		struct vendor_data *vendor;
		resource_size_t phybase;
		void __iomem *virtbase;
		struct clk *clk;
		struct spi_master *master;
		struct pl022_ssp_controller *master_info;
		struct tasklet_struct pump_transfers;
		struct spi_message *cur_msg;
		struct spi_transfer *cur_transfer;
		struct chip_data *cur_chip;
		bool next_msg_cs_active;
		void *tx;
		void *tx_end;
		void *rx;
		void *rx_end;
		enum ssp_reading read;
		enum ssp_writing write;
		u32 exp_fifo_level;
		enum ssp_rx_level_trig rx_lev_trig;
		enum ssp_tx_level_trig tx_lev_trig;
#ifdef CONFIG_DMA_ENGINE
		struct dma_chan *dma_rx_channel;
		struct dma_chan *dma_tx_channel;
		struct sg_table sgt_rx;
		struct sg_table sgt_tx;
		char *dummypage;
		bool dma_running;
#endif
		int cur_cs;
		int *chipselects;
	} cocci_id/* drivers/spi/spi-pl022.c 364 */;
	struct vendor_data {
		int fifodepth;
		int max_bpw;
		bool unidir;
		bool extended_cr;
		bool pl023;
		bool loopback;
		bool internal_cs_ctrl;
	} cocci_id/* drivers/spi/spi-pl022.c 322 */;
	enum ssp_writing{WRITING_NULL, WRITING_U8, WRITING_U16, WRITING_U32,} cocci_id/* drivers/spi/spi-pl022.c 304 */;
	enum ssp_reading{READING_NULL, READING_U8, READING_U16, READING_U32,} cocci_id/* drivers/spi/spi-pl022.c 294 */;
	void __exit cocci_id/* drivers/spi/spi-pl022.c 2503 */;
	int __init cocci_id/* drivers/spi/spi-pl022.c 2497 */;
	struct amba_driver cocci_id/* drivers/spi/spi-pl022.c 2487 */;
	const struct amba_id cocci_id/* drivers/spi/spi-pl022.c 2442 */[];
	struct vendor_data cocci_id/* drivers/spi/spi-pl022.c 2402 */;
	struct pl022 cocci_id/* drivers/spi/spi-pl022.c 2141 */;
	struct spi_master *cocci_id/* drivers/spi/spi-pl022.c 2118 */;
	const struct amba_id *cocci_id/* drivers/spi/spi-pl022.c 2113 */;
	struct amba_device *cocci_id/* drivers/spi/spi-pl022.c 2113 */;
	struct pl022_ssp_controller cocci_id/* drivers/spi/spi-pl022.c 2098 */;
	struct device_node *cocci_id/* drivers/spi/spi-pl022.c 2089 */;
	struct pl022_ssp_controller *cocci_id/* drivers/spi/spi-pl022.c 2086 */;
	struct chip_data *cocci_id/* drivers/spi/spi-pl022.c 2080 */;
	struct spi_device *cocci_id/* drivers/spi/spi-pl022.c 2078 */;
	struct chip_data cocci_id/* drivers/spi/spi-pl022.c 1860 */;
	struct ssp_clock_params cocci_id/* drivers/spi/spi-pl022.c 1846 */;
	struct pl022_config_chip cocci_id/* drivers/spi/spi-pl022.c 1844 */;
	const struct pl022_config_chip *cocci_id/* drivers/spi/spi-pl022.c 1843 */;
	const struct pl022_config_chip cocci_id/* drivers/spi/spi-pl022.c 1816 */;
	u8 cocci_id/* drivers/spi/spi-pl022.c 1801 */;
	u32 cocci_id/* drivers/spi/spi-pl022.c 1741 */;
	u16 cocci_id/* drivers/spi/spi-pl022.c 1740 */;
	struct ssp_clock_params *cocci_id/* drivers/spi/spi-pl022.c 1736 */;
	struct pl022 *cocci_id/* drivers/spi/spi-pl022.c 1736 */;
	int cocci_id/* drivers/spi/spi-pl022.c 1736 */;
	struct spi_transfer cocci_id/* drivers/spi/spi-pl022.c 1520 */;
	unsigned long cocci_id/* drivers/spi/spi-pl022.c 1506 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-pl022.c 1504 */;
	irqreturn_t cocci_id/* drivers/spi/spi-pl022.c 1249 */;
	struct device *cocci_id/* drivers/spi/spi-pl022.c 1156 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-pl022.c 1108 */;
}
