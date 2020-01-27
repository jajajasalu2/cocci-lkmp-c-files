cocci_test_suite() {
	const struct trip_config_map cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 50 */[];
	struct pmic_thermal_data {
		const struct thermal_irq_map *maps;
		int num_maps;
	} cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 45 */;
	struct thermal_irq_map {
		char handle[20];
		int num_trips;
		const struct trip_config_map *trip_config;
	} cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 39 */;
	struct trip_config_map {
		u16 irq_reg;
		u16 irq_en;
		u16 evt_stat;
		u8 irq_mask;
		u8 irq_en_mask;
		u8 evt_mask;
		u8 trip_num;
	} cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 29 */;
	struct platform_driver cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 277 */;
	const struct platform_device_id cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 269 */[];
	struct device *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 215 */;
	struct regmap_irq_chip_data *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 210 */;
	u16 cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 161 */;
	u8 cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 160 */;
	struct regmap *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 159 */;
	struct intel_soc_pmic *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 158 */;
	struct pmic_thermal_data *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 157 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 156 */;
	struct platform_device *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 155 */;
	irqreturn_t cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 153 */;
	void *cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 153 */;
	int cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 153 */;
	const struct pmic_thermal_data cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 148 */;
	const struct thermal_irq_map cocci_id/* drivers/thermal/intel/intel_bxt_pmic_thermal.c 125 */[];
}
