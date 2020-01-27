cocci_test_suite() {
	void __exit cocci_id/* drivers/regulator/ab8500-ext.c 866 */;
	void cocci_id/* drivers/regulator/ab8500-ext.c 866 */;
	int __init cocci_id/* drivers/regulator/ab8500-ext.c 854 */;
	struct platform_driver cocci_id/* drivers/regulator/ab8500-ext.c 847 */;
	struct ab8500_ext_regulator_cfg *cocci_id/* drivers/regulator/ab8500-ext.c 825 */;
	struct regulator_config cocci_id/* drivers/regulator/ab8500-ext.c 792 */;
	struct ab8500_regulator_platform_data *cocci_id/* drivers/regulator/ab8500-ext.c 791 */;
	struct ab8500 *cocci_id/* drivers/regulator/ab8500-ext.c 790 */;
	struct platform_device *cocci_id/* drivers/regulator/ab8500-ext.c 788 */;
	struct ab8500_ext_regulator_info cocci_id/* drivers/regulator/ab8500-ext.c 730 */[AB8500_NUM_EXT_REGULATORS];
	const struct regulator_ops cocci_id/* drivers/regulator/ab8500-ext.c 720 */;
	struct regulation_constraints *cocci_id/* drivers/regulator/ab8500-ext.c 706 */;
	unsigned cocci_id/* drivers/regulator/ab8500-ext.c 704 */;
	struct regulator_dev *cocci_id/* drivers/regulator/ab8500-ext.c 703 */;
	int cocci_id/* drivers/regulator/ab8500-ext.c 703 */;
	unsigned *cocci_id/* drivers/regulator/ab8500-ext.c 682 */;
	unsigned int cocci_id/* drivers/regulator/ab8500-ext.c 661 */;
	u8 cocci_id/* drivers/regulator/ab8500-ext.c 547 */;
	struct ab8500_ext_regulator_info *cocci_id/* drivers/regulator/ab8500-ext.c 546 */;
	struct ab8500_ext_regulator_info {
		struct device *dev;
		struct regulator_desc desc;
		struct ab8500_ext_regulator_cfg *cfg;
		u8 update_bank;
		u8 update_reg;
		u8 update_mask;
		u8 update_val;
		u8 update_val_hp;
		u8 update_val_lp;
		u8 update_val_hw;
	} cocci_id/* drivers/regulator/ab8500-ext.c 493 */;
	struct ab8500_regulator_platform_data cocci_id/* drivers/regulator/ab8500-ext.c 468 */;
	struct regulator_init_data cocci_id/* drivers/regulator/ab8500-ext.c 433 */[];
	struct regulator_consumer_supply cocci_id/* drivers/regulator/ab8500-ext.c 425 */[];
	struct regulator_init_data cocci_id/* drivers/regulator/ab8500-ext.c 304 */[AB8500_NUM_REGULATORS];
	struct ab8500_regulator_reg_init cocci_id/* drivers/regulator/ab8500-ext.c 133 */[];
}
