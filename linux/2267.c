cocci_test_suite() {
	const struct ti_temp_sensor *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 72 */;
	struct ti_bandgap *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 71 */;
	struct ti_thermal_data *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 70 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 69 */;
	int *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 67 */;
	void *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 67 */;
	int cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 67 */;
	struct ti_thermal_data cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 41 */;
	struct work_struct *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 38 */;
	void cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 38 */;
	struct ti_thermal_data {
		struct cpufreq_policy *policy;
		struct thermal_zone_device *ti_thermal;
		struct thermal_zone_device *pcb_tz;
		struct thermal_cooling_device *cool_dev;
		struct ti_bandgap *bgp;
		enum thermal_device_mode mode;
		struct work_struct thermal_wq;
		int sensor_id;
		bool our_zone;
	} cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 26 */;
	struct device_node *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 221 */;
	char *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 166 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 140 */;
	enum thermal_trend *cocci_id/* drivers/thermal/ti-soc-thermal/ti-thermal-common.c 117 */;
}
