cocci_test_suite() {
	struct xilinx_spi {
		struct spi_bitbang bitbang;
		struct completion done;
		void __iomem *regs;
		int irq;
		u8 *rx_ptr;
		const u8 *tx_ptr;
		u8 bytes_per_word;
		int buffer_size;
		u32 cs_inactive;
		unsigned int (*read_fn)(void __iomem *);
		void (*write_fn)(u32, void __iomem *);
	} cocci_id/* drivers/spi/spi-xilinx.c 79 */;
	struct platform_driver cocci_id/* drivers/spi/spi-xilinx.c 532 */;
	void __iomem *cocci_id/* drivers/spi/spi-xilinx.c 515 */;
	unsigned long long cocci_id/* drivers/spi/spi-xilinx.c 495 */;
	struct xilinx_spi cocci_id/* drivers/spi/spi-xilinx.c 424 */;
	struct spi_master *cocci_id/* drivers/spi/spi-xilinx.c 395 */;
	struct resource *cocci_id/* drivers/spi/spi-xilinx.c 393 */;
	struct xspi_platform_data *cocci_id/* drivers/spi/spi-xilinx.c 392 */;
	struct platform_device *cocci_id/* drivers/spi/spi-xilinx.c 389 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-xilinx.c 381 */[];
	u8 cocci_id/* drivers/spi/spi-xilinx.c 361 */;
	irqreturn_t cocci_id/* drivers/spi/spi-xilinx.c 342 */;
	void *cocci_id/* drivers/spi/spi-xilinx.c 342 */;
	bool cocci_id/* drivers/spi/spi-xilinx.c 242 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-xilinx.c 226 */;
	u32 cocci_id/* drivers/spi/spi-xilinx.c 190 */;
	u16 cocci_id/* drivers/spi/spi-xilinx.c 189 */;
	struct xilinx_spi *cocci_id/* drivers/spi/spi-xilinx.c 188 */;
	struct spi_device *cocci_id/* drivers/spi/spi-xilinx.c 186 */;
	int cocci_id/* drivers/spi/spi-xilinx.c 186 */;
	void cocci_id/* drivers/spi/spi-xilinx.c 186 */;
	u32 *cocci_id/* drivers/spi/spi-xilinx.c 156 */;
	u16 *cocci_id/* drivers/spi/spi-xilinx.c 153 */;
	u8 *cocci_id/* drivers/spi/spi-xilinx.c 150 */;
	unsigned int cocci_id/* drivers/spi/spi-xilinx.c 101 */;
}
