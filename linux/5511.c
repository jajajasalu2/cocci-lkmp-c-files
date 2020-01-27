cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/rtc/rtc-ds1307.c 976 */[];
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-ds1307.c 952 */[];
	long *cocci_id/* drivers/rtc/rtc-ds1307.c 807 */;
	unsigned char cocci_id/* drivers/rtc/rtc-ds1307.c 747 */[10];
	struct rtc_time cocci_id/* drivers/rtc/rtc-ds1307.c 731 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 689 */[10];
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 515 */[3];
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 488 */;
	u32 cocci_id/* drivers/rtc/rtc-ds1307.c 488 */;
	bool cocci_id/* drivers/rtc/rtc-ds1307.c 488 */;
	struct ds1307 *cocci_id/* drivers/rtc/rtc-ds1307.c 488 */;
	struct device *cocci_id/* drivers/rtc/rtc-ds1307.c 476 */;
	unsigned int cocci_id/* drivers/rtc/rtc-ds1307.c 476 */;
	unsigned char cocci_id/* drivers/rtc/rtc-ds1307.c 418 */[9];
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 377 */[9];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-ds1307.c 373 */;
	enum ds_type{ds_1307, ds_1308, ds_1337, ds_1338, ds_1339, ds_1340, ds_1341, ds_1388, ds_3231, m41t0, m41t00, m41t11, mcp794xx, rx_8025, rx_8130, last_ds_type,} cocci_id/* drivers/rtc/rtc-ds1307.c 32 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 192 */[7];
	const struct chip_desc *cocci_id/* drivers/rtc/rtc-ds1307.c 191 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ds1307.c 187 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-ds1307.c 1866 */;
	const struct chip_desc cocci_id/* drivers/rtc/rtc-ds1307.c 185 */[last_ds_type];
	struct nvmem_config cocci_id/* drivers/rtc/rtc-ds1307.c 1843 */;
	struct chip_desc {
		unsigned alarm:1;
		u16 nvram_offset;
		u16 nvram_size;
		u8 offset;
		u8 century_reg;
		u8 century_enable_bit;
		u8 century_bit;
		u8 bbsqi_bit;
		irq_handler_t irq_handler;
		const struct rtc_class_ops *rtc_ops;
		u16 trickle_charger_reg;
		u8 (*do_trickle_setup)(struct ds1307 *, u32, bool);
	} cocci_id/* drivers/rtc/rtc-ds1307.c 169 */;
	const struct acpi_device_id *cocci_id/* drivers/rtc/rtc-ds1307.c 1612 */;
	enum ds_type cocci_id/* drivers/rtc/rtc-ds1307.c 1605 */;
	struct ds1307 cocci_id/* drivers/rtc/rtc-ds1307.c 1588 */;
	struct ds1307_platform_data *cocci_id/* drivers/rtc/rtc-ds1307.c 1585 */;
	unsigned char cocci_id/* drivers/rtc/rtc-ds1307.c 1584 */[8];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-ds1307.c 1576 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-ds1307.c 1575 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-ds1307.c 1570 */;
	struct ds1307 {
		enum ds_type type;
		unsigned long flags;
#define HAS_NVRAM 0
#define HAS_ALARM 1
		struct device *dev;
		struct regmap *regmap;
		const char *name;
		struct rtc_device *rtc;
#ifdef CONFIG_COMMON_CLK
		struct clk_hw clks[2];
#endif
	} cocci_id/* drivers/rtc/rtc-ds1307.c 155 */;
	void cocci_id/* drivers/rtc/rtc-ds1307.c 1548 */;
	struct clk_init_data cocci_id/* drivers/rtc/rtc-ds1307.c 1520 */;
	struct clk_onecell_data *cocci_id/* drivers/rtc/rtc-ds1307.c 1506 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-ds1307.c 1505 */;
	struct clk_init_data cocci_id/* drivers/rtc/rtc-ds1307.c 1492 */[];
	const struct clk_ops cocci_id/* drivers/rtc/rtc-ds1307.c 1485 */;
	struct clk_hw *cocci_id/* drivers/rtc/rtc-ds1307.c 1473 */;
	unsigned long cocci_id/* drivers/rtc/rtc-ds1307.c 1439 */;
	unsigned long *cocci_id/* drivers/rtc/rtc-ds1307.c 1367 */;
	long cocci_id/* drivers/rtc/rtc-ds1307.c 1366 */;
	int cocci_id/* drivers/rtc/rtc-ds1307.c 1328 */[];
	enum{DS3231_CLK_SQW=0, DS3231_CLK_32KHZ,} cocci_id/* drivers/rtc/rtc-ds1307.c 1318 */;
	struct attribute *cocci_id/* drivers/rtc/rtc-ds1307.c 1280 */[];
	s32 cocci_id/* drivers/rtc/rtc-ds1307.c 1269 */;
	struct device_attribute *cocci_id/* drivers/rtc/rtc-ds1307.c 1266 */;
	char *cocci_id/* drivers/rtc/rtc-ds1307.c 1266 */;
	ssize_t cocci_id/* drivers/rtc/rtc-ds1307.c 1265 */;
	s16 cocci_id/* drivers/rtc/rtc-ds1307.c 1247 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1307.c 1246 */[2];
	s32 *cocci_id/* drivers/rtc/rtc-ds1307.c 1243 */;
	size_t cocci_id/* drivers/rtc/rtc-ds1307.c 1189 */;
	int cocci_id/* drivers/rtc/rtc-ds1307.c 1167 */;
	const struct attribute_group cocci_id/* drivers/rtc/rtc-ds1307.c 1163 */;
	const char *cocci_id/* drivers/rtc/rtc-ds1307.c 1125 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ds1307.c 1115 */;
	struct mutex *cocci_id/* drivers/rtc/rtc-ds1307.c 1087 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-ds1307.c 1084 */;
	void *cocci_id/* drivers/rtc/rtc-ds1307.c 1084 */;
	const struct acpi_device_id cocci_id/* drivers/rtc/rtc-ds1307.c 1055 */[];
}
