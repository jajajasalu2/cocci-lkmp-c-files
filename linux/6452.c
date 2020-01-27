cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/regulator/as3722-regulator.c 830 */;
	const struct of_device_id cocci_id/* drivers/regulator/as3722-regulator.c 824 */[];
	const struct as3722_register_mapping cocci_id/* drivers/regulator/as3722-regulator.c 75 */[];
	struct as3722_regulators {
		struct device *dev;
		struct as3722 *as3722;
		struct regulator_desc desc[AS3722_REGULATOR_ID_MAX];
		struct as3722_regulator_config_data reg_config_data[AS3722_REGULATOR_ID_MAX];
	} cocci_id/* drivers/regulator/as3722-regulator.c 67 */;
	struct regulator_desc *cocci_id/* drivers/regulator/as3722-regulator.c 663 */;
	const struct regulator_ops *cocci_id/* drivers/regulator/as3722-regulator.c 641 */;
	struct regulator_config cocci_id/* drivers/regulator/as3722-regulator.c 640 */;
	struct as3722_regulator_config_data {
		struct regulator_init_data *reg_init;
		bool enable_tracking;
		int ext_control;
	} cocci_id/* drivers/regulator/as3722-regulator.c 61 */;
	u32 cocci_id/* drivers/regulator/as3722-regulator.c 589 */;
	struct as3722_regulator_config_data *cocci_id/* drivers/regulator/as3722-regulator.c 588 */;
	struct device_node *cocci_id/* drivers/regulator/as3722-regulator.c 587 */;
	struct platform_device *cocci_id/* drivers/regulator/as3722-regulator.c 584 */;
	struct of_regulator_match cocci_id/* drivers/regulator/as3722-regulator.c 563 */[];
	unsigned int cocci_id/* drivers/regulator/as3722-regulator.c 547 */;
	struct as3722_regulators *cocci_id/* drivers/regulator/as3722-regulator.c 543 */;
	int cocci_id/* drivers/regulator/as3722-regulator.c 543 */;
	unsigned cocci_id/* drivers/regulator/as3722-regulator.c 477 */;
	bool cocci_id/* drivers/regulator/as3722-regulator.c 474 */;
	struct as3722_register_mapping {
		u8 regulator_id;
		const char *name;
		const char *sname;
		u8 vsel_reg;
		u8 vsel_mask;
		int n_voltages;
		u32 enable_reg;
		u8 enable_mask;
		u32 control_reg;
		u8 mode_mask;
		u32 sleep_ctrl_reg;
		u8 sleep_ctrl_mask;
	} cocci_id/* drivers/regulator/as3722-regulator.c 46 */;
	const struct regulator_linear_range cocci_id/* drivers/regulator/as3722-regulator.c 392 */[];
	struct regulator_dev *cocci_id/* drivers/regulator/as3722-regulator.c 345 */;
	struct as3722 *cocci_id/* drivers/regulator/as3722-regulator.c 329 */;
	u8 cocci_id/* drivers/regulator/as3722-regulator.c 327 */;
	const struct regulator_ops cocci_id/* drivers/regulator/as3722-regulator.c 318 */;
	const unsigned int cocci_id/* drivers/regulator/as3722-regulator.c 302 */[];
	enum as3722_regulators_id{AS3722_REGULATOR_ID_SD0, AS3722_REGULATOR_ID_SD1, AS3722_REGULATOR_ID_SD2, AS3722_REGULATOR_ID_SD3, AS3722_REGULATOR_ID_SD4, AS3722_REGULATOR_ID_SD5, AS3722_REGULATOR_ID_SD6, AS3722_REGULATOR_ID_LDO0, AS3722_REGULATOR_ID_LDO1, AS3722_REGULATOR_ID_LDO2, AS3722_REGULATOR_ID_LDO3, AS3722_REGULATOR_ID_LDO4, AS3722_REGULATOR_ID_LDO5, AS3722_REGULATOR_ID_LDO6, AS3722_REGULATOR_ID_LDO7, AS3722_REGULATOR_ID_LDO9, AS3722_REGULATOR_ID_LDO10, AS3722_REGULATOR_ID_LDO11, AS3722_REGULATOR_ID_MAX,} cocci_id/* drivers/regulator/as3722-regulator.c 24 */;
}
