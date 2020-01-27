cocci_test_suite() {
	const struct regulator_linear_range cocci_id/* drivers/regulator/lp8788-buck.c 95 */[];
	struct lp8788_buck {
		struct lp8788 *lp;
		struct regulator_dev *regulator;
		void *dvs;
	} cocci_id/* drivers/regulator/lp8788-buck.c 88 */;
	enum lp8788_buck_id{BUCK1, BUCK2, BUCK3, BUCK4,} cocci_id/* drivers/regulator/lp8788-buck.c 81 */;
	enum lp8788_dvs_mode{REGISTER, EXTPIN,} cocci_id/* drivers/regulator/lp8788-buck.c 76 */;
	enum lp8788_dvs_state{DVS_LOW=GPIOF_OUT_INIT_LOW, DVS_HIGH=GPIOF_OUT_INIT_HIGH,} cocci_id/* drivers/regulator/lp8788-buck.c 71 */;
	void __exit cocci_id/* drivers/regulator/lp8788-buck.c 543 */;
	int __init cocci_id/* drivers/regulator/lp8788-buck.c 537 */;
	struct platform_driver cocci_id/* drivers/regulator/lp8788-buck.c 530 */;
	struct lp8788_buck cocci_id/* drivers/regulator/lp8788-buck.c 501 */;
	struct regulator_config cocci_id/* drivers/regulator/lp8788-buck.c 494 */;
	struct lp8788 *cocci_id/* drivers/regulator/lp8788-buck.c 491 */;
	struct platform_device *cocci_id/* drivers/regulator/lp8788-buck.c 489 */;
	u8 cocci_id/* drivers/regulator/lp8788-buck.c 462 */[];
	char *cocci_id/* drivers/regulator/lp8788-buck.c 428 */[];
	char *cocci_id/* drivers/regulator/lp8788-buck.c 427 */;
	struct lp8788_platform_data *cocci_id/* drivers/regulator/lp8788-buck.c 426 */;
	const struct regulator_desc cocci_id/* drivers/regulator/lp8788-buck.c 367 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/lp8788-buck.c 341 */;
	unsigned int cocci_id/* drivers/regulator/lp8788-buck.c 326 */;
	u8 cocci_id/* drivers/regulator/lp8788-buck.c 278 */;
	enum lp8788_buck_id cocci_id/* drivers/regulator/lp8788-buck.c 276 */;
	struct lp8788_buck *cocci_id/* drivers/regulator/lp8788-buck.c 275 */;
	struct regulator_dev *cocci_id/* drivers/regulator/lp8788-buck.c 273 */;
	int cocci_id/* drivers/regulator/lp8788-buck.c 273 */;
	unsigned cocci_id/* drivers/regulator/lp8788-buck.c 257 */;
	bool cocci_id/* drivers/regulator/lp8788-buck.c 184 */;
	enum lp8788_dvs_mode cocci_id/* drivers/regulator/lp8788-buck.c 163 */;
	struct lp8788_buck2_dvs *cocci_id/* drivers/regulator/lp8788-buck.c 115 */;
	enum lp8788_dvs_state cocci_id/* drivers/regulator/lp8788-buck.c 103 */;
	struct lp8788_buck1_dvs *cocci_id/* drivers/regulator/lp8788-buck.c 102 */;
	void cocci_id/* drivers/regulator/lp8788-buck.c 100 */;
}
