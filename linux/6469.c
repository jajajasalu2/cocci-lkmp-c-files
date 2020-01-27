cocci_test_suite() {
	struct lp8755_chip *cocci_id/* drivers/regulator/lp8755.c 94 */;
	enum lp8755_bucks cocci_id/* drivers/regulator/lp8755.c 93 */;
	unsigned int cocci_id/* drivers/regulator/lp8755.c 92 */;
	struct regulator_dev *cocci_id/* drivers/regulator/lp8755.c 89 */;
	int cocci_id/* drivers/regulator/lp8755.c 89 */;
	unsigned int *cocci_id/* drivers/regulator/lp8755.c 59 */;
	void __exit cocci_id/* drivers/regulator/lp8755.c 544 */;
	void cocci_id/* drivers/regulator/lp8755.c 544 */;
	int __init cocci_id/* drivers/regulator/lp8755.c 537 */;
	struct i2c_driver cocci_id/* drivers/regulator/lp8755.c 528 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/lp8755.c 521 */[];
	struct lp8755_platform_data cocci_id/* drivers/regulator/lp8755.c 476 */;
	struct lp8755_chip cocci_id/* drivers/regulator/lp8755.c 458 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/lp8755.c 446 */;
	struct i2c_client *cocci_id/* drivers/regulator/lp8755.c 445 */;
	const struct regmap_config cocci_id/* drivers/regulator/lp8755.c 439 */;
	struct lp8755_chip {
		struct device *dev;
		struct regmap *regmap;
		struct lp8755_platform_data *pdata;
		int irq;
		unsigned int irqmask;
		int mphase;
		struct regulator_dev *rdev[LP8755_BUCK_MAX];
	} cocci_id/* drivers/regulator/lp8755.c 40 */;
	irqreturn_t cocci_id/* drivers/regulator/lp8755.c 352 */;
	void *cocci_id/* drivers/regulator/lp8755.c 352 */;
	struct lp8755_mphase {
		int nreg;
		int buck_num[LP8755_BUCK_MAX];
	} cocci_id/* drivers/regulator/lp8755.c 35 */;
	struct regulator_config cocci_id/* drivers/regulator/lp8755.c 327 */;
	const struct regulator_desc cocci_id/* drivers/regulator/lp8755.c 314 */[];
	struct lp8755_platform_data *cocci_id/* drivers/regulator/lp8755.c 278 */;
	const struct lp8755_mphase cocci_id/* drivers/regulator/lp8755.c 260 */[MPHASE_CONF_MAX];
	struct regulator_init_data cocci_id/* drivers/regulator/lp8755.c 251 */[LP8755_BUCK_MAX];
	const struct regulator_ops cocci_id/* drivers/regulator/lp8755.c 226 */;
}
