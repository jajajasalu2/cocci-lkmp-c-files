cocci_test_suite() {
	const int cocci_id/* drivers/power/supply/adp5061.c 95 */[4];
	enum adp5061_chg_status{ADP5061_CHG_OFF, ADP5061_CHG_TRICKLE, ADP5061_CHG_FAST_CC, ADP5061_CHG_FAST_CV, ADP5061_CHG_COMPLETE, ADP5061_CHG_LDO_MODE, ADP5061_CHG_TIMER_EXP, ADP5061_CHG_BAT_DET,} cocci_id/* drivers/power/supply/adp5061.c 84 */;
	struct i2c_driver cocci_id/* drivers/power/supply/adp5061.c 733 */;
	const struct i2c_device_id cocci_id/* drivers/power/supply/adp5061.c 727 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/adp5061.c 697 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/adp5061.c 695 */;
	struct i2c_client *cocci_id/* drivers/power/supply/adp5061.c 694 */;
	const struct power_supply_desc cocci_id/* drivers/power/supply/adp5061.c 684 */;
	const struct regmap_config cocci_id/* drivers/power/supply/adp5061.c 679 */;
	enum power_supply_property cocci_id/* drivers/power/supply/adp5061.c 664 */[];
	const union power_supply_propval *cocci_id/* drivers/power/supply/adp5061.c 618 */;
	enum power_supply_property cocci_id/* drivers/power/supply/adp5061.c 533 */;
	struct power_supply *cocci_id/* drivers/power/supply/adp5061.c 532 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/adp5061.c 473 */;
	struct adp5061_state *cocci_id/* drivers/power/supply/adp5061.c 472 */;
	unsigned int cocci_id/* drivers/power/supply/adp5061.c 244 */;
	u8 cocci_id/* drivers/power/supply/adp5061.c 160 */[2];
	u8 *cocci_id/* drivers/power/supply/adp5061.c 158 */;
	u8 cocci_id/* drivers/power/supply/adp5061.c 145 */;
	const int *cocci_id/* drivers/power/supply/adp5061.c 145 */;
	int cocci_id/* drivers/power/supply/adp5061.c 145 */;
	struct adp5061_state {
		struct i2c_client *client;
		struct regmap *regmap;
		struct power_supply *psy;
	} cocci_id/* drivers/power/supply/adp5061.c 139 */;
	const int cocci_id/* drivers/power/supply/adp5061.c 135 */[8];
	const int cocci_id/* drivers/power/supply/adp5061.c 130 */[16];
	const int cocci_id/* drivers/power/supply/adp5061.c 123 */[36];
	const int cocci_id/* drivers/power/supply/adp5061.c 118 */[24];
}
