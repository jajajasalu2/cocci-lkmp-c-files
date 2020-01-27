cocci_test_suite() {
	void __exit cocci_id/* drivers/spi/spi-au1550.c 982 */;
	int __init cocci_id/* drivers/spi/spi-au1550.c 957 */;
	struct platform_driver cocci_id/* drivers/spi/spi-au1550.c 949 */;
	void __iomem *cocci_id/* drivers/spi/spi-au1550.c 911 */;
	void cocci_id/* drivers/spi/spi-au1550.c 90 */(struct au1550_spi *hw,
						       int bpw);
	psc_spi_t __iomem *cocci_id/* drivers/spi/spi-au1550.c 791 */;
	psc_spi_t cocci_id/* drivers/spi/spi-au1550.c 783 */;
	dbdev_tab_t cocci_id/* drivers/spi/spi-au1550.c 77 */;
	struct au1550_spi cocci_id/* drivers/spi/spi-au1550.c 729 */;
	struct resource *cocci_id/* drivers/spi/spi-au1550.c 726 */;
	struct spi_master *cocci_id/* drivers/spi/spi-au1550.c 725 */;
	struct platform_device *cocci_id/* drivers/spi/spi-au1550.c 722 */;
	int cocci_id/* drivers/spi/spi-au1550.c 648 */;
	void cocci_id/* drivers/spi/spi-au1550.c 648 */;
	irqreturn_t cocci_id/* drivers/spi/spi-au1550.c 412 */;
	struct au1550_spi {
		struct spi_bitbang bitbang;
		volatile psc_spi_t __iomem *regs;
		int irq;
		unsigned len;
		unsigned tx_count;
		unsigned rx_count;
		const u8 *tx;
		u8 *rx;
		void (*rx_word)(struct au1550_spi *hw);
		void (*tx_word)(struct au1550_spi *hw);
		int (*txrx_bufs)(struct spi_device *spi,
				 struct spi_transfer *t);
		irqreturn_t (*irq_callback)(struct au1550_spi *hw);
		struct completion master_done;
		unsigned usedma;
		u32 dma_tx_id;
		u32 dma_rx_id;
		u32 dma_tx_ch;
		u32 dma_rx_ch;
		u8 *dma_rx_tmpbuf;
		unsigned dma_rx_tmpbuf_size;
		u32 dma_rx_tmpbuf_addr;
		struct spi_master *master;
		struct device *dev;
		struct au1550_spi_info *pdata;
		struct resource *ioarea;
	} cocci_id/* drivers/spi/spi-au1550.c 40 */;
	void *cocci_id/* drivers/spi/spi-au1550.c 332 */;
	dma_addr_t cocci_id/* drivers/spi/spi-au1550.c 308 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-au1550.c 305 */;
	struct spi_device *cocci_id/* drivers/spi/spi-au1550.c 161 */;
	u32 cocci_id/* drivers/spi/spi-au1550.c 102 */;
	struct au1550_spi *cocci_id/* drivers/spi/spi-au1550.c 102 */;
	unsigned cocci_id/* drivers/spi/spi-au1550.c 102 */;
}
