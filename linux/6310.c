cocci_test_suite() {
	struct retu_dev *cocci_id/* drivers/mfd/retu-mfd.c 85 */;
	struct regmap_irq_chip cocci_id/* drivers/mfd/retu-mfd.c 74 */;
	struct regmap_irq cocci_id/* drivers/mfd/retu-mfd.c 68 */[];
	const struct mfd_cell cocci_id/* drivers/mfd/retu-mfd.c 57 */[];
	struct resource cocci_id/* drivers/mfd/retu-mfd.c 48 */[];
	struct retu_dev {
		struct regmap *regmap;
		struct device *dev;
		struct mutex mutex;
		struct regmap_irq_chip_data *irq_data;
	} cocci_id/* drivers/mfd/retu-mfd.c 41 */;
	struct i2c_driver cocci_id/* drivers/mfd/retu-mfd.c 318 */;
	const struct of_device_id cocci_id/* drivers/mfd/retu-mfd.c 311 */[];
	const struct i2c_device_id cocci_id/* drivers/mfd/retu-mfd.c 304 */[];
	const struct retu_data *cocci_id/* drivers/mfd/retu-mfd.c 232 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/retu-mfd.c 230 */;
	struct i2c_client *cocci_id/* drivers/mfd/retu-mfd.c 230 */;
	const struct regmap_config cocci_id/* drivers/mfd/retu-mfd.c 225 */;
	struct regmap_bus cocci_id/* drivers/mfd/retu-mfd.c 219 */;
	u16 cocci_id/* drivers/mfd/retu-mfd.c 209 */;
	u16 *cocci_id/* drivers/mfd/retu-mfd.c 202 */;
	const u8 *cocci_id/* drivers/mfd/retu-mfd.c 198 */;
	struct device *cocci_id/* drivers/mfd/retu-mfd.c 193 */;
	const void *cocci_id/* drivers/mfd/retu-mfd.c 189 */;
	void *cocci_id/* drivers/mfd/retu-mfd.c 189 */;
	size_t cocci_id/* drivers/mfd/retu-mfd.c 189 */;
	int cocci_id/* drivers/mfd/retu-mfd.c 171 */;
	void cocci_id/* drivers/mfd/retu-mfd.c 168 */;
	u8 cocci_id/* drivers/mfd/retu-mfd.c 143 */;
	const struct retu_data {
		char *chip_name;
		char *companion_name;
		struct regmap_irq_chip *irq_chip;
		const struct mfd_cell *children;
		int nchildren;
	} cocci_id/* drivers/mfd/retu-mfd.c 120 */[];
}
