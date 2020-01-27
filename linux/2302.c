cocci_test_suite() {
	int cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 97 */;
	struct tegra_bpmp_thermal *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 96 */;
	struct mrq_thermal_bpmp_to_host_request *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 95 */;
	void *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 93 */;
	struct tegra_bpmp_channel *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 92 */;
	unsigned int cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 92 */;
	void cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 92 */;
	struct tegra_bpmp_thermal_zone cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 86 */;
	struct work_struct *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 82 */;
	struct tegra_bpmp_thermal_zone *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 35 */;
	struct tegra_bpmp_thermal {
		struct device *dev;
		struct tegra_bpmp *bpmp;
		unsigned int num_zones;
		struct tegra_bpmp_thermal_zone **zones;
	} cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 26 */;
	struct platform_driver cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 242 */;
	const struct of_device_id cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 236 */[];
	struct tegra_bpmp_thermal_zone {
		struct tegra_bpmp_thermal *tegra;
		struct thermal_zone_device *tzd;
		struct work_struct tz_device_update_work;
		unsigned int idx;
	} cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 19 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 158 */;
	struct platform_device *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 154 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 149 */;
	struct tegra_bpmp_message cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 127 */;
	union mrq_thermal_bpmp_to_host_response cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 126 */;
	struct mrq_thermal_host_to_bpmp_request cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 125 */;
	int *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 123 */;
	struct tegra_bpmp *cocci_id/* drivers/thermal/tegra/tegra-bpmp-thermal.c 122 */;
}
