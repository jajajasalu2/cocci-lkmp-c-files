cocci_test_suite() {
	const char *cocci_id/* drivers/reset/reset-uniphier-glue.c 38 */;
	resource_size_t cocci_id/* drivers/reset/reset-uniphier-glue.c 37 */;
	struct resource *cocci_id/* drivers/reset/reset-uniphier-glue.c 36 */;
	struct uniphier_glue_reset_priv *cocci_id/* drivers/reset/reset-uniphier-glue.c 35 */;
	struct device *cocci_id/* drivers/reset/reset-uniphier-glue.c 34 */;
	struct platform_device *cocci_id/* drivers/reset/reset-uniphier-glue.c 32 */;
	int cocci_id/* drivers/reset/reset-uniphier-glue.c 32 */;
	struct uniphier_glue_reset_priv {
		struct clk_bulk_data clk[MAX_CLKS];
		struct reset_control *rst[MAX_RSTS];
		struct reset_simple_data rdata;
		const struct uniphier_glue_reset_soc_data *data;
	} cocci_id/* drivers/reset/reset-uniphier-glue.c 25 */;
	struct uniphier_glue_reset_soc_data {
		int nclks;
		const char *const *clock_names;
		int nrsts;
		const char *const *reset_names;
	} cocci_id/* drivers/reset/reset-uniphier-glue.c 18 */;
	struct platform_driver cocci_id/* drivers/reset/reset-uniphier-glue.c 175 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-uniphier-glue.c 138 */[];
	const struct uniphier_glue_reset_soc_data cocci_id/* drivers/reset/reset-uniphier-glue.c 120 */;
	const char *const cocci_id/* drivers/reset/reset-uniphier-glue.c 116 */[];
}
