cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/mtd/maps/pismo.c 70 */[];
	size_t cocci_id/* drivers/mtd/maps/pismo.c 67 */;
	u8 cocci_id/* drivers/mtd/maps/pismo.c 66 */;
	struct i2c_client *cocci_id/* drivers/mtd/maps/pismo.c 66 */;
	void *cocci_id/* drivers/mtd/maps/pismo.c 66 */;
	unsigned int cocci_id/* drivers/mtd/maps/pismo.c 58 */;
	struct platform_device *cocci_id/* drivers/mtd/maps/pismo.c 50 */;
	struct pismo_data {
		struct i2c_client *client;
		void (*vpp)(void *, int);
		void *vpp_data;
		struct platform_device *dev[PISMO_NUM_CS];
	} cocci_id/* drivers/mtd/maps/pismo.c 43 */;
	struct pismo_mem {
		phys_addr_t base;
		u32 size;
		u16 access;
		u8 width;
		u8 type;
	} cocci_id/* drivers/mtd/maps/pismo.c 35 */;
	struct pismo_eeprom {
		struct pismo_cs_block cs[PISMO_NUM_CS];
		char board[15];
		u8 sum;
	}__packed cocci_id/* drivers/mtd/maps/pismo.c 29 */;
	void __exit cocci_id/* drivers/mtd/maps/pismo.c 279 */;
	struct pismo_eeprom cocci_id/* drivers/mtd/maps/pismo.c 273 */;
	struct pismo_cs_block cocci_id/* drivers/mtd/maps/pismo.c 272 */;
	int __init cocci_id/* drivers/mtd/maps/pismo.c 270 */;
	struct i2c_driver cocci_id/* drivers/mtd/maps/pismo.c 261 */;
	const struct i2c_device_id cocci_id/* drivers/mtd/maps/pismo.c 255 */[];
	struct pismo_pdata *cocci_id/* drivers/mtd/maps/pismo.c 214 */;
	const struct i2c_device_id *cocci_id/* drivers/mtd/maps/pismo.c 212 */;
	struct pismo_cs_block {
		u8 type;
		u8 width;
		__le16 access;
		__le32 size;
		u32 reserved[2];
		char device[32];
	}__packed cocci_id/* drivers/mtd/maps/pismo.c 20 */;
	struct pismo_mem cocci_id/* drivers/mtd/maps/pismo.c 159 */;
	struct device *cocci_id/* drivers/mtd/maps/pismo.c 158 */;
	phys_addr_t cocci_id/* drivers/mtd/maps/pismo.c 156 */;
	const struct pismo_cs_block *cocci_id/* drivers/mtd/maps/pismo.c 156 */;
	void cocci_id/* drivers/mtd/maps/pismo.c 155 */;
	struct platdata_mtd_ram cocci_id/* drivers/mtd/maps/pismo.c 147 */;
	struct physmap_flash_data cocci_id/* drivers/mtd/maps/pismo.c 133 */;
	struct pismo_mem *cocci_id/* drivers/mtd/maps/pismo.c 131 */;
	struct pismo_data *cocci_id/* drivers/mtd/maps/pismo.c 130 */;
	int cocci_id/* drivers/mtd/maps/pismo.c 130 */;
}
