cocci_test_suite() {
	s32 cocci_id/* drivers/power/supply/max14656_charger_detector.c 92 */;
	struct max14656_chip {
		struct i2c_client *client;
		struct power_supply *detect_psy;
		struct power_supply_desc psy_desc;
		struct delayed_work irq_work;
		int irq;
		int online;
	} cocci_id/* drivers/power/supply/max14656_charger_detector.c 80 */;
	const struct max14656_chg_type_props {
		enum power_supply_type type;
	} cocci_id/* drivers/power/supply/max14656_charger_detector.c 66 */[];
	enum max14656_chg_type{MAX14656_NO_CHARGER=0, MAX14656_SDP_CHARGER, MAX14656_CDP_CHARGER, MAX14656_DCP_CHARGER, MAX14656_APPLE_500MA_CHARGER, MAX14656_APPLE_1A_CHARGER, MAX14656_APPLE_2A_CHARGER, MAX14656_SPECIAL_500MA_CHARGER, MAX14656_APPLE_12W, MAX14656_CHARGER_LAST,} cocci_id/* drivers/power/supply/max14656_charger_detector.c 53 */;
	struct i2c_driver cocci_id/* drivers/power/supply/max14656_charger_detector.c 325 */;
	const struct of_device_id cocci_id/* drivers/power/supply/max14656_charger_detector.c 319 */[];
	const struct i2c_device_id cocci_id/* drivers/power/supply/max14656_charger_detector.c 313 */[];
	struct power_supply_config cocci_id/* drivers/power/supply/max14656_charger_detector.c 252 */;
	struct device *cocci_id/* drivers/power/supply/max14656_charger_detector.c 251 */;
	struct i2c_adapter *cocci_id/* drivers/power/supply/max14656_charger_detector.c 250 */;
	const struct i2c_device_id *cocci_id/* drivers/power/supply/max14656_charger_detector.c 248 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max14656_charger_detector.c 233 */[];
	struct max14656_chip *cocci_id/* drivers/power/supply/max14656_charger_detector.c 214 */;
	union power_supply_propval *cocci_id/* drivers/power/supply/max14656_charger_detector.c 212 */;
	enum power_supply_property cocci_id/* drivers/power/supply/max14656_charger_detector.c 211 */;
	struct power_supply *cocci_id/* drivers/power/supply/max14656_charger_detector.c 210 */;
	int cocci_id/* drivers/power/supply/max14656_charger_detector.c 210 */;
	struct i2c_client *cocci_id/* drivers/power/supply/max14656_charger_detector.c 176 */;
	uint8_t cocci_id/* drivers/power/supply/max14656_charger_detector.c 174 */;
	irqreturn_t cocci_id/* drivers/power/supply/max14656_charger_detector.c 163 */;
	void *cocci_id/* drivers/power/supply/max14656_charger_detector.c 163 */;
	u8 cocci_id/* drivers/power/supply/max14656_charger_detector.c 141 */;
	u8 cocci_id/* drivers/power/supply/max14656_charger_detector.c 140 */[REG_TOTAL_NUM];
	struct max14656_chip cocci_id/* drivers/power/supply/max14656_charger_detector.c 138 */;
	struct work_struct *cocci_id/* drivers/power/supply/max14656_charger_detector.c 135 */;
	void cocci_id/* drivers/power/supply/max14656_charger_detector.c 135 */;
	u8 *cocci_id/* drivers/power/supply/max14656_charger_detector.c 120 */;
}
