cocci_test_suite() {
	struct thermal_soc_data {
		u32 version;
		u32 sensor_ctrl;
		u32 power_down_mask;
		u32 measure_temp_mask;
		u32 measure_freq_ctrl;
		u32 measure_freq_mask;
		u32 measure_freq_shift;
		u32 temp_data;
		u32 temp_value_mask;
		u32 temp_value_shift;
		u32 temp_valid_mask;
		u32 panic_alarm_ctrl;
		u32 panic_alarm_mask;
		u32 panic_alarm_shift;
		u32 high_alarm_ctrl;
		u32 high_alarm_mask;
		u32 high_alarm_shift;
		u32 low_alarm_ctrl;
		u32 low_alarm_mask;
		u32 low_alarm_shift;
	} cocci_id/* drivers/thermal/imx_thermal.c 95 */;
	struct platform_driver cocci_id/* drivers/thermal/imx_thermal.c 926 */;
	struct device *cocci_id/* drivers/thermal/imx_thermal.c 903 */;
	enum imx_thermal_trip{IMX_TRIP_PASSIVE, IMX_TRIP_CRITICAL, IMX_TRIP_NUM,} cocci_id/* drivers/thermal/imx_thermal.c 82 */;
	struct device_node *cocci_id/* drivers/thermal/imx_thermal.c 658 */;
	const struct of_device_id cocci_id/* drivers/thermal/imx_thermal.c 643 */[];
	irqreturn_t cocci_id/* drivers/thermal/imx_thermal.c 621 */;
	void *cocci_id/* drivers/thermal/imx_thermal.c 621 */;
	void cocci_id/* drivers/thermal/imx_thermal.c 535 */;
	u64 cocci_id/* drivers/thermal/imx_thermal.c 489 */;
	struct platform_device *cocci_id/* drivers/thermal/imx_thermal.c 485 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/imx_thermal.c 473 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/imx_thermal.c 439 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/imx_thermal.c 438 */;
	int cocci_id/* drivers/thermal/imx_thermal.c 438 */;
	struct imx_thermal_data *cocci_id/* drivers/thermal/imx_thermal.c 402 */;
	int *cocci_id/* drivers/thermal/imx_thermal.c 400 */;
	enum thermal_trip_type *cocci_id/* drivers/thermal/imx_thermal.c 393 */;
	enum thermal_device_mode cocci_id/* drivers/thermal/imx_thermal.c 352 */;
	enum thermal_device_mode *cocci_id/* drivers/thermal/imx_thermal.c 342 */;
	u32 cocci_id/* drivers/thermal/imx_thermal.c 264 */;
	bool cocci_id/* drivers/thermal/imx_thermal.c 263 */;
	unsigned int cocci_id/* drivers/thermal/imx_thermal.c 262 */;
	struct regmap *cocci_id/* drivers/thermal/imx_thermal.c 261 */;
	const struct thermal_soc_data *cocci_id/* drivers/thermal/imx_thermal.c 260 */;
	struct imx_thermal_data {
		struct cpufreq_policy *policy;
		struct thermal_zone_device *tz;
		struct thermal_cooling_device *cdev;
		enum thermal_device_mode mode;
		struct regmap *tempmon;
		u32 c1,c2;
		int temp_passive;
		int temp_critical;
		int temp_max;
		int alarm_temp;
		int last_temp;
		bool irq_enabled;
		int irq;
		struct clk *thermal_clk;
		const struct thermal_soc_data *socdata;
		const char *temp_grade;
	} cocci_id/* drivers/thermal/imx_thermal.c 203 */;
	struct thermal_soc_data cocci_id/* drivers/thermal/imx_thermal.c 124 */;
}