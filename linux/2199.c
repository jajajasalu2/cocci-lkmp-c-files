cocci_test_suite() {
	struct smb347_charger *cocci_id/* drivers/power/supply/smb347-charger.c 880 */;
	struct i2c_client *cocci_id/* drivers/power/supply/smb347-charger.c 832 */;
	irqreturn_t cocci_id/* drivers/power/supply/smb347-charger.c 704 */;
	void *cocci_id/* drivers/power/supply/smb347-charger.c 704 */;
	bool cocci_id/* drivers/power/supply/smb347-charger.c 300 */;
	const unsigned int *cocci_id/* drivers/power/supply/smb347-charger.c 211 */;
	unsigned int cocci_id/* drivers/power/supply/smb347-charger.c 211 */;
	int cocci_id/* drivers/power/supply/smb347-charger.c 211 */;
	size_t cocci_id/* drivers/power/supply/smb347-charger.c 211 */;
	const unsigned int cocci_id/* drivers/power/supply/smb347-charger.c 195 */[];
	struct smb347_charger {
		struct mutex lock;
		struct device *dev;
		struct regmap *regmap;
		struct power_supply *mains;
		struct power_supply *usb;
		struct power_supply *battery;
		bool mains_online;
		bool usb_online;
		bool charging_enabled;
		const struct smb347_charger_platform_data *pdata;
	} cocci_id/* drivers/power/supply/smb347-charger.c 135 */;
	struct i2c_driver cocci_id/* drivers/power/supply/smb347-charger.c 1317 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/smb347-charger.c 1311 */[];
	struct device *cocci_id/* drivers/power/supply/smb347-charger.c 1216 */;
	struct power_supply_config cocci_id/* drivers/power/supply/smb347-charger.c 1215 */;
	char *cocci_id/* drivers/power/supply/smb347-charger.c 1213 */[];
	const struct i2c_device_id *cocci_id/* drivers/power/supply/smb347-charger.c 1211 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/smb347-charger.c 1202 */;
	const struct regmap_config cocci_id/* drivers/power/supply/smb347-charger.c 1178 */;
	enum power_supply_property cocci_id/* drivers/power/supply/smb347-charger.c 1126 */[];
	const struct smb347_charger_platform_data *cocci_id/* drivers/power/supply/smb347-charger.c 1063 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/smb347-charger.c 1060 */;
	enum power_supply_property cocci_id/* drivers/power/supply/smb347-charger.c 1059 */;
	struct power_supply *cocci_id/* drivers/power/supply/smb347-charger.c 1058 */;
}
