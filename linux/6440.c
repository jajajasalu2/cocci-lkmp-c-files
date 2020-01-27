cocci_test_suite() {
	const char *cocci_id/* drivers/regulator/uniphier-regulator.c 49 */;
	void __iomem *cocci_id/* drivers/regulator/uniphier-regulator.c 48 */;
	struct regmap *cocci_id/* drivers/regulator/uniphier-regulator.c 47 */;
	struct regulator_dev *cocci_id/* drivers/regulator/uniphier-regulator.c 46 */;
	struct regulator_config cocci_id/* drivers/regulator/uniphier-regulator.c 45 */;
	struct uniphier_regulator_priv *cocci_id/* drivers/regulator/uniphier-regulator.c 44 */;
	struct device *cocci_id/* drivers/regulator/uniphier-regulator.c 43 */;
	struct platform_device *cocci_id/* drivers/regulator/uniphier-regulator.c 41 */;
	int cocci_id/* drivers/regulator/uniphier-regulator.c 41 */;
	const struct regulator_ops cocci_id/* drivers/regulator/uniphier-regulator.c 35 */;
	struct uniphier_regulator_priv {
		struct clk_bulk_data clk[MAX_CLKS];
		struct reset_control *rst[MAX_RSTS];
		const struct uniphier_regulator_soc_data *data;
	} cocci_id/* drivers/regulator/uniphier-regulator.c 29 */;
	struct platform_driver cocci_id/* drivers/regulator/uniphier-regulator.c 205 */;
	struct uniphier_regulator_soc_data {
		int nclks;
		const char *const *clock_names;
		int nrsts;
		const char *const *reset_names;
		const struct regulator_desc *desc;
		const struct regmap_config *regconf;
	} cocci_id/* drivers/regulator/uniphier-regulator.c 20 */;
	const struct of_device_id cocci_id/* drivers/regulator/uniphier-regulator.c 180 */[];
	const struct uniphier_regulator_soc_data cocci_id/* drivers/regulator/uniphier-regulator.c 158 */;
	const char *const cocci_id/* drivers/regulator/uniphier-regulator.c 154 */[];
	const struct regmap_config cocci_id/* drivers/regulator/uniphier-regulator.c 147 */;
	const struct regulator_desc cocci_id/* drivers/regulator/uniphier-regulator.c 135 */;
}
