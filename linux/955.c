cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/mtd/devices/mtd_dataflash.c 925 */;
	struct dataflash {
		u8 command[4];
		char name[24];
		unsigned short page_offset;
		unsigned int page_size;
		struct mutex lock;
		struct spi_device *spi;
		struct mtd_info mtd;
	} cocci_id/* drivers/mtd/devices/mtd_dataflash.c 86 */;
	struct flash_info *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 843 */;
	__be64 *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 801 */;
	const unsigned int cocci_id/* drivers/mtd/devices/mtd_dataflash.c 780 */;
	u8 cocci_id/* drivers/mtd/devices/mtd_dataflash.c 779 */[sizeof(jedec)];
	u64 cocci_id/* drivers/mtd/devices/mtd_dataflash.c 737 */;
	bool cocci_id/* drivers/mtd/devices/mtd_dataflash.c 737 */;
	struct flash_info cocci_id/* drivers/mtd/devices/mtd_dataflash.c 698 */[];
	struct flash_info {
		char *name;
		u64 jedec_id;
		unsigned nr_pages;
		u16 pagesize;
		u16 pageoffset;
		u16 flags;
#define SUP_EXTID 0x0004
#define SUP_POW2PS 0x0002
#define IS_POW2PS 0x0001
	} cocci_id/* drivers/mtd/devices/mtd_dataflash.c 679 */;
	struct spi_device *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 672 */;
	char *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 672 */;
	int cocci_id/* drivers/mtd/devices/mtd_dataflash.c 672 */;
	long long cocci_id/* drivers/mtd/devices/mtd_dataflash.c 657 */;
	struct flash_platform_data *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 620 */;
	struct mtd_info *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 619 */;
	struct dataflash *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 618 */;
	char cocci_id/* drivers/mtd/devices/mtd_dataflash.c 616 */;
	const size_t cocci_id/* drivers/mtd/devices/mtd_dataflash.c 533 */;
	ssize_t cocci_id/* drivers/mtd/devices/mtd_dataflash.c 450 */;
	struct otp_info *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 437 */;
	size_t *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 437 */;
	size_t cocci_id/* drivers/mtd/devices/mtd_dataflash.c 436 */;
	const u_char *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 294 */;
	struct spi_transfer cocci_id/* drivers/mtd/devices/mtd_dataflash.c 233 */[2];
	u_char *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 230 */;
	loff_t cocci_id/* drivers/mtd/devices/mtd_dataflash.c 229 */;
	void cocci_id/* drivers/mtd/devices/mtd_dataflash.c 198 */;
	u8 cocci_id/* drivers/mtd/devices/mtd_dataflash.c 188 */;
	unsigned int cocci_id/* drivers/mtd/devices/mtd_dataflash.c 176 */;
	u32 cocci_id/* drivers/mtd/devices/mtd_dataflash.c 156 */;
	u8 *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 155 */;
	unsigned cocci_id/* drivers/mtd/devices/mtd_dataflash.c 154 */;
	struct spi_message cocci_id/* drivers/mtd/devices/mtd_dataflash.c 153 */;
	struct spi_transfer cocci_id/* drivers/mtd/devices/mtd_dataflash.c 152 */;
	struct erase_info *cocci_id/* drivers/mtd/devices/mtd_dataflash.c 148 */;
	const struct of_device_id cocci_id/* drivers/mtd/devices/mtd_dataflash.c 100 */[];
}
