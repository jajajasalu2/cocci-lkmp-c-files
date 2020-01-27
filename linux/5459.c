cocci_test_suite() {
	int cocci_id/* drivers/spi/spi-slave-system-control.c 53 */;
	u16 cocci_id/* drivers/spi/spi-slave-system-control.c 52 */;
	struct spi_slave_system_control_priv *cocci_id/* drivers/spi/spi-slave-system-control.c 51 */;
	void *cocci_id/* drivers/spi/spi-slave-system-control.c 49 */;
	void cocci_id/* drivers/spi/spi-slave-system-control.c 49 */;
	int cocci_id/* drivers/spi/spi-slave-system-control.c 47 */(struct spi_slave_system_control_priv *priv);
	struct spi_slave_system_control_priv {
		struct spi_device *spi;
		struct completion finished;
		struct spi_transfer xfer;
		struct spi_message msg;
		__be16 cmd;
	} cocci_id/* drivers/spi/spi-slave-system-control.c 38 */;
	struct spi_driver cocci_id/* drivers/spi/spi-slave-system-control.c 144 */;
	struct spi_device *cocci_id/* drivers/spi/spi-slave-system-control.c 113 */;
}
