cocci_test_suite() {
	u32 cocci_id/* drivers/thermal/uniphier_thermal.c 95 */[2];
	struct uniphier_tm_dev {
		struct regmap *regmap;
		struct device *dev;
		bool alert_en[ALERT_CH_NUM];
		struct thermal_zone_device *tz_dev;
		const struct uniphier_tm_soc_data *data;
	} cocci_id/* drivers/thermal/uniphier_thermal.c 83 */;
	struct uniphier_tm_soc_data {
		u32 map_base;
		u32 block_base;
		u32 tmod_setup_addr;
	} cocci_id/* drivers/thermal/uniphier_thermal.c 77 */;
	struct platform_driver cocci_id/* drivers/thermal/uniphier_thermal.c 365 */;
	const struct of_device_id cocci_id/* drivers/thermal/uniphier_thermal.c 348 */[];
	const struct uniphier_tm_soc_data cocci_id/* drivers/thermal/uniphier_thermal.c 342 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/uniphier_thermal.c 251 */;
	struct device_node *cocci_id/* drivers/thermal/uniphier_thermal.c 249 */;
	struct device *cocci_id/* drivers/thermal/uniphier_thermal.c 247 */;
	struct platform_device *cocci_id/* drivers/thermal/uniphier_thermal.c 245 */;
	struct uniphier_tm_dev *cocci_id/* drivers/thermal/uniphier_thermal.c 228 */;
	irqreturn_t cocci_id/* drivers/thermal/uniphier_thermal.c 226 */;
	void *cocci_id/* drivers/thermal/uniphier_thermal.c 226 */;
	int cocci_id/* drivers/thermal/uniphier_thermal.c 226 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/uniphier_thermal.c 207 */;
	int *cocci_id/* drivers/thermal/uniphier_thermal.c 190 */;
	struct regmap *cocci_id/* drivers/thermal/uniphier_thermal.c 177 */;
	void cocci_id/* drivers/thermal/uniphier_thermal.c 175 */;
	u32 cocci_id/* drivers/thermal/uniphier_thermal.c 158 */;
}
