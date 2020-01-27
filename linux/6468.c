cocci_test_suite() {
	void __exit cocci_id/* drivers/regulator/da9063-regulator.c 891 */;
	void cocci_id/* drivers/regulator/da9063-regulator.c 891 */;
	int __init cocci_id/* drivers/regulator/da9063-regulator.c 885 */;
	struct platform_driver cocci_id/* drivers/regulator/da9063-regulator.c 878 */;
	struct da9063_regulator_info {
		struct regulator_desc desc;
		struct reg_field mode;
		struct reg_field suspend;
		struct reg_field sleep;
		struct reg_field suspend_sleep;
		unsigned int suspend_vsel_reg;
		struct reg_field oc_event;
	} cocci_id/* drivers/regulator/da9063-regulator.c 74 */;
	bool cocci_id/* drivers/regulator/da9063-regulator.c 721 */;
	struct regulator_config cocci_id/* drivers/regulator/da9063-regulator.c 720 */;
	const struct da9063_dev_model *cocci_id/* drivers/regulator/da9063-regulator.c 717 */;
	struct of_regulator_match *cocci_id/* drivers/regulator/da9063-regulator.c 715 */;
	struct da9063_regulators_pdata {
		unsigned n_regulators;
		struct da9063_regulator_data *regulator_data;
	} cocci_id/* drivers/regulator/da9063-regulator.c 68 */;
	struct device_node *cocci_id/* drivers/regulator/da9063-regulator.c 664 */;
	struct da9063_regulator_data *cocci_id/* drivers/regulator/da9063-regulator.c 663 */;
	struct of_regulator_match **cocci_id/* drivers/regulator/da9063-regulator.c 659 */;
	struct platform_device *cocci_id/* drivers/regulator/da9063-regulator.c 658 */;
	struct da9063_regulators_pdata *cocci_id/* drivers/regulator/da9063-regulator.c 657 */;
	struct of_regulator_match cocci_id/* drivers/regulator/da9063-regulator.c 634 */[];
	struct da9063_regulator_data {
		int id;
		struct regulator_init_data *initdata;
	} cocci_id/* drivers/regulator/da9063-regulator.c 63 */;
	const struct da9063_regulators_pdata *cocci_id/* drivers/regulator/da9063-regulator.c 622 */;
	const struct regulator_init_data *cocci_id/* drivers/regulator/da9063-regulator.c 621 */;
	struct da9063 *cocci_id/* drivers/regulator/da9063-regulator.c 594 */;
	struct da9063_regulators *cocci_id/* drivers/regulator/da9063-regulator.c 593 */;
	irqreturn_t cocci_id/* drivers/regulator/da9063-regulator.c 591 */;
	void *cocci_id/* drivers/regulator/da9063-regulator.c 591 */;
	struct da9063_dev_model cocci_id/* drivers/regulator/da9063-regulator.c 576 */[];
	const struct da9063_regulator_info cocci_id/* drivers/regulator/da9063-regulator.c 462 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/da9063-regulator.c 427 */;
	const struct da9063_regulator_info *cocci_id/* drivers/regulator/da9063-regulator.c 357 */;
	enum{DA9063_ID_BCORE1, DA9063_ID_BCORE2, DA9063_ID_BPRO, DA9063_ID_BMEM, DA9063_ID_BIO, DA9063_ID_BPERI, DA9063_ID_BCORES_MERGED, DA9063_ID_BMEM_BIO_MERGED, DA9063_ID_LDO3, DA9063_ID_LDO7, DA9063_ID_LDO8, DA9063_ID_LDO9, DA9063_ID_LDO11, DA9063_ID_LDO1, DA9063_ID_LDO2, DA9063_ID_LDO4, DA9063_ID_LDO5, DA9063_ID_LDO6, DA9063_ID_LDO10,} cocci_id/* drivers/regulator/da9063-regulator.c 31 */;
	int cocci_id/* drivers/regulator/da9063-regulator.c 229 */;
	unsigned int cocci_id/* drivers/regulator/da9063-regulator.c 228 */;
	struct regmap_field *cocci_id/* drivers/regulator/da9063-regulator.c 227 */;
	struct da9063_regulator *cocci_id/* drivers/regulator/da9063-regulator.c 226 */;
	struct regulator_dev *cocci_id/* drivers/regulator/da9063-regulator.c 224 */;
	unsigned cocci_id/* drivers/regulator/da9063-regulator.c 224 */;
	const unsigned int cocci_id/* drivers/regulator/da9063-regulator.c 184 */[];
	enum{BUCK_MODE_MANUAL, BUCK_MODE_SLEEP, BUCK_MODE_SYNC, BUCK_MODE_AUTO,} cocci_id/* drivers/regulator/da9063-regulator.c 159 */;
	struct da9063_regulators {
		unsigned n_regulators;
		struct da9063_regulator regulator[0];
	} cocci_id/* drivers/regulator/da9063-regulator.c 152 */;
	struct da9063_regulator {
		struct regulator_desc desc;
		struct regulator_dev *rdev;
		struct da9063 *hw;
		const struct da9063_regulator_info *info;
		struct regmap_field *mode;
		struct regmap_field *suspend;
		struct regmap_field *sleep;
		struct regmap_field *suspend_sleep;
	} cocci_id/* drivers/regulator/da9063-regulator.c 139 */;
	struct da9063_dev_model {
		const struct da9063_regulator_info *regulator_info;
		unsigned n_regulators;
		enum da9063_type type;
	} cocci_id/* drivers/regulator/da9063-regulator.c 132 */;
}
