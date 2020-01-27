cocci_test_suite() {
	int cocci_id/* drivers/power/supply/bq24190_charger.c 887 */(struct bq24190_dev_info *bdi,
								     union power_supply_propval *val);
	int cocci_id/* drivers/power/supply/bq24190_charger.c 885 */(struct bq24190_dev_info *bdi,
								     const union power_supply_propval *val);
	struct regulator_dev *cocci_id/* drivers/power/supply/bq24190_charger.c 580 */;
	struct regulator_config cocci_id/* drivers/power/supply/bq24190_charger.c 579 */;
	struct bq24190_platform_data *cocci_id/* drivers/power/supply/bq24190_charger.c 578 */;
	const struct regulator_init_data cocci_id/* drivers/power/supply/bq24190_charger.c 570 */;
	const struct regulator_desc cocci_id/* drivers/power/supply/bq24190_charger.c 560 */;
	const struct regulator_ops cocci_id/* drivers/power/supply/bq24190_charger.c 554 */;
	size_t cocci_id/* drivers/power/supply/bq24190_charger.c 467 */;
	struct device_attribute *cocci_id/* drivers/power/supply/bq24190_charger.c 437 */;
	char *cocci_id/* drivers/power/supply/bq24190_charger.c 437 */;
	ssize_t cocci_id/* drivers/power/supply/bq24190_charger.c 436 */;
	const char *cocci_id/* drivers/power/supply/bq24190_charger.c 422 */;
	struct bq24190_sysfs_field_info *cocci_id/* drivers/power/supply/bq24190_charger.c 421 */;
	struct attribute *cocci_id/* drivers/power/supply/bq24190_charger.c 406 */[ARRAY_SIZE(bq24190_sysfs_field_tbl) + 1];
	struct bq24190_sysfs_field_info cocci_id/* drivers/power/supply/bq24190_charger.c 361 */[];
	struct bq24190_sysfs_field_info {
		struct device_attribute attr;
		u8 reg;
		u8 mask;
		u8 shift;
	} cocci_id/* drivers/power/supply/bq24190_charger.c 351 */;
	ssize_t cocci_id/* drivers/power/supply/bq24190_charger.c 348 */(struct device *dev,
									 struct device_attribute *attr,
									 const char *buf,
									 size_t count);
	ssize_t cocci_id/* drivers/power/supply/bq24190_charger.c 346 */(struct device *dev,
									 struct device_attribute *attr,
									 char *buf);
	int *cocci_id/* drivers/power/supply/bq24190_charger.c 295 */;
	u8 *cocci_id/* drivers/power/supply/bq24190_charger.c 242 */;
	struct i2c_driver cocci_id/* drivers/power/supply/bq24190_charger.c 1966 */;
	const struct of_device_id cocci_id/* drivers/power/supply/bq24190_charger.c 1952 */[];
	const int cocci_id/* drivers/power/supply/bq24190_charger.c 195 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/bq24190_charger.c 1942 */[];
	struct i2c_client *cocci_id/* drivers/power/supply/bq24190_charger.c 1906 */;
	struct device *cocci_id/* drivers/power/supply/bq24190_charger.c 1904 */;
	const unsigned int cocci_id/* drivers/power/supply/bq24190_charger.c 176 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/bq24190_charger.c 1702 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/bq24190_charger.c 1700 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/bq24190_charger.c 1698 */;
	struct power_supply_battery_info cocci_id/* drivers/power/supply/bq24190_charger.c 1663 */;
	const char *const cocci_id/* drivers/power/supply/bq24190_charger.c 1662 */;
	irqreturn_t cocci_id/* drivers/power/supply/bq24190_charger.c 1606 */;
	void *cocci_id/* drivers/power/supply/bq24190_charger.c 1606 */;
	struct bq24190_dev_info {
		struct i2c_client *client;
		struct device *dev;
		struct extcon_dev *edev;
		struct power_supply *charger;
		struct power_supply *battery;
		struct delayed_work input_current_limit_work;
		char model_name[I2C_NAME_SIZE];
		bool initialized;
		bool irq_event;
		u16 sys_min;
		u16 iprechg;
		u16 iterm;
		struct mutex f_reg_lock;
		u8 f_reg;
		u8 ss_reg;
		u8 watchdog;
	} cocci_id/* drivers/power/supply/bq24190_charger.c 157 */;
	bool cocci_id/* drivers/power/supply/bq24190_charger.c 1532 */;
	const u8 cocci_id/* drivers/power/supply/bq24190_charger.c 1529 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/bq24190_charger.c 1503 */;
	enum power_supply_property cocci_id/* drivers/power/supply/bq24190_charger.c 1494 */[];
	enum power_supply_property cocci_id/* drivers/power/supply/bq24190_charger.c 1402 */;
	struct power_supply *cocci_id/* drivers/power/supply/bq24190_charger.c 1401 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/bq24190_charger.c 1367 */;
	u8 cocci_id/* drivers/power/supply/bq24190_charger.c 1314 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/bq24190_charger.c 1312 */;
	struct bq24190_dev_info *cocci_id/* drivers/power/supply/bq24190_charger.c 1311 */;
	int cocci_id/* drivers/power/supply/bq24190_charger.c 1311 */;
	char *cocci_id/* drivers/power/supply/bq24190_charger.c 1242 */[];
	void cocci_id/* drivers/power/supply/bq24190_charger.c 1208 */;
	struct bq24190_dev_info cocci_id/* drivers/power/supply/bq24190_charger.c 1201 */;
	struct work_struct *cocci_id/* drivers/power/supply/bq24190_charger.c 1198 */;
}
