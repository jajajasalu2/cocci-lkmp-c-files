cocci_test_suite() {
	struct init_on_cpu {
		struct powernow_k8_data *data;
		int rc;
	} cocci_id/* drivers/cpufreq/powernow-k8.c 994 */;
	struct powernowk8_target_arg cocci_id/* drivers/cpufreq/powernow-k8.c 989 */;
	unsigned cocci_id/* drivers/cpufreq/powernow-k8.c 987 */;
	struct powernowk8_target_arg *cocci_id/* drivers/cpufreq/powernow-k8.c 932 */;
	long cocci_id/* drivers/cpufreq/powernow-k8.c 930 */;
	struct powernowk8_target_arg {
		struct cpufreq_policy *pol;
		unsigned newstate;
	} cocci_id/* drivers/cpufreq/powernow-k8.c 925 */;
	struct cpufreq_freqs cocci_id/* drivers/cpufreq/powernow-k8.c 887 */;
	u64 cocci_id/* drivers/cpufreq/powernow-k8.c 807 */;
	struct psb_s *cocci_id/* drivers/cpufreq/powernow-k8.c 624 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/powernow-k8.c 562 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/powernow-k8.c 55 */;
	unsigned int cocci_id/* drivers/cpufreq/powernow-k8.c 495 */;
	u8 cocci_id/* drivers/cpufreq/powernow-k8.c 493 */;
	struct pst_s *cocci_id/* drivers/cpufreq/powernow-k8.c 492 */;
	struct powernow_k8_data *cocci_id/* drivers/cpufreq/powernow-k8.c 492 */;
	int cocci_id/* drivers/cpufreq/powernow-k8.c 492 */;
	int *cocci_id/* drivers/cpufreq/powernow-k8.c 463 */;
	u32 cocci_id/* drivers/cpufreq/powernow-k8.c 462 */;
	void *cocci_id/* drivers/cpufreq/powernow-k8.c 460 */;
	const struct x86_cpu_id cocci_id/* drivers/cpufreq/powernow-k8.c 453 */[];
	void __exit cocci_id/* drivers/cpufreq/powernow-k8.c 1210 */;
	size_t cocci_id/* drivers/cpufreq/powernow-k8.c 1162 */;
	const char *cocci_id/* drivers/cpufreq/powernow-k8.c 1156 */;
	const char cocci_id/* drivers/cpufreq/powernow-k8.c 1155 */[];
	void cocci_id/* drivers/cpufreq/powernow-k8.c 1153 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/powernow-k8.c 1095 */;
	struct init_on_cpu cocci_id/* drivers/cpufreq/powernow-k8.c 1028 */;
	struct init_on_cpu *cocci_id/* drivers/cpufreq/powernow-k8.c 1001 */;
	__typeof__(struct powernow_k8_data *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
