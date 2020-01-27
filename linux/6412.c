cocci_test_suite() {
	const struct regmap_range cocci_id/* drivers/regulator/slg51000-regulator.c 90 */[];
	const struct slg51000_evt_sta cocci_id/* drivers/regulator/slg51000-regulator.c 52 */[SLG51000_MAX_EVT_REGISTER];
	struct i2c_driver cocci_id/* drivers/regulator/slg51000-regulator.c 508 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/slg51000-regulator.c 502 */[];
	struct slg51000_evt_sta {
		unsigned int ereg;
		unsigned int sreg;
	} cocci_id/* drivers/regulator/slg51000-regulator.c 47 */;
	struct slg51000 cocci_id/* drivers/regulator/slg51000-regulator.c 450 */;
	struct gpio_desc *cocci_id/* drivers/regulator/slg51000-regulator.c 447 */;
	struct device *cocci_id/* drivers/regulator/slg51000-regulator.c 445 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/slg51000-regulator.c 443 */;
	struct i2c_client *cocci_id/* drivers/regulator/slg51000-regulator.c 442 */;
	int cocci_id/* drivers/regulator/slg51000-regulator.c 424 */;
	unsigned int cocci_id/* drivers/regulator/slg51000-regulator.c 423 */;
	struct slg51000 *cocci_id/* drivers/regulator/slg51000-regulator.c 421 */;
	void cocci_id/* drivers/regulator/slg51000-regulator.c 421 */;
	struct slg51000 {
		struct device *dev;
		struct regmap *regmap;
		struct regulator_desc *rdesc[SLG51000_MAX_REGULATORS];
		struct regulator_dev *rdev[SLG51000_MAX_REGULATORS];
		struct gpio_desc *cs_gpiod;
		int chip_irq;
	} cocci_id/* drivers/regulator/slg51000-regulator.c 38 */;
	u8 cocci_id/* drivers/regulator/slg51000-regulator.c 351 */[SLG51000_MAX_EVT_REGISTER][REG_MAX];
	enum{R0=0, R1, R2, REG_MAX,} cocci_id/* drivers/regulator/slg51000-regulator.c 350 */;
	struct regmap *cocci_id/* drivers/regulator/slg51000-regulator.c 349 */;
	irqreturn_t cocci_id/* drivers/regulator/slg51000-regulator.c 346 */;
	void *cocci_id/* drivers/regulator/slg51000-regulator.c 346 */;
	enum slg51000_regulators{SLG51000_REGULATOR_LDO1=0, SLG51000_REGULATOR_LDO2, SLG51000_REGULATOR_LDO3, SLG51000_REGULATOR_LDO4, SLG51000_REGULATOR_LDO5, SLG51000_REGULATOR_LDO6, SLG51000_REGULATOR_LDO7, SLG51000_MAX_REGULATORS,} cocci_id/* drivers/regulator/slg51000-regulator.c 27 */;
	const unsigned int cocci_id/* drivers/regulator/slg51000-regulator.c 251 */[SLG51000_MAX_REGULATORS];
	u8 cocci_id/* drivers/regulator/slg51000-regulator.c 249 */[2];
	struct regulator_desc *cocci_id/* drivers/regulator/slg51000-regulator.c 247 */;
	struct regulator_config cocci_id/* drivers/regulator/slg51000-regulator.c 246 */;
	struct regulator_desc cocci_id/* drivers/regulator/slg51000-regulator.c 234 */[SLG51000_MAX_REGULATORS];
	struct regulator_config *cocci_id/* drivers/regulator/slg51000-regulator.c 199 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/slg51000-regulator.c 198 */;
	struct device_node *cocci_id/* drivers/regulator/slg51000-regulator.c 197 */;
	const struct regulator_ops cocci_id/* drivers/regulator/slg51000-regulator.c 181 */;
	const struct regmap_config cocci_id/* drivers/regulator/slg51000-regulator.c 172 */;
	const struct regmap_access_table cocci_id/* drivers/regulator/slg51000-regulator.c 162 */;
}
