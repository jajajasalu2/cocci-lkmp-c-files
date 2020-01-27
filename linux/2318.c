cocci_test_suite() {
	struct amlogic_thermal {
		struct platform_device *pdev;
		const struct amlogic_thermal_data *data;
		struct regmap *regmap;
		struct regmap *sec_ao_map;
		struct clk *clk;
		struct thermal_zone_device *tzd;
		u32 trim_info;
	} cocci_id/* drivers/thermal/amlogic_thermal.c 93 */;
	struct amlogic_thermal_data {
		int u_efuse_off;
		const struct amlogic_thermal_soc_calib_data *calibration_parameters;
		const struct regmap_config *regmap_config;
	} cocci_id/* drivers/thermal/amlogic_thermal.c 87 */;
	struct amlogic_thermal_soc_calib_data {
		int A;
		int B;
		int m;
		int n;
	} cocci_id/* drivers/thermal/amlogic_thermal.c 73 */;
	struct platform_driver cocci_id/* drivers/thermal/amlogic_thermal.c 319 */;
	int __maybe_unused cocci_id/* drivers/thermal/amlogic_thermal.c 309 */;
	void __iomem *cocci_id/* drivers/thermal/amlogic_thermal.c 240 */;
	struct device *cocci_id/* drivers/thermal/amlogic_thermal.c 239 */;
	struct platform_device *cocci_id/* drivers/thermal/amlogic_thermal.c 236 */;
	const struct of_device_id cocci_id/* drivers/thermal/amlogic_thermal.c 223 */[];
	const struct amlogic_thermal_data cocci_id/* drivers/thermal/amlogic_thermal.c 211 */;
	const struct amlogic_thermal_soc_calib_data cocci_id/* drivers/thermal/amlogic_thermal.c 204 */;
	const struct regmap_config cocci_id/* drivers/thermal/amlogic_thermal.c 197 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/amlogic_thermal.c 193 */;
	unsigned int cocci_id/* drivers/thermal/amlogic_thermal.c 179 */;
	int *cocci_id/* drivers/thermal/amlogic_thermal.c 177 */;
	void *cocci_id/* drivers/thermal/amlogic_thermal.c 177 */;
	s64 cocci_id/* drivers/thermal/amlogic_thermal.c 113 */;
	const struct amlogic_thermal_soc_calib_data *cocci_id/* drivers/thermal/amlogic_thermal.c 110 */;
	struct amlogic_thermal *cocci_id/* drivers/thermal/amlogic_thermal.c 107 */;
	int cocci_id/* drivers/thermal/amlogic_thermal.c 107 */;
}
