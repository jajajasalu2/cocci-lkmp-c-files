cocci_test_suite() {
	int cocci_id/* drivers/regulator/da9055-regulator.c 86 */;
	struct da9055_regulator_info *cocci_id/* drivers/regulator/da9055-regulator.c 85 */;
	struct da9055_regulator *cocci_id/* drivers/regulator/da9055-regulator.c 84 */;
	struct regulator_dev *cocci_id/* drivers/regulator/da9055-regulator.c 82 */;
	unsigned int cocci_id/* drivers/regulator/da9055-regulator.c 82 */;
	struct da9055_regulator {
		struct da9055 *da9055;
		struct da9055_regulator_info *info;
		struct regulator_dev *rdev;
		enum gpio_select reg_rselect;
	} cocci_id/* drivers/regulator/da9055-regulator.c 75 */;
	struct da9055_regulator_info {
		struct regulator_desc reg_desc;
		struct da9055_conf_reg conf;
		struct da9055_volt_reg volt;
		struct da9055_mode_reg mode;
	} cocci_id/* drivers/regulator/da9055-regulator.c 68 */;
	struct da9055_mode_reg {
		int reg;
		int mask;
		int shift;
	} cocci_id/* drivers/regulator/da9055-regulator.c 62 */;
	void __exit cocci_id/* drivers/regulator/da9055-regulator.c 590 */;
	void cocci_id/* drivers/regulator/da9055-regulator.c 590 */;
	int __init cocci_id/* drivers/regulator/da9055-regulator.c 584 */;
	struct platform_driver cocci_id/* drivers/regulator/da9055-regulator.c 577 */;
	struct da9055_volt_reg {
		int reg_a;
		int reg_b;
		int sl_shift;
		int v_mask;
	} cocci_id/* drivers/regulator/da9055-regulator.c 55 */;
	struct da9055_regulator cocci_id/* drivers/regulator/da9055-regulator.c 518 */;
	struct da9055 *cocci_id/* drivers/regulator/da9055-regulator.c 514 */;
	struct regulator_config cocci_id/* drivers/regulator/da9055-regulator.c 512 */;
	struct platform_device *cocci_id/* drivers/regulator/da9055-regulator.c 510 */;
	struct da9055_conf_reg {
		int reg;
		int sel_mask;
		int en_mask;
	} cocci_id/* drivers/regulator/da9055-regulator.c 49 */;
	irqreturn_t cocci_id/* drivers/regulator/da9055-regulator.c 484 */;
	void *cocci_id/* drivers/regulator/da9055-regulator.c 484 */;
	const unsigned int cocci_id/* drivers/regulator/da9055-regulator.c 45 */[];
	char cocci_id/* drivers/regulator/da9055-regulator.c 427 */[18];
	struct da9055_pdata *cocci_id/* drivers/regulator/da9055-regulator.c 418 */;
	struct regulator_config *cocci_id/* drivers/regulator/da9055-regulator.c 417 */;
	struct da9055_regulator_info cocci_id/* drivers/regulator/da9055-regulator.c 400 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/da9055-regulator.c 291 */;
	struct da9055_volt_reg cocci_id/* drivers/regulator/da9055-regulator.c 150 */;
}
