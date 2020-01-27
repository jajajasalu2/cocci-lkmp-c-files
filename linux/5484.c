cocci_test_suite() {
	struct spi_lm70llp {
		struct spi_bitbang bitbang;
		struct parport *port;
		struct pardevice *pd;
		struct spi_device *spidev_lm70;
		struct spi_board_info info;
	} cocci_id/* drivers/spi/spi-lm70llp.c 70 */;
	void __exit cocci_id/* drivers/spi/spi-lm70llp.c 330 */;
	int __init cocci_id/* drivers/spi/spi-lm70llp.c 324 */;
	struct parport_driver cocci_id/* drivers/spi/spi-lm70llp.c 317 */;
	struct pardev_cb cocci_id/* drivers/spi/spi-lm70llp.c 194 */;
	struct spi_master *cocci_id/* drivers/spi/spi-lm70llp.c 192 */;
	struct pardevice *cocci_id/* drivers/spi/spi-lm70llp.c 190 */;
	struct parport *cocci_id/* drivers/spi/spi-lm70llp.c 188 */;
	u32 cocci_id/* drivers/spi/spi-lm70llp.c 182 */;
	unsigned cocci_id/* drivers/spi/spi-lm70llp.c 182 */;
	struct spi_device *cocci_id/* drivers/spi/spi-lm70llp.c 158 */;
	int cocci_id/* drivers/spi/spi-lm70llp.c 158 */;
	u8 cocci_id/* drivers/spi/spi-lm70llp.c 106 */;
	struct spi_lm70llp *cocci_id/* drivers/spi/spi-lm70llp.c 104 */;
	void cocci_id/* drivers/spi/spi-lm70llp.c 104 */;
}
