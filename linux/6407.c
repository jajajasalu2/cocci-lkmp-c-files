cocci_test_suite() {
	const u8 cocci_id/* drivers/regulator/max8660.c 75 */[MAX8660_N_REGS];
	struct max8660 {
		struct i2c_client *client;
		u8 shadow_regs[MAX8660_N_REGS];
	} cocci_id/* drivers/regulator/max8660.c 68 */;
	enum{MAX8660_OVER1, MAX8660_OVER2, MAX8660_VCC1, MAX8660_ADTV1, MAX8660_ADTV2, MAX8660_SDTV1, MAX8660_SDTV2, MAX8660_MDTV1, MAX8660_MDTV2, MAX8660_L12VCR, MAX8660_FPWM, MAX8660_N_REGS,} cocci_id/* drivers/regulator/max8660.c 53 */;
	void __exit cocci_id/* drivers/regulator/max8660.c 519 */;
	void cocci_id/* drivers/regulator/max8660.c 519 */;
	int __init cocci_id/* drivers/regulator/max8660.c 513 */;
	struct i2c_driver cocci_id/* drivers/regulator/max8660.c 505 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/max8660.c 498 */[];
	struct max8660 cocci_id/* drivers/regulator/max8660.c 404 */;
	const struct of_device_id *cocci_id/* drivers/regulator/max8660.c 382 */;
	unsigned long cocci_id/* drivers/regulator/max8660.c 379 */;
	struct device_node *cocci_id/* drivers/regulator/max8660.c 378 */[MAX8660_V_END];
	struct regulator_config cocci_id/* drivers/regulator/max8660.c 375 */;
	struct max8660_platform_data cocci_id/* drivers/regulator/max8660.c 374 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/max8660.c 371 */;
	struct i2c_client *cocci_id/* drivers/regulator/max8660.c 370 */;
	struct max8660_subdev_data cocci_id/* drivers/regulator/max8660.c 343 */;
	struct of_regulator_match cocci_id/* drivers/regulator/max8660.c 325 */[ARRAY_SIZE(max8660_reg)];
	struct max8660_subdev_data *cocci_id/* drivers/regulator/max8660.c 324 */;
	struct device_node *cocci_id/* drivers/regulator/max8660.c 323 */;
	struct max8660_platform_data *cocci_id/* drivers/regulator/max8660.c 320 */;
	struct device_node **cocci_id/* drivers/regulator/max8660.c 319 */;
	struct device *cocci_id/* drivers/regulator/max8660.c 318 */;
	void *cocci_id/* drivers/regulator/max8660.c 312 */;
	const struct of_device_id cocci_id/* drivers/regulator/max8660.c 311 */[];
	enum{MAX8660=0, MAX8661=1,} cocci_id/* drivers/regulator/max8660.c 305 */;
	const struct regulator_desc cocci_id/* drivers/regulator/max8660.c 252 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/max8660.c 184 */;
	struct regulator_ops cocci_id/* drivers/regulator/max8660.c 149 */;
	unsigned int cocci_id/* drivers/regulator/max8660.c 133 */;
	u8 cocci_id/* drivers/regulator/max8660.c 118 */;
	struct max8660 *cocci_id/* drivers/regulator/max8660.c 117 */;
	struct regulator_dev *cocci_id/* drivers/regulator/max8660.c 115 */;
	int cocci_id/* drivers/regulator/max8660.c 115 */;
}
