cocci_test_suite() {
	struct spi_transfer cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 79 */[2];
	char *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 62 */;
	size_t cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 59 */;
	void *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 58 */;
	unsigned int cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 58 */;
	bool cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 53 */;
	struct spi_driver cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 499 */;
	struct spi_device *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 421 */;
	const struct eeprom_93xx46_devtype_data *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 411 */;
	struct eeprom_93xx46_dev {
		struct spi_device *spi;
		struct eeprom_93xx46_platform_data *pdata;
		struct mutex lock;
		struct nvmem_config nvmem_config;
		struct nvmem_device *nvmem;
		int addrlen;
		int size;
	} cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 38 */;
	u32 cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 376 */;
	struct device_node *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 374 */;
	const struct of_device_id *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 372 */;
	const struct of_device_id cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 363 */[];
	void cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 349 */;
	const struct eeprom_93xx46_devtype_data cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 33 */;
	const char *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 328 */;
	struct device_attribute *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 327 */;
	struct device *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 326 */;
	ssize_t cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 326 */;
	struct eeprom_93xx46_devtype_data {
		unsigned int quirks;
	} cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 29 */;
	u16 cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 282 */;
	struct spi_transfer cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 280 */;
	struct spi_message cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 279 */;
	struct eeprom_93xx46_platform_data *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 278 */;
	struct eeprom_93xx46_dev *cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 276 */;
	int cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 276 */;
	unsigned cocci_id/* drivers/misc/eeprom/eeprom_93xx46.c 187 */;
}
