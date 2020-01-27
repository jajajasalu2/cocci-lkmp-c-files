cocci_test_suite() {
	unsigned int cocci_id/* drivers/power/supply/sbs-charger.c 94 */;
	struct sbs_info *cocci_id/* drivers/power/supply/sbs-charger.c 92 */;
	int cocci_id/* drivers/power/supply/sbs-charger.c 92 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/sbs-charger.c 46 */;
	enum power_supply_property cocci_id/* drivers/power/supply/sbs-charger.c 45 */;
	struct power_supply *cocci_id/* drivers/power/supply/sbs-charger.c 44 */;
	struct sbs_info {
		struct i2c_client *client;
		struct power_supply *power_supply;
		struct regmap *regmap;
		struct delayed_work work;
		unsigned int last_state;
	} cocci_id/* drivers/power/supply/sbs-charger.c 36 */;
	struct i2c_driver cocci_id/* drivers/power/supply/sbs-charger.c 254 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/sbs-charger.c 248 */[];
	const struct of_device_id cocci_id/* drivers/power/supply/sbs-charger.c 241 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/sbs-charger.c 169 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/sbs-charger.c 167 */;
	struct i2c_client *cocci_id/* drivers/power/supply/sbs-charger.c 166 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/sbs-charger.c 158 */;
	const struct regmap_config cocci_id/* drivers/power/supply/sbs-charger.c 149 */;
	bool cocci_id/* drivers/power/supply/sbs-charger.c 134 */;
	struct device *cocci_id/* drivers/power/supply/sbs-charger.c 134 */;
	enum power_supply_property cocci_id/* drivers/power/supply/sbs-charger.c 127 */[];
	irqreturn_t cocci_id/* drivers/power/supply/sbs-charger.c 117 */;
	void *cocci_id/* drivers/power/supply/sbs-charger.c 117 */;
	struct sbs_info cocci_id/* drivers/power/supply/sbs-charger.c 109 */;
	struct work_struct *cocci_id/* drivers/power/supply/sbs-charger.c 107 */;
	void cocci_id/* drivers/power/supply/sbs-charger.c 107 */;
}
