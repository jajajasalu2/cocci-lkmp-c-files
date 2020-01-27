cocci_test_suite() {
	void __exit cocci_id/* drivers/misc/eeprom/at24.c 760 */;
	void cocci_id/* drivers/misc/eeprom/at24.c 760 */;
	struct at24_data {
		struct mutex lock;
		unsigned int write_max;
		unsigned int num_addresses;
		unsigned int offset_adj;
		u32 byte_len;
		u16 page_size;
		u8 flags;
		struct nvmem_device *nvmem;
		struct gpio_desc *wp_gpio;
		struct at24_client client[];
	} cocci_id/* drivers/misc/eeprom/at24.c 75 */;
	int __init cocci_id/* drivers/misc/eeprom/at24.c 748 */;
	struct i2c_driver cocci_id/* drivers/misc/eeprom/at24.c 737 */;
	struct at24_client {
		struct i2c_client *client;
		struct regmap *regmap;
	} cocci_id/* drivers/misc/eeprom/at24.c 70 */;
	bool cocci_id/* drivers/misc/eeprom/at24.c 564 */;
	u32 cocci_id/* drivers/misc/eeprom/at24.c 561 */;
	struct nvmem_config cocci_id/* drivers/misc/eeprom/at24.c 560 */;
	struct regmap_config cocci_id/* drivers/misc/eeprom/at24.c 559 */;
	u8 cocci_id/* drivers/misc/eeprom/at24.c 534 */;
	struct regmap *cocci_id/* drivers/misc/eeprom/at24.c 513 */;
	struct i2c_client *cocci_id/* drivers/misc/eeprom/at24.c 512 */;
	struct regmap_config *cocci_id/* drivers/misc/eeprom/at24.c 510 */;
	int cocci_id/* drivers/misc/eeprom/at24.c 509 */;
	void *cocci_id/* drivers/misc/eeprom/at24.c 499 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/eeprom/at24.c 487 */;
	struct device_node *cocci_id/* drivers/misc/eeprom/at24.c 485 */;
	const struct at24_chip_data *cocci_id/* drivers/misc/eeprom/at24.c 483 */;
	char *cocci_id/* drivers/misc/eeprom/at24.c 390 */;
	const char *cocci_id/* drivers/misc/eeprom/at24.c 352 */;
	struct at24_client *cocci_id/* drivers/misc/eeprom/at24.c 293 */;
	unsigned long cocci_id/* drivers/misc/eeprom/at24.c 292 */;
	ssize_t cocci_id/* drivers/misc/eeprom/at24.c 289 */;
	unsigned int cocci_id/* drivers/misc/eeprom/at24.c 266 */;
	struct at24_data *cocci_id/* drivers/misc/eeprom/at24.c 265 */;
	size_t cocci_id/* drivers/misc/eeprom/at24.c 265 */;
	struct device *cocci_id/* drivers/misc/eeprom/at24.c 260 */;
	unsigned int *cocci_id/* drivers/misc/eeprom/at24.c 245 */;
	const struct acpi_device_id cocci_id/* drivers/misc/eeprom/at24.c 229 */[];
	const struct of_device_id cocci_id/* drivers/misc/eeprom/at24.c 201 */[];
	const struct i2c_device_id cocci_id/* drivers/misc/eeprom/at24.c 172 */[];
	struct at24_chip_data {
		u32 byte_len;
		u8 flags;
	} cocci_id/* drivers/misc/eeprom/at24.c 122 */;
}
