cocci_test_suite() {
	struct cpufreq_frequency_table *cocci_id/* drivers/thermal/clock_cooling.c 98 */;
	unsigned int cocci_id/* drivers/thermal/clock_cooling.c 96 */;
	enum clock_cooling_property cocci_id/* drivers/thermal/clock_cooling.c 92 */;
	enum clock_cooling_property{GET_LEVEL, GET_FREQ, GET_MAXL,} cocci_id/* drivers/thermal/clock_cooling.c 64 */;
	struct clock_cooling_device cocci_id/* drivers/thermal/clock_cooling.c 59 */;
	struct clock_cooling_device {
		int id;
		struct device *dev;
		struct thermal_cooling_device *cdev;
		struct notifier_block clk_rate_change_nb;
		struct cpufreq_frequency_table *freq_table;
		unsigned long clock_state;
		unsigned long clock_val;
		struct clk *clk;
		struct mutex lock;
	} cocci_id/* drivers/thermal/clock_cooling.c 47 */;
	void cocci_id/* drivers/thermal/clock_cooling.c 429 */;
	char cocci_id/* drivers/thermal/clock_cooling.c 379 */[THERMAL_NAME_LENGTH];
	const char *cocci_id/* drivers/thermal/clock_cooling.c 375 */;
	struct device *cocci_id/* drivers/thermal/clock_cooling.c 375 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/thermal/clock_cooling.c 352 */;
	unsigned long *cocci_id/* drivers/thermal/clock_cooling.c 324 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/clock_cooling.c 323 */;
	struct clk_notifier_data *cocci_id/* drivers/thermal/clock_cooling.c 266 */;
	void *cocci_id/* drivers/thermal/clock_cooling.c 264 */;
	struct notifier_block *cocci_id/* drivers/thermal/clock_cooling.c 263 */;
	unsigned long cocci_id/* drivers/thermal/clock_cooling.c 224 */;
	struct clock_cooling_device *cocci_id/* drivers/thermal/clock_cooling.c 223 */;
	int cocci_id/* drivers/thermal/clock_cooling.c 223 */;
}
