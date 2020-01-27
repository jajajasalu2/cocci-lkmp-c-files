cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/reset/reset-uniphier.c 483 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-uniphier.c 366 */[];
	struct device_node *cocci_id/* drivers/reset/reset-uniphier.c 332 */;
	struct regmap *cocci_id/* drivers/reset/reset-uniphier.c 331 */;
	const struct uniphier_reset_data *cocci_id/* drivers/reset/reset-uniphier.c 330 */;
	struct uniphier_reset_priv *cocci_id/* drivers/reset/reset-uniphier.c 329 */;
	struct device *cocci_id/* drivers/reset/reset-uniphier.c 328 */;
	struct platform_device *cocci_id/* drivers/reset/reset-uniphier.c 326 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-uniphier.c 320 */;
	unsigned long cocci_id/* drivers/reset/reset-uniphier.c 280 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-uniphier.c 279 */;
	int cocci_id/* drivers/reset/reset-uniphier.c 279 */;
	struct uniphier_reset_priv cocci_id/* drivers/reset/reset-uniphier.c 248 */;
	struct uniphier_reset_priv {
		struct reset_controller_dev rcdev;
		struct device *dev;
		struct regmap *regmap;
		const struct uniphier_reset_data *data;
	} cocci_id/* drivers/reset/reset-uniphier.c 240 */;
	const struct uniphier_reset_data cocci_id/* drivers/reset/reset-uniphier.c 234 */[];
	unsigned int cocci_id/* drivers/reset/reset-uniphier.c 23 */;
	struct uniphier_reset_data {
		unsigned int id;
		unsigned int reg;
		unsigned int bit;
		unsigned int flags;
#define UNIPHIER_RESET_ACTIVE_LOW BIT(0)
		} cocci_id/* drivers/reset/reset-uniphier.c 15 */;
}
