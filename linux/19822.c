cocci_test_suite() {
	struct read_param cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 91 */;
	unsigned char *cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 88 */;
	struct spi_driver cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 80 */;
	char *cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 59 */;
	u8 cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 57 */[2];
	int cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 56 */;
	struct spi_device *cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 54 */;
	int __init cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 54 */;
	struct read_param {
		int busid;
		int chipid;
		int address;
		unsigned char *buf;
		int len;
	} *cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 46 */;
	struct spi_eeprom *cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 32 */;
	struct spi_board_info cocci_id/* arch/mips/txx9/generic/spi_eeprom.c 25 */;
}
