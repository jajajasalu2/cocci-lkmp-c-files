cocci_test_suite() {
	loff_t cocci_id/* drivers/mtd/devices/mchp23k256.c 99 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/mchp23k256.c 99 */;
	size_t cocci_id/* drivers/mtd/devices/mchp23k256.c 99 */;
	const unsigned char *cocci_id/* drivers/mtd/devices/mchp23k256.c 61 */;
	int cocci_id/* drivers/mtd/devices/mchp23k256.c 44 */;
	u8 *cocci_id/* drivers/mtd/devices/mchp23k256.c 42 */;
	unsigned int cocci_id/* drivers/mtd/devices/mchp23k256.c 42 */;
	struct mchp23k256_flash *cocci_id/* drivers/mtd/devices/mchp23k256.c 41 */;
	void cocci_id/* drivers/mtd/devices/mchp23k256.c 41 */;
	struct mchp23k256_flash cocci_id/* drivers/mtd/devices/mchp23k256.c 39 */;
	struct mchp23k256_flash {
		struct spi_device *spi;
		struct mutex lock;
		struct mtd_info mtd;
		const struct mchp23_caps *caps;
	} cocci_id/* drivers/mtd/devices/mchp23k256.c 27 */;
	struct spi_driver cocci_id/* drivers/mtd/devices/mchp23k256.c 232 */;
	struct mchp23_caps {
		u8 addr_width;
		unsigned int size;
	} cocci_id/* drivers/mtd/devices/mchp23k256.c 22 */;
	const struct of_device_id cocci_id/* drivers/mtd/devices/mchp23k256.c 219 */[];
	struct flash_platform_data *cocci_id/* drivers/mtd/devices/mchp23k256.c 174 */;
	struct spi_device *cocci_id/* drivers/mtd/devices/mchp23k256.c 171 */;
	const struct mchp23_caps cocci_id/* drivers/mtd/devices/mchp23k256.c 161 */;
	unsigned char cocci_id/* drivers/mtd/devices/mchp23k256.c 147 */[2];
	struct spi_transfer cocci_id/* drivers/mtd/devices/mchp23k256.c 145 */;
	unsigned char cocci_id/* drivers/mtd/devices/mchp23k256.c 105 */[MAX_CMD_SIZE];
	struct spi_message cocci_id/* drivers/mtd/devices/mchp23k256.c 104 */;
	struct spi_transfer cocci_id/* drivers/mtd/devices/mchp23k256.c 103 */[2];
	unsigned char *cocci_id/* drivers/mtd/devices/mchp23k256.c 100 */;
	size_t *cocci_id/* drivers/mtd/devices/mchp23k256.c 100 */;
}
