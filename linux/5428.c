cocci_test_suite() {
	struct butterfly {
		struct spi_bitbang bitbang;
		struct parport *port;
		struct pardevice *pd;
		u8 lastbyte;
		struct spi_device *dataflash;
		struct spi_device *butterfly;
		struct spi_board_info info[2];
	} cocci_id/* drivers/spi/spi-butterfly.c 49 */;
	void __exit cocci_id/* drivers/spi/spi-butterfly.c 327 */;
	int __init cocci_id/* drivers/spi/spi-butterfly.c 321 */;
	struct parport_driver cocci_id/* drivers/spi/spi-butterfly.c 314 */;
	struct pardev_cb cocci_id/* drivers/spi/spi-butterfly.c 183 */;
	struct device *cocci_id/* drivers/spi/spi-butterfly.c 182 */;
	struct spi_master *cocci_id/* drivers/spi/spi-butterfly.c 181 */;
	int cocci_id/* drivers/spi/spi-butterfly.c 179 */;
	struct pardevice *cocci_id/* drivers/spi/spi-butterfly.c 178 */;
	struct parport *cocci_id/* drivers/spi/spi-butterfly.c 176 */;
	void cocci_id/* drivers/spi/spi-butterfly.c 176 */;
	struct butterfly *cocci_id/* drivers/spi/spi-butterfly.c 174 */;
	struct flash_platform_data cocci_id/* drivers/spi/spi-butterfly.c 167 */;
	struct mtd_partition cocci_id/* drivers/spi/spi-butterfly.c 146 */[];
	u8 cocci_id/* drivers/spi/spi-butterfly.c 138 */;
	unsigned cocci_id/* drivers/spi/spi-butterfly.c 137 */;
	u32 cocci_id/* drivers/spi/spi-butterfly.c 136 */;
	struct spi_device *cocci_id/* drivers/spi/spi-butterfly.c 111 */;
}
