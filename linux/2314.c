cocci_test_suite() {
	struct cpufreq_cooling_device {
		int id;
		u32 last_load;
		unsigned int cpufreq_state;
		unsigned int max_level;
		struct em_perf_domain *em;
		struct cpufreq_policy *policy;
		struct list_head node;
		struct time_in_idle *idle_time;
		struct freq_qos_request qos_req;
	} cocci_id/* drivers/thermal/cpu_cooling.c 70 */;
	void cocci_id/* drivers/thermal/cpu_cooling.c 650 */;
	struct thermal_cooling_device_ops *cocci_id/* drivers/thermal/cpu_cooling.c 482 */;
	int cocci_id/* drivers/thermal/cpu_cooling.c 481 */;
	struct device *cocci_id/* drivers/thermal/cpu_cooling.c 480 */;
	unsigned int cocci_id/* drivers/thermal/cpu_cooling.c 479 */;
	char cocci_id/* drivers/thermal/cpu_cooling.c 478 */[THERMAL_NAME_LENGTH];
	struct cpufreq_cooling_device *cocci_id/* drivers/thermal/cpu_cooling.c 477 */;
	struct em_perf_domain *cocci_id/* drivers/thermal/cpu_cooling.c 474 */;
	struct cpufreq_policy *cocci_id/* drivers/thermal/cpu_cooling.c 473 */;
	struct device_node *cocci_id/* drivers/thermal/cpu_cooling.c 472 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/cpu_cooling.c 471 */;
	struct time_in_idle {
		u64 time;
		u64 timestamp;
	} cocci_id/* drivers/thermal/cpu_cooling.c 46 */;
	struct thermal_cooling_device_ops cocci_id/* drivers/thermal/cpu_cooling.c 450 */;
	unsigned long *cocci_id/* drivers/thermal/cpu_cooling.c 410 */;
	bool cocci_id/* drivers/thermal/cpu_cooling.c 326 */;
	unsigned long cocci_id/* drivers/thermal/cpu_cooling.c 208 */;
	u32 *cocci_id/* drivers/thermal/cpu_cooling.c 206 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/cpu_cooling.c 205 */;
	struct time_in_idle *cocci_id/* drivers/thermal/cpu_cooling.c 147 */;
	u64 cocci_id/* drivers/thermal/cpu_cooling.c 146 */;
	u32 cocci_id/* drivers/thermal/cpu_cooling.c 107 */;
}
