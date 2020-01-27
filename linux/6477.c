cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/regulator/mt6358-regulator.c 537 */;
	const struct platform_device_id cocci_id/* drivers/regulator/mt6358-regulator.c 531 */[];
	struct regulator_config cocci_id/* drivers/regulator/mt6358-regulator.c 509 */;
	struct mt6397_chip *cocci_id/* drivers/regulator/mt6358-regulator.c 508 */;
	struct platform_device *cocci_id/* drivers/regulator/mt6358-regulator.c 506 */;
	struct mt6358_regulator_info cocci_id/* drivers/regulator/mt6358-regulator.c 412 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/mt6358-regulator.c 403 */;
	u32 cocci_id/* drivers/regulator/mt6358-regulator.c 316 */;
	struct mt6358_regulator_info *cocci_id/* drivers/regulator/mt6358-regulator.c 298 */;
	struct regulator_dev *cocci_id/* drivers/regulator/mt6358-regulator.c 295 */;
	int cocci_id/* drivers/regulator/mt6358-regulator.c 295 */;
	const u32 *cocci_id/* drivers/regulator/mt6358-regulator.c 275 */;
	struct mt6358_regulator_info {
		struct regulator_desc desc;
		u32 status_reg;
		u32 qi;
		const u32 *index_table;
		unsigned int n_table;
		u32 vsel_shift;
		u32 da_vsel_reg;
		u32 da_vsel_mask;
		u32 da_vsel_shift;
		u32 modeset_reg;
		u32 modeset_mask;
		u32 modeset_shift;
	} cocci_id/* drivers/regulator/mt6358-regulator.c 25 */;
	unsigned int cocci_id/* drivers/regulator/mt6358-regulator.c 247 */;
	const u32 cocci_id/* drivers/regulator/mt6358-regulator.c 231 */[];
	const struct regulator_linear_range cocci_id/* drivers/regulator/mt6358-regulator.c 140 */[];
}
