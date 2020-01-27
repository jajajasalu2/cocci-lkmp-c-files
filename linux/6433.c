cocci_test_suite() {
	const int cocci_id/* drivers/regulator/pfuze100-regulator.c 89 */[];
	struct i2c_driver cocci_id/* drivers/regulator/pfuze100-regulator.c 857 */;
	struct regulator_desc *cocci_id/* drivers/regulator/pfuze100-regulator.c 779 */;
	long cocci_id/* drivers/regulator/pfuze100-regulator.c 710 */;
	struct pfuze_chip {
		int chip_id;
		int flags;
		struct regmap *regmap;
		struct device *dev;
		struct pfuze_regulator regulator_descs[PFUZE100_MAX_REGULATOR];
		struct regulator_dev *regulators[PFUZE100_MAX_REGULATOR];
		struct pfuze_regulator *pfuze_regulators;
	} cocci_id/* drivers/regulator/pfuze100-regulator.c 71 */;
	u32 cocci_id/* drivers/regulator/pfuze100-regulator.c 695 */;
	const struct of_device_id *cocci_id/* drivers/regulator/pfuze100-regulator.c 694 */;
	struct regulator_config cocci_id/* drivers/regulator/pfuze100-regulator.c 692 */;
	struct pfuze_regulator_platform_data *cocci_id/* drivers/regulator/pfuze100-regulator.c 690 */;
	struct pfuze_chip *cocci_id/* drivers/regulator/pfuze100-regulator.c 689 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/pfuze100-regulator.c 687 */;
	struct i2c_client *cocci_id/* drivers/regulator/pfuze100-regulator.c 686 */;
	const struct regmap_config cocci_id/* drivers/regulator/pfuze100-regulator.c 679 */;
	struct pfuze_regulator {
		struct regulator_desc desc;
		unsigned char stby_reg;
		unsigned char stby_mask;
		bool sw_reg;
	} cocci_id/* drivers/regulator/pfuze100-regulator.c 64 */;
	enum chips{PFUZE100, PFUZE200, PFUZE3000=3, PFUZE3001=0x31,} cocci_id/* drivers/regulator/pfuze100-regulator.c 62 */;
	void cocci_id/* drivers/regulator/pfuze100-regulator.c 579 */;
	struct device_node *cocci_id/* drivers/regulator/pfuze100-regulator.c 556 */;
	struct regulator_init_data *cocci_id/* drivers/regulator/pfuze100-regulator.c 551 */;
	int cocci_id/* drivers/regulator/pfuze100-regulator.c 551 */;
	struct device *cocci_id/* drivers/regulator/pfuze100-regulator.c 499 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/pfuze100-regulator.c 495 */;
	struct of_regulator_match cocci_id/* drivers/regulator/pfuze100-regulator.c 424 */[];
	struct pfuze_regulator cocci_id/* drivers/regulator/pfuze100-regulator.c 357 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/pfuze100-regulator.c 175 */;
	unsigned int cocci_id/* drivers/regulator/pfuze100-regulator.c 131 */;
	bool cocci_id/* drivers/regulator/pfuze100-regulator.c 130 */;
	struct regulator_dev *cocci_id/* drivers/regulator/pfuze100-regulator.c 126 */;
	void *cocci_id/* drivers/regulator/pfuze100-regulator.c 118 */;
	const struct of_device_id cocci_id/* drivers/regulator/pfuze100-regulator.c 117 */[];
	const struct i2c_device_id cocci_id/* drivers/regulator/pfuze100-regulator.c 108 */[];
}
