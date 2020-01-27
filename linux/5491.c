cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-qcom-qspi.c 565 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-qcom-qspi.c 559 */[];
	int __maybe_unused cocci_id/* drivers/spi/spi-qcom-qspi.c 537 */;
	struct device *cocci_id/* drivers/spi/spi-qcom-qspi.c 426 */;
	struct platform_device *cocci_id/* drivers/spi/spi-qcom-qspi.c 423 */;
	void *cocci_id/* drivers/spi/spi-qcom-qspi.c 384 */;
	const char *cocci_id/* drivers/spi/spi-qcom-qspi.c 344 */;
	const int *cocci_id/* drivers/spi/spi-qcom-qspi.c 343 */;
	const void *cocci_id/* drivers/spi/spi-qcom-qspi.c 342 */;
	int cocci_id/* drivers/spi/spi-qcom-qspi.c 306 */;
	u8 *cocci_id/* drivers/spi/spi-qcom-qspi.c 305 */;
	u32 *cocci_id/* drivers/spi/spi-qcom-qspi.c 304 */;
	unsigned int cocci_id/* drivers/spi/spi-qcom-qspi.c 301 */;
	u32 cocci_id/* drivers/spi/spi-qcom-qspi.c 299 */;
	irqreturn_t cocci_id/* drivers/spi/spi-qcom-qspi.c 297 */;
	struct qcom_qspi *cocci_id/* drivers/spi/spi-qcom-qspi.c 297 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-qcom-qspi.c 226 */;
	struct spi_device *cocci_id/* drivers/spi/spi-qcom-qspi.c 225 */;
	unsigned long cocci_id/* drivers/spi/spi-qcom-qspi.c 216 */;
	struct spi_message *cocci_id/* drivers/spi/spi-qcom-qspi.c 213 */;
	struct spi_master *cocci_id/* drivers/spi/spi-qcom-qspi.c 212 */;
	void cocci_id/* drivers/spi/spi-qcom-qspi.c 212 */;
	const struct qspi_xfer *cocci_id/* drivers/spi/spi-qcom-qspi.c 166 */;
	struct qcom_qspi {
		void __iomem *base;
		struct device *dev;
		struct clk_bulk_data clks[QSPI_NUM_CLKS];
		struct qspi_xfer xfer;
		spinlock_t lock;
	} cocci_id/* drivers/spi/spi-qcom-qspi.c 137 */;
	enum qspi_clocks{QSPI_CLK_CORE, QSPI_CLK_IFACE, QSPI_NUM_CLKS,} cocci_id/* drivers/spi/spi-qcom-qspi.c 131 */;
	struct qspi_xfer {
		union {
			const void *tx_buf;
			void *rx_buf;
		};
		unsigned int rem_bytes;
		unsigned int buswidth;
		enum qspi_dir dir;
		bool is_last;
	} cocci_id/* drivers/spi/spi-qcom-qspi.c 120 */;
	enum qspi_dir{QSPI_READ, QSPI_WRITE,} cocci_id/* drivers/spi/spi-qcom-qspi.c 115 */;
}
