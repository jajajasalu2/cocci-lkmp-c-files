cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/regulator/max77620-regulator.c 909 */;
	const struct platform_device_id cocci_id/* drivers/regulator/max77620-regulator.c 901 */[];
	const struct dev_pm_ops cocci_id/* drivers/regulator/max77620-regulator.c 896 */;
	struct max77620_regulator {
		struct device *dev;
		struct regmap *rmap;
		struct max77620_regulator_info *rinfo[MAX77620_NUM_REGS];
		struct max77620_regulator_pdata reg_pdata[MAX77620_NUM_REGS];
		int enable_power_mode[MAX77620_NUM_REGS];
		int current_power_mode[MAX77620_NUM_REGS];
		int active_fps_src[MAX77620_NUM_REGS];
	} cocci_id/* drivers/regulator/max77620-regulator.c 84 */;
	struct regulator_desc *cocci_id/* drivers/regulator/max77620-regulator.c 819 */;
	struct regulator_config cocci_id/* drivers/regulator/max77620-regulator.c 784 */;
	struct device *cocci_id/* drivers/regulator/max77620-regulator.c 783 */;
	struct platform_device *cocci_id/* drivers/regulator/max77620-regulator.c 779 */;
	struct max77620_regulator_info cocci_id/* drivers/regulator/max77620-regulator.c 743 */[MAX77620_NUM_REGS];
	struct max77620_regulator_pdata {
		int active_fps_src;
		int active_fps_pd_slot;
		int active_fps_pu_slot;
		int suspend_fps_src;
		int suspend_fps_pd_slot;
		int suspend_fps_pu_slot;
		int current_mode;
		int power_ok;
		int ramp_rate_setting;
	} cocci_id/* drivers/regulator/max77620-regulator.c 72 */;
	const struct regulator_ops cocci_id/* drivers/regulator/max77620-regulator.c 644 */;
	u32 cocci_id/* drivers/regulator/max77620-regulator.c 608 */;
	struct regulator_config *cocci_id/* drivers/regulator/max77620-regulator.c 604 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/max77620-regulator.c 603 */;
	struct device_node *cocci_id/* drivers/regulator/max77620-regulator.c 602 */;
	struct max77620_regulator_info {
		u8 type;
		u8 fps_addr;
		u8 volt_addr;
		u8 cfg_addr;
		u8 power_mode_mask;
		u8 power_mode_shift;
		u8 remote_sense_addr;
		u8 remote_sense_mask;
		struct regulator_desc desc;
	} cocci_id/* drivers/regulator/max77620-regulator.c 60 */;
	enum max77620_regulator_type{MAX77620_REGULATOR_TYPE_SD, MAX77620_REGULATOR_TYPE_LDO_N, MAX77620_REGULATOR_TYPE_LDO_P,} cocci_id/* drivers/regulator/max77620-regulator.c 54 */;
	struct regulator_dev *cocci_id/* drivers/regulator/max77620-regulator.c 454 */;
	u8 cocci_id/* drivers/regulator/max77620-regulator.c 356 */;
	struct max77620_chip *cocci_id/* drivers/regulator/max77620-regulator.c 355 */;
	struct max77620_regulator_info *cocci_id/* drivers/regulator/max77620-regulator.c 354 */;
	struct max77620_regulator_pdata *cocci_id/* drivers/regulator/max77620-regulator.c 353 */;
	struct max77620_regulator *cocci_id/* drivers/regulator/max77620-regulator.c 351 */;
	int cocci_id/* drivers/regulator/max77620-regulator.c 351 */;
	enum max77620_regulators{MAX77620_REGULATOR_ID_SD0, MAX77620_REGULATOR_ID_SD1, MAX77620_REGULATOR_ID_SD2, MAX77620_REGULATOR_ID_SD3, MAX77620_REGULATOR_ID_SD4, MAX77620_REGULATOR_ID_LDO0, MAX77620_REGULATOR_ID_LDO1, MAX77620_REGULATOR_ID_LDO2, MAX77620_REGULATOR_ID_LDO3, MAX77620_REGULATOR_ID_LDO4, MAX77620_REGULATOR_ID_LDO5, MAX77620_REGULATOR_ID_LDO6, MAX77620_REGULATOR_ID_LDO7, MAX77620_REGULATOR_ID_LDO8, MAX77620_NUM_REGS,} cocci_id/* drivers/regulator/max77620-regulator.c 35 */;
	unsigned int cocci_id/* drivers/regulator/max77620-regulator.c 267 */;
	bool cocci_id/* drivers/regulator/max77620-regulator.c 164 */;
}
