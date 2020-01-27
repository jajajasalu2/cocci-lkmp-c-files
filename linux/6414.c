cocci_test_suite() {
	const struct da9062_regulator_info *cocci_id/* drivers/regulator/da9062-regulator.c 928 */;
	struct regulator_config cocci_id/* drivers/regulator/da9062-regulator.c 927 */;
	struct platform_device *cocci_id/* drivers/regulator/da9062-regulator.c 922 */;
	struct da9062 *cocci_id/* drivers/regulator/da9062-regulator.c 892 */;
	struct da9062_regulators *cocci_id/* drivers/regulator/da9062-regulator.c 891 */;
	irqreturn_t cocci_id/* drivers/regulator/da9062-regulator.c 889 */;
	void *cocci_id/* drivers/regulator/da9062-regulator.c 889 */;
	const unsigned int cocci_id/* drivers/regulator/da9062-regulator.c 86 */[];
	struct da9062_regulators {
		int irq_ldo_lim;
		unsigned n_regulators;
		struct da9062_regulator regulator[0];
	} cocci_id/* drivers/regulator/da9062-regulator.c 72 */;
	struct da9062_regulator {
		struct regulator_desc desc;
		struct regulator_dev *rdev;
		struct da9062 *hw;
		const struct da9062_regulator_info *info;
		struct regmap_field *mode;
		struct regmap_field *suspend;
		struct regmap_field *sleep;
		struct regmap_field *suspend_sleep;
	} cocci_id/* drivers/regulator/da9062-regulator.c 59 */;
	struct da9062_regulator_info {
		struct regulator_desc desc;
		struct reg_field mode;
		struct reg_field suspend;
		struct reg_field sleep;
		struct reg_field suspend_sleep;
		unsigned int suspend_vsel_reg;
		struct reg_field oc_event;
	} cocci_id/* drivers/regulator/da9062-regulator.c 46 */;
	const struct da9062_regulator_info cocci_id/* drivers/regulator/da9062-regulator.c 358 */[];
	enum{DA9062_ID_BUCK1, DA9062_ID_BUCK2, DA9062_ID_BUCK3, DA9062_ID_BUCK4, DA9062_ID_LDO1, DA9062_ID_LDO2, DA9062_ID_LDO3, DA9062_ID_LDO4, DA9062_MAX_REGULATORS,} cocci_id/* drivers/regulator/da9062-regulator.c 33 */;
	const struct regulator_ops cocci_id/* drivers/regulator/da9062-regulator.c 323 */;
	enum{DA9061_ID_BUCK1, DA9061_ID_BUCK2, DA9061_ID_BUCK3, DA9061_ID_LDO1, DA9061_ID_LDO2, DA9061_ID_LDO3, DA9061_ID_LDO4, DA9061_MAX_REGULATORS,} cocci_id/* drivers/regulator/da9062-regulator.c 22 */;
	int cocci_id/* drivers/regulator/da9062-regulator.c 147 */;
	unsigned int cocci_id/* drivers/regulator/da9062-regulator.c 146 */;
	struct da9062_regulator *cocci_id/* drivers/regulator/da9062-regulator.c 145 */;
	struct regulator_dev *cocci_id/* drivers/regulator/da9062-regulator.c 143 */;
	unsigned cocci_id/* drivers/regulator/da9062-regulator.c 143 */;
	void __exit cocci_id/* drivers/regulator/da9062-regulator.c 1048 */;
	void cocci_id/* drivers/regulator/da9062-regulator.c 1048 */;
	int __init cocci_id/* drivers/regulator/da9062-regulator.c 1042 */;
	struct platform_driver cocci_id/* drivers/regulator/da9062-regulator.c 1035 */;
}
