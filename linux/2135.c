cocci_test_suite() {
	struct max17211_device_info {
		char name[PSY_MAX_NAME_LEN];
		struct power_supply *bat;
		struct power_supply_desc bat_desc;
		struct device *w1_dev;
		struct regmap *regmap;
		unsigned int rsense;
		char DeviceName[2 * MAX1721X_REG_DEV_NUMB + 1];
		char ManufacturerName[2 * MAX1721X_REG_MFG_NUMB + 1];
		char SerialNumber[13];
	} cocci_id/* drivers/power/supply/max1721x_battery.c 58 */;
	struct w1_family cocci_id/* drivers/power/supply/max1721x_battery.c 438 */;
	struct w1_family_ops cocci_id/* drivers/power/supply/max1721x_battery.c 434 */;
	unsigned int cocci_id/* drivers/power/supply/max1721x_battery.c 342 */;
	void *cocci_id/* drivers/power/supply/max1721x_battery.c 332 */;
	struct max17211_device_info *cocci_id/* drivers/power/supply/max1721x_battery.c 326 */;
	struct power_supply_config cocci_id/* drivers/power/supply/max1721x_battery.c 325 */;
	struct w1_slave *cocci_id/* drivers/power/supply/max1721x_battery.c 323 */;
	int cocci_id/* drivers/power/supply/max1721x_battery.c 323 */;
	const struct regmap_config cocci_id/* drivers/power/supply/max1721x_battery.c 315 */;
	const struct regmap_access_table cocci_id/* drivers/power/supply/max1721x_battery.c 292 */;
	const struct regmap_range cocci_id/* drivers/power/supply/max1721x_battery.c 266 */[];
	unsigned int cocci_id/* drivers/power/supply/max1721x_battery.c 247 */[3];
	char *cocci_id/* drivers/power/supply/max1721x_battery.c 245 */;
	uint8_t cocci_id/* drivers/power/supply/max1721x_battery.c 227 */;
	uint16_t cocci_id/* drivers/power/supply/max1721x_battery.c 227 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max1721x_battery.c 208 */[];
	union power_supply_propval *cocci_id/* drivers/power/supply/max1721x_battery.c 129 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max1721x_battery.c 128 */;
	struct power_supply *cocci_id/* drivers/power/supply/max1721x_battery.c 127 */;
	int16_t cocci_id/* drivers/power/supply/max1721x_battery.c 115 */;
}
