cocci_test_suite() {
	struct ucs1002_info {
		struct power_supply *charger;
		struct i2c_client *client;
		struct regmap *regmap;
		struct regulator_desc *regulator_descriptor;
		bool present;
	} cocci_id/* drivers/power/supply/ucs1002_power.c 98 */;
	struct i2c_driver cocci_id/* drivers/power/supply/ucs1002_power.c 634 */;
	const struct of_device_id cocci_id/* drivers/power/supply/ucs1002_power.c 628 */[];
	struct regulator_dev *cocci_id/* drivers/power/supply/ucs1002_power.c 502 */;
	struct regulator_config cocci_id/* drivers/power/supply/ucs1002_power.c 500 */;
	const struct regmap_config cocci_id/* drivers/power/supply/ucs1002_power.c 496 */;
	struct power_supply_config cocci_id/* drivers/power/supply/ucs1002_power.c 495 */;
	struct device *cocci_id/* drivers/power/supply/ucs1002_power.c 494 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/ucs1002_power.c 492 */;
	struct i2c_client *cocci_id/* drivers/power/supply/ucs1002_power.c 491 */;
	const struct regulator_desc cocci_id/* drivers/power/supply/ucs1002_power.c 479 */;
	const struct regulator_ops cocci_id/* drivers/power/supply/ucs1002_power.c 473 */;
	struct ucs1002_info *cocci_id/* drivers/power/supply/ucs1002_power.c 466 */;
	irqreturn_t cocci_id/* drivers/power/supply/ucs1002_power.c 464 */;
	void *cocci_id/* drivers/power/supply/ucs1002_power.c 464 */;
	int cocci_id/* drivers/power/supply/ucs1002_power.c 464 */;
	bool cocci_id/* drivers/power/supply/ucs1002_power.c 445 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/ucs1002_power.c 430 */;
	const union power_supply_propval *cocci_id/* drivers/power/supply/ucs1002_power.c 404 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ucs1002_power.c 373 */;
	struct power_supply *cocci_id/* drivers/power/supply/ucs1002_power.c 372 */;
	enum power_supply_usb_type cocci_id/* drivers/power/supply/ucs1002_power.c 315 */;
	enum power_supply_usb_type cocci_id/* drivers/power/supply/ucs1002_power.c 276 */[];
	const u32 cocci_id/* drivers/power/supply/ucs1002_power.c 226 */[];
	const int cocci_id/* drivers/power/supply/ucs1002_power.c 202 */[BITS_PER_TYPE(u8)];
	u32 cocci_id/* drivers/power/supply/ucs1002_power.c 181 */;
	unsigned int cocci_id/* drivers/power/supply/ucs1002_power.c 177 */;
	unsigned long cocci_id/* drivers/power/supply/ucs1002_power.c 176 */;
	const int cocci_id/* drivers/power/supply/ucs1002_power.c 153 */[BITS_PER_TYPE(u32)];
	union power_supply_propval *cocci_id/* drivers/power/supply/ucs1002_power.c 133 */;
	enum power_supply_property cocci_id/* drivers/power/supply/ucs1002_power.c 106 */[];
}
