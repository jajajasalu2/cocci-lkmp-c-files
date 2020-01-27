cocci_test_suite() {
	unsigned char cocci_id/* drivers/mtd/devices/sst25l.c 71 */[2];
	int *cocci_id/* drivers/mtd/devices/sst25l.c 67 */;
	struct flash_info cocci_id/* drivers/mtd/devices/sst25l.c 62 */[];
	struct sst25l_flash cocci_id/* drivers/mtd/devices/sst25l.c 60 */;
	struct flash_info {
		const char *name;
		uint16_t device_id;
		unsigned page_size;
		unsigned nr_pages;
		unsigned erase_size;
	} cocci_id/* drivers/mtd/devices/sst25l.c 52 */;
	struct sst25l_flash {
		struct spi_device *spi;
		struct mutex lock;
		struct mtd_info mtd;
	} cocci_id/* drivers/mtd/devices/sst25l.c 46 */;
	struct spi_driver cocci_id/* drivers/mtd/devices/sst25l.c 408 */;
	long long cocci_id/* drivers/mtd/devices/sst25l.c 383 */;
	struct flash_platform_data *cocci_id/* drivers/mtd/devices/sst25l.c 352 */;
	uint16_t cocci_id/* drivers/mtd/devices/sst25l.c 315 */;
	unsigned char cocci_id/* drivers/mtd/devices/sst25l.c 313 */[6];
	struct spi_transfer cocci_id/* drivers/mtd/devices/sst25l.c 312 */;
	struct spi_message cocci_id/* drivers/mtd/devices/sst25l.c 311 */;
	struct spi_device *cocci_id/* drivers/mtd/devices/sst25l.c 308 */;
	struct flash_info *cocci_id/* drivers/mtd/devices/sst25l.c 308 */;
	unsigned char cocci_id/* drivers/mtd/devices/sst25l.c 254 */[5];
	const unsigned char *cocci_id/* drivers/mtd/devices/sst25l.c 250 */;
	struct spi_transfer cocci_id/* drivers/mtd/devices/sst25l.c 210 */[2];
	unsigned char *cocci_id/* drivers/mtd/devices/sst25l.c 207 */;
	size_t *cocci_id/* drivers/mtd/devices/sst25l.c 207 */;
	loff_t cocci_id/* drivers/mtd/devices/sst25l.c 206 */;
	size_t cocci_id/* drivers/mtd/devices/sst25l.c 206 */;
	uint32_t cocci_id/* drivers/mtd/devices/sst25l.c 169 */;
	struct sst25l_flash *cocci_id/* drivers/mtd/devices/sst25l.c 168 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/sst25l.c 166 */;
	struct erase_info *cocci_id/* drivers/mtd/devices/sst25l.c 166 */;
	int cocci_id/* drivers/mtd/devices/sst25l.c 166 */;
	unsigned char cocci_id/* drivers/mtd/devices/sst25l.c 144 */[4];
	unsigned long cocci_id/* drivers/mtd/devices/sst25l.c 125 */;
}
