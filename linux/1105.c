cocci_test_suite() {
	size_t cocci_id/* drivers/cpufreq/cpufreq_stats.c 76 */;
	const char *cocci_id/* drivers/cpufreq/cpufreq_stats.c 75 */;
	char *cocci_id/* drivers/cpufreq/cpufreq_stats.c 53 */;
	ssize_t cocci_id/* drivers/cpufreq/cpufreq_stats.c 53 */;
	int cocci_id/* drivers/cpufreq/cpufreq_stats.c 41 */;
	u64 cocci_id/* drivers/cpufreq/cpufreq_stats.c 40 */;
	unsigned int cocci_id/* drivers/cpufreq/cpufreq_stats.c 37 */;
	struct cpufreq_stats *cocci_id/* drivers/cpufreq/cpufreq_stats.c 35 */;
	void cocci_id/* drivers/cpufreq/cpufreq_stats.c 35 */;
	unsigned long long cocci_id/* drivers/cpufreq/cpufreq_stats.c 29 */;
	unsigned int *cocci_id/* drivers/cpufreq/cpufreq_stats.c 197 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/cpufreq_stats.c 174 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/cpufreq_stats.c 169 */;
	struct cpufreq_stats {
		unsigned int total_trans;
		unsigned long long last_time;
		unsigned int max_state;
		unsigned int state_num;
		unsigned int last_index;
		u64 *time_in_state;
		spinlock_t lock;
		unsigned int *freq_table;
		unsigned int *trans_table;
	} cocci_id/* drivers/cpufreq/cpufreq_stats.c 15 */;
	const struct attribute_group cocci_id/* drivers/cpufreq/cpufreq_stats.c 139 */;
	struct attribute *cocci_id/* drivers/cpufreq/cpufreq_stats.c 132 */[];
}
