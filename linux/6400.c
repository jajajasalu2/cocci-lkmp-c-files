cocci_test_suite() {
	struct regulator_notifier_match cocci_id/* drivers/regulator/devres.c 436 */;
	struct notifier_block *cocci_id/* drivers/regulator/devres.c 430 */;
	struct regulator_notifier_match *cocci_id/* drivers/regulator/devres.c 414 */;
	struct regulator_notifier_match {
		struct regulator *regulator;
		struct notifier_block *nb;
	} cocci_id/* drivers/regulator/devres.c 398 */;
	const char *const *cocci_id/* drivers/regulator/devres.c 344 */;
	struct regulator_supply_alias_match cocci_id/* drivers/regulator/devres.c 277 */;
	struct regulator_supply_alias_match *cocci_id/* drivers/regulator/devres.c 251 */;
	struct regulator **cocci_id/* drivers/regulator/devres.c 25 */;
	struct regulator_supply_alias_match {
		struct device *dev;
		const char *id;
	} cocci_id/* drivers/regulator/devres.c 235 */;
	int cocci_id/* drivers/regulator/devres.c 23 */;
	const char *cocci_id/* drivers/regulator/devres.c 22 */;
	struct regulator *cocci_id/* drivers/regulator/devres.c 22 */;
	struct device *cocci_id/* drivers/regulator/devres.c 22 */;
	struct regulator_dev **cocci_id/* drivers/regulator/devres.c 209 */;
	void *cocci_id/* drivers/regulator/devres.c 207 */;
	const struct regulator_config *cocci_id/* drivers/regulator/devres.c 186 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/devres.c 185 */;
	struct regulator_dev *cocci_id/* drivers/regulator/devres.c 184 */;
	void cocci_id/* drivers/regulator/devres.c 169 */;
	struct regulator_bulk_devres *cocci_id/* drivers/regulator/devres.c 148 */;
	struct regulator_bulk_data *cocci_id/* drivers/regulator/devres.c 146 */;
	struct regulator_bulk_devres {
		struct regulator_bulk_data *consumers;
		int num_consumers;
	} cocci_id/* drivers/regulator/devres.c 118 */;
}
