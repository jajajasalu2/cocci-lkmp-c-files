cocci_test_suite() {
	struct spi_transfer cocci_id/* drivers/input/rmi4/rmi_spi.c 98 */;
	void *cocci_id/* drivers/input/rmi4/rmi_spi.c 59 */;
	struct spi_transfer *cocci_id/* drivers/input/rmi4/rmi_spi.c 58 */;
	struct spi_device *cocci_id/* drivers/input/rmi4/rmi_spi.c 55 */;
	struct spi_driver cocci_id/* drivers/input/rmi4/rmi_spi.c 516 */;
	const struct spi_device_id cocci_id/* drivers/input/rmi4/rmi_spi.c 510 */[];
	struct rmi_spi_xport cocci_id/* drivers/input/rmi4/rmi_spi.c 379 */;
	void cocci_id/* drivers/input/rmi4/rmi_spi.c 362 */;
	struct rmi_spi_xport {
		struct rmi_transport_dev xport;
		struct spi_device *spi;
		struct mutex page_mutex;
		int page;
		u8 *rx_buf;
		u8 *tx_buf;
		int xfer_buf_size;
		struct spi_transfer *rx_xfers;
		struct spi_transfer *tx_xfers;
		int rx_xfer_count;
		int tx_xfer_count;
	} cocci_id/* drivers/input/rmi4/rmi_spi.c 36 */;
	const struct of_device_id cocci_id/* drivers/input/rmi4/rmi_spi.c 349 */[];
	struct device *cocci_id/* drivers/input/rmi4/rmi_spi.c 331 */;
	struct rmi_device_platform_data *cocci_id/* drivers/input/rmi4/rmi_spi.c 329 */;
	const struct rmi_transport_ops cocci_id/* drivers/input/rmi4/rmi_spi.c 322 */;
	struct rmi_spi_cmd {
		enum rmi_spi_op op;
		u16 addr;
	} cocci_id/* drivers/input/rmi4/rmi_spi.c 31 */;
	size_t cocci_id/* drivers/input/rmi4/rmi_spi.c 297 */;
	u16 cocci_id/* drivers/input/rmi4/rmi_spi.c 296 */;
	struct rmi_transport_dev *cocci_id/* drivers/input/rmi4/rmi_spi.c 296 */;
	const void *cocci_id/* drivers/input/rmi4/rmi_spi.c 271 */;
	struct rmi_spi_cmd cocci_id/* drivers/input/rmi4/rmi_spi.c 256 */;
	u8 cocci_id/* drivers/input/rmi4/rmi_spi.c 254 */;
	struct rmi_spi_xport *cocci_id/* drivers/input/rmi4/rmi_spi.c 254 */;
	int cocci_id/* drivers/input/rmi4/rmi_spi.c 254 */;
	enum rmi_spi_op{RMI_SPI_WRITE=0, RMI_SPI_READ, RMI_SPI_V2_READ_UNIFIED, RMI_SPI_V2_READ_SPLIT, RMI_SPI_V2_WRITE,} cocci_id/* drivers/input/rmi4/rmi_spi.c 23 */;
	struct spi_message cocci_id/* drivers/input/rmi4/rmi_spi.c 119 */;
	struct rmi_device_platform_data_spi *cocci_id/* drivers/input/rmi4/rmi_spi.c 117 */;
	u8 *cocci_id/* drivers/input/rmi4/rmi_spi.c 114 */;
	const u8 *cocci_id/* drivers/input/rmi4/rmi_spi.c 113 */;
	const struct rmi_spi_cmd *cocci_id/* drivers/input/rmi4/rmi_spi.c 113 */;
}
