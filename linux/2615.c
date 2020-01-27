cocci_test_suite() {
	const unsigned int cocci_id/* drivers/nvmem/rave-sp-eeprom.c 96 */;
	const bool cocci_id/* drivers/nvmem/rave-sp-eeprom.c 95 */;
	struct rave_sp_eeprom_page *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 93 */;
	u16 cocci_id/* drivers/nvmem/rave-sp-eeprom.c 92 */;
	struct rave_sp_eeprom {
		struct rave_sp *sp;
		struct mutex mutex;
		u8 address;
		unsigned int header_size;
		struct device *dev;
	} cocci_id/* drivers/nvmem/rave-sp-eeprom.c 67 */;
	struct rave_sp_eeprom_page {
		u8 type;
		u8 success;
		u8 data[RAVE_SP_EEPROM_PAGE_SIZE];
	}__packed cocci_id/* drivers/nvmem/rave-sp-eeprom.c 52 */;
	struct platform_driver cocci_id/* drivers/nvmem/rave-sp-eeprom.c 348 */;
	const struct of_device_id cocci_id/* drivers/nvmem/rave-sp-eeprom.c 342 */[];
	enum rave_sp_eeprom_header_size{RAVE_SP_EEPROM_HEADER_SMALL=4U, RAVE_SP_EEPROM_HEADER_BIG=5U,} cocci_id/* drivers/nvmem/rave-sp-eeprom.c 34 */;
	u32 cocci_id/* drivers/nvmem/rave-sp-eeprom.c 295 */[2];
	struct nvmem_device *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 294 */;
	struct nvmem_config cocci_id/* drivers/nvmem/rave-sp-eeprom.c 292 */;
	struct device_node *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 291 */;
	struct rave_sp *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 290 */;
	struct device *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 289 */;
	struct platform_device *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 287 */;
	void *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 273 */;
	enum rave_sp_eeprom_access_type{RAVE_SP_EEPROM_WRITE=0, RAVE_SP_EEPROM_READ=1,} cocci_id/* drivers/nvmem/rave-sp-eeprom.c 23 */;
	u8 *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 222 */;
	unsigned int cocci_id/* drivers/nvmem/rave-sp-eeprom.c 222 */;
	enum rave_sp_eeprom_access_type cocci_id/* drivers/nvmem/rave-sp-eeprom.c 221 */;
	struct rave_sp_eeprom *cocci_id/* drivers/nvmem/rave-sp-eeprom.c 220 */;
	int cocci_id/* drivers/nvmem/rave-sp-eeprom.c 220 */;
	struct rave_sp_eeprom_page cocci_id/* drivers/nvmem/rave-sp-eeprom.c 163 */;
	size_t cocci_id/* drivers/nvmem/rave-sp-eeprom.c 159 */;
	u8 cocci_id/* drivers/nvmem/rave-sp-eeprom.c 101 */[RAVE_SP_EEPROM_HEADER_MAX + sizeof(page->data)];
}
