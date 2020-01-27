cocci_test_suite() {
	struct mtk_spi {
		void __iomem *base;
		u32 state;
		int pad_num;
		u32 *pad_sel;
		struct clk *parent_clk,*sel_clk,*spi_clk;
		struct spi_transfer *cur_transfer;
		u32 xfer_len;
		u32 num_xfered;
		struct scatterlist *tx_sgl,*rx_sgl;
		u32 tx_sgl_len,rx_sgl_len;
		const struct mtk_spi_compatible *dev_comp;
	} cocci_id/* drivers/spi/spi-mt65xx.c 94 */;
	struct platform_driver cocci_id/* drivers/spi/spi-mt65xx.c 891 */;
	struct mtk_spi_compatible {
		bool need_pad_sel;
		bool must_tx;
		bool enhance_timing;
		bool dma_ext;
	} cocci_id/* drivers/spi/spi-mt65xx.c 84 */;
	struct device *cocci_id/* drivers/spi/spi-mt65xx.c 836 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-mt65xx.c 625 */;
	struct platform_device *cocci_id/* drivers/spi/spi-mt65xx.c 621 */;
	irqreturn_t cocci_id/* drivers/spi/spi-mt65xx.c 525 */;
	void *cocci_id/* drivers/spi/spi-mt65xx.c 525 */;
	unsigned long cocci_id/* drivers/spi/spi-mt65xx.c 508 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-mt65xx.c 504 */;
	struct spi_device *cocci_id/* drivers/spi/spi-mt65xx.c 503 */;
	bool cocci_id/* drivers/spi/spi-mt65xx.c 502 */;
	struct spi_master *cocci_id/* drivers/spi/spi-mt65xx.c 502 */;
	struct mtk_spi *cocci_id/* drivers/spi/spi-mt65xx.c 452 */;
	int cocci_id/* drivers/spi/spi-mt65xx.c 447 */;
	u32 cocci_id/* drivers/spi/spi-mt65xx.c 341 */;
	void cocci_id/* drivers/spi/spi-mt65xx.c 339 */;
	struct mtk_chip_config *cocci_id/* drivers/spi/spi-mt65xx.c 197 */;
	u16 cocci_id/* drivers/spi/spi-mt65xx.c 194 */;
	struct spi_message *cocci_id/* drivers/spi/spi-mt65xx.c 192 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-mt65xx.c 145 */[];
	const struct mtk_chip_config cocci_id/* drivers/spi/spi-mt65xx.c 141 */;
	const struct mtk_spi_compatible cocci_id/* drivers/spi/spi-mt65xx.c 110 */;
}
