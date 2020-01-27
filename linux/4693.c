cocci_test_suite() {
	u8 cocci_id/* drivers/misc/eeprom/at25.c 72 */;
	struct spi_message cocci_id/* drivers/misc/eeprom/at25.c 71 */;
	struct spi_transfer cocci_id/* drivers/misc/eeprom/at25.c 70 */[2];
	ssize_t cocci_id/* drivers/misc/eeprom/at25.c 69 */;
	u8 *cocci_id/* drivers/misc/eeprom/at25.c 68 */;
	u8 cocci_id/* drivers/misc/eeprom/at25.c 67 */[EE_MAXADDRLEN + 1];
	char *cocci_id/* drivers/misc/eeprom/at25.c 66 */;
	struct at25_data *cocci_id/* drivers/misc/eeprom/at25.c 65 */;
	size_t cocci_id/* drivers/misc/eeprom/at25.c 63 */;
	void *cocci_id/* drivers/misc/eeprom/at25.c 62 */;
	unsigned int cocci_id/* drivers/misc/eeprom/at25.c 62 */;
	int cocci_id/* drivers/misc/eeprom/at25.c 62 */;
	struct spi_driver cocci_id/* drivers/misc/eeprom/at25.c 386 */;
	const struct of_device_id cocci_id/* drivers/misc/eeprom/at25.c 380 */[];
	struct at25_data cocci_id/* drivers/misc/eeprom/at25.c 341 */;
	struct spi_eeprom cocci_id/* drivers/misc/eeprom/at25.c 306 */;
	struct spi_device *cocci_id/* drivers/misc/eeprom/at25.c 303 */;
	struct at25_data {
		struct spi_device *spi;
		struct mutex lock;
		struct spi_eeprom chip;
		unsigned addrlen;
		struct nvmem_config nvmem_config;
		struct nvmem_device *nvmem;
	} cocci_id/* drivers/misc/eeprom/at25.c 27 */;
	u16 cocci_id/* drivers/misc/eeprom/at25.c 264 */;
	u32 cocci_id/* drivers/misc/eeprom/at25.c 249 */;
	struct spi_eeprom *cocci_id/* drivers/misc/eeprom/at25.c 247 */;
	struct device *cocci_id/* drivers/misc/eeprom/at25.c 247 */;
	unsigned long cocci_id/* drivers/misc/eeprom/at25.c 157 */;
	unsigned cocci_id/* drivers/misc/eeprom/at25.c 134 */;
	const char *cocci_id/* drivers/misc/eeprom/at25.c 132 */;
}
