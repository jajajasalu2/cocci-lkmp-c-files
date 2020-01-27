cocci_test_suite() {
	const unsigned int cocci_id/* drivers/regulator/lp3971.c 62 */[];
	const int cocci_id/* drivers/regulator/lp3971.c 53 */[];
	struct i2c_driver cocci_id/* drivers/regulator/lp3971.c 448 */;
	const struct i2c_device_id cocci_id/* drivers/regulator/lp3971.c 442 */[];
	struct lp3971 cocci_id/* drivers/regulator/lp3971.c 416 */;
	struct lp3971_platform_data *cocci_id/* drivers/regulator/lp3971.c 407 */;
	const struct i2c_device_id *cocci_id/* drivers/regulator/lp3971.c 404 */;
	struct i2c_client *cocci_id/* drivers/regulator/lp3971.c 403 */;
	struct lp3971_regulator_subdev *cocci_id/* drivers/regulator/lp3971.c 383 */;
	struct regulator_config cocci_id/* drivers/regulator/lp3971.c 382 */;
	unsigned cocci_id/* drivers/regulator/lp3971.c 349 */;
	u8 cocci_id/* drivers/regulator/lp3971.c 340 */;
	const u16 *cocci_id/* drivers/regulator/lp3971.c 333 */;
	u16 *cocci_id/* drivers/regulator/lp3971.c 318 */;
	char cocci_id/* drivers/regulator/lp3971.c 317 */;
	int cocci_id/* drivers/regulator/lp3971.c 27 */(struct lp3971 *lp3971,
							u8 reg, u16 mask,
							u16 val);
	u8 cocci_id/* drivers/regulator/lp3971.c 26 */(struct lp3971 *lp3971,
						       u8 reg);
	const struct regulator_desc cocci_id/* drivers/regulator/lp3971.c 242 */[];
	const struct regulator_ops cocci_id/* drivers/regulator/lp3971.c 232 */;
	unsigned int cocci_id/* drivers/regulator/lp3971.c 210 */;
	struct lp3971 {
		struct device *dev;
		struct mutex io_lock;
		struct i2c_client *i2c;
	} cocci_id/* drivers/regulator/lp3971.c 20 */;
	u16 cocci_id/* drivers/regulator/lp3971.c 192 */;
	struct lp3971 *cocci_id/* drivers/regulator/lp3971.c 190 */;
	struct regulator_dev *cocci_id/* drivers/regulator/lp3971.c 188 */;
	int cocci_id/* drivers/regulator/lp3971.c 188 */;
}
