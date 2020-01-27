cocci_test_suite() {
	struct spi_device *cocci_id/* drivers/spi/spi-slave-time.c 87 */;
	u64 cocci_id/* drivers/spi/spi-slave-time.c 67 */;
	u32 cocci_id/* drivers/spi/spi-slave-time.c 65 */;
	int cocci_id/* drivers/spi/spi-slave-time.c 46 */;
	struct spi_slave_time_priv *cocci_id/* drivers/spi/spi-slave-time.c 45 */;
	void *cocci_id/* drivers/spi/spi-slave-time.c 43 */;
	void cocci_id/* drivers/spi/spi-slave-time.c 43 */;
	int cocci_id/* drivers/spi/spi-slave-time.c 41 */(struct spi_slave_time_priv *priv);
	struct spi_slave_time_priv {
		struct spi_device *spi;
		struct completion finished;
		struct spi_transfer xfer;
		struct spi_message msg;
		__be32 buf[2];
	} cocci_id/* drivers/spi/spi-slave-time.c 33 */;
	struct spi_driver cocci_id/* drivers/spi/spi-slave-time.c 118 */;
}
